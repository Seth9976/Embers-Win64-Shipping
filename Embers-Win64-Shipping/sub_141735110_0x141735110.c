// 函数: sub_141735110
// 地址: 0x141735110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x20)

if (rax == 0)
    *arg2 = nullptr
    return arg2

char r9 = *(*(arg1 + 0x10) + 8)
*(rax + 0xa) = 0x100
r9 |= 0x40
rax[1].b = r9
*(rax + 9) = r9
*(rax + 0xc) = 1
*rax = &data_142fc5190
rax[2] = *(arg1 + 0x10)
void* rax_2 = *(arg1 + 0x18)
rax[3] = rax_2

if (rax_2 != 0)
    *(rax_2 + 8) += 1

void* rax_3 = rax[2]
*arg2 = rax
*(rax + 0xa) = *(rax_3 + 0xa)
*(rax + 0xb) = *(rax[2] + 0xb)
return arg2
