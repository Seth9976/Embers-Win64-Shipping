// 函数: sub_1404a8a90
// 地址: 0x1404a8a90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x28)

if (rax == 0)
    data_143eba888 = rax
    return rax

rax[1].d = 0xffffffff
*(rax + 0xc) = 4
__builtin_memset(&rax[2], 0, 0x18)
*rax = &data_142f60b18

if (sub_140a80f40() == 0)
    int64_t rax_4 = sub_141997e80(rax)
    data_143eba888 = rax
    return rax_4

int64_t rax_3 = (*rax)[5](rax)
data_143eba888 = rax
return rax_3
