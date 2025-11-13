// 函数: sub_142744540
// 地址: 0x142744540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = arg1[0xd0]

if (rcx != 0)
    void var_30
    int32_t* rax_2 = (*(*(rcx + 0x10) + 0x20))(rcx + 0x10, &var_30)
    
    if (not(rax_2[3][0] f< *rax_2))
        int64_t* rcx_3 = arg1[0xd0] + 0x10
        int32_t var_48
        (*(*rcx_3 + 0x20))(rcx_3, &var_48)
        float zmm6[0x4] = var_48
        int32_t var_34
        float zmm0[0x4] = var_34
        int32_t var_3c
        float zmm3[0x4] = var_3c
        float var_40
        zmm0[0] = zmm0[0] - var_40
        zmm3[0] = zmm3[0] - zmm6[0]
        int32_t var_44
        int64_t zmm5 = var_44
        int32_t var_38
        int64_t zmm2
        zmm2.d = var_38.d f- zmm5.d
        zmm0[0] = zmm0[0] * 0.5f
        zmm3[0] = zmm3[0] * 0.5f
        float var_40_1 = zmm0[0]
        zmm2.d = zmm2.d f* 0.5f
        *(arg2 + 0xc) = (_mm_unpacklo_ps(zmm3, zmm2)).q
        *(arg2 + 0x14) = var_40_1
        zmm6[0] = zmm6[0] f+ *(arg2 + 0xc)
        zmm5.d = zmm5.d f+ arg2[2].d
        float zmm4 = var_40 f+ *(arg2 + 0x14)
        *arg2 = (_mm_unpacklo_ps(zmm6, zmm5)).q
        arg2[1].d = zmm4
        zmm0 = arg2[2].d
        zmm2 = *(arg2 + 0xc)
        float zmm1 = *(arg2 + 0x14)
        zmm0[0] = zmm0[0] * zmm0[0]
        zmm2.d = zmm2.d f* zmm2.d
        zmm2.d = zmm2.d f+ zmm0[0]
        zmm2.d = zmm2.d f+ zmm1 * zmm1
        arg2[3].d = _mm_sqrt_ss(0, zmm2.d)[0]
        return arg2

sub_141f56c80(arg1, arg2, arg3)
return arg2
