// 函数: sub_142375f00
// 地址: 0x142375f00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140ce8e10(arg1, arg2)
(*(*arg2 + 0x1d8))(arg2, &data_1439a9418)
int32_t result = sub_140b4e7c0(arg2, &data_1439a9418)

if (result s< 3)
    int32_t var_10_1 = 0x3f800000
    result = 0x3f800000
    *(arg1 + 0x48) = _mm_unpacklo_ps(0x3f800000, 0x3f800000)
    *(arg1 + 0x50) = 0x3f800000

return result
