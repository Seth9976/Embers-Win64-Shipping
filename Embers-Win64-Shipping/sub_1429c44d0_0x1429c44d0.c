// 函数: sub_1429c44d0
// 地址: 0x1429c44d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__CheckForDebuggerJustMyCode(&data_14427d007)
int32_t r8 = *arg2
float arg_8
(*(*arg1 + 0x20))(arg1, &arg_8, zx.q(r8 s>> 2), zx.q(r8) & 3)
int32_t r8_2 = arg2[1]
float arg_10
(*(*arg1 + 0x20))(arg1, &arg_10, zx.q(r8_2 s>> 2), zx.q(r8_2) & 3)
int32_t r8_4 = arg2[2]
float arg_18
(*(*arg1 + 0x20))(arg1, &arg_18, zx.q(r8_4 s>> 2), zx.q(r8_4) & 3)
int128_t zmm4
zmm4.d = arg5.d f- arg3
zmm4.d = zmm4.d f* (arg_10 - arg_8)
zmm4.d = zmm4.d f- (arg4 - arg3) * (arg_18 - arg_8)

if (not(0f f<= zmm4.d))
    zmm4 ^= data_142d3f780

return zmm4.d
