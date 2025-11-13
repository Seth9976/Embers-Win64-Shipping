// 函数: sub_142012980
// 地址: 0x142012980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 != 0)
    int64_t rax_2 = (*(*arg2 + 0x58))(arg2)
    int64_t r9_1 = *arg1
    
    if ((*(r9_1 + 0x58))(arg1, arg4, arg5, r9_1) == rax_2)
        char rax_3 = arg1[6].b
        *(arg1 + 0x33) = arg3
        char rcx_2 = arg2[6].b
        arg1[6].b = rcx_2
        
        if ((rax_3 & 4) != 0)
            arg1[6].b = rcx_2 | 4
        
        arg4.o = *(arg2 + 0x24)
        (*(*arg1 + 0x38))(arg1, arg4)
        int64_t rax_5
        rax_5.b = 1
        return rax_5

int64_t rax
rax.b = 0
return rax
