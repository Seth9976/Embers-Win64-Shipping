// 函数: sub_140621d80
// 地址: 0x140621d80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rax = midiOutGetNumDevs()

if (rax == 0)
    sub_14058ad40(arg1 + 0x18, 
        "MidiOutWinMM::initialize: no MIDI output devices currently available.", zx.q(rax + 0x45))
    void var_28
    sub_1406209b0(arg1, 0, sub_140592d30(&var_28, arg1 + 0x18))

int64_t result = j_sub_140a82f30(0x80)

if (result == 0)
    *(arg1 + 8) = 0
    return result

__builtin_memset(result + 0x18, 0, 0x20)
*(arg1 + 8) = result
return result
