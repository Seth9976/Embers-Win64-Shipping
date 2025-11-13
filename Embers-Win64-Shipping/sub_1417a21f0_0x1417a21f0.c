// 函数: sub_1417a21f0
// 地址: 0x1417a21f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
arg1[1] = 0
arg1[2] = 2
arg1[3] = 0
arg1[4] = 0
arg1[5] = 2
arg1[6] = 0
arg1[7] = 0
arg1[8] = 2
arg1[9] = 0
arg1[0xa] = 0
arg1[0xb] = 2
arg1[0xc] = 0
arg1[0xd] = 0
arg1[0xe] = 2
arg1[0xf] = 0
arg1[0x10] = 0
arg1[0x11] = 2
arg1[0x12].d = 0xffffff
arg1[0x13] = 0
arg1[0x14] = 0
int64_t* rcx = &arg1[0x15]
arg1[0x17] = 0
arg1[0x18].d = 0
*(arg1 + 0xc4) = 0x80
int64_t* rax = arg1[0x17]

if (rax != 0)
    rcx = rax

*rcx = 0
rcx[1] = 0
__builtin_memset(&arg1[0x19], 0, 0x14)
int64_t rdi = 4
arg1[0x19] = sub_140a82f30(0xc0, 8)
*(arg1 + 0xd4) = 4
arg1[0x1a].d = 4
sub_1417a5ea0(&arg1[0x13], 4)
int32_t i = 1

if (arg1[0x1a].d s> 1)
    do
        void* rdx_2 = arg1[0x13] + rdi
        int32_t rax_3 = i & 0xffffff
        i += 1
        rdi += 4
        *(rdx_2 - 4) &= 0xff000000
        *(rdx_2 - 4) |= rax_3
    while (i s< arg1[0x1a].d)

arg1[0x12].d = 0
sub_1406989a0(&arg1[0x15], 0, arg1[0x1a].d)
void* rcx_3 = &arg1[0x1f]
arg1[0x1c].d = 0xffffff
arg1[0x1d] = 0
arg1[0x1e] = 0
*(rcx_3 + 0x10) = 0
*(rcx_3 + 0x18) = 0
*(rcx_3 + 0x1c) = 0x80
void* rax_4 = *(rcx_3 + 0x10)

if (rax_4 != 0)
    rcx_3 = rax_4

*rcx_3 = 0
*(rcx_3 + 8) = 0
__builtin_memset(&arg1[0x23], 0, 0x14)
return arg1
