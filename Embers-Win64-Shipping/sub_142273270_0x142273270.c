// 函数: sub_142273270
// 地址: 0x142273270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_228
int64_t rax_1 = __security_cookie ^ &var_228
float zmm2[0x4] = *arg3
uint64_t result_1 = arg1
float zmm3[0x4] = arg3[1]
uint64_t result = *(arg1 + 0xa0)
float var_1bc = _mm_shuffle_ps(zmm2, zmm2, 0x55)[0]
float var_1c0 = zmm2[0]

if (result != 0)
    result_1 = result

float temp0_1[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0x55)
float var_1b0 = zmm3[0]
float temp0_2[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
float temp0_3[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
float temp0_4[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xff)
float var_1a8 = temp0_3[0]
float var_1b8 = temp0_2[0]
float var_1b4 = temp0_4[0]
float var_1ac = temp0_1[0]
int64_t* rcx = *(result_1 + 0xf0)

if (rcx != 0)
    result = (*(*rcx + 0xc8))(rcx)

if (rcx == 0 || result.d == 0)
    result.b = 0
else
    int64_t rbx_1 = 0
    void* var_68_1 = nullptr
    int32_t var_60_1 = 0
    int32_t var_5c_1 = 0x20
    void var_168
    int32_t rax_3 = sub_142215230(&var_168, result_1 + 0xf0)
    
    if (rax_3 s<= 0)
    label_1422734bc:
        rbx_1.b = 0
    else
        while (true)
            void* rcx_2 = &var_168
            
            if (var_68_1 != 0)
                rcx_2 = var_68_1
            
            int64_t* r14_1 = *(rcx_2 + (rbx_1 << 3))
            void* rdi_1 = rcx_2 + (rbx_1 << 3)
            
            if (sub_14221b2d0(result_1, rdi_1) != 0)
                float var_198[0x3][0x4]
                float (* rax_6)[0x4] = sub_14226ecf0(&var_198, rdi_1)
                float zmm2_1[0x4] = *rax_6
                float zmm3_1[0x4] = rax_6[1]
                int64_t rax_7 = *r14_1
                float var_1e4_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55)[0]
                float temp0_6[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0x55)
                float temp0_7[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa)
                float var_1e8 = zmm2_1[0]
                float var_1d8_1 = zmm3_1[0]
                float temp0_8[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xaa)
                float temp0_9[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xff)
                float var_1d0_1 = temp0_8[0]
                float var_1e0_1 = temp0_7[0]
                float var_1dc_1 = temp0_9[0]
                float var_1d4_1 = temp0_6[0]
                class physx::PxGeometry* rax_8 = (*(rax_7 + 0x40))(r14_1, &var_198)
                int32_t var_1f8
                float var_1c8
                
                if (arg4 == 0)
                    if (physx::PxGeometryQuery::overlap(arg2, &var_1c0, rax_8, &var_1e8) != 0)
                        rbx_1.b = 1
                        break
                else if (physx::PxGeometryQuery::computePenetration(&var_1f8, &var_1c8, arg2, 
                        &var_1c0, rax_8, &var_1e8) != 0)
                    float zmm0_1[0x4]
                    float zmm1_1[0x4]
                    
                    if ((_fpclass(_mm_cvtps_pd(var_1f8[0].q)[0].q) & 0x207) != 0)
                    label_1422734ec:
                        zmm0_1 = zx.o(0)
                        zmm1_1 = zx.o(0)
                        zmm2_1 = zx.o(0)
                    else
                        int32_t var_1f4
                        
                        if ((_fpclass(_mm_cvtps_pd(var_1f4[0].q)[0].q) & 0x207) != 0)
                            goto label_1422734ec
                        
                        int32_t var_1f0
                        
                        if ((_fpclass(_mm_cvtps_pd(var_1f0[0].q)[0].q) & 0x207) != 0)
                            goto label_1422734ec
                        
                        zmm0_1 = var_1f0
                        zmm2_1 = var_1f4
                        zmm1_1 = var_1f8
                    
                    float var_1f0_1 = zmm0_1[0]
                    *arg4 = (_mm_unpacklo_ps(zmm1_1, zmm2_1[0].q)).q
                    *(arg4 + 0xc) = __andps_xmmxud_memxud(var_1c8, data_142d3f770)[0]
                    arg4[1].d = var_1f0_1
                    rbx_1.b = 1
                    break
            
            rbx_1 += 1
            
            if (rbx_1 s>= sx.q(rax_3))
                goto label_1422734bc
    
    if (var_68_1 != 0)
        sub_140a74f90(var_68_1)
    
    result = zx.q(rbx_1.b)

__security_check_cookie(rax_1 ^ &var_228)
return result
