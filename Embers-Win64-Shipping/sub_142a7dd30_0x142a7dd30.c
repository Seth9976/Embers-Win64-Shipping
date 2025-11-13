// 函数: sub_142a7dd30
// 地址: 0x142a7dd30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == &data_143640d40)
    if (arg2 == 0)
        return &data_143640d40
    
    int64_t rax_1 = data_1440159d8
    
    if (rax_1 == 0)
        return malloc(arg2)
    
    return rax_1(data_1440159d0)

if (arg2 != 0)
    int64_t rax_8 = data_1440159e0
    
    if (rax_8 == 0)
        return realloc(arg1, arg2) __tailcall
    
    return rax_8(data_1440159d0, arg1, arg2) __tailcall

int64_t rax_5 = data_1440159e8

if (rax_5 == 0)
    free(arg1)
    return &data_143640d40

rax_5(data_1440159d0, arg1)
return &data_143640d40
