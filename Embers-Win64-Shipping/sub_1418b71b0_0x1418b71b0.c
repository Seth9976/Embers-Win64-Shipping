// 函数: sub_1418b71b0
// 地址: 0x1418b71b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t performanceCount
void* result = QueryPerformanceCounter(&performanceCount)
int64_t rdx = sx.q(*(arg1 + 0x30))
int128_t zmm0
zmm0.q = float.d(performanceCount)
zmm0.q = zmm0.q f* data_143d796f8
zmm0.q = zmm0.q f+ 16777216.0
int128_t zmm6
zmm6.q = zmm0.q f- *(arg1 + 0xb0)
*(arg1 + 0xb0) = zmm0.q

if (rdx.d s>= 0)
    int32_t r8_1 = *(arg1 + 0x28)
    
    if (rdx.d s< r8_1)
        result = *(arg1 + 0x20)
        int64_t* rdi_1 = *(result + rdx * 0x10)
        
        if (rdi_1 != 0)
            if (rdx.d s< 0 || rdx.d s>= r8_1)
                rdi_1 = nullptr
            
            if (*(arg1 + 0x50) != 0)
                result = *(arg1 + 0x58)
                
                if (result != 0 && *(result + 8) s> 0 && *(arg1 + 0x60) != 0)
                    result = (*(*rdi_1 + 0x40))(rdi_1)
                    
                    if (result.b == 0)
                        data_14399fa54 += 1
                        int512_t zmm1_1
                        double zmm6_1[0x2]
                        zmm1_1, zmm6_1 = sub_1419668e0(&data_143f02b98)
                        int64_t rax_1 = *rdi_1
                        zmm1_1.o = _mm_cvtpd_ps(zmm6_1)
                        (*(rax_1 + 0x28))(rdi_1, zmm1_1)
                        int128_t zmm2_1
                        int128_t zmm3_1
                        zmm2_1, zmm3_1 = sub_14196d390(&data_143f02b98)
                        int32_t rbx_1 = data_143f029c8
                        sub_140b34200("FlushRHIThreadFlushResourcesTotal", rbx_1)
                        
                        if (data_143f02bac u> 0)
                            j_sub_14196ef60(&data_143f02b88, &data_143f02b98, zmm2_1, zmm3_1)
                        
                        sub_14198b230()
                        sub_14198b3f0()
                        int64_t rdx_2
                        rdx_2.b = 1
                        sub_14198b7d0()
                        sub_141971910()
                        sub_1419712f0(0)
                        return sub_140b38680("FlushRHIThreadFlushResourcesTotal", rbx_1)

return result
