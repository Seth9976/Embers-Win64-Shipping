// 函数: sub_142c05ed0
// 地址: 0x142c05ed0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t result

if (sub_142bf7510(arg2, arg1, 6).b != 0 && sub_142bf7510(arg2, &arg1[4], 2).b != 0
        && sub_142bf7510(arg2, &arg1[6], ((zx.d(arg1[4]) << 8) + zx.d(arg1[5])) * 2).b != 0
        && zx.w(arg1[2]) * 0x100 + zx.w(arg1[3]) u<= zx.w(arg1[4]) * 0x100 + zx.w(arg1[5]))
    uint32_t r8_11 = ((zx.d(arg1[2]) + zx.d(arg1[4])) << 8) + zx.d(arg1[3]) + zx.d(arg1[5])
    uint32_t r9_3 = (zx.d(*arg1) << 8) + zx.d(arg1[1])
    
    if ((r8_11 == 0 || r9_3 u< divu.dp.d(0:0xffffffff, r8_11)) && sub_142bf7510(arg2, 
            &arg1[4 + (((zx.q(arg1[4]) << 8) + zx.q(arg1[5]) + 1) << 1)], r8_11 * r9_3).b != 0)
        result.b = 1
        return result

result.b = 0
return result
