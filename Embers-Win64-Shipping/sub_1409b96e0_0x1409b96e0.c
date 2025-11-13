// 函数: sub_1409b96e0
// 地址: 0x1409b96e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = *(arg1 + 8)
int32_t rbx = arg3[0xa4].d
char rax

if (rbx s<= 0 || r8 != 0)
    rax = 0
else
    rax = 1

arg3[0xa4].d = r8

if (rax != 0)
    sub_1409d5470(arg3)

void*** rax_1 = j_sub_140a82f30(0x10)

if (rax_1 != 0)
    rax_1[1].d = rbx
    *rax_1 = &data_142e3f938

void*** arg_8 = rax_1
sub_1409afc10(arg3, &arg_8)
sub_1409cb7b0(arg3, arg2)
return arg2
