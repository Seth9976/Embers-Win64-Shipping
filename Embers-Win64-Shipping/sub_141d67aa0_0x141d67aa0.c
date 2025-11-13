// 函数: sub_141d67aa0
// 地址: 0x141d67aa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(8)
void*** rbx = rax

if (rax == 0)
    rbx = nullptr
else
    *rbx = &data_14322df88

void*** rax_1 = j_sub_140a82f30(0x18)

if (rax_1 != 0)
    rax_1[1].d = 1
    *rax_1 = &data_142e21f50
    *(rax_1 + 0xc) = 1
    rax_1[2] = rbx

*arg1 = rbx
arg1[1] = rax_1
return arg1
