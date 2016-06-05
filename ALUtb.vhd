--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   02:30:30 06/05/2016
-- Design Name:   
-- Module Name:   C:/Users/luisfemg7/Documents/Sacagawea-master/ALUtb.vhd
-- Project Name:  Sacagawea
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: ALU
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY ALUtb IS
END ALUtb;
 
ARCHITECTURE behavior OF ALUtb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT ALU
    PORT(
         s_muxa : IN  std_logic_vector(7 downto 0);
         s_muxb : IN  std_logic_vector(7 downto 0);
         ctrl_alu : IN  std_logic_vector(3 downto 0);
         s_alu : OUT  std_logic_vector(7 downto 0);
         flags : OUT  std_logic_vector(2 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal s_muxa : std_logic_vector(7 downto 0) := (others => '0');
   signal s_muxb : std_logic_vector(7 downto 0) := (others => '0');
   signal ctrl_alu : std_logic_vector(3 downto 0) := (others => '0');

 	--Outputs
   signal s_alu : std_logic_vector(7 downto 0);
   signal flags : std_logic_vector(2 downto 0);
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: ALU PORT MAP (
          s_muxa => s_muxa,
          s_muxb => s_muxb,
          ctrl_alu => ctrl_alu,
          s_alu => s_alu,
          flags => flags
        );

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
		wait for 100 ns;
		ctrl_alu <= "0010";
		s_muxa <= "00000011";
		s_muxb <= "00000001";
		wait for 100 ns;
		ctrl_alu <= "0000";
		wait for 100 ns;
		ctrl_alu <= "0010";
		s_muxa <= "00000101";
		s_muxb <= "00001010";
		wait for 100 ns;
		ctrl_alu <= "0000";
		wait for 100 ns;
		ctrl_alu <= "0010";
		s_muxa <= "00000011";
		s_muxb <= "00000011";
      wait;
   end process;

END;
