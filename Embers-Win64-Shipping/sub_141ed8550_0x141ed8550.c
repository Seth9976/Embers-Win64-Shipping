// 函数: sub_141ed8550
// 地址: 0x141ed8550
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = sub_1405be820(arg1)
void* rdi = *(result + 0x140)

if (not(1f f<= *(arg1 + 0x3bc)) && rdi != 0)
    result = arg1[0x29]
    
    if (result != 0 && *(result + 0xf0) == 3)
        int64_t rsi_1 = *(result + 0x290)
        
        if (0f f!= *(arg1 + 0xc4) || 0f f!= arg1[0x19].d || not(0f f== *(arg1 + 0xcc)))
            result = (*(*arg1 + 0x550))(arg1)
            
            if (result.b != 0 && rsi_1 != 0)
                float zmm0[0x4]
                
                if (0f f>= arg1[0x73].d)
                    int32_t var_28
                    sub_141dc5d20(rdi, &var_28, arg1, 0x3f800000, arg2, arg3)
                    
                    if ((*(arg1 + 0x38a) & 0x10) != 0)
                        (*(*arg1 + 0xac8))(arg1, &var_28)
                    
                    uint32_t zmm0_1[0x4] = var_28
                    zmm0_1[0] = zmm0_1[0] f- *(arg1 + 0xc4)
                    arg2 = 0x7fffffff
                    arg3.o = 0x38d1b717
                    int32_t var_20
                    
                    if (_mm_and_ps(zmm0_1, 0x7fffffff)[0] f> 9.99999975e-05f)
                    label_141ed86ab:
                        *(arg1 + 0xc4) = var_28.q
                        *(arg1 + 0xcc) = var_20
                        arg3.o = *(rdi + 0x34)
                    else
                        int32_t var_24
                        zmm0_1 = var_24
                        zmm0_1[0] = zmm0_1[0] f- arg1[0x19].d
                        
                        if (_mm_and_ps(zmm0_1, 0x7fffffff)[0] f> 9.99999975e-05f)
                            goto label_141ed86ab
                        
                        zmm0_1 = var_20
                        zmm0_1[0] = zmm0_1[0] f- *(arg1 + 0xcc)
                        
                        if (_mm_and_ps(zmm0_1, 0x7fffffff)[0] f> 9.99999975e-05f)
                            goto label_141ed86ab
                        
                        arg3.o = *(rdi + 0x38)
                    zmm0 = sub_141ef4f80(arg1, rdi, arg3.o)
                else
                    zmm0 = zx.o(*(arg1 + 0x38c))
                    int32_t rax_1 = *(arg1 + 0x394)
                    *(arg1 + 0xc4) = zmm0.q
                    *(arg1 + 0xcc) = rax_1
                
                result = sub_141ddbf20(rdi, arg1, arg3, zmm0, arg2)
                *(arg1 + 0x38a) |= 8

return result
