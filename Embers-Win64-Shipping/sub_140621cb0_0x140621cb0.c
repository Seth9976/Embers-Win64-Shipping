// 函数: sub_140621cb0
// 地址: 0x140621cb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rax = midiInGetNumDevs()
void var_28

if (rax == 0)
    sub_14058ad40(arg1 + 0x18, 
        "MidiInWinMM::initialize: no MIDI input devices currently available.", zx.q(rax + 0x43))
    sub_1406209b0(arg1, 0, sub_140592d30(&var_28, arg1 + 0x18))

void* rax_2 = j_sub_140a82f30(0x80)
void* rcx_3 = rax_2

if (rax_2 == 0)
    rcx_3 = rax_2
else
    __builtin_memset(rcx_3 + 0x18, 0, 0x20)

*(arg1 + 8) = rcx_3
*(arg1 + 0x90) = rcx_3
*(rcx_3 + 0x20) = *(rcx_3 + 0x18)
BOOL result = InitializeCriticalSectionAndSpinCount(rcx_3 + 0x58, 0x400)

if (result != 0)
    return result

sub_14058ad40(arg1 + 0x18, 
    "MidiInWinMM::initialize: InitializeCriticalSectionAndSpinCount failed.", zx.q(result + 0x46))
return sub_1406209b0(arg1, 0, sub_140592d30(&var_28, arg1 + 0x18))
