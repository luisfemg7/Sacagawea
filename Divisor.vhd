----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    11:31:04 06/03/2016 
-- Design Name: 
-- Module Name:    Divisor - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.std_logic_arith.all;
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity Divisor is
	port(M : in std_logic_vector(7 downto 0);
		  Q : inout std_logic_vector( 7 downto 0));
end Divisor;

architecture Behavioral of Divisor is
begin
	process(M, Q)
		signal A : std_logic_vector(7 downto 0);
	begin
		for I in 1 to 8 loop
		A <= to_stdlogicvector(to_bitvector(A) sll 1);
		A(0) <= Q(0);
		Q <= to_stdlogicvector(to_bitvector(Q) sll 1);
		A <= UNSIGNED(A) - UNSIGNED(M);
		if SIGNED(A) < conv_signed(0, 8) then
			Q(0) <= '0';
			A <= UNSIGNED(A) + UNSIGNED(M);
		else
			Q(0) <= '1';
		end if;
		end loop;
	end process;

end Behavioral;

