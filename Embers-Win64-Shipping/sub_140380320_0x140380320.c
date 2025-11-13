// 函数: sub_140380320
// 地址: 0x140380320
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx_1

if (arg3 == 0x1392)
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = muls.dp.d(0x51eb851f, arg5)
    rdx_1 = temp0_1 s>> 6

int32_t r9_4

if (arg3 != 0x1392 || arg2 s< rdx_1 + (rdx_1 u>> 0x1f))
    r9_4 = sub_140381450(arg2, arg3, zx.q(arg5))
else
    int128_t zmm6
    int32_t r8_1 = sub_140381c10(arg1, arg2, arg4, arg5, zmm6, arg6, 0, arg9, arg7, arg8)
    int32_t r9_3 = arg5 s/ 0x190
    
    while (r9_3 << r8_1.b s> arg2)
        r8_1 -= 1
    
    r9_4 = r9_3 << r8_1.b

if (r9_4 s< 0)
    r9_4 = -1

return zx.q(r9_4)
