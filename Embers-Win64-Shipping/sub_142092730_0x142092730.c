// 函数: sub_142092730
// 地址: 0x142092730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
int32_t i = 0
*arg2 = 0
arg2[1] = 0
void* rbx = *(arg1 + 0x440)
int64_t* result

if (rbx == 0)
    result = arg2
else
    float rax_2 = arg3[1].d
    float zmm6[0x4]
    float var_28_1[0x4] = zmm6
    int128_t zmm7
    int128_t var_38_1 = zmm7
    float zmm8[0x4]
    float var_48_1[0x4] = zmm8
    float zmm9[0x4]
    float var_58_1[0x4] = zmm9
    int32_t var_bc_1 = arg4.d
    uint64_t var_c8 = *arg3
    void var_b8
    uint32_t zmm2[0x4]
    float zmm5[0x4]
    
    if (arg5 != 0)
        zmm9 = *(arg1 + 0x1e0)
        zmm2 = data_143f478d0
        arg4 = data_143f478c0
        float var_98[0x4]
        
        if (_mm_movemask_ps(_mm_cmpeq_ps(arg4, _mm_and_ps(zmm9, zmm2), 1)) == 0)
            float zmm1[0x4] = data_143dbb0d0
            var_98 = data_143dbb0c0
            uint128_t var_78_2 = data_143dbb0e0
            float var_88_2[0x4] = zmm1
        else
            data_143f47560
            float temp0_4[0x4] = __mulps_xmmps_memps(*(arg1 + 0x1c0), data_143f478b0)
            zmm5 = *(arg1 + 0x1d0)
            uint128_t zmm0
            zmm0.q = zmm9 u>> 0x40
            float temp0_5[0x4] = _mm_shuffle_ps(zmm9, zmm0, 0xc4)
            float temp0_6[0x4] = _mm_rcp_ps(temp0_5)
            var_98 = temp0_4
            zmm0 = _mm_mul_ps(temp0_6, temp0_6)
            float temp0_10[0x4] =
                _mm_sub_ps(_mm_add_ps(temp0_6, temp0_6), _mm_mul_ps(zmm0, temp0_5))
            zmm0 = _mm_mul_ps(temp0_10, temp0_10)
            float temp0_12[0x4] = _mm_add_ps(temp0_10, temp0_10)
            zmm0 = _mm_mul_ps(zmm0, temp0_5)
            float temp0_15[0x4] = _mm_cmpeq_ps(_mm_and_ps(temp0_5, zmm2), arg4, 2)
            arg4 = _mm_shuffle_ps(temp0_4, temp0_4, 0xd2)
            float temp0_17[0x4] = _mm_sub_ps(temp0_12, zmm0)
            zmm2 = _mm_shuffle_ps(temp0_4, temp0_4, 0xc9)
            float temp0_19[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0xff)
            zmm9 = __andps_xmmxud_memxud(_mm_and_ps(temp0_15, zx.o(0) ^ temp0_17) ^ temp0_17, 
                data_143f47570)
            float temp0_22[0x4] = _mm_mul_ps(zmm5, zmm9)
            zmm0 = _mm_mul_ps(_mm_shuffle_ps(temp0_22, temp0_22, 0xc9), arg4)
            float temp0_27[0x4] =
                _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_22, temp0_22, 0xd2), zmm2), zmm0)
            float temp0_28[0x4] = _mm_add_ps(temp0_27, temp0_27)
            float temp0_29[0x4] = _mm_mul_ps(temp0_19, temp0_28)
            float temp0_31[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_28, temp0_28, 0xd2), zmm2)
            zmm0 = _mm_shuffle_ps(temp0_28, temp0_28, 0xc9)
            float temp0_33[0x4] = _mm_add_ps(temp0_29, temp0_22)
            float var_88_1[0x4] = __andps_xmmxud_memxud(
                _mm_sub_ps(zx.o(0), 
                    _mm_add_ps(_mm_sub_ps(temp0_31, _mm_mul_ps(zmm0, arg4)), temp0_33)), 
                data_143f47570)
            float var_78_1[0x4] = zmm9
        
        var_c8.o = *sub_140ae2f70(&var_c8, &var_b8, &var_98)
    
    zmm9 = *(sub_1423633d0(rbx, &var_b8) + 0x18)
    
    if (*(arg1 + 0x4a0) s<= 0)
        result = arg2
    else
        uint32_t (* rbx_1)[0x4] = nullptr
        zmm6 = zx.o(0)
        
        do
            int64_t rax_6 = *(arg1 + 0x498)
            float zmm0_2 = *(rbx_1 + rax_6 + 4)
            zmm2 = *(rbx_1 + rax_6)
            float zmm1_1 = *(rbx_1 + rax_6 + 8)
            zmm2[0] = zmm2[0] f* zmm2[0]
            zmm2[0] = zmm2[0] f+ zmm0_2 * zmm0_2
            zmm2[0] = zmm2[0] f+ zmm1_1 * zmm1_1
            
            if (zmm2[0] f<= 9.99999994e-09f)
                zmm5 = zmm6
            else
                zmm5 = _mm_sqrt_ss(zx.o(0)[0], zmm2[0])
            
            zmm0_2 = *(rbx_1 + rax_6 + 0x14)
            zmm2 = *(rbx_1 + rax_6 + 0x10)
            zmm1_1 = *(rbx_1 + rax_6 + 0x18)
            zmm2[0] = zmm2[0] f* zmm2[0]
            zmm2[0] = zmm2[0] f+ zmm0_2 * zmm0_2
            zmm2[0] = zmm2[0] f+ zmm1_1 * zmm1_1
            
            if (zmm2[0] f<= 9.99999994e-09f)
                arg4 = zmm6
            else
                arg4 = _mm_sqrt_ss(zx.o(0).d, zmm2[0])
            
            zmm0_2 = *(rbx_1 + rax_6 + 0x24)
            zmm2 = *(rbx_1 + rax_6 + 0x20)
            zmm1_1 = *(rbx_1 + rax_6 + 0x28)
            zmm2[0] = zmm2[0] f* zmm2[0]
            zmm2[0] = zmm2[0] f+ zmm0_2 * zmm0_2
            zmm2[0] = zmm2[0] f+ zmm1_1 * zmm1_1
            float zmm4[0x4]
            
            if (zmm2[0] f<= 9.99999994e-09f)
                zmm4 = zmm6
            else
                zmm4 = _mm_sqrt_ss(zx.o(0)[0], zmm2[0])
            
            zmm1_1 = var_c8.d
            arg4 = _mm_max_ss(arg4.d, zmm5[0])
            zmm2 = var_c8:4.d
            zmm2[0] = zmm2[0] f- *(rbx_1 + rax_6 + 0x34)
            zmm1_1 = zmm1_1 f- *(rbx_1 + rax_6 + 0x30)
            zmm0_2 = rax_2 f- *(rbx_1 + rax_6 + 0x38)
            arg4 = _mm_max_ss(arg4.d, zmm4[0])
            zmm2[0] = zmm2[0] f* zmm2[0]
            arg4.d = arg4.d f* zmm9[0]
            zmm2[0] = zmm2[0] f+ zmm1_1 * zmm1_1
            arg4.d = arg4.d f+ var_bc_1
            zmm2[0] = zmm2[0] f+ zmm0_2 * zmm0_2
            arg4.d = arg4.d f+ 9.99999975e-05f
            arg4 = _mm_max_ss(arg4.d, zmm6[0])
            arg4.d = arg4.d f* arg4.d
            
            if (not(zmm2[0] f> arg4.d))
                int64_t rbp_1 = sx.q(arg2[1].d)
                int32_t rax_7 = (rbp_1 + 1).d
                arg2[1].d = rax_7
                
                if (rax_7 s> *(arg2 + 0xc))
                    sub_1405a4cf0(arg2)
                
                *(*arg2 + (rbp_1 << 2)) = i
            
            i += 1
            rbx_1 = &rbx_1[4]
        while (i s< *(arg1 + 0x4a0))
        
        result = arg2

__security_check_cookie(rax_1 ^ &var_e8)
return result
