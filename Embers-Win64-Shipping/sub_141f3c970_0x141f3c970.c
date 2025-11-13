// 函数: sub_141f3c970
// 地址: 0x141f3c970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 0xa0)

if (rcx != 0)
    void* rax_1 = sub_141dc9840(rcx)
    
    if (rax_1 != 0)
        void* rcx_1 = *(rax_1 + 0xb8)
        
        if (rcx_1 != 0)
            void* rax_2 = sub_1420f98f0(rcx_1)
            void* rcx_2
            
            if (rax_2 != 0)
                rcx_2 = *(rax_2 + 0x1e0)
            
            if (rax_2 != 0 && rcx_2 != 0)
            label_141f3c9dc:
                int128_t var_18 = *(arg1 + 0x21c)
                int32_t* result = sub_1420fbf20(rcx_2, &var_18)
                
                if (result != 0)
                    int64_t rdi_1 = data_143f3b440
                    int64_t rcx_3
                    
                    if (data_143de5480 == 0)
                        rcx_3 = 0
                    else
                        rcx_3.b = GetCurrentThreadId() != data_143de5470
                    
                    int32_t rdx_2 = *(rdi_1 + (rcx_3 << 2))
                    int32_t rax_4 = data_1439c7a8c
                    
                    if (rdx_2 s< 1)
                        rax_4 = 1
                    else if (rdx_2 s< rax_4)
                        rax_4 = rdx_2
                    
                    if (*result == rax_4)
                        return result
            else
                rcx_2 = *(rax_1 + 0x1e0)
                
                if (rcx_2 != 0)
                    goto label_141f3c9dc

return 0
