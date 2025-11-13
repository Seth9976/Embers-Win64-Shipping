// 函数: sub_142c05840
// 地址: 0x142c05840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint16_t result

if (sub_142bf7510(arg2, arg1, 0xa).b != 0
        && sub_142bf7510(arg2, &arg1[2], (zx.d(*arg1) << 8) + zx.d(arg1[1])).b != 0
        && sub_142bf7510(arg2, &arg1[2], 8).b != 0 && zx.w(arg1[2]) * 0x100 + zx.w(arg1[3]) == 1
        && sub_142c053c0(&arg1[4], arg2, &arg1[2]).b != 0
        && sub_142c04640(&arg1[8], arg2, &arg1[2]).b != 0)
    result.b = 1
    return result

result.b = 0
return result
