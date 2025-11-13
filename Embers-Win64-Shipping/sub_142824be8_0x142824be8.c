// 函数: sub_142824be8
// 地址: 0x142824be8
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18 = arg3
int64_t* arg_8 = arg1
*arg1 = arg2
arg1[1] = 0
void* rax = sub_14058b9f0(0x30)
arg1[1] = rax
*(rax + 0x20) = **arg4
*(rax + 0x28) = 0
sub_142714680(arg1[1], &arg_18)
sub_142714680(arg1[1] + 8, &arg_18)
sub_142714680(arg1[1] + 0x10, &arg_18)

for (int64_t i = 0; i s< 2; i += 1)
    *(arg1[1] + i + 0x18) = 0

return arg1
