// 函数: sub_1409de0b0
// 地址: 0x1409de0b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = arg1[0xa4].d
char rax

if (rbx s<= 0 || arg2 != 0)
    rax = 0
else
    rax = 1

arg1[0xa4].d = arg2

if (rax != 0)
    sub_1409d5470(arg1)

void*** rax_1 = j_sub_140a82f30(0x10)

if (rax_1 != 0)
    rax_1[1].d = rbx
    *rax_1 = &data_142e3f938

void*** arg_8 = rax_1
return sub_1409afc10(arg1, &arg_8)
