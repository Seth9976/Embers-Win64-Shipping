// 函数: sub_142269f50
// 地址: 0x142269f50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_28
sub_14225a640(&var_28, arg1, 0)
(*arg2)(*(arg2 + 8))
int64_t* rcx_2 = var_28
int64_t* var_20
int64_t rax

if (rcx_2 == 0 && var_20 == 0)
    rax.b = 0
    return rax

char var_18

if (rcx_2 != 0)
    if (var_18 == 0)
        (*(*rcx_2 + 0x350))()
    else if (var_18 == 1)
        int64_t rdx_1 = *rcx_2
        (*(rdx_1 + 0x360))(rcx_2, rdx_1)

if (var_20 != 0)
    if (var_18 == 0)
        int64_t rdx_2 = *var_20
        (*(rdx_2 + 0x350))(var_20, rdx_2)
        int64_t rax_2
        rax_2.b = 1
        return rax_2
    
    if (var_18 == 1)
        (*(*var_20 + 0x360))(var_20)

rax.b = 1
return rax
