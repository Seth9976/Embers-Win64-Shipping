// 函数: sub_140a6eae0
// 地址: 0x140a6eae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x20)
void*** rbx = rax

if (rax == 0)
    rbx = nullptr
else
    *rbx = &data_142e62e28
    sub_140a6eb80(data_143db7a48, &rbx[1])
    rbx[3].d = 0

void*** rax_1 = j_sub_140a82f30(0x18)

if (rax_1 != 0)
    rax_1[1].d = 1
    *rax_1 = &data_142d42ea8
    *(rax_1 + 0xc) = 1
    rax_1[2] = rbx

*arg1 = rbx
arg1[1] = rax_1
return arg1
