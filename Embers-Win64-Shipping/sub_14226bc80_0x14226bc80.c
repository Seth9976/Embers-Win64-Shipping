// 函数: sub_14226bc80
// 地址: 0x14226bc80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *arg2

if (rcx != 0)
    int32_t var_20
    (*(*rcx + 0x48))(rcx, &var_20, 0x3f8147ae)
    int32_t var_c
    float var_24_1 = var_c[0]
    int32_t var_18
    float var_30_1 = var_18[0]
    int32_t var_1c
    float temp0_1[0x4] = _mm_unpacklo_ps(var_20, var_1c)
    int32_t var_14
    int32_t var_10
    float temp0_2[0x4] = _mm_unpacklo_ps(var_14, var_10)
    *arg1 = temp0_1.q
    arg1[1].d = var_30_1
    *(arg1 + 0xc) = temp0_2.q
    *(arg1 + 0x14) = var_24_1
    arg1[3].b = 1

return arg1
