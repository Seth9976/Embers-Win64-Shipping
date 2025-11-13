// 函数: sub_140622b90
// 地址: 0x140622b90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
int64_t* result = __security_cookie ^ &var_f8
MIDIHDR pmh
pmh.dwReserved[7] = result

if (*(arg1 + 0x10) != 0)
    void var_d0
    
    if (arg3 != 0)
        void* rsi_1 = *(arg1 + 8)
        
        if (*arg2 == 0xf0)
            int64_t rax_2 = malloc(zx.q(arg3))
            
            if (rax_2 != 0)
                if (arg3 != 0)
                    memcpy(rax_2, arg2, arg3)
                
                pmh.lpData = rax_2
                pmh.dwBufferLength = arg3
                pmh.dwFlags = 0
                char const* const rdx_5
                int64_t r8_4
                
                if (midiOutPrepareHeader(*(rsi_1 + 8), &pmh, 0x70) == 0)
                    if (midiOutLongMsg(*(rsi_1 + 8), &pmh, 0x70) != 0)
                        free(rax_2)
                        r8_4 = 0x37
                        rdx_5 = "MidiOutWinMM::sendMessage: error sending sysex message."
                        goto label_140622ce2
                    
                    if (midiOutUnprepareHeader(*(rsi_1 + 8), &pmh, 0x70) == 0x41)
                        uint32_t i
                        
                        do
                            Sleep(1)
                            i = midiOutUnprepareHeader(*(rsi_1 + 8), &pmh, 0x70)
                        while (i == 0x41)
                    
                    result = free(rax_2)
                else
                    free(rax_2)
                    r8_4 = 0x38
                    rdx_5 = "MidiOutWinMM::sendMessage: error preparing sysex header."
                label_140622ce2:
                    sub_14058ad40(arg1 + 0x18, rdx_5, r8_4)
                    result = sub_1406209b0(arg1, 8, sub_140592d30(&var_d0, arg1 + 0x18))
            else
                sub_14058ad40(arg1 + 0x18, 
                    "MidiOutWinMM::sendMessage: error allocating sysex message memory!", 
                    zx.q((rax_2 + 0x41).d))
                result = sub_1406209b0(arg1, (rax_2 + 5).d, sub_140592d30(&var_d0, arg1 + 0x18))
        else if (arg3 u<= 3)
            uint32_t dwMsg
            
            if (arg3 != 0)
                memcpy(&dwMsg, arg2, arg3)
            
            result = midiOutShortMsg(*(rsi_1 + 8), dwMsg)
            
            if (result.d != 0)
                sub_14058ad40(arg1 + 0x18, 
                    "MidiOutWinMM::sendMessage: error sending MIDI message.", 0x36)
                result = sub_1406209b0(arg1, 8, sub_140592d30(&var_d0, arg1 + 0x18))
        else
            sub_14058ad40(arg1 + 0x18, 
                "MidiOutWinMM::sendMessage: message size is greater than 3 bytes (and not sysex)!", 
                0x50)
            result = sub_1406209b0(arg1, 0, sub_140592d30(&var_d0, arg1 + 0x18))
    else
        sub_14058ad40(arg1 + 0x18, "MidiOutWinMM::sendMessage: message argument is empty!", 
            zx.q(arg3 + 0x35))
        result = sub_1406209b0(arg1, 0, sub_140592d30(&var_d0, arg1 + 0x18))

__security_check_cookie(pmh.dwReserved[7] ^ &var_f8)
return result
