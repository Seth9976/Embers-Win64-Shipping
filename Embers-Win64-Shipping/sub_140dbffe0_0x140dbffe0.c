// 函数: sub_140dbffe0
// 地址: 0x140dbffe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* rax = j_sub_140a82f30(0x160)
char* rbx = rax

if (rax == 0)
    rbx = nullptr
else
    *rbx = data_1439ae51c
    *(rbx + 0x128) = 0
    *(rbx + 0x130) = 0
    *(rbx + 0x134) = 4
    rbx[0x138] = 0
    __builtin_memset(&rbx[0x140], 0, 0x20)

void*** rax_2
float zmm0[0x4]
rax_2, zmm0 = j_sub_140a82f30(0x18)

if (rax_2 == 0)
    rax_2 = nullptr
else
    rax_2[1].d = 1
    *rax_2 = &data_142ec7af8
    *(rax_2 + 0xc) = 1
    rax_2[2] = rbx

*arg2 = rbx
arg2[1] = rax_2
sub_140dbf070(arg1, *arg2, arg3, arg4, zmm0, arg5)
return arg2
