// 函数: sub_1422556d0
// 地址: 0x1422556d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
int64_t* rdi = *(arg1 + 0x150)

if (rdi != 0)
    int64_t* rax_1 = (*(*rdi + 0x30))(rdi)
    
    if (rax_1 != 0)
        (*(*rax_1 + 0x358))(rax_1, 
            "D:"
        "/Build/++UE4/Sync/Engine/Source/Runtime/Engine/Private/PhysicsEngine/PhysicsHandleComponent."
        "cpp", 
            0x128)
    
    float zmm6[0x4] = arg2[1]
    int64_t rax_3 = *rdi
    float zmm7[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0x55)
    float zmm8[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xaa)
    float var_98
    void* rax_4 = (*(rax_3 + 0xa0))(rdi, &var_98)
    float zmm0 = zmm7[0]
    float zmm1 = zmm8[0]
    float zmm3[0x4] = *(rax_4 + 0x10)
    float zmm4_1[0x4] = *(rax_4 + 0x14)
    zmm6[0] = zmm6[0] - zmm3[0]
    float zmm5_1[0x4] = *(rax_4 + 0x18)
    zmm0 = zmm0 - zmm4_1[0]
    zmm1 = zmm1 - zmm5_1[0]
    zmm6[0] = zmm6[0] * zmm6[0]
    zmm6[0] = zmm6[0] + zmm0 * zmm0
    zmm6[0] = zmm6[0] + zmm1 * zmm1
    zmm6[0] - 9.99999975e-05f
    bool cond:0_1 = zmm6[0] > 9.99999975e-05f
    
    if (not(zmm6[0] > 9.99999975e-05f))
        zmm6 = zmm3
        zmm7 = zmm4_1
        zmm8 = zmm5_1
    
    float zmm9[0x4] = *arg2
    int64_t rax_5 = *rdi
    float zmm10[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0x55)
    float zmm11[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0xaa)
    float zmm12[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0xff)
    int64_t rbp
    rbp.b = cond:0_1
    result = (*(rax_5 + 0xa0))(rdi, &var_98)
    zmm3 = *result
    float zmm4_2[0x4] = *(result + 4)
    float zmm5_2[0x4] = result[1].d
    zmm0 = zmm4_2[0]
    zmm3[0] = zmm3[0] * zmm9[0]
    zmm1 = zmm5_2[0] * zmm11[0]
    zmm3[0] = zmm3[0] + zmm0 * zmm10[0]
    zmm0 = *(result + 0xc) * zmm12[0]
    zmm3[0] = zmm3[0] + zmm1
    zmm3[0] = zmm3[0] + zmm0
    float zmm2[0x4] = __andps_xmmxud_memxud(zmm3, data_142d3f770)
    zmm2[0] - 1f
    
    if (not(zmm2[0] <= 1f))
        zmm12 = *(result + 0xc)
        zmm9 = zmm3
        zmm10 = zmm4_2
        zmm11 = zmm5_2
    
    result.b = zmm2[0] <= 1f
    
    if (rbp.b != 0 || result.b != 0)
        int64_t rax_6 = *rdi
        var_98 = zmm9[0]
        float var_94_1 = zmm10[0]
        float var_90_1 = zmm11[0]
        float var_8c_1 = zmm12[0]
        float var_88_1 = zmm6[0]
        float var_84_1 = zmm7[0]
        float var_80_1 = zmm8[0]
        result = (*(rax_6 + 0x1b0))(rdi, &var_98)
    
    if (rax_1 != 0)
        return (*(*rax_1 + 0x360))(rax_1)

return result
