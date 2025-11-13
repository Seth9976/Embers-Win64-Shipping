// 函数: sub_1428263e4
// 地址: 0x1428263e4
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* arg_8 = arg1
int32_t var_18 = 0
sub_1428262f0(arg1, 5)
int32_t var_18_1 = 1
int32_t* r9 = *(arg1 + 0x10)

if (r9 == *(arg1 + 0x18))
    sub_142826028(&arg1[2], r9, arg2)
else
    *r9 = *arg2
    int32_t rax_1
    rax_1.b = arg2[1].b
    r9[1].b = rax_1.b
    rax_1.b = *(arg2 + 5)
    *(r9 + 5) = rax_1.b
    sub_14281f81c(&r9[2], &arg2[2])
    *(arg1 + 0x10) += 0x20

return arg1
