// 函数: sub_141d57900
// 地址: 0x141d57900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x60) = arg2

if (arg2 != 0)
    int64_t rdi_1 = sx.q(*(arg1 + 0x58))
    int32_t r9
    int32_t var_20_1 = r9
    int32_t rax_2 = (rdi_1 + 1).d
    *(arg1 + 0x58) = rax_2
    
    if (rax_2 s> *(arg1 + 0x5c))
        sub_140679970(arg1, rdi_1.d)
    
    void* rax_3 = *(arg1 + 0x50)
    int64_t rcx = rdi_1 * 5
    void* rdx_1 = arg1
    
    if (rax_3 != 0)
        rdx_1 = rax_3
    
    *(rdx_1 + (rcx << 2)) = arg3.o
    *(rdx_1 + (rcx << 2) + 0x10) = arg4:4.d

return arg1
