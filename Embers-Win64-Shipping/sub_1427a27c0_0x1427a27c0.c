// 函数: sub_1427a27c0
// 地址: 0x1427a27c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_40 = 0x3f800000
*(arg2 + 8) = (_mm_unpacklo_ps(zx.o(0), 0)).q
*(arg2 + 0x10) = 0x3f800000
*arg2 = 0
*(arg2 + 4) = 0x7f7fffff
arg2[0x14] = 0
*(arg2 + 0x18) = 0
*(arg2 + 0x20) = 0

if (*(arg1 + 0x30) != 0 && *(arg1 + 0x38) != 0 && *(arg1 + 0x10) != 0 && *(arg1 + 0x18) != 0
        && *(arg1 + 0x20) != 0 && *(arg1 + 0x28) != 0)
    int64_t* rcx = *(arg1 + 0x38)
    void var_38
    float (* rax_2)[0x4] = (*(*rcx + 0x10))(rcx, &var_38)
    float zmm1[0x4] = rax_2[1]
    *arg2 = *rax_2
    float zmm0[0x4] = zx.o(rax_2[2][0].q)
    *(arg2 + 0x10) = zmm1
    *(arg2 + 0x20) = zmm0.q
    
    if (*arg2 != 0)
        zmm0 = *(arg2 + 4)
        zmm0[0] = zmm0[0] f* arg3[5]
        zmm0[0] = zmm0[0] f* arg3[3]
        zmm0[0] = zmm0[0] f+ arg3[2]
        zmm0[0] = zmm0[0] f* arg3[4]
        zmm0[0] = zmm0[0] f+ *arg3
        zmm0[0] = zmm0[0] f+ arg3[1]
        float var_40_1 = zmm0[0]
        *(arg1 + 0xa4) = (_mm_unpacklo_ps(zmm0, zmm0[0].q)).q
        *(arg1 + 0xac) = var_40_1

return arg2
