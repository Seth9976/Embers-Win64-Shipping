// 函数: sub_1429c5680
// 地址: 0x1429c5680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__CheckForDebuggerJustMyCode(&data_14427d007)
int128_t zmm8
zmm8.d = arg3.d f- arg1.d
int128_t zmm7
zmm7.d = arg2.d f- arg1.d
zmm8.d = zmm8.d f/ zmm7.d
zmm8.d = zmm8.d f* 2048f
int32_t rcx = int.d(zmm8.d)

if (rcx s>= 0x800)
    return 0x7ff

if (rcx s>= 0)
    return zx.q(rcx)

return 0
