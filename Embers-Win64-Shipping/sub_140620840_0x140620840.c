// 函数: sub_140620840
// 地址: 0x140620840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x10) == 0)
    return 

int64_t* r14_1 = *(arg1 + 8)
EnterCriticalSection(&r14_1[0xb])
midiInReset(*r14_1)
midiInStop(*r14_1)
int64_t rsi_1 = 0
void* rbx_1 = &r14_1[7]

while (true)
    uint32_t rax_1 = midiInUnprepareHeader(*r14_1, *rbx_1, 0x70)
    j_sub_140a74f90(**rbx_1)
    j_sub_140a74f90(*rbx_1)
    
    if (rax_1 != 0)
        midiInClose(*r14_1)
        *r14_1 = 0
        sub_14058ad40(arg1 + 0x18, 
            "MidiInWinMM::openPort: error closing Windows MM MIDI input port (midiInUnprepareHeader).", 
            0x58)
        void var_38
        sub_1406209b0(arg1, 8, sub_140592d30(&var_38, arg1 + 0x18))
        break
    
    rsi_1 += 1
    rbx_1 += 8
    
    if (rsi_1 s>= 4)
        midiInClose(*r14_1)
        *r14_1 = 0
        *(arg1 + 0x10) = rax_1.b
        LeaveCriticalSection(&r14_1[0xb])
        break
