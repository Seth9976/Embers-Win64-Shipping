// 函数: sub_141f23d80
// 地址: 0x141f23d80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm6 = sub_141f23700(arg1, arg2)
int32_t result = arg2[8].d

if (result s>= 0x154)
label_141f23dcf:
    
    if (result s< 0x203 && not(9.99999975e-05f f>= arg1[0x69].d) && arg1[0x4f] == 0)
        int32_t var_10_1 = 0
        int64_t var_28 = _mm_unpacklo_ps(0xc2b40000, 0)
        int32_t var_20_1 = 0
        result = sub_141f30600(arg1, &var_28, 0, 0, zmm6, 0)
else
    arg1[0x65].d = *(arg1 + 0x324)
    result = arg2[8].d
    
    if (result s>= 0x154)
        goto label_141f23dcf
    
    arg1[0x67].d &= 0xfffffffe
    result = *(arg1 + 0x254) u>> 1 & 1
    arg1[0x67].d |= result

if ((arg2[5].b & 1) != 0 && (arg1[0x67].b & 1) == 0)
    arg1[0x64].b = 0

return result
