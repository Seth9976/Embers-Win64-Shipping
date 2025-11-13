// 函数: sub_141972a50
// 地址: 0x141972a50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 u< 4)
    return sub_140b63e00(&data_143f02508 + (sx.q(arg1) << 3), arg2) __tailcall

wchar16 const* const result = u"InvalidFeatureLevel"

if (*arg2 != u"InvalidFeatureLevel")
    int32_t rdx_1 = 0
    arg2[1].d = 0
    
    if (*(arg2 + 0xc) != 0x14)
        sub_1405947f0(arg2, 0x14)
        rdx_1 = arg2[1].d
    
    arg2[1].d = rdx_1 + 0x14
    
    if (rdx_1 + 0x14 s> *(arg2 + 0xc))
        sub_140594770(arg2)
    
    result = *arg2
    __builtin_memcpy(result, u"InvalidFeatureLe", 0x20)
    *(result + 0x20) = 0x6c00650076

return result
