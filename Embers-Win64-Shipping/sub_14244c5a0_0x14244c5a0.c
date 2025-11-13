// 函数: sub_14244c5a0
// 地址: 0x14244c5a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t result

if (*arg1 == *arg2 && arg1[1] == arg2[1] && arg1[2] == arg2[2])
    uint32_t zmm0[0x4] = arg1[6]
    zmm0[0] = zmm0[0] f- arg2[6]
    
    if (not(_mm_and_ps(zmm0, 0x7fffffff)[0] f> 0.5f))
        zmm0 = arg1[7]
        zmm0[0] = zmm0[0] f- arg2[7]
        
        if (not(_mm_and_ps(zmm0, 0x7fffffff)[0] f> 0.5f))
            zmm0 = arg1[8]
            zmm0[0] = zmm0[0] f- arg2[8]
            
            if (not(_mm_and_ps(zmm0, 0x7fffffff)[0] f> 0.5f))
                zmm0 = arg1[9]
                zmm0[0] = zmm0[0] f- arg2[9]
                
                if (not(_mm_and_ps(zmm0, 0x7fffffff)[0] f> 0.5f))
                    zmm0 = arg1[0xa]
                    zmm0[0] = zmm0[0] f- arg2[0xa]
                    
                    if (not(_mm_and_ps(zmm0, 0x7fffffff)[0] f> 0.5f))
                        zmm0 = arg1[0xb]
                        zmm0[0] = zmm0[0] f- arg2[0xb]
                        
                        if (not(_mm_and_ps(zmm0, 0x7fffffff)[0] f> 0.5f))
                            int16_t* const rsi_1 = &data_142d40450
                            int16_t* rdx
                            
                            if (arg2[0x1c] == 0)
                                rdx = &data_142d40450
                            else
                                rdx = *(arg2 + 0x68)
                            
                            int16_t* const rcx
                            
                            if (arg1[0x1c] == 0)
                                rcx = &data_142d40450
                            else
                                rcx = *(arg1 + 0x68)
                            
                            result = sub_140a54510(rcx, rdx)
                            
                            if (result == 0)
                                int16_t* rdx_1
                                
                                if (arg2[0x10] == result)
                                    rdx_1 = &data_142d40450
                                else
                                    rdx_1 = *(arg2 + 0x38)
                                
                                if (arg1[0x10] != 0)
                                    rsi_1 = *(arg1 + 0x38)
                                
                                if (sub_140a54510(rsi_1, rdx_1) == 0 && arg1[0x15] == arg2[0x15]
                                        && arg1[0x16].b == arg2[0x16].b
                                        && arg1[0x18].b == arg2[0x18].b
                                        && arg1[0x22] == arg2[0x22])
                                    int32_t i_1 = arg1[0x20]
                                    
                                    if (i_1 == arg2[0x20])
                                        uint32_t* rcx_2 = *(arg2 + 0x78)
                                        
                                        if (i_1 != 0)
                                            int32_t* r8_2 = *(arg1 + 0x78) - rcx_2
                                            int32_t i
                                            
                                            do
                                                if (*(r8_2 + rcx_2) != *rcx_2)
                                                    goto label_14244c72e
                                                
                                                rcx_2 = &rcx_2[5]
                                                i = i_1
                                                i_1 -= 1
                                            while (i != 1)
                                        
                                        result.b = 1
                                        return result

label_14244c72e:
result.b = 0
return result
