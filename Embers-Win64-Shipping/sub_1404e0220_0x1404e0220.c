// 函数: sub_1404e0220
// 地址: 0x1404e0220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = j_sub_140a82f30(0x58)

if (rax == 0)
    data_143f115e8 = rax
    return rax

rax[1].d = 0xffffffff
*(rax + 0xc) = 4
__builtin_memset(&rax[2], 0, 0x18)
rax[5] = -0x3810000020000000
__builtin_memset(&rax[6], 0, 0x17)
*rax = &data_143008970
rax[9].b = 0
*(rax + 0x4c) = 2
rax[0xa].d = data_14399f630
*rax = &data_143008ae0

if (sub_140a80f40() == 0)
    int64_t rax_5 = sub_141997e80(rax)
    data_143f115e8 = rax
    return rax_5

int64_t rax_4 = (*(*rax + 0x28))(rax)
data_143f115e8 = rax
return rax_4
