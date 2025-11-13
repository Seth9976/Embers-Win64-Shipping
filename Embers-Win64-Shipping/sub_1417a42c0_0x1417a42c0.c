// 函数: sub_1417a42c0
// 地址: 0x1417a42c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
int64_t rbp = sx.q(arg2)
int64_t* rbx = *(*arg1[1] + (sx.q(**arg1 + rbp.d) << 3))
void* rsi = *rbx
int64_t rcx = sx.q(rbx[1].d)
void* result = *(rsi + 0x320)

if (*(result + (rcx << 3)) != 0)
    uint64_t rsi_1 = *(rsi + 0x28)
    int64_t rdi_1 = rcx * 3
    result = _isnan(_mm_cvtps_pd((*(rsi_1 + (rdi_1 << 2))).q).q)
    
    if (result.d == 0)
        result = _isnan(_mm_cvtps_pd((*(rsi_1 + (rdi_1 << 2) + 4)).q).q)
        
        if (result.d == 0)
            result = _isnan(_mm_cvtps_pd((*(rsi_1 + (rdi_1 << 2) + 8)).q).q)
            
            if (result.d == 0)
                int64_t rax_4 = *rbx
                int64_t rcx_1 = sx.q(rbx[1].d)
                float zmm3[0x4] = *(rsi_1 + (rdi_1 << 2))
                float zmm2[0x4] = _mm_unpacklo_ps(*(rsi_1 + (rdi_1 << 2) + 4), 0)
                float (* rcx_4)[0x4] = arg1[2]
                int128_t var_c8 = *((rcx_1 << 4) + *(rax_4 + 0x68))
                zmm3 = _mm_unpacklo_ps(zmm3, (*(rsi_1 + (rdi_1 << 2) + 8)).q)
                int128_t zmm0 = data_14399f670
                float var_b8_1[0x4] = _mm_unpacklo_ps(zmm3, zmm2[0].q)
                float var_a8_1[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(data_14399f668, zmm0.q), 
                    _mm_unpacklo_ps(data_14399f66c, 0)[0].q)
                float var_98[0x3][0x4]
                float (* rax_5)[0x4]
                int64_t zmm6_1
                rax_5, zmm6_1 = sub_140ad7d70(rcx_4, &var_98, &var_c8)
                rsi_1.b = 0
                int32_t rdi_2 = 0
                float zmm7_1[0x4] = *rax_5
                float zmm8_1[0x4] = rax_5[1]
                
                while (true)
                    result = *rbx
                    void* r8_4 = *(*(result + 0x320) + (sx.q(rbx[1].d) << 3))
                    float var_d8
                    float var_d0
                    
                    if (rdi_2 u< *(r8_4 + 0x18))
                        float zmm1_1[0x4] = _mm_shuffle_ps(zmm7_1, zmm7_1, 0xd2)
                        float zmm3_1[0x4] = _mm_shuffle_ps(zmm7_1, zmm7_1, 0xc9)
                        int64_t rcx_6 = sx.q(rdi_2) * 3
                        int64_t rax_7 = *(r8_4 + 0x28)
                        float (* rax_8)[0x4] = arg1[4]
                        float zmm5_1[0x4] = _mm_unpacklo_ps(
                            _mm_unpacklo_ps(*(rax_7 + (rcx_6 << 2)), 
                                (*(rax_7 + (rcx_6 << 2) + 8))[0].q), 
                            _mm_unpacklo_ps(*(rax_7 + (rcx_6 << 2) + 4), zmm6_1)[0].q)
                        float zmm0_1[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm5_1, zmm5_1, 0xc9), zmm1_1)
                        float zmm2_1[0x4] = _mm_sub_ps(
                            _mm_mul_ps(_mm_shuffle_ps(zmm5_1, zmm5_1, 0xd2), zmm3_1), zmm0_1)
                        zmm2_1 = _mm_add_ps(zmm2_1, zmm2_1)
                        zmm0_1 = _mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0xc9), zmm1_1)
                        float zmm4_1[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0xd2), zmm3_1)
                        zmm3_1 = *rax_8
                        int64_t* rax_9 = arg1[3]
                        zmm4_1 = _mm_add_ps(
                            _mm_add_ps(_mm_sub_ps(zmm4_1, zmm0_1), 
                                _mm_add_ps(
                                    _mm_mul_ps(_mm_shuffle_ps(zmm7_1, zmm7_1, 0xff), zmm2_1), 
                                    zmm5_1)), 
                            zmm8_1)
                        zmm3_1[0] = zmm3_1[0] * zmm4_1[0]
                        zmm0_1 = zmm4_1
                        zmm0_1[0] = zmm0_1[0] - zmm3_1[0]
                        zmm1_1 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0x55)
                        zmm4_1 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xaa)
                        zmm3_1[0] = zmm3_1[0] * zmm4_1[0]
                        var_d8 = zmm0_1[0]
                        zmm3_1[0] = zmm3_1[0] * zmm1_1[0]
                        zmm4_1[0] = zmm4_1[0] - zmm3_1[0]
                        zmm1_1[0] = zmm1_1[0] - zmm3_1[0]
                        var_d0 = zmm4_1[0]
                        float var_d4_1 = zmm1_1[0]
                        int64_t* rax_10 = *rax_9
                        sub_1417562d0(*(*(*rax_10 + 0x80) + (sx.q(rax_10[1].d) << 3)), &var_d8)
                        rsi_1 = zx.q(rsi_1.b)
                        
                        if (zmm0_1[0] f< zmm6_1.d)
                            rsi_1 = 1
                        
                        rdi_2 += 1
                        
                        if (rsi_1.b == 0)
                            continue
                    else if (rsi_1.b == 0)
                        break
                    
                    var_d0.q = rbx
                    var_d8.q = *arg1[3]
                    int64_t* rbx_3 = (rbp << 4) + *arg1[5]
                    int64_t rdi_3 = sx.q(rbx_3[1].d)
                    int32_t rax_14 = (rdi_3 + 1).d
                    rbx_3[1].d = rax_14
                    
                    if (rax_14 s> *(rbx_3 + 0xc))
                        sub_1405a4f90(rbx_3)
                    
                    result = *rbx_3
                    *(result + rdi_3 * 0x10) = var_d8.o
                    break

__security_check_cookie(rax_1 ^ &var_f8)
return result
