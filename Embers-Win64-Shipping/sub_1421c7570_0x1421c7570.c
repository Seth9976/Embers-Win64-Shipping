// 函数: sub_1421c7570
// 地址: 0x1421c7570
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = sub_1421b7cc0(arg2, arg1)
int64_t rdi = rax

if (rax == 0)
    rdi = arg2[3] + 0x610

float result = (*(*arg2 + 0x150))(arg2)

if (result != 0)
    int64_t var_60_1 = rdi
    int32_t var_58
    sub_141fe56b0(arg1 + 0x30, &var_58, *(arg2 + 0x12c), arg3, (arg2[3]).d, nullptr)
    float zmm0_1[0x4]
    float zmm1[0x4]
    float zmm3_1
    float zmm4_1[0x4]
    int64_t zmm5_1
    int32_t var_54
    float var_50
    
    if ((*(arg1 + 0x78) & 1) == 0)
        zmm3_1 = var_50
        zmm5_1 = var_54
        zmm4_1 = var_58
    else
        void* rbx_1 = arg2[3]
        zmm1 = *(rbx_1 + 0x1c0)
        uint32_t temp0_2 = _mm_movemask_ps(_mm_cmpeq_ps(*(rbx_1 + 0x180), zmm1, 4))
        float var_18[0x4] = zmm1
        
        if (temp0_2 != 0)
            *(rbx_1 + 0x180) = zmm1
            void var_28
            int32_t* rax_3 = sub_140adf5d0(&var_18, &var_28)
            *(rbx_1 + 0x190) = *rax_3
            *(rbx_1 + 0x198) = rax_3[2]
        
        int64_t var_38 = *(rbx_1 + 0x190)
        int32_t var_30_1 = *(rbx_1 + 0x198)
        int32_t var_48
        sub_140ad3dc0(&var_38, &var_48)
        zmm0_1 = var_48
        zmm4_1 = var_58
        int32_t var_40
        zmm1 = var_40
        zmm0_1[0] = zmm0_1[0] * 0.00277777785f
        zmm1[0] = zmm1[0] * 0.00277777785f
        zmm4_1[0] = zmm4_1[0] + zmm0_1[0]
        int32_t var_44
        zmm0_1 = var_44
        zmm0_1[0] = zmm0_1[0] * 0.00277777785f
        zmm3_1 = var_50 + zmm1[0]
        zmm5_1.d = var_54.d f+ zmm0_1[0]
    void* rcx_6 = sx.q(result) + arg4
    zmm4_1[0] = zmm4_1[0] * 360f
    zmm5_1.d = zmm5_1.d f* 360f
    result = zmm3_1 * 360f
    *(rcx_6 + 0xc) = (_mm_unpacklo_ps(zmm4_1, zmm5_1)).q
    *(rcx_6 + 0x14) = result
    zmm0_1 = *(rcx_6 + 0x18)
    zmm0_1[0] = zmm0_1[0] f+ *(rcx_6 + 0xc)
    *(rcx_6 + 0x18) = zmm0_1[0]
    zmm1 = *(rcx_6 + 0x10)
    zmm1[0] = zmm1[0] f+ *(rcx_6 + 0x1c)
    *(rcx_6 + 0x1c) = zmm1[0]
    zmm0_1 = *(rcx_6 + 0x14)
    zmm0_1[0] = zmm0_1[0] f+ *(rcx_6 + 0x20)
    *(rcx_6 + 0x20) = zmm0_1[0]

return result
