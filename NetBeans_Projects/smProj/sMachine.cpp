///*
// * To change this license header, choose License Headers in Project Properties.
// * To change this template file, choose Tools | Templates
// * and open the template in the editor.
// */
//
///* 
// * File:   sMachine.cpp
// * Author: usuário
// *
// * Created on 18 de Fevereiro de 2016, 15:24
// */
//

#include"util.h"
#include"stateMachine.h"


/* Type definitions */

//using namespace std;
//
//namespace variables {
//    
//    bool b_On;
//    bool b_Fail;
//    bool b_Panel;
//    bool b_Shutdown;
//    bool b_Maintenance;
//    signed short sshort_Position;
//    unsigned short ushort_Mode;
//    unsigned short ushort_Power;
//    unsigned short ushort_State;
//    unsigned short ushort_timeCount;
//    
//    
//}
//
//void stateMachine();
//
///*
// * 
// */

int main(int argc, char** argv) {
    sm_init();
    
    sm_run();
    
    return 0;
}
//
//void stateMachine() {
//   
//    if (variables::ushort_State == 9U) 
//    {
//        /*EMERGENCY STATE*/
//        variables::ushort_State = 1U;
//        /*System on STANDBY*/
//        variables::b_On = false;
//    }
//    else if (variables::ushort_State == 7U) 
//    {
//        if (variables::ushort_Mode == 2U) 
//        {
//            if (variables::b_Fail == true) 
//            {
//                // Mode EXTEND on REDUCED STATE
//                variables::sshort_Position += 1U;
//            } 
//            else 
//            {
//                variables::sshort_Position += 2U;
//            }
//
//            if (variables::sshort_Position > 20U) 
//            {
//                // Change to mode PANEL OPEN
//                variables::ushort_Mode = 3U;
//            }
//        } 
//        else if (variables::ushort_Mode == 4U) 
//        {
//            if (variables::b_Fail == true) 
//            {
//                // Mode RETRACT 
//                variables::sshort_Position -= 1U;
//            } 
//            else 
//            {// Mode RETRACT 
//                variables::sshort_Position -= 2U;
//            }
//            
//            if (variables::sshort_Position < 0) 
//            {
//                //*Change to mode PANEL CLOSE
//                variables::ushort_Mode = 1U;
//                cout << "PANEL CLOSE";
//            }
//        } 
//        else if (variables::ushort_Mode == 1U) 
//        {
//            //* Mode PANEL CLOSE 
//            if (variables::b_Panel == true) 
//            {
//                //* Change to mode EXTEND 
//                variables::ushort_Mode = 2U;
//            }
//        } 
//        else if (variables::ushort_Mode == 3U) 
//        {
//            //*Mode PANEL OPEN
//            if (variables::b_Panel == false) 
//            {
//                //*Change to mode RETRACT
//                variables::ushort_Mode = 4U;
//                cout << "PANEL OPEN";
//            }
//        } 
//        else 
//        {
//            // Mode SAFE SHUTDOWN
//            variables::sshort_Position = 0U;
//        }
//    }
//    else if (variables::ushort_State == 1U) 
//    {
//        if (variables::b_On == true) 
//        {
//            /*Change State to IBIT*/
//            variables::ushort_State = 2U;
//            variables::ushort_timeCount = 0U;
//        }
//
//        if (variables::b_Shutdown == true) 
//        {
//            std::cout << "|SHUTDOWN|";
//        }
//    }
//    else if (variables::ushort_State == 2U) 
//    {
//        if (variables::ushort_Power <= 200U) 
//        {
//            /*Change State to EMERGENCY*/
//            variables::ushort_State = 9U;
//        }
//        else if (variables::ushort_Power <= 500U) 
//        {
//            /*Change State to FAIL*/
//            variables::ushort_State = 3U;
//        }
//        else 
//        {
//            variables::ushort_timeCount++;
//
//            if (variables::ushort_timeCount > 5U) 
//            {
//                /*Change State to READY*/
//                variables::ushort_State = 4U;
//            }
//        }
//    }
//    else if (variables::ushort_State == 3U) 
//    {
//        /*Change State to OPERATIONAL REDUCED*/
//        variables::ushort_State = 7U;
//        variables::ushort_Mode = 1U;
//        variables::b_Fail = true;
//        cout << "REDUCED MODE";
//    }
//    else if (variables::ushort_State == 4U) 
//    {
//        if (variables::b_Maintenance == true) 
//        {
//            /*Change State to MAINTENANCE*/
//            variables::ushort_State = 6U;
//        }
//        else 
//        {
//            /*Change State to Operational*/
//            variables::ushort_State = 7U;
//        }
//    }
//    else 
//    {
//        if (variables::ushort_State == 6U) 
//        {
//            /*State MAINTENANCE*/       
//        }
//    }
//}
