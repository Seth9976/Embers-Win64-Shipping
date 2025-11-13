// 函数: sub_141ab01d0
// 地址: 0x141ab01d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_58
sub_140dd5b90(&var_58, *arg2)
*arg2
int32_t i = 0
bool cond:0 = arg2[8].b != 0
int64_t var_50
__builtin_memset(&var_50, 0, 0x33)
bool var_18 = cond:0
sub_141e1c570(arg1 + 0x20, arg2, sub_141e1c570(arg1 + 0x10, &var_58, sub_141e295c0(&var_58)))

if (*(arg1 + 0x30) != 0)
    sub_141de6df0(&arg2[1])
    sub_141de6df0(&var_50)

int64_t result = sub_141de6d80(&arg2[1], &var_50)

if (arg2[5].d s> 0)
    float* rdx_5 = nullptr
    
    do
        int64_t rcx_7 = arg2[4]
        int64_t result_1
        
        if (*(rcx_7 + rdx_5 + 4) != 0 || *(rdx_5 + result_1 + 4) != 0)
            result.b = 1
        else
            result.b = 0
        
        *(rcx_7 + rdx_5 + 4) = result.b
        i += 1
        int32_t* rcx_8 = arg2[4]
        result = result_1
        *(rcx_8 + rdx_5) = *(rcx_8 + rdx_5) f- *(rdx_5 + result)
        rdx_5 = &rdx_5[2]
    while (i s< arg2[5].d)

return result
