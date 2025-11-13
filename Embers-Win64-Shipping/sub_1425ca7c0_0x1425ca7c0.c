// 函数: sub_1425ca7c0
// 地址: 0x1425ca7c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__builtin_memset(arg1, 0, 0x20)
__builtin_memset(&arg1[8], 0, 0x20)
int64_t rbp = sx.q(arg1[1].d)
int32_t rax = (rbp + 1).d
arg1[1].d = rax

if (rax s> *(arg1 + 0xc))
    sub_1405a4cf0(arg1)

*(*arg1 + (rbp << 2)) = 0xffffffff
int64_t rbp_1 = sx.q(arg1[1].d)
int32_t rax_2 = (rbp_1 + 1).d
arg1[1].d = rax_2

if (rax_2 s> *(arg1 + 0xc))
    sub_1405a4cf0(arg1)

*(*arg1 + (rbp_1 << 2)) = 0
int64_t rbp_2 = sx.q(arg1[1].d)
int32_t rax_4 = (rbp_2 + 1).d
arg1[1].d = rax_4

if (rax_4 s> *(arg1 + 0xc))
    sub_1405a4cf0(arg1)

*(*arg1 + (rbp_2 << 2)) = 1
int64_t rbp_3 = sx.q(arg1[3].d)
int32_t rax_6 = (rbp_3 + 1).d
arg1[3].d = rax_6

if (rax_6 s> *(arg1 + 0x1c))
    sub_1405daba0(&arg1[2])

*(rbp_3 + arg1[2]) = 0
int64_t rbp_4 = sx.q(arg1[3].d)
int32_t rax_8 = (rbp_4 + 1).d
arg1[3].d = rax_8

if (rax_8 s> *(arg1 + 0x1c))
    sub_1405daba0(&arg1[2])

*(rbp_4 + arg1[2]) = 0x7f
int64_t rbp_5 = sx.q(arg1[3].d)
int32_t rax_10 = (rbp_5 + 1).d
arg1[3].d = rax_10

if (rax_10 s> *(arg1 + 0x1c))
    sub_1405daba0(&arg1[2])

*(rbp_5 + arg1[2]) = 0xff
arg1[4].d = 0x2a
*(arg1 + 0x24) = 0xffffffff
arg1[5].d = 0
*(arg1 + 0x2c) = 1
arg1[6].d = 0xbf800000
*(arg1 + 0x34) = 0
arg1[7].d = 0x3f800000
int64_t rdi = sx.q(arg1[9].d)
int32_t var_24 = 0x40000000
int32_t var_20 = 0x40400000
int32_t rax_12 = (rdi + 1).d
arg1[9].d = rax_12

if (rax_12 s> *(arg1 + 0x4c))
    sub_140638a00(&arg1[8])

int64_t rdx_8 = rdi * 3
int64_t rcx_6 = arg1[8]
int32_t var_24_1 = 0xc0000000
*(rcx_6 + (rdx_8 << 2)) = 0x3f800000.q
*(rcx_6 + (rdx_8 << 2) + 8) = 0x40400000
int64_t rdi_1 = sx.q(arg1[9].d)
int32_t var_20_1 = 0xc0400000
int32_t rax_13 = (rdi_1 + 1).d
arg1[9].d = rax_13

if (rax_13 s> *(arg1 + 0x4c))
    sub_140638a00(&arg1[8])

int64_t rdx_10 = arg1[8]
int64_t r8 = rdi_1 * 3
*(rdx_10 + (r8 << 2)) = 0xbf800000.q
*(rdx_10 + (r8 << 2) + 8) = 0xc0400000
sub_1425ccc20(&arg1[0xa], 2)
return arg1
