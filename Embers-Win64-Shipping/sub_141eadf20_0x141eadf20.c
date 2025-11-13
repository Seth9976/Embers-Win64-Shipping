// 函数: sub_141eadf20
// 地址: 0x141eadf20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_148
uint64_t result = __security_cookie ^ &var_148
uint64_t result_1 = result
void* rcx = arg1[0x50]

if (rcx != 0)
    result = sub_141f3b9f0(rcx)
    
    if (result != 0)
        result = sub_141e04a20(sub_141f3b9f0(arg1[0x50]))
        int64_t* result_2 = result
        
        if (result != 0 && arg1[0x51] != 0 && arg1[0x50] != 0)
            int32_t r13_1 = arg1[0x83].d
            int32_t i_3 = r13_1 - 1
            int64_t i_2 = sx.q(i_3)
            
            if (r13_1 - 1 s>= 0)
                uint32_t zmm6[0x4]
                uint32_t var_38_1[0x4] = zmm6
                uint32_t zmm7[0x4]
                uint32_t var_48_1[0x4] = zmm7
                int64_t rsi_2 = i_2 * 0xa0
                int64_t i
                
                do
                    i = i_2
                    int64_t rbx_1 = arg1[0x82]
                    zmm6 = *(rsi_2 + rbx_1)
                    result = (*(*arg1 + 0x150))(arg1)
                    uint128_t zmm0
                    zmm0.d = (*(result + 0x520)).d f- zmm6[0]
                    
                    if (not(zmm0.d f> 0.5f))
                        result = *(rsi_2 + rbx_1 + 0x10)
                        
                        if (result != 0)
                            void* r14_1 = *result_2
                            
                            if (result == r14_1)
                                uint32_t zmm1[0x4] = result_2[0x25].d
                                zmm6 = *(rsi_2 + rbx_1 + 0x18)
                                zmm1[0] = zmm1[0] f- zmm6[0]
                                result = sub_141e245a0(r14_1, zmm1[0])
                                int32_t var_e8 = result.d
                                
                                if (result.d != 0xffffffff)
                                    int32_t rax_4 = sub_141e23cd0(result_2, &var_e8)
                                    result = sub_141e245a0(r14_1, zmm6[0])
                                    int32_t rdx_2 = var_e8
                                    bool var_118_1 = result.d == rdx_2
                                    
                                    if (rax_4 == rdx_2)
                                        zmm6 = _mm_and_ps(zmm1, 0x7fffffff)
                                        zmm0, result = sub_141e246e0(r14_1, rdx_2)
                                        zmm0.d = zmm0.d f* 0.5f
                                    
                                    if (rax_4 != rdx_2 || zmm6[0] f<= zmm0.d)
                                        result.b = 0
                                    else
                                        result.b = 1
                                    
                                    if (var_118_1 != 0 && result.b == 0)
                                        zmm1[0] = zmm1[0] f* *(result_2 + 0x12c)
                                        
                                        if (zmm1[0] f>= 0f)
                                            if (i_3 != 0xffffffff)
                                                void* rcx_8 = arg1[0x26]
                                                int64_t i_1
                                                int64_t* rax_5
                                                
                                                if (rcx_8 == 0)
                                                    int32_t var_100_1 = data_143dbb200
                                                    rax_5 = &i_1
                                                    i_1 = data_143dbb1f8.q
                                                else
                                                    zmm1 = *(rcx_8 + 0x1d0)
                                                    rax_5 = &i
                                                    i.d = zmm1[0]
                                                    zmm0 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
                                                    uint32_t var_f0_1 =
                                                        _mm_shuffle_ps(zmm1, zmm1, 0xaa)[0]
                                                    i:4.d = zmm0.d
                                                
                                                int32_t rax_7 = rax_5[1].d
                                                uint64_t var_e0 = *rax_5
                                                
                                                if (rcx_8 == 0)
                                                    zmm0 = data_142d3f660
                                                else
                                                    zmm0 = *(rcx_8 + 0x1c0)
                                                
                                                i_1.o = zmm0
                                                uint128_t var_c8 = i_1.o
                                                void* rbx_5 = sx.q(i_3) * 0xa0 + arg1[0x82]
                                                char rax_9
                                                uint32_t zmm9_1[0x4]
                                                rax_9, zmm9_1 = sub_141eabc30(arg1, rbx_5)
                                                
                                                if (rax_9 != 0)
                                                    uint32_t zmm3_1[0x4] = result_2[0x25].d
                                                    uint32_t zmm2_1[0x4] = *(rbx_5 + 0x18)
                                                    zmm3_1[0] = zmm3_1[0] f- zmm2_1[0]
                                                    
                                                    if (not(_mm_and_ps(zmm3_1, zmm9_1)[0]
                                                            f<= 9.99999975e-05f))
                                                        void var_b8
                                                        uint32_t zmm9_2[0x4]
                                                        zmm6, zmm9_2 = sub_141e1fec0(*result_2, 
                                                            &var_b8, zmm2_1, zmm3_1)
                                                        int64_t* rcx_11 = arg1[0x51]
                                                        
                                                        if (rcx_11 != 0)
                                                            uint32_t zmm1_1[0x4] =
                                                                *(result_2 + 0x12c)
                                                            
                                                            if (not(_mm_and_ps(zmm1_1, zmm9_2)[0]
                                                                    f<= 9.99999994e-09f))
                                                                zmm6[0] = zmm6[0] f/ zmm1_1[0]
                                                                sub_141ef88d0(rcx_11, zmm6, &var_b8)
                                                                void* rax_10 = arg1[0x26]
                                                                float var_100_2
                                                                float zmm0_3[0x4]
                                                                
                                                                if (rax_10 == 0)
                                                                    float rax_11 = data_143dbb200
                                                                    i_1 = data_143dbb1f8.q
                                                                    var_100_2 = rax_11
                                                                else
                                                                    float zmm1_2[0x4] = *(rax_10 + 0x1d0)
                                                                    i_1.d = zmm1_2[0]
                                                                    zmm0_3 =
                                                                        _mm_shuffle_ps(zmm1_2, zmm1_2, 0x55)
                                                                    var_100_2 =
                                                                        _mm_shuffle_ps(zmm1_2, zmm1_2, 0xaa)[0]
                                                                    i_1:4.d = zmm0_3[0]
                                                                
                                                                i = i_1
                                                                void* rax_13 = arg1[0x51]
                                                                *(rax_13 + 0x1f1) &= 0x7f
                                                                char rcx_12
                                                                
                                                                if (var_e0.d[0] f!= i.d
                                                                        || var_e0:4.d[0] f!= i:4.d
                                                                        || rax_7[0] != var_100_2)
                                                                    rcx_12 = 0x20
                                                                else
                                                                    rcx_12 = 0
                                                                
                                                                void* rax_14 = arg1[0x51]
                                                                *(rax_14 + 0x387) |= rcx_12
                                                                void* rax_15 = arg1[0x26]
                                                                
                                                                if (rax_15 == 0)
                                                                    zmm0_3 = data_142d3f660
                                                                else
                                                                    zmm0_3 = *(rax_15 + 0x1c0)
                                                                
                                                                i_1.o = zmm0_3
                                                                int64_t* rcx_14 = arg1[0x51] + 0x140
                                                                i_1.o = i_1.o
                                                                (*(*rcx_14 + 0x20))(rcx_14, &var_e0, 
                                                                    &var_c8, &i, &i_1)
                                                
                                                result = sub_141eaa890(&arg1[0x82], 0, i_3 + 1, 1)
                                            
                                            break
                    
                    i_3 -= 1
                    i_2 -= 1
                    rsi_2 -= 0xa0
                while (i s> 0)

__security_check_cookie(result_1 ^ &var_148)
return result
