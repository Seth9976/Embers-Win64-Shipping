// 函数: sub_141812ed0
// 地址: 0x141812ed0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = sub_14187ccd0(arg3)
void*** rax_1 = j_sub_140a82f30(0x18)

if (rax_1 != 0)
    rax_1[1].d = 1
    *rax_1 = &data_142d42ea8
    *(rax_1 + 0xc) = 1
    rax_1[2] = rax

*arg2 = rax
arg2[1] = rax_1
int64_t rcx_2 = arg3[2]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

int64_t rcx_3 = *arg3

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

return arg2
