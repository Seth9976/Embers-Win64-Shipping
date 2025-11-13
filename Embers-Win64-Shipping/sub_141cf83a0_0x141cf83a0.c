// 函数: sub_141cf83a0
// 地址: 0x141cf83a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142e5d058
arg1[4] = 0
arg1[6] = 0
arg1[0xc].d = 0
*(arg1 + 0x64) = 1

if (arg2 != 0)
    sub_140a3c510(&arg1[4], arg2)

arg1[2] = arg3
*arg1 = &data_142e86868
arg1[0xc].b = 1

if (arg1[4] != 0)
    void* rcx_1 = &arg1[8]
    char arg_8 = *(arg1 + 0x63)
    void* rax_2 = arg1[6]
    void*** arg_10 = arg1
    
    if (rax_2 != 0)
        rcx_1 = rax_2
    
    arg1[4]((*(*rcx_1 + 8))(rcx_1), &arg_8, &arg_10)

*(arg1 + 0x61) = 1
return arg1
