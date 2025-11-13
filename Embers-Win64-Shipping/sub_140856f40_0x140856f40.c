// 函数: sub_140856f40
// 地址: 0x140856f40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdx = *(arg1 + 0x88)
int64_t result

if (rdx != 0)
    result = *(arg1 + 0x90)
    
    if (result != 0)
        char r8_1 = *(rdx + 0x4e8)
        
        if (r8_1 == 0 || *(rdx + 0x3e0) != 0 || *(rdx + 0x3f0) != 0 || r8_1 != 4)
            char rdx_1 = *(result + 0x4e8)
            
            if (rdx_1 == 0 || *(result + 0x3e0) != 0 || *(result + 0x3f0) != 0 || rdx_1 != 4)
                void* i = *(arg1 + 0x68)
                
                for (void* rdi_3 = sx.q(*(arg1 + 0x70)) * 0x30 + i; i != rdi_3; i += 0x30)
                    if (sub_1407faf10(i) != 0 && sub_1408049b0(sub_1407faf10(i)).b == 0)
                        goto label_14085700c
                
                result.b = 1
                return result

label_14085700c:
result.b = 0
return result
