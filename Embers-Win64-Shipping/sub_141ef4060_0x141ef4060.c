// 函数: sub_141ef4060
// 地址: 0x141ef4060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = sub_141ea5fd0(arg1[0x29])
void* rdx = arg1[0x29]
int32_t rax_2 = *(rdx + 0x330) & 0xfffffdff
int32_t var_30 = 0x40400000
int64_t zmm0 = *arg3
int64_t var_48 = (_mm_unpacklo_ps(0x3f800000, 0x40000000)).q
*(rdx + 0x330) = rax_2 | zx.d(rax) << 9
int64_t rdx_1 = *arg1
int32_t rax_5 = arg3[1].d
int64_t var_38 = zmm0
(*(rdx_1 + 0x9f0))(arg1, rdx_1, &var_38, &var_48, arg4, arg10, arg6, arg12, arg13, arg14, var_48, 
    var_30, var_38, rax_5, arg5)
void* rax_7 = arg1[0x29]
*(rax_7 + 0x330) &= 0xfffffdff
int64_t rdx_2 = *arg1
int32_t rax_9 = arg8[1].d
var_38 = *arg8
int32_t rax_11 = arg7[1].d
var_48 = *arg7
return (*(rdx_2 + 0x9f0))(arg1, rdx_2, &var_48, &var_38, arg9, arg10, arg11, arg12, arg13, arg14, 
    var_48, rax_11, var_38, rax_9)
