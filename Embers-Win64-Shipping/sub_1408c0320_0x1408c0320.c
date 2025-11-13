// 函数: sub_1408c0320
// 地址: 0x1408c0320
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(*(arg1 + 0xc8))
int128_t zmm6
int128_t var_18 = zmm6
uint128_t zmm7
uint128_t var_28 = zmm7

if (result.d == 0 || *(arg1 + 0x281) != 0)
labelid_1:
    result.b = 1
else if (*(arg1 + 0x280) != 0)
label_1408c0390:
    int32_t rsi_1 = 0
    
    if (result.d s<= 0)
    label_1408c044c:
        result.b = 1
    else
        int64_t rbp_1 = *(arg1 + 0xc0)
        int64_t* rbx_1 = nullptr
        
        while (true)
            if (*(rbx_1 + rbp_1 + 0x40) != 0)
                double zmm0_1[0x2] = zx.o(0)
                void arg_8
                int64_t rcx_2 = *sub_140b21590(&arg_8) - *(rbx_1 + rbp_1 + 8)
                rbp_1 = *(arg1 + 0xc0)
                zmm0_1[0] = float.d(rcx_2)
                void* r9_1 = *(rbx_1 + rbp_1)
                int64_t result_1 = sx.q(data_143982b28)
                result = zx.q(*(r9_1 + 0xd638))
                zmm0_1[0] = zmm0_1[0] f* 0x3e7ad7f29abcaf49
                int32_t temp0_1 = _mm_cvtpd_ps(zmm0_1)
                void* r8_1
                
                if (result.d s<= 0 || result_1.d s< 0 || result_1.d s>= result.d)
                label_1408c0427:
                    r8_1 = r9_1
                else
                    int64_t rdx_1 = *(r9_1 + 0xd630)
                    result = result_1
                    r8_1 = *(rdx_1 + (result_1 << 3))
                    
                    if (r8_1 == 0)
                        while (*(rdx_1 + (result << 3)) == 0)
                            result_1 = zx.q(result_1.d - 1)
                            uint64_t result_2 = result
                            result -= 1
                            
                            if (result_2 - 1 s< 0)
                                goto label_1408c0427
                        
                        r8_1 = *(rdx_1 + (sx.q(result_1.d) << 3))
                
                zmm0_1 = *(r8_1 + 0x38)
                
                if (not(temp0_1 f< zmm0_1[0].d) && not(zmm0_1[0].d f== -1f))
                    rsi_1 += 1
                    rbx_1 = &rbx_1[0xa]
                    
                    if (rsi_1 s>= *(arg1 + 0xc8))
                        goto label_1408c044c_2
                    
                    continue
            
            result.b = 0
            break
else if (*(arg1 + 0x282) != 0)
label_1408c044c_1:
    result.b = 1
else
    int32_t zmm1 = *(arg1 + 0xd0)
    
    if (not(zmm1 f<= *(arg1 + 0xc)) && not(zmm1 f<= 0f))
        goto label_1408c0390
    
label_1408c044c_2:
    result.b = 1

return result
