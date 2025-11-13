// 函数: sub_142a3e880
// 地址: 0x142a3e880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0 || arg2 s< 0 || arg3 - 1 u> 7)
    return 0xfffffffe

int64_t rax_2 = *arg1
char arg_8 = 0
int32_t result = (*rax_2)(arg1, arg2, 1, &arg_8)

if (result s< 0)
    return result

int64_t rdi_1 = arg2 + 1
int64_t rbx_1 = sx.q(arg_8)
int32_t rsi_1 = 1

if (arg3 s> 1)
    do
        char var_28
        result = (**arg1)(arg1, rdi_1, 1, &var_28)
        
        if (result s< 0)
            return result
        
        rsi_1 += 1
        rdi_1 += 1
        rbx_1 = rbx_1 << 8 | zx.q(var_28)
    while (sx.q(rsi_1) s< arg3)

*arg4 = rbx_1
return 0
