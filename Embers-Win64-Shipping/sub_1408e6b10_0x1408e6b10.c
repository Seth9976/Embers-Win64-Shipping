// 函数: sub_1408e6b10
// 地址: 0x1408e6b10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = *(arg2 + 0x430)

if (result != 0)
    void** i = *(result + 0x40)
    result = sx.q(*(result + 0x48))
    
    for (void* rbp_1 = &i[result]; i != rbp_1; i = &i[1])
        void* rdi_1 = *i
        
        if (rdi_1 != 0)
            void* rax = sub_1408ea9e0()
            void* rdx = *(rdi_1 + 0x10)
            result = sx.q(*(rax + 0x38))
            
            if (result.d s<= *(rdx + 0x38))
                int64_t result_1 = result
                result = *(rdx + 0x30)
                
                if (*(result + (result_1 << 3)) == rax + 0x30)
                    int32_t arg_10
                    sub_140865c40(arg1 + 0x18, &arg_10, rdi_1)
                    int64_t rax_1 = sx.q(arg_10)
                    void* rcx_1
                    
                    if (rax_1.d != 0xffffffff)
                        rcx_1 = *(arg1 + 0x18) + rax_1 * 0x18
                    
                    int64_t** rcx_2
                    
                    if (rax_1.d == 0xffffffff || rcx_1 == 0)
                        rcx_2 = nullptr
                    else
                        rcx_2 = rcx_1 + 8
                    
                    result = sub_1408e6690(*rcx_2, arg2)

return result
