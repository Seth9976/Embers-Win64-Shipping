// 函数: sub_141a6ae40
// 地址: 0x141a6ae40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = arg3[1].d
int64_t var_58 = *arg3
int32_t var_50 = rax
char rax_1 = var_58.b
void arg_10
void arg_18
char* rdi
char var_48

if (rax_1 != 2)
    int64_t rdx = var_58
    int32_t* rax_2
    
    if (rax_1 != 1)
        rax_2 = sub_141a35470(&arg_18, rdx, arg1)
        var_48 = 0
    else
        rax_2 = sub_141a35470(&arg_10, rdx, arg1)
        var_48 = 1
    
    int64_t var_3c
    rdi = &var_3c
    int32_t rax_4 = (*rax_2):4.d
    var_3c = var_48.q
    int32_t var_34_1 = rax_4
else
    var_48 = rax_1
    rdi = &var_48
    int64_t var_44 = 0
int32_t rax_5 = *(arg3 + 0x14)
var_58 = *(arg3 + 0xc)
char rax_6 = var_58.b
int64_t* rcx_2

if (rax_6 != 2)
    int64_t rdx_1 = var_58
    int32_t* rax_7
    
    if (rax_6 != 1)
        rax_7 = sub_141a35470(&arg_18, rdx_1, arg1)
        var_58.b = 0
    else
        rax_7 = sub_141a35470(&arg_10, rdx_1, arg1)
        var_58.b = 1
    
    int64_t var_30
    rcx_2 = &var_30
    var_58 = *rax_7
    var_30 = var_58
    int32_t var_28_1 = rax_5
else
    var_58.b = rax_6
    rcx_2 = &var_58
    var_58 = 0

int32_t rax_10 = *(rdi + 8)
*arg2 = *rdi
arg2[1].d = rax_10
int32_t rax_11 = rcx_2[1].d
*(arg2 + 0xc) = *rcx_2
*(arg2 + 0x14) = rax_11
return arg2
