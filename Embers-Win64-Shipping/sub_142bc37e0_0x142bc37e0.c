// 函数: sub_142bc37e0
// 地址: 0x142bc37e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *arg1
int64_t* rbx = *(rax + 0x1d8)

if (sub_142b922e0(*(*(rax + 0x90) + 8), "pshinter") != 0 && rbx != 0)
    int64_t rax_2 = *rbx
    
    if (rax_2 != 0)
        int64_t rax_3 = rax_2()
        
        if (rax_3 != 0)
            void* rcx_2 = *arg1
            int64_t arg_8
            int32_t result = (*rax_3)(*(rcx_2 + 0x98), 
                sx.q(*(rcx_2 + 4)) * 0xfc + *(rcx_2 + 0x1b8), &arg_8, rax_3)
            
            if (result != 0)
                return result
            
            *arg1[7] = arg_8
            return zx.q(result)

return 0
