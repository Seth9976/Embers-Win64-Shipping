// 函数: sub_141ff7d00
// 地址: 0x141ff7d00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rcx = *(arg1 + 0x28)
char rdx = *(arg2 + 0x28)
uint64_t result
result.b = rcx ^ rdx

if ((result.b & 1) == 0)
    result.b = rcx ^ rdx
    
    if ((result.b & 2) == 0)
        result.b = rcx ^ rdx
        
        if ((result.b & 4) == 0 && ((rcx ^ rdx) & 8) == 0)
            uint32_t zmm0[0x4] = *(arg1 + 0x2c)
            zmm0[0] = zmm0[0] f- *(arg2 + 0x2c)
            
            if (not(_mm_and_ps(zmm0, 0x7fffffff)[0] f> 1f))
                zmm0 = *(arg1 + 0x30)
                zmm0[0] = zmm0[0] f- *(arg2 + 0x30)
                
                if (not(_mm_and_ps(zmm0, 0x7fffffff)[0] f> 1f))
                    zmm0 = *(arg1 + 0x34)
                    zmm0[0] = zmm0[0] f- *(arg2 + 0x34)
                    
                    if (not(_mm_and_ps(zmm0, 0x7fffffff)[0] f> 1f))
                        result = zx.q(*(arg1 + 0x10))
                        
                        if (result.d == *(arg2 + 0x10))
                            int32_t rbx = 0
                            
                            if (result.d s<= 0)
                            label_141ff7dec:
                                result.b = 0
                            else
                                int64_t* rdi_1 = nullptr
                                
                                while (true)
                                    int64_t* rcx_1 = *(rdi_1 + *(arg1 + 8))
                                    result.b = *(rdi_1 + *(arg2 + 8)) != 0
                                    
                                    if (rcx_1 != 0 == result.b)
                                        if (rcx_1 != 0)
                                            result = (*(*rcx_1 + 0x20))()
                                        
                                        if (rcx_1 == 0 || result.b != 0)
                                            rbx += 1
                                            rdi_1 = &rdi_1[2]
                                            
                                            if (rbx s>= *(arg1 + 0x10))
                                                goto label_141ff7dec
                                            
                                            continue
                                    
                                    result.b = 1
                                    break
                            
                            return result

result.b = 1
return result
