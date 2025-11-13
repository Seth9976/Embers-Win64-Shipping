// 函数: sub_14225c100
// 地址: 0x14225c100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1f8
uint64_t result = __security_cookie ^ &var_1f8
uint64_t result_1 = result
int64_t* rcx = *arg2

if (rcx != 0)
    result = (*(*rcx + 0xc8))(rcx)
    
    if (result.d != 0)
        result = std::operator!=<char,struct std::char_traits<char> >(**arg1 + 0xf8)
        
        if (result.b == 0)
            *arg1[1] = 0
            void* var_58_1 = nullptr
            int32_t var_50_1 = 0
            int32_t var_4c_1 = 0x20
            void var_158
            result = sub_142215230(&var_158, arg2)
            int32_t* rcx_4 = arg1[2]
            int64_t r12_1 = sx.q(result.d)
            int32_t zmm2 = rcx_4[2]
            int128_t zmm1_1 = rcx_4[1]
            int32_t var_1d8 = *rcx_4
            int32_t var_1d4_1 = zmm1_1.d
            int32_t var_1d0_1 = zmm2
            
            if (result.d s> 0)
                int64_t rsi_1 = 0
                
                do
                    void* rcx_5 = &var_158
                    
                    if (var_58_1 != 0)
                        rcx_5 = var_58_1
                    
                    int64_t* r15_1 = rcx_5 + (rsi_1 << 3)
                    result = sub_14221b2d0(**arg1, r15_1)
                    
                    if (result.b != 0)
                        int64_t* rcx_8 = *r15_1
                        float var_188[0x3][0x4]
                        int128_t* rax_6 = (*(*rcx_8 + 0x40))(rcx_8, &var_188)
                        int128_t* rax_7 = j_sub_140a82f30(0x30)
                        int128_t* rbx_1 = rax_7
                        
                        if (rax_7 == 0)
                            rbx_1 = nullptr
                        else
                            *rax_7 = *rax_6
                            rax_7[1] = rax_6[1]
                            rax_7[2] = rax_6[2]
                        
                        j_sub_140a74f90(0)
                        j_sub_140a74f90(0)
                        float (* rax_8)[0x4]
                        int32_t zmm6_1
                        rax_8, zmm6_1 = sub_14226ecf0(&var_188, r15_1)
                        float zmm2_1[0x4] = *rax_8
                        float zmm3_1[0x4] = rax_8[1]
                        float var_1b4_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55)[0]
                        float temp0_2[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0x55)
                        float var_1b8 = zmm2_1[0]
                        float var_1a8_1 = zmm3_1[0]
                        float temp0_3[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa)
                        float temp0_4[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xaa)
                        float temp0_5[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xff)
                        float var_1a0_1 = temp0_4[0]
                        float var_1b0_1 = temp0_3[0]
                        float var_1ac_1 = temp0_5[0]
                        float var_1a4_1 = temp0_2[0]
                        int64_t* rcx_10 = *r15_1
                        char rax_11
                        
                        if (rcx_10 != 0)
                            rax_11 = sub_1417cbbf0((*(*rcx_10 + 0x30))(rcx_10))
                        
                        if (rcx_10 == 0 || rax_11 != 5)
                            *arg1[3] = 1
                            int32_t var_1c8
                            physx::PxGeometryQuery::pointDistance(&var_1d8, rbx_1, &var_1b8, 
                                &var_1c8)
                            int32_t* rax_13
                            
                            if (not(temp0_2[0] f<= zmm6_1))
                                rax_13 = arg1[4]
                            
                            if (not(temp0_2[0] f<= zmm6_1) && not(temp0_2[0] f>= *rax_13))
                                *rax_13 = temp0_2[0]
                                int64_t* rcx_13 = *arg1[5]
                                
                                if (rcx_13 != 0)
                                    int32_t var_1c4
                                    float temp0_6[0x4] = _mm_unpacklo_ps(var_1c8, var_1c4[0].q)
                                    int32_t var_1c0
                                    float var_190_1 = var_1c0[0]
                                    *rcx_13 = temp0_6.q
                                    rcx_13[1].d = var_190_1
                            else if (temp0_2[0] f== zmm6_1)
                                *arg1[4] = 0
                                result = j_sub_140a74f90(rbx_1)
                                break
                        
                        result = j_sub_140a74f90(rbx_1)
                    
                    rsi_1 += 1
                while (rsi_1 s< r12_1)
            
            if (var_58_1 != 0)
                result = sub_140a74f90(var_58_1)

__security_check_cookie(result_1 ^ &var_1f8)
return result
