# EPICS LAB Group 5

## epics_iocs
Contains sub-folders with all the different EPICS applications developed.

## PV list for the laboratory


### Motor Driver

- **Gr5:Ax1_Mtr* **             
- **Gr5:Ax2_Mtr* **             
- **Gr5:Ax3_Mtr* **             
- **Gr5:Ax4_Mtr* **             
- **Gr5:Ax5_Mtr* **             
- **Gr5:Ax6_Mtr* **             
- **Gr5:Ax7_Mtr* **             
- **Gr5:Ax8_Mtr* **             
- **Gr5:Ax1_Mtr_Exists* **      Define if Axis 1 (CH#0) exists
- **Gr5:Ax2_Mtr_Exists* **      Define if Axis 1 (CH#0) exists
- **Gr5:Ax3_Mtr_Exists* **      Define if Axis 1 (CH#0) exists
- **Gr5:Ax4_Mtr_Exists* **      Define if Axis 1 (CH#0) exists
- **Gr5:Ax5_Mtr_Exists* **      Define if Axis 1 (CH#0) exists
- **Gr5:Ax6_Mtr_Exists* **      Define if Axis 1 (CH#0) exists
- **Gr5:Ax7_Mtr_Exists* **      Define if Axis 1 (CH#0) exists
- **Gr5:Ax8_Mtr_Exists* **      Define if Axis 1 (CH#0) exists


To Copy/Paste

    Gr5:Ax1_Mtr             
    Gr5:Ax2_Mtr             
    Gr5:Ax3_Mtr             
    Gr5:Ax4_Mtr             
    Gr5:Ax5_Mtr             
    Gr5:Ax6_Mtr             
    Gr5:Ax7_Mtr             
    Gr5:Ax8_Mtr             
    Gr5:Ax1_Mtr_Exists      
    Gr5:Ax2_Mtr_Exists      
    Gr5:Ax3_Mtr_Exists      
    Gr5:Ax4_Mtr_Exists      
    Gr5:Ax5_Mtr_Exists      
    Gr5:Ax6_Mtr_Exists      
    Gr5:Ax7_Mtr_Exists      
    Gr5:Ax8_Mtr_Exists      



### Power Supply

- **GROUP5:PS:VOLTAGE_RB* **                Voltage Readback
- **GROUP5:PS:CURRENT_RB* **                Current Readback
- **GROUP5:PS:SKEW_RATE_RB* **              Skew Rate Readback 
- **GROUP5:PS:TEMPERATURE_MOSFET* **        Temperature Mosfet (device diagnostics)
- **GROUP5:PS:TEMPERATURE_RESISTOR* **      Temperature Resistor (device diagnostics)
- **GROUP5:PS:CURRENT_SP* **                Current Setpoint
- **GROUP5:PS:CURRENT_SP_SET* **            Current Setpoint Check
- **GROUP5:PS:SKEW_RATE_SP* **              Skew Rate Setpoint
- **GROUP5:PS:ONOFF* **                     Power Supply Enable Command
- **GROUP5:PS:STATUSREGISTER* **            Status Register 
- **GROUP5:PS:ACTIVATE_CURRENT_RECORD* **   Logic for current sync when power supply is OFF/ON 
- **GROUP5:PS:PSU_ID* **                    Device ID
- **GROUP5:PS:FIRMWARE_VERS* **             Device Firmaware Version


To Copy/Paste

    GROUP5:PS:VOLTAGE_RB                
    GROUP5:PS:CURRENT_RB                
    GROUP5:PS:SKEW_RATE_RB               
    GROUP5:PS:TEMPERATURE_MOSFET        
    GROUP5:PS:TEMPERATURE_RESISTOR      
    GROUP5:PS:CURRENT_SP                
    GROUP5:PS:CURRENT_SP_SET            
    GROUP5:PS:SKEW_RATE_SP              
    GROUP5:PS:ONOFF                     
    GROUP5:PS:STATUSREGISTER            
    GROUP5:PS:ACTIVATE_CURRENT_RECORD   
    GROUP5:PS:PSU_ID                    
    GROUP5:PS:FIRMWARE_VERS             



### Gaussmeter

- **group5:GM:On_Off* **        Gaussmeter Enable Command
- **group5:GM:On_Off_RB* **     Gaussmeter Enable Readback
- **group5:GM:MField* **        Magnetic Field
- **group5:GM:ACDC* **          AC/DC Mode Setting Command 
- **group5:GM:ACDC_RB* **       AC/DC Mode Setting Readback

To Copy/Paste

    group5:GM:On_Off
    group5:GM:On_Off_RB
    group5:GM:MField
    group5:GM:ACDC        
    group5:GM:ACDC_RB       