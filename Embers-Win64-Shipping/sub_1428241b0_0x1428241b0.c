// 函数: sub_1428241b0
// 地址: 0x1428241b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18 = arg3
int64_t* arg_8 = arg1
*arg1 = arg2
arg1[1] = 0
void* rax = sub_14058b9f0(0x60)
arg1[1] = rax
int64_t* rdx_1 = *arg4
*(rax + 0x30) = 0
*(rax + 0x38) = 0
sub_140593830(rax + 0x20, rdx_1)
*(rax + 0x50) = 0
*(rax + 0x58) = 0xf
*(rax + 0x40) = 0
sub_142714680(arg1[1], &arg_18)
sub_142714680(arg1[1] + 8, &arg_18)
sub_142714680(arg1[1] + 0x10, &arg_18)

for (int64_t i = 0; i s< 2; i += 1)
    *(arg1[1] + i + 0x18) = 0

return arg1
