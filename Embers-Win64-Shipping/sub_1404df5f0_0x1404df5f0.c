// 函数: sub_1404df5f0
// 地址: 0x1404df5f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = j_sub_140a82f30(0x58)

if (rax == 0)
    data_143f10cc8 = rax
    return rax

rax[1].d = 0xffffffff
*(rax + 0xc) = 4
__builtin_memset(&rax[2], 0, 0x18)
rax[5] = -0x3810000020000000
__builtin_memset(&rax[6], 0, 0x17)
rax[9] = 0
rax[0xa] = 0
*rax = &data_1430081e8

if (sub_140a80f40() == 0)
    int64_t rax_4 = sub_141997e80(rax)
    data_143f10cc8 = rax
    return rax_4

int64_t rax_3 = (*(*rax + 0x28))(rax)
data_143f10cc8 = rax
return rax_3
