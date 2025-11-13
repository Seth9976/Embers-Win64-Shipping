// 函数: sub_141965390
// 地址: 0x141965390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result

if (*arg1 == *arg2 && arg1[1] == arg2[1] && arg1[4] == arg2[4] && arg1[5] == arg2[5]
        && arg1[3] == arg2[3] && arg1[2] == arg2[2] && arg1[6] == arg2[6] && arg1[7] == arg2[7]
        && arg1[8] == arg2[8])
    int32_t r9_1 = 0
    void* r8_1 = &arg1[9]
    int32_t r10_1 = 0
    uint64_t* r11_2 = arg2 - arg1
    
    while (*r8_1 == *(r11_2 + r8_1))
        r10_1 += 1
        r8_1 += 8
        
        if (r10_1 u>= 2)
            if (arg1[0xb].d == arg2[0xb].d && *(arg1 + 0x9c) == *(arg2 + 0x9c)
                    && *(arg1 + 0x9d) == *(arg2 + 0x9d) && *(arg1 + 0x9e) == *(arg2 + 0x9e)
                    && *(arg1 + 0x5c) == *(arg2 + 0x5c))
                int32_t r10_2 = 0
                void* r8_2 = &arg1[0xc]
                
                while (*r8_2 == *(r8_2 + r11_2))
                    r10_2 += 1
                    r8_2 += 1
                    
                    if (r10_2 u>= 8)
                        void* r8_3 = &arg1[0xd]
                        
                        while (*r8_3 == *(r8_3 + r11_2))
                            r9_1 += 1
                            r8_3 += 4
                            
                            if (r9_1 u>= 8)
                                if (arg1[0x11].d != arg2[0x11].d || *(arg1 + 0x8c) != *(arg2 + 0x8c)
                                        || arg1[0x12].b != arg2[0x12].b
                                        || *(arg1 + 0x91) != *(arg2 + 0x91)
                                        || *(arg1 + 0x92) != *(arg2 + 0x92)
                                        || *(arg1 + 0x93) != *(arg2 + 0x93)
                                        || *(arg1 + 0x94) != *(arg2 + 0x94)
                                        || arg1[0x13].w != arg2[0x13].w
                                        || *(arg1 + 0x9a) != *(arg2 + 0x9a)
                                        || *(arg1 + 0x9b) != *(arg2 + 0x9b))
                                    break
                                
                                result.b = 1
                                return result
                        
                        break
            
            break

result.b = 0
return result
