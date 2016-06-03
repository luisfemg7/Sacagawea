----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    09:20:02 06/05/2016 
-- Design Name: 
-- Module Name:    ALU - Behavioral 
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

entity ALU is
	port (s_muxa, s_muxb : in std_logic_vector(7 downto 0);
			ctrl_alu : in std_logic_vector(3 downto 0);
			s_alu : out std_logic_vector(7 downto 0));
		
end ALU;

architecture Behavioral of ALU is

begin
	main_process: process (s_muxa, s_muxb, ctrl_alu)
		variable mul_16: std_logic_vector(15 downto 0);
		begin
			case ctrl_alu is
				when "0000" => s_alu <= s_muxb;
				when "0001" =>	s_alu <= unsigned(s_muxa) + unsigned(s_muxb);
				when "0010" => s_alu <= unsigned(s_muxa) - unsigned(s_muxb);
				when "0011" => mul_16 := (UNSIGNED(s_muxa) * UNSIGNED(s_muxb));
									s_alu <= mul_16(7 downto 0);
			--	when "0100" => s_alu <= UNSIGNED(s_muxa) / UNSIGNED(s_muxb);
				when "0101" => s_alu <= s_muxa and s_muxb;
				when "0110" => s_alu <= s_muxa or s_muxb;
		      when "0111" => s_alu <= not s_muxa;
				when "1000" => s_alu <= to_stdlogicvector(to_bitvector(s_muxa) srl 1);
				when "1001" => s_alu <= to_stdlogicvector(to_bitvector(s_muxa) sll 1);
				when "1010" => s_alu <= unsigned(s_muxa) + 1;
		   	when "1011" => s_alu <= unsigned(s_muxa) - 1;
				when others => 	s_alu <= "00001111";
				
			end case;
		end process;

end Behavioral;

