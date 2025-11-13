// 函数: sub_1420267c0
// 地址: 0x1420267c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = sub_142565030()
void* rax_1 = rax[0x23]

if (rax_1 == 0)
    (*(*rax + 0x390))(rax)
    rax_1 = rax[0x23]

uint64_t result

if (*(rax_1 + 0xb0) != 0)
    result = sub_140d3c6e0(arg1 + 0x70)
    uint64_t result_1 = result
    
    if (result != 0)
        int64_t rdx_3 = *result
        result = (*(rdx_3 + 0x690))(result, rdx_3)
        
        if (result != 0)
            float zmm0_1[0x4] = *(arg1 + 0x18)
            uint64_t r8_3 = zx.q(*(arg1 + 4))
            float temp0_3[0x4] = _mm_unpacklo_ps(*(arg1 + 0x14), 0)
            uint32_t zmm6[0x4] = *(result_1 + 0x1e0)
            float temp0_4[0x4] = _mm_rcp_ps(zmm6)
            float temp0_5[0x4] = __mulps_xmmps_memps(*(result_1 + 0x1c0), data_143f40620)
            float temp0_8[0x4] = __subps_xmmps_memps(
                _mm_unpacklo_ps(_mm_unpacklo_ps(*(arg1 + 0x10), zmm0_1[0].q), temp0_3[0].q), 
                *(result_1 + 0x1d0))
            float temp0_9[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0xc9)
            float temp0_10[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0xd2)
            float temp0_11[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0xff)
            float zmm8[0x4] = __andps_xmmxud_memxud(temp0_8, data_143f40590)
            float temp0_14[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm8, zmm8, 0xc9), temp0_10)
            float temp0_17[0x4] =
                _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(zmm8, zmm8, 0xd2), temp0_9), temp0_14)
            float temp0_18[0x4] = _mm_mul_ps(temp0_4, temp0_4)
            float temp0_19[0x4] = _mm_add_ps(temp0_4, temp0_4)
            float temp0_20[0x4] = _mm_add_ps(temp0_17, temp0_17)
            float temp0_21[0x4] = _mm_mul_ps(temp0_18, zmm6)
            float temp0_22[0x4] = _mm_mul_ps(temp0_11, temp0_20)
            float temp0_23[0x4] = _mm_sub_ps(temp0_19, temp0_21)
            float temp0_25[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_20, temp0_20, 0xd2), temp0_9)
            float temp0_26[0x4] = _mm_add_ps(temp0_22, zmm8)
            float temp0_27[0x4] = _mm_mul_ps(temp0_23, temp0_23)
            float temp0_28[0x4] = _mm_add_ps(temp0_23, temp0_23)
            float temp0_29[0x4] = _mm_mul_ps(temp0_27, zmm6)
            zmm6 = __cmpps_xmmps_memps_immb(__andps_xmmxud_memxud(zmm6, data_143f404c0), 
                data_143f40610, 2)
            float temp0_32[0x4] = _mm_sub_ps(temp0_28, temp0_29)
            float temp0_35[0x4] =
                _mm_sub_ps(temp0_25, _mm_mul_ps(_mm_shuffle_ps(temp0_20, temp0_20, 0xc9), temp0_10))
            zmm6 = _mm_and_ps(zmm6, temp0_32 ^ zx.o(0)) ^ temp0_32
            float temp0_38[0x4] = _mm_mul_ps(_mm_add_ps(temp0_35, temp0_26), zmm6)
            float var_98 = temp0_38[0]
            float temp0_39[0x4] = _mm_shuffle_ps(temp0_38, temp0_38, 0x55)
            float var_90_1 = _mm_shuffle_ps(temp0_38, temp0_38, 0xaa)[0]
            float var_94_1 = temp0_39[0]
            return sub_14222bd10(result, &var_98, r8_3, arg2, arg3)
else
    void arg_20
    sub_140b58170(&arg_20, "PIE", 1)
    void var_78
    int64_t* rax_3 = _vfprintf_p_l(&var_78, 
        Calling FindCollisionUV but 'Support UV From Hit Results' is not enabled in project settings. "
    "This is required for finding UV for collision results.", GameplayStatics")
    void var_88
    void var_60
    sub_140ae44d0(sub_140accdf0(&var_60, &arg_20), &var_88, rax_3)
    int64_t* var_80
    
    if (var_80 != 0)
        var_80[1].d -= 1
        
        if (var_80[1].d == 1)
            (**var_80)(var_80)
            int32_t temp3_1 = *(var_80 + 0xc)
            *(var_80 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*var_80 + 8))(var_80, 1)
    
    sub_140acd9c0(&var_60)
    int64_t* var_70
    
    if (var_70 != 0)
        var_70[1].d -= 1
        
        if (var_70[1].d == 1)
            (**var_70)(var_70)
            int32_t rdi_1 = *(var_70 + 0xc)
            *(var_70 + 0xc) -= 1
            
            if (rdi_1 == 1)
                int64_t r8_2 = *var_70
                (*(r8_2 + 8))(var_70, zx.q(rdi_1), r8_2)

result.b = 0
return result
