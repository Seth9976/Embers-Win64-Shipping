// 函数: sub_142bb6ce0
// 地址: 0x142bb6ce0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = arg1[7]

if (*result != 0)
    void* rax = *arg1
    int64_t* rdi_1 = *(rax + 0x300)
    int64_t rax_1 = sub_142b922e0(*(*(rax + 0x90) + 8), "pshinter")
    
    if (rax_1 != 0 && rdi_1 != 0)
        int64_t rdx_1 = *rdi_1
        
        if (rdx_1 != 0)
            int64_t rax_2 = rdx_1(rax_1)
            
            if (rax_2 != 0)
                (*(rax_2 + 0x10))(*arg1[7])
    
    result = arg1[7]
    *result = 0

return result
