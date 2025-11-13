// 函数: sub_1427a1590
// 地址: 0x1427a1590
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_40 = 0x3f800000
uint128_t* result = arg2
*(arg2 + 8) = (_mm_unpacklo_ps(zx.o(0), 0)).q
*(arg2 + 0x10) = 0x3f800000
*arg2 = 0
*(arg2 + 4) = 0x7f7fffff
arg2[0x14] = 0
*(arg2 + 0x18) = 0
*(arg2 + 0x20) = 0

if (*(arg1 + 0x28) != 0 && *(arg1 + 0x30) != 0)
    int64_t* rcx = *(arg1 + 0x30)
    void var_38
    int128_t* rax_2 = (*(*rcx + 0x10))(rcx, &var_38)
    float zmm1[0x4] = rax_2[1]
    *result = *rax_2
    uint128_t zmm0 = zx.o(rax_2[2].q)
    result[1] = zmm1
    result[2].q = zmm0.q

return result
