// 函数: sub_14061eba0
// 地址: 0x14061eba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1] = 0
arg1[5] = 0
arg1[6] = 0xf
arg1[3].b = 0
*arg1 = &data_142d683a8
arg1[0xa] = 0
__builtin_memset(&arg1[0xc], 0, 0x28)
arg1[2].b = 0
arg1[7] = 0
arg1[8].b = 0
arg1[9] = 0
arg1[0x11].w = 7
*(arg1 + 0x8a) = 1
arg1[0x12] = 0
arg1[0x13].b = 0
__builtin_memset(&arg1[0x14], 0, 0x11)
arg1[0xb].d = arg3

if (arg3 != 0)
    uint64_t i_1 = zx.q(arg3)
    int64_t rax_1 = 0x20 * i_1
    
    if (mulu.dp.q(0x20, i_1) u>> 0x40 != zx.o(0))
        rax_1 = -1
    
    int64_t rax_2 = rax_1 + 8
    
    if (rax_1 u>= -8)
        rax_2 = -1
    
    uint64_t* rax_3 = j_sub_140a82f30(rax_2)
    void* rcx_1
    
    if (rax_3 == 0)
        rcx_1 = nullptr
    else
        *rax_3 = i_1
        rcx_1 = &rax_3[1]
        void* rax_4 = rcx_1
        
        if (i_1 != 0)
            uint64_t i
            
            do
                __builtin_memset(rax_4, 0, 0x20)
                rax_4 += 0x20
                i = i_1
                i_1 -= 1
            while (i != 1)
    
    arg1[0xc] = rcx_1

*arg1 = &data_142d68458
uint32_t rax_5 = midiInGetNumDevs()
void var_28

if (rax_5 == 0)
    sub_14058ad40(&arg1[3], "MidiInWinMM::initialize: no MIDI input devices currently available.", 
        zx.q(rax_5 + 0x43))
    sub_1406209b0(arg1, 0, sub_140592d30(&var_28, &arg1[3]))

void* rax_7 = j_sub_140a82f30(0x80)
void* const rcx_5 = rax_7

if (rax_7 == 0)
    rcx_5 = nullptr
else
    __builtin_memset(rax_7 + 0x18, 0, 0x20)

arg1[1] = rcx_5
arg1[0x12] = rcx_5
*(rcx_5 + 0x20) = *(rcx_5 + 0x18)
BOOL rax_9 = InitializeCriticalSectionAndSpinCount(rcx_5 + 0x58, 0x400)

if (rax_9 == 0)
    sub_14058ad40(&arg1[3], 
        "MidiInWinMM::initialize: InitializeCriticalSectionAndSpinCount failed.", 
        zx.q(rax_9 + 0x46))
    sub_1406209b0(arg1, 0, sub_140592d30(&var_28, &arg1[3]))

return arg1
