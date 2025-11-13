// 函数: sub_140fc4fd0
// 地址: 0x140fc4fd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = 0

if (arg4 s> 0)
    do
        char rax_2 = (*(*arg2 + 0x18))(arg2, arg3)
        int64_t rdx_1 = *(*arg3 + 0x30)
        
        if (rax_2 == 1)
            if (rdx_1(arg3) == 0)
                return (*(*arg2 + 0x118))(arg2)
            
            return (*(*arg3 + 0x30))(arg3)
        
        if (rdx_1(arg3) == 0)
            break
        
        int64_t rdi_1 = *arg3
        (*(rdi_1 + 0x28))(arg3, zx.q(arg5 + (*(rdi_1 + 0x30))(arg3)))
        rsi += 1
    while (rsi s< arg4)

return 0
