// 函数: sub_140778ca0
// 地址: 0x140778ca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm6[0x4] = arg2
float zmm0[0x4] = sub_140b33630("Niagara")
arg1[0x81]
int32_t rcx_1 = *(arg1 + 0x57c)

if ((rcx_1.b & 1) == 0)
    void* rdx_3 = arg1[0xa5]
    
    if (rdx_3 != 0)
        char rax_2 = *(arg1 + 0x8a)
        char rcx_4 = rax_2
        
        if ((rax_2 & 1) == 0 && *(arg1 + 0x89) s< 0 && ((*(rdx_3 + 0x6b8) u>> 9).b & 1) != 0)
            (*(*arg1 + 0x268))(arg1, 0)
            rcx_4 = *(arg1 + 0x8a)
        
        if ((rcx_4 & 1) != 0)
            void* rax_6 = arg1[0xa5]
            
            if (rax_6 != 0 && *(rax_6 + 0x6e8) - 3 u> 1)
                arg1[0x81]
                float zmm7[0x4]
                uint128_t zmm8
                
                if ((arg1[0x99].b & 2) != 0)
                    zmm6, zmm7, zmm8 = sub_140859420(arg1[0xa5], 2, zmm0[0])
                
                uint32_t rax_10 = zx.d(arg1[0xa6].b)
                float var_28_1[0x4] = zmm7
                
                if (rax_10.b == 0)
                    int64_t* var_50
                    sub_14084b3a0(arg1[0xa5], zmm6, sub_1423c0d30(arg4, &var_50))
                    int64_t* rcx_10 = var_50
                    
                    if (rcx_10 != 0)
                        rcx_10[9].d -= 1
                        
                        if (rcx_10[9].d == 1)
                            sub_140a2f6e0(rcx_10)
                else
                    float zmm1[0x4]
                    
                    if (rax_10.b == 1)
                        zmm7 = zx.o(0)
                        void* rsi_1 = arg1[0xa5]
                        zmm6 = _mm_max_ss((*(arg1 + 0x534))[0], zmm7[0])
                        zmm6[0] = zmm6[0] f- *(rsi_1 + 0x3c)
                        zmm0 = __andps_xmmxud_memxud(zmm6, data_142d3f770)
                        
                        if (zmm0[0] < 9.99999975e-05f)
                            arg1[0xa9].b = 0
                        else
                            zmm6[0] - zmm7[0]
                            bool cond:0_1 = zmm6[0] <= zmm7[0]
                            
                            if (not(zmm6[0] >= zmm7[0]))
                                rax_10, zmm7, zmm8 = sub_140859420(rsi_1, 0, zmm0[0])
                                rsi_1 = arg1[0xa5]
                                zmm6 = *(arg1 + 0x534)
                                zmm6[0] = zmm6[0] f- *(rsi_1 + 0x3c)
                                cond:0_1 = zmm6[0] <= zmm7[0]
                            
                            if (cond:0_1 || rsi_1 == 0)
                                arg1[0xa9].b = 0
                            else
                                int64_t rbp_1 = *(rsi_1 + 0x18)
                                int64_t* rsi_2 = *(rsi_1 + 0x20)
                                
                                if (rsi_2 != 0)
                                    rsi_2[1].d += 1
                                
                                if (rsi_2 != 0)
                                    rsi_2[1].d -= 1
                                    
                                    if (rsi_2[1].d == 1)
                                        (**rsi_2)(rsi_2)
                                        int32_t rax_13 = *(rsi_2 + 0xc)
                                        *(rsi_2 + 0xc) -= 1
                                        
                                        if (rax_13 == 1)
                                            (*(*rsi_2 + 8))(rsi_2, 1)
                                
                                if (rbp_1 == 0)
                                    arg1[0xa9].b = 0
                                else
                                    uint128_t var_38_1 = zmm8
                                    int64_t performanceCount
                                    QueryPerformanceCounter(&performanceCount)
                                    zmm6[0] = zmm6[0] f/ arg1[0xa8].d
                                    zmm7 = zx.o(0)
                                    zmm7[0].q = float.d(performanceCount)
                                    zmm6[0] = zmm6[0] + zmm6[0]
                                    zmm7[0].q = zmm7[0].q f* data_143d796f8
                                    zmm6[0] = zmm6[0] - 0.5f
                                    zmm7[0].q = zmm7[0].q f+ 0x4170000000000000
                                    zmm1 = zmm7
                                    int32_t i = int.d(zmm6[0]) s>> 1
                                    
                                    while (i s> 0)
                                        zmm1[0].q = zmm1[0].q f- zmm7[0].q
                                        zmm0 = _mm_cvtps_pd((*(arg1 + 0x544))[0].q)
                                        
                                        if (zmm1[0].q f>= zmm0[0].q)
                                            break
                                        
                                        zmm1 = arg1[0xa8].d
                                        void* rcx_15 = arg1[0xa5]
                                        int64_t* var_70 = nullptr
                                        zmm7, zmm8 = sub_14084b3a0(rcx_15, zmm1, &var_70)
                                        int64_t* rcx_16 = var_70
                                        
                                        if (rcx_16 != 0)
                                            rcx_16[9].d -= 1
                                            
                                            if (rcx_16[9].d == 1)
                                                sub_140a2f6e0(rcx_16)
                                        
                                        int64_t performanceCount_1
                                        QueryPerformanceCounter(&performanceCount_1)
                                        zmm1 = zx.o(0)
                                        i -= 1
                                        zmm1[0].q = float.d(performanceCount_1)
                                        zmm1[0].q = zmm1[0].q f* data_143d796f8
                                        zmm1[0].q = zmm1[0].q f+ zmm8.q
                                    
                                    if (i == 0)
                                        arg1[0xa9].b = 0
                    else if (rax_10.b == 2)
                        zmm1 = *(arg1 + 0x534)
                        zmm0 = zx.o(0)
                        zmm1[0] = zmm1[0] f- arg1[0xa7].d
                        float zmm2[0x4] = arg1[0xa8].d
                        int64_t* rcx_20
                        
                        if (zmm1[0] >= zmm0[0])
                            void* rcx_21 = arg1[0xa5]
                            zmm2[0] = zmm2[0] * 5f
                            
                            if (zmm1[0] >= zmm2[0])
                                sub_140859420(rcx_21, 0, zmm2[0])
                                int128_t zmm1_2 = arg1[0xa8].d
                                void* rcx_22 = arg1[0xa5]
                                int64_t* var_58 = nullptr
                                sub_14084b3a0(rcx_22, zmm1_2, &var_58)
                                rcx_20 = var_58
                            else
                                zmm2[0] = zmm2[0] + zmm2[0]
                                int64_t* var_60 = nullptr
                                sub_14084b3a0(rcx_21, _mm_min_ss(zmm2[0], zmm1[0]), &var_60)
                                rcx_20 = var_60
                            
                            goto label_140779093
                        
                        if (not(__andps_xmmxud_memxud(zmm1, data_142d3f770)[0] < zmm2[0]))
                            sub_140859420(arg1[0xa5], 0, zmm0[0])
                            int128_t zmm1_1 = arg1[0xa8].d
                            void* rcx_19 = arg1[0xa5]
                            int64_t* var_68 = nullptr
                            sub_14084b3a0(rcx_19, zmm1_1, &var_68)
                            rcx_20 = var_68
                        label_140779093:
                            
                            if (rcx_20 != 0)
                                rcx_20[9].d -= 1
                                
                                if (rcx_20[9].d == 1)
                                    sub_140a2f6e0(rcx_20)
                        
                        arg1[0xa7].d = *(arg1 + 0x534)
                
                void* rcx_23 = arg1[0x7d]
                
                if (rcx_23 != 0)
                    if ((*(arg1 + 0x54c) & 2) == 0 || (*(arg1 + 0x53c) == 0 && arg1[0xa9].b != 0))
                        rax_10.b = 0
                    else
                        rax_10.b = 1
                    
                    *(rcx_23 + 0x198) = rax_10.b
else
    (*(*arg1 + 0x268))(arg1, zx.q((rcx_1 u>> 1).b) & 1)

return sub_140b37f60("Niagara") __tailcall
