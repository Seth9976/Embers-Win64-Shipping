// 函数: sub_1421930f0
// 地址: 0x1421930f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = 0
int64_t* r14 = *(arg1 + 0x600)
void* result = &r14[sx.q(*(arg1 + 0x608))]
uint64_t r12_1 = sx.q(*(arg1 + 0x608)) << 3 u>> 3

if (r14 u> result)
    r12_1 = 0

if (r12_1 != 0)
    do
        int64_t* rdi_1 = *r14
        
        if (rdi_1 != 0)
            result = (*(*rdi_1 + 0x1f0))(rdi_1)
            
            if (result.b != 0)
                if (arg4 != 0)
                    rdi_1[0x4c] = arg3
                label_142193171:
                    int64_t rsi_1 = sx.q(*(arg2 + 0x48))
                    int32_t rax_2 = (rsi_1 + 1).d
                    *(arg2 + 0x48) = rax_2
                    
                    if (rax_2 s> *(arg2 + 0x4c))
                        sub_140809370(arg2, rsi_1.d)
                    
                    result = *(arg2 + 0x40)
                    void* result_1 = arg2
                    
                    if (result != 0)
                        result_1 = result
                    
                    *(result_1 + (rsi_1 << 3)) = rdi_1
                else if (rdi_1[0x4c] == arg3)
                    goto label_142193171
        
        r14 = &r14[1]
        rbp += 1
    while (rbp != r12_1)

return result
