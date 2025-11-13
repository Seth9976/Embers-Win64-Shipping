// 函数: sub_14267b990
// 地址: 0x14267b990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
uint64_t result = __security_cookie ^ &var_108
uint64_t result_1 = result
int64_t* rbx = arg4
int64_t* var_b8 = rbx
int64_t* r14 = arg1

if (arg1 != 0)
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = muls.dp.d(0x55555556, arg3[1].d)
    float var_d8_1[0x4] = arg2[2]
    int32_t r13_3 = (temp0_1 u>> 0x1f) + temp0_1
    int32_t var_e8_1 = r13_3
    int64_t rax_2 = (*(*arg1 + 0x30))()
    int64_t r8_1 = *r14
    int64_t rax_3 = (*(r8_1 + 0x38))(r14, arg5, r8_1)
    int64_t rdx_1 = *r14
    int64_t rbp_1 = rax_3
    int32_t i = (*(rdx_1 + 0x40))(r14, rdx_1)
    uint64_t j_1 = 0
    result = 0
    int32_t var_e4_1 = 0
    
    if (i != 0)
        float zmm6[0x4]
        float var_58_1[0x4] = zmm6
        float zmm7[0x4]
        float var_68_1[0x4] = zmm7
        float zmm8[0x4]
        float var_78_1[0x4] = zmm8
        
        do
            int64_t r9 = *r14
            void var_a0
            (*(r9 + 0x48))(r14, zx.q(result.d), &var_a0, r9, var_e8_1, i, var_d8_1, arg2, rax_2, 
                var_b8, arg1, rax_3)
            int32_t r14_1 = j_1.d
            int16_t var_90
            uint32_t rcx_4 = zx.d(var_90)
            
            if (j_1.w u< rcx_4.w)
                do
                    bool cond:0_1 = arg6[6].b == 0
                    float zmm4_1[0x4] = *arg2
                    float zmm3[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xc9)
                    int16_t var_8e
                    uint64_t rax_5 = zx.q(*(zx.q(r14_1) + zx.q(var_8e) + rbp_1)) * 3
                    float zmm5_1[0x4] = __mulps_xmmps_memps(
                        _mm_unpacklo_ps(
                            _mm_unpacklo_ps(*(rax_2 + (rax_5 << 2)), 
                                (*(rax_2 + (rax_5 << 2) + 8))[0].q), 
                            _mm_unpacklo_ps(*(rax_2 + (rax_5 << 2) + 4), zx.o(0)[0].q)[0].q), 
                        arg2[2])
                    arg5 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xd2)
                    zmm4_1 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xff)
                    float zmm0[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm5_1, zmm5_1, 0xc9), arg5)
                    float zmm2[0x4] =
                        _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(zmm5_1, zmm5_1, 0xd2), zmm3), zmm0)
                    zmm2 = _mm_add_ps(zmm2, zmm2)
                    zmm4_1 = _mm_mul_ps(zmm4_1, zmm2)
                    zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0xc9)
                    zmm6 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xd2), zmm3)
                    zmm0 = _mm_mul_ps(zmm0, arg5)
                    zmm4_1 = _mm_add_ps(zmm4_1, zmm5_1)
                    zmm6 = __addps_xmmps_memps(_mm_add_ps(_mm_sub_ps(zmm6, zmm0), zmm4_1), arg2[1])
                    var_d8_1[0] = zmm6[0]
                    zmm7 = _mm_shuffle_ps(zmm6, zmm6, 0x55)
                    zmm8 = _mm_shuffle_ps(zmm6, zmm6, 0xaa)
                    var_d8_1[1] = zmm7[0]
                    var_d8_1[2] = zmm8[0]
                    
                    if (cond:0_1)
                        arg5 = zx.o(var_d8_1[0].q)
                        float rax_6 = var_d8_1[2]
                        *(arg6 + 0xc) = arg5.q
                        *arg6 = arg5.q
                        arg6[5] = rax_6
                        arg6[2] = rax_6
                        arg6[6].b = 1
                    else
                        arg5 = arg6[1]
                        zmm0 = __minss_xmmss_memss(zmm6[0], *arg6)
                        arg5 = _mm_min_ss(arg5[0], zmm7[0])
                        *arg6 = zmm0[0]
                        zmm0 = __minss_xmmss_memss(zmm8[0], arg6[2])
                        arg6[1] = arg5[0]
                        arg5 = __maxss_xmmss_memss(zmm6[0], arg6[3])
                        arg6[2] = zmm0[0]
                        zmm0 = arg6[4]
                        arg6[3] = arg5[0]
                        zmm0 = _mm_max_ss(zmm0[0], zmm7[0])
                        arg5 = _mm_max_ss(arg6[5][0], zmm8[0])
                        arg6[4] = zmm0[0]
                        arg6[5] = arg5[0]
                    
                    int64_t rbp_2 = sx.q(arg3[1].d)
                    int32_t rax_7 = (rbp_2 + 1).d
                    arg3[1].d = rax_7
                    
                    if (rax_7 s> *(arg3 + 0xc))
                        sub_1406105e0(arg3)
                    
                    *(*arg3 + (rbp_2 << 2)) = zmm6[0]
                    int64_t rbp_3 = sx.q(arg3[1].d)
                    int32_t rax_9 = (rbp_3 + 1).d
                    arg3[1].d = rax_9
                    
                    if (rax_9 s> *(arg3 + 0xc))
                        sub_1406105e0(arg3)
                    
                    *(*arg3 + (rbp_3 << 2)) = zmm7[0]
                    int64_t rbp_4 = sx.q(arg3[1].d)
                    int32_t rax_11 = (rbp_4 + 1).d
                    arg3[1].d = rax_11
                    
                    if (rax_11 s> *(arg3 + 0xc))
                        sub_1406105e0(arg3)
                    
                    r14_1 += 1
                    *(*arg3 + (rbp_4 << 2)) = zmm8[0]
                    rcx_4 = zx.d(var_90)
                while (r14_1 u< rcx_4)
                
                rbx = var_b8
                r13_3 = var_e8_1
            
            uint32_t rax_13 = zx.d(rcx_4.w)
            
            if (rax_13 != 2)
                int32_t r14_2 = r13_3 + 1
                j_1 = zx.q(rax_13 - 2)
                uint64_t j
                
                do
                    int64_t rbp_5 = sx.q(rbx[1].d)
                    int32_t rax_15 = (rbp_5 + 1).d
                    rbx[1].d = rax_15
                    
                    if (rax_15 s> *(rbx + 0xc))
                        sub_1405a4cf0(rbx)
                    
                    *(*rbx + (rbp_5 << 2)) = r13_3
                    int64_t rbp_6 = sx.q(rbx[1].d)
                    int32_t rax_17 = (rbp_6 + 1).d
                    rbx[1].d = rax_17
                    
                    if (rax_17 s> *(rbx + 0xc))
                        sub_1405a4cf0(rbx)
                    
                    *(*rbx + (rbp_6 << 2)) = r14_2 + 1
                    int64_t rbp_7 = sx.q(rbx[1].d)
                    int32_t rax_19 = (rbp_7 + 1).d
                    rbx[1].d = rax_19
                    
                    if (rax_19 s> *(rbx + 0xc))
                        sub_1405a4cf0(rbx)
                    
                    *(*rbx + (rbp_7 << 2)) = r14_2
                    r14_2 += 1
                    j = j_1
                    j_1 -= 1
                while (j != 1)
                rcx_4 = zx.d(var_90)
            
            r14 = arg1
            rbp_1 = rax_3
            r13_3 += zx.d(rcx_4.w)
            result = zx.q(var_e4_1 + 1)
            var_e8_1 = r13_3
            var_e4_1 = result.d
        while (result.d u< i)

__security_check_cookie(result_1 ^ &var_108)
return result
