// 函数: sub_140388590
// 地址: 0x140388590
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r12 = arg5
int32_t rbp = arg4

if (arg3 != 0)
    int32_t rdi_1 = *(arg1 + 0x1ae0)
    int32_t rdx_2 = arg9 * 0xc3 s/ 0x64
    
    if (rdx_2 s< arg4)
        rbp = rdx_2
    
    int32_t i = rbp - rdi_1
    
    do
        int32_t i_1 = i
        
        if (i s> 0x1e0)
            i_1 = 0x1e0
        
        sub_1403886d0(arg1, nullptr, arg2, arg3, i_1, rdi_1, arg6, arg7, arg8, arg10, arg11)
        i -= 0x1e0
        rdi_1 += 0x1e0
    while (i s> 0)
    
    r12 = arg5
    *(arg1 + 0x1ae0) = rbp - r12

*arg12 = 0
return sub_14038aa40(arg1, arg12, r12) __tailcall
