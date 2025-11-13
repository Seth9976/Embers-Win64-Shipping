// 函数: sub_140a8a850
// 地址: 0x140a8a850
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = arg2[1].d

if (rdi s<= 1)
    sub_140596d10(arg1, arg2)
    return arg1

int64_t rsi = *arg2
int64_t var_18 = 0
int32_t var_c

if (rdi != 0)
    sub_1405a4c70(&var_18, rdi, 0)
    memcpy(var_18, rsi, rdi * 2)
else
    var_c = rdi

int32_t arg_10 = 0
int32_t* arg_18 = &arg_10
sub_140a5f6f0(&var_18, &arg_18)
*arg1 = var_18
arg1[1].d = rdi
*(arg1 + 0xc) = var_c
return arg1
