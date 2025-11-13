// 函数: sub_1404df8a0
// 地址: 0x1404df8a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = j_sub_140a82f30(0x48)

if (rax == 0)
    data_143f111a8 = rax
    return rax

rax[1].d = 0xffffffff
*(rax + 0xc) = 4
__builtin_memset(&rax[2], 0, 0x18)
rax[5] = -0x3810000020000000
__builtin_memset(&rax[6], 0, 0x17)
*rax = &data_143008438

if (sub_140a80f40() == 0)
    int64_t rax_4 = sub_141997e80(rax)
    data_143f111a8 = rax
    return rax_4

int64_t rax_3 = (*(*rax + 0x28))(rax)
data_143f111a8 = rax
return rax_3
