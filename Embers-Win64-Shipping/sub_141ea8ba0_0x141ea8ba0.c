// 函数: sub_141ea8ba0
// 地址: 0x141ea8ba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[0x1e].b == 1)
    char rax_1 = data_143f3a350
    arg4 = 0
    char r8 = 0
    void* r10_1 = arg1[0x51]
    
    if (rax_1 != arg1[0x65].b)
        r8 = -0x80
    
    arg2 = *(r10_1 + 0x387)
    
    if (rax_1 != arg1[0x65].b)
        arg4 = -0x80
    
    arg4 |= arg2
    *(r10_1 + 0x387) = (((r8 | arg2) ^ arg2) & 0x7f) ^ arg4
    arg3 = arg1[0x51]
    char rax_2 = *(arg3 + 0x387)
    
    if (rax_2 s>= 0 && (rax_2 & 0x20) == 0)
        *(arg3 + 0x387) = rax_2
        return sub_141dd1900(arg1, 0) __tailcall
    
    arg2 = 0x40
    *(arg3 + 0x387) = rax_2 | 0x40

return sub_141dd1900(arg1, arg2, arg3, arg4) __tailcall
