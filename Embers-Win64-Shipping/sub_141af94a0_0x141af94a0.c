// 函数: sub_141af94a0
// 地址: 0x141af94a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141a31a40(arg1, arg2)
int64_t* rcx = &arg1[0x2b]
*arg1 = &data_143052578
arg1[0x1d].d = 0
arg1[0x20] = &data_142d4c350
arg1[0x21].w = 0x404
__builtin_memset(&arg1[0x22], 0, 0x25)
__builtin_memset(&arg1[0x27], 0, 0x20)
rcx[2] = 0
rcx[3].d = 0
*(rcx + 0x1c) = 0x80
int64_t* rax = rcx[2]

if (rax != 0)
    rcx = rax

*rcx = 0
rcx[1] = 0
void* rcx_1 = &arg1[0x3f]
arg1[0x2f].d = 0xffffffff
*(arg1 + 0x17c) = 0
arg1[0x31] = 0
arg1[0x32].d = 0
arg1[0x33].d = 0xea60
*(arg1 + 0x19c) = 1
arg1[0x34] = &data_142d4c350
arg1[0x35].w = 0x404
__builtin_memset(&arg1[0x36], 0, 0x25)
__builtin_memset(&arg1[0x3b], 0, 0x20)
*(rcx_1 + 0x10) = 0
*(rcx_1 + 0x18) = 0
*(rcx_1 + 0x1c) = 0x80
void* rax_1 = *(rcx_1 + 0x10)

if (rax_1 != 0)
    rcx_1 = rax_1

*rcx_1 = 0
*(rcx_1 + 8) = 0
void* rcx_2 = &arg1[0x56]
arg1[0x43].d = 0xffffffff
*(arg1 + 0x21c) = 0
arg1[0x45] = 0
arg1[0x46].d = 0
arg1[0x47].d = 0xea60
*(arg1 + 0x23c) = 1
arg1[0x48] = &data_143051e50
arg1[0x49] = 0
arg1[0x4a] = 0
arg1[0x4b].d = data_143f2c430
*(arg1 + 0x25c) = 1
__builtin_memset(&arg1[0x4c], 0, 0x50)
*(rcx_2 + 0x10) = 0
*(rcx_2 + 0x18) = 0
*(rcx_2 + 0x1c) = 0x80
void* rax_3 = *(rcx_2 + 0x10)

if (rax_3 != 0)
    rcx_2 = rax_3

*rcx_2 = 0
*(rcx_2 + 8) = 0
arg1[0x5a].d = 0xffffffff
*(arg1 + 0x2d4) = 0
arg1[0x5c] = 0
arg1[0x5d].d = 0
sub_140d3a3a0(&arg1[0x60], nullptr)
__builtin_memset(&arg1[0x61], 0, 0x28)
arg1[0x1c] = 0
*(arg1 + 0xec) = data_1439e588c.d
arg1[0x1e].d = data_1439e588c
*(arg1 + 0xf4) = data_1439e588c.d
arg1[0x1f].d = data_1439e588c
arg1[0x5e].w = 0
*(arg1 + 0xc9) = 0x101
int128_t var_18 = data_1439a9488
int32_t rax_4 = sub_140cdd5d0(arg1, &var_18)
arg1[0xa].b = 1
rax_4.b = rax_4 s>= 6
rax_4.b += 1
*(arg1 + 0x51) = rax_4.b
*(arg1 + 0x134) = 1
arg1[0x26].d = 0x3f800000
*(arg1 + 0x1d4) = 1
arg1[0x3a].d = 0x3f800000
sub_141b35b70(arg1)
return arg1
