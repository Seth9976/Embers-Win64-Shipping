// 函数: sub_140622100
// 地址: 0x140622100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 8)

if (rcx != 0)
    (**rcx)(rcx, 1)

*(arg1 + 8) = 0

if (arg2 != 4)
    return 

void*** rax = j_sub_140a82f30(0x50)
void*** rbx_1 = rax

if (rax == 0)
    rbx_1 = nullptr
else
    rax[1] = 0
    rax[5] = 0
    rax[6] = 0xf
    rax[3].b = 0
    rax[2].b = 0
    rax[7] = 0
    rax[8].b = 0
    rax[9] = 0
    *rbx_1 = &data_142d684b0
    
    if (midiOutGetNumDevs() == 0)
        sub_14058ad40(&rbx_1[3], 
            "MidiOutWinMM::initialize: no MIDI output devices currently available.", 0x45)
        void var_28
        sub_1406209b0(rbx_1, 0, sub_140592d30(&var_28, &rbx_1[3]))
    
    rax = j_sub_140a82f30(0x80)
    
    if (rax == 0)
        rbx_1[1] = 0
    else
        __builtin_memset(&rax[3], 0, 0x20)
        rbx_1[1] = rax

*(arg1 + 8) = rbx_1
