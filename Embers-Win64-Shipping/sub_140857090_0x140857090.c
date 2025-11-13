// 函数: sub_140857090
// 地址: 0x140857090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdx = *(arg1 + 0x88)
int64_t result

if (rdx != 0)
    result = *(arg1 + 0x90)
    
    if (result != 0)
        char r8_1 = *(rdx + 0x4e8)
        
        if (r8_1 != 0)
            if (*(rdx + 0x3e0) == 0 && *(rdx + 0x3f0) == 0 && r8_1 == 4)
            label_140857102:
                char rdx_1 = *(result + 0x4e8)
                
                if (rdx_1 != 0)
                    if (*(result + 0x3e0) == 0 && *(result + 0x3f0) == 0 && rdx_1 == 4)
                    label_14085713e:
                        
                        if (*(arg1 + 0x70) != 0)
                            void* i = *(arg1 + 0x68)
                            
                            for (void* rdi_3 = sx.q(*(arg1 + 0x70)) * 0x30 + i; i != rdi_3; 
                                    i += 0x30)
                                if (sub_140790310(i).b != 0 && sub_1407faf10(i) != 0
                                        && sub_140804a80(sub_1407faf10(i)).b == 0)
                                    goto label_1408571a8
                            
                            result.b = 1
                            return result
                    else if (rdx_1 != 0 && (*(result + 0x3e0) != 0 || *(result + 0x3f0) != 0))
                        goto label_14085713e
            else if (r8_1 != 0 && (*(rdx + 0x3e0) != 0 || *(rdx + 0x3f0) != 0))
                goto label_140857102

label_1408571a8:
result.b = 0
return result
