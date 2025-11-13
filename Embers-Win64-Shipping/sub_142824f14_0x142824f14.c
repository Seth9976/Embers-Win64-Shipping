// 函数: sub_142824f14
// 地址: 0x142824f14
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_8 = arg1
*arg1 = 0
arg1[1] = 0
void* rax = *(arg2 + 0x30)

if (rax != 0)
    *(rax + 8) += 1

*arg1 = *(arg2 + 0x28)
arg1[1] = *(arg2 + 0x30)
arg1[2] = *(arg2 + 0x38)
sub_1428236b8(&arg1[3])
int64_t* rdx = arg1[2]

if (rdx != 0)
    sub_142825490(arg1, rdx)

return arg1
