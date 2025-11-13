// 函数: sub_142bb6e00
// 地址: 0x142bb6e00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *arg1
int64_t* rbx = *(rax + 0x300)

if (sub_142b922e0(*(*(rax + 0x90) + 8), "pshinter") != 0 && rbx != 0)
    int64_t rax_2 = *rbx
    
    if (rax_2 != 0)
        int64_t rax_3 = rax_2()
        
        if (rax_3 != 0)
            void* rcx_2 = *arg1
            int64_t arg_8
            int32_t result = (*rax_3)(*(rcx_2 + 0x98), rcx_2 + 0x114, &arg_8)
            
            if (result != 0)
                return result
            
            *arg1[7] = arg_8
            return zx.q(result)

return 0
