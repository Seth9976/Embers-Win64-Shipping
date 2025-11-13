// 函数: sub_142c285b0
// 地址: 0x142c285b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0x73697a65)
    return sub_142c28680(arg1, arg2) __tailcall

int32_t r8_1 = arg3 & 0xffff0000

if (r8_1 == 0x73730000)
    return sub_142bf7510(arg2, arg1, 4) __tailcall

if (r8_1 == 0x63760000)
    if (sub_142bf7510(arg2, arg1, 0xe) == 0)
        return 0
    
    if (sub_142bf7510(arg2, &arg1[0xc], 2) == 0)
        return 0
    
    if (sub_142bf7510(arg2, &arg1[0xe], ((zx.d(arg1[0xc]) << 8) + zx.d(arg1[0xd])) * 3) == 0)
        return 0

return 1
