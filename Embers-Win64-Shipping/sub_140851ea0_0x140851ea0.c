// 函数: sub_140851ea0
// 地址: 0x140851ea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t* result = __security_cookie ^ &var_e8
int64_t* result_2 = result

if ((*(arg1 + 0x6b8) & 0x800) == 0)
    void* rcx = *(arg1 + 0x28)
    
    if (rcx != 0)
        void* rax_1 = *(rcx + 0xa8)
        
        if (rax_1 == 0)
            rax_1 = sub_141ee69e0(rcx)
        
        result = sub_140865dd0(rax_1)
        
        if (result != 0)
            void* rcx_2 = *(arg1 + 0x28)
            void* rdi_1 = *(rcx_2 + 0xa8)
            
            if (rdi_1 == 0)
                void* rax_2 = sub_141ee69e0(rcx_2)
                rcx_2 = *(arg1 + 0x28)
                rdi_1 = rax_2
            
            int96_t zmm0 = (*(rcx_2 + 0x1d0)).12
            *(arg1 + 0x44) = 0
            int128_t zmm6
            int128_t var_18_1 = zmm6
            float zmm1
            float zmm2
            float zmm3
            int32_t zmm4
            float zmm5
            
            if (*(result + 0x3ec) == 0)
                if (data_143de5480 != 0)
                    GetCurrentThreadId()
                
                float* var_38_1 = nullptr
                int32_t var_30_1 = 0
                int32_t var_2c_1 = 8
                int64_t* var_b8
                result = sub_1424373a0(rdi_1, &var_b8)
                int32_t rcx_5 = result[1].d
                
                if (rcx_5 s>= 0)
                    result = *result
                
                void var_98
                uint64_t rbx_3
                
                if (rcx_5 s< 0 || rcx_5 s>= result[1].d)
                    rbx_3 = sx.q(*(rdi_1 + 0x110))
                    int64_t rdi_3 = *(rdi_1 + 0x108)
                    var_30_1 = rbx_3.d
                    
                    if (rbx_3.d != 0 || var_2c_1 != 0)
                        sub_14085a0a0(&var_98, rbx_3.d, var_2c_1)
                        float* rcx_14 = &var_98
                        
                        if (var_38_1 != 0)
                            rcx_14 = var_38_1
                        
                        result = memcpy(rcx_14, rdi_3, (rbx_3 * 0xc).d)
                        rbx_3 = zx.q(var_30_1)
                else
                    sub_1424373a0(rdi_1, &var_b8)
                    int32_t result_1
                    result = zx.q(result_1)
                    
                    while (result.d s>= 0)
                        int64_t* rdx_4 = var_b8
                        
                        if (result.d s>= rdx_4[1].d)
                            break
                        
                        int64_t* rax_5 = sub_140d3c6e0(*rdx_4 + (sx.q(result.d) << 3))
                        
                        if (rax_5 != 0 && (*(rax_5 + 0x294) & 2) != 0)
                            int64_t rdx_5 = *rax_5
                            
                            if ((*(rdx_5 + 0x6a8))(rax_5, rdx_5) != 0)
                                int64_t rdi_2 = sx.q(var_30_1)
                                int32_t rax_7 = (rdi_2 + 1).d
                                var_30_1 = rax_7
                                
                                if (rax_7 s> var_2c_1)
                                    sub_14085a560(&var_98, rdi_2.d)
                                
                                float* rdx_7 = &var_98
                                
                                if (var_38_1 != 0)
                                    rdx_7 = var_38_1
                                
                                void var_a8
                                (*(*rax_5 + 0x6f8))(rax_5, &rdx_7[rdi_2 * 3], &var_a8)
                        
                        result = zx.q(result_1 + 1)
                        result_1 = result.d
                    
                    rbx_3 = zx.q(var_30_1)
                
                if (rbx_3.d s> 0)
                    zmm3 = 4.39804651e+12f
                    float* rdx_11 = &var_98
                    
                    if (var_38_1 != 0)
                        rdx_11 = var_38_1
                    
                    result = &rdx_11[sx.q(rbx_3.d) * 3]
                    
                    if (rdx_11 != result)
                        zmm4 = zmm0:8.d
                        zmm5 = zmm0:4.d
                        zmm6 = zmm0.d
                        
                        do
                            zmm2 = rdx_11[1] - zmm5
                            zmm1 = *rdx_11 f- zmm6.d
                            zmm0.d = rdx_11[2].d f- zmm4
                            rdx_11 = &rdx_11[3]
                            zmm0.d = zmm0.d f* zmm0.d
                            zmm3 = _mm_min_ss(zmm2 * zmm2 + zmm1 * zmm1 f+ zmm0.d, zmm3)
                        while (rdx_11 != result)
                    
                    *(arg1 + 0x44) = _mm_sqrt_ss(0, zmm3).d
                
                if (var_38_1 != 0)
                    result = sub_140a74f90(var_38_1)
            else
                void* rax_3 = result[0x8a]
                void* rdx_1 = &result[0x7e]
                
                if (rax_3 != 0)
                    rdx_1 = rax_3
                
                result = sx.q(result[0x8b].d)
                
                if (result.d != 0)
                    zmm3 = 4.39804651e+12f
                    result = rdx_1 + result * 0xc
                    
                    if (rdx_1 != result)
                        zmm4 = zmm0:8.d
                        zmm5 = zmm0:4.d
                        zmm6 = zmm0.d
                        
                        do
                            zmm2 = *(rdx_1 + 4) - zmm5
                            zmm1 = *rdx_1 f- zmm6.d
                            zmm0.d = (*(rdx_1 + 8)).d f- zmm4
                            rdx_1 += 0xc
                            zmm0.d = zmm0.d f* zmm0.d
                            zmm3 = _mm_min_ss(zmm2 * zmm2 + zmm1 * zmm1 f+ zmm0.d, zmm3)
                        while (rdx_1 != result)
                    
                    *(arg1 + 0x44) = _mm_sqrt_ss(0, zmm3).d
            *(arg1 + 0x6b8) |= 0x800
            *(arg1 + 0x44)
else
    *(arg1 + 0x44)

__security_check_cookie(result_2 ^ &var_e8)
return result
