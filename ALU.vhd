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
use IEEE.NUMERIC_STD.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

entity ALU is
	port (s_muxa, s_muxb : in std_logic_vector(7 downto 0);
			ctrl_alu : in std_logic_vector(3 downto 0);
<<<<<<< HEAD
			s_alu : out std_logic_vector(7 downto 0);
			flags : out std_logic_vector(2 downto 0)
			);
=======
			s_alu : out std_logic_vector(7 downto 0));
>>>>>>> 065dd0eb45495a49cae8f3a2862d6664af2329f8
		
end ALU;

architecture Behavioral of ALU is
<<<<<<< HEAD
	signal result: signed(15 downto 0);
	signal A, B : signed(15 downto 0);
	begin
	A <= signed("00000000" & s_muxa);
	B <= signed("00000000" & s_muxb);
=======
	signal result: unsigned(15 downto 0);
	signal A, B : unsigned(15 downto 0);
	begin
	A <= unsigned("00000000" & s_muxa);
	B <= unsigned("00000000" & s_muxb);
>>>>>>> 065dd0eb45495a49cae8f3a2862d6664af2329f8
	with ctrl_alu select
		result <= B when "0000",
					A + B when "0001",
					A - B when "0010",
<<<<<<< HEAD
					signed(s_muxa) * signed(s_muxb) when "0011",
=======
					unsigned(s_muxa) * unsigned(s_muxb) when "0011",
>>>>>>> 065dd0eb45495a49cae8f3a2862d6664af2329f8
					A / B when "0100",
					A and B when "0101",
					A or B when "0110",
					not A when "0111",
					A srl 1 when "1000", 
					A sll 1 when "1001",
					A + 1 when "1010",
					A - 1 when "1011",
					"XXXXXXXXXXXXXXXX" when others;
		s_alu <= std_logic_vector(result(7 downto 0));
<<<<<<< HEAD
	
	flags <= "001" when ((result(7 downto 0)) = "00000000") else
	"010" when (result(7) = '1') else
	"100";
	
end Behavioral;
=======
end Behavioral;

>>>>>>> 065dd0eb45495a49cae8f3a2862d6664af2329f8
