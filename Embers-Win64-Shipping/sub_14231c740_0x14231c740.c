// 函数: sub_14231c740
// 地址: 0x14231c740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sub_141f64a80(arg1)
int64_t result_1 = result
int64_t result_2 = result

if (result != 0)
    int32_t i = 0
    
    if (*(arg1 + 0x818) s> 0)
        int64_t* rsi_1 = nullptr
        
        do
            result = *(arg1 + 0x810)
            void* r14_1 = *(rsi_1 + result)
            
            if (*(r14_1 + 0x18) == arg2)
                void* r13_1 = *(rsi_1 + *(result_2 + 0x50))
                char rax_1 = sub_140b5b8a0(arg3.d, 0)
                uint32_t rcx_2
                rcx_2.b = (arg3 u>> 0x20).d == 0
                void* j
                
                if ((rcx_2.b & rax_1) == 0)
                    j = *(r13_1 + 0x1e0)
                    result = sx.q(*(r13_1 + 0x1e8))
                    
                    for (void* rcx_4 = result * 0x10c + j; j != rcx_4; j += 0x10c)
                        if (*(j + 0x104) == arg3)
                            goto label_14231c814
                
                if ((rcx_2.b & rax_1) != 0 || arg4 != 0)
                    j = r13_1 + 0x1f0
                label_14231c814:
                    result = sub_14222ccd0(r14_1, j)
                
                result_2 = result_1
            
            i += 1
            rsi_1 = &rsi_1[1]
        while (i s< *(arg1 + 0x818))

return result
