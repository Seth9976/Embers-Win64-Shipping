// 函数: sub_141ff7bf0
// 地址: 0x141ff7bf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rcx = *(arg1 + 0x28)
char rdx = *(arg2 + 0x28)
uint64_t result
result.b = rcx ^ rdx

if ((result.b & 1) != 0)
labelid_6:
    result.b = 0
else
    result.b = rcx ^ rdx
    
    if ((result.b & 2) != 0)
    labelid_6:
        result.b = 0
    else
        result.b = rcx ^ rdx
        
        if ((result.b & 4) != 0 || ((rcx ^ rdx) & 8) != 0)
        labelid_6:
            result.b = 0
        else
            uint32_t zmm0[0x4] = *(arg1 + 0x2c)
            zmm0[0] = zmm0[0] f- *(arg2 + 0x2c)
            
            if (_mm_and_ps(zmm0, 0x7fffffff)[0] f> 1f)
            labelid_6:
                result.b = 0
            else
                zmm0 = *(arg1 + 0x30)
                zmm0[0] = zmm0[0] f- *(arg2 + 0x30)
                
                if (_mm_and_ps(zmm0, 0x7fffffff)[0] f> 1f)
                label_141ff7ce0:
                    result.b = 0
                else
                    zmm0 = *(arg1 + 0x34)
                    zmm0[0] = zmm0[0] f- *(arg2 + 0x34)
                    
                    if (_mm_and_ps(zmm0, 0x7fffffff)[0] f> 1f)
                    label_141ff7ce0_1:
                        result.b = 0
                    else
                        result = zx.q(*(arg1 + 0x10))
                        
                        if (result.d != *(arg2 + 0x10))
                        label_141ff7ce0_2:
                            result.b = 0
                        else
                            int32_t i = 0
                            
                            if (result.d s> 0)
                                int64_t* rdi_1 = nullptr
                                
                                do
                                    int64_t* rcx_1 = *(rdi_1 + *(arg1 + 8))
                                    result.b = *(rdi_1 + *(arg2 + 8)) != 0
                                    
                                    if (rcx_1 != 0 != result.b)
                                        goto label_141ff7ce0_2
                                    
                                    if (rcx_1 != 0 && (*(*rcx_1 + 0x20))().b == 0)
                                        goto label_141ff7ce0_2
                                    
                                    i += 1
                                    rdi_1 = &rdi_1[2]
                                while (i s< *(arg1 + 0x10))
                            
                            result.b = 1

return result
