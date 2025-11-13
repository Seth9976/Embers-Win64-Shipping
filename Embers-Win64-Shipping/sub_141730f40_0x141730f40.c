// 函数: sub_141730f40
// 地址: 0x141730f40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_28
int32_t* rax = &var_28

if (arg2 != 0)
    int64_t var_24
    
    if (arg2 != 1)
        var_24:4.d = 0x3f800000
        var_28.q = 0
    else
        var_24.d = 0x3f800000
        var_28 = 0
        var_24:4.d = 0
    
    int32_t var_14_1 = var_24:4.d
    int64_t var_1c
    rax = &var_1c
    var_1c = var_28.q
else
    var_28 = 0x3f800000
    int64_t var_24_1 = 0

int32_t rax_2 = rax[2]
*arg1 = *rax
arg1[1].d = rax_2
return arg1
