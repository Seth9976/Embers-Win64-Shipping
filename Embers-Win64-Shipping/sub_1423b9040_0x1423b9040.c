// 函数: sub_1423b9040
// 地址: 0x1423b9040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = arg3
*(arg1 + 0x10) = *arg4
*(arg1 + 0x20) = arg4[1]
*(arg1 + 0x30) = arg4[2]
*(arg1 + 0x40) = arg4[3]
*(arg1 + 0x50) = arg4[4]
arg1[0xd].d = 0xffffffff
*(arg1 + 0x6c) = 4
arg1[0xe] = 0
arg1[0xc] = &data_14333bf60
arg1[0xf] = 0
arg1[0x10] = 0
sub_1422b4e50(&arg1[0x11])
sub_142287b50(&arg1[0x22])
sub_1422877b0(&arg1[0x2a])
arg1[0x33].d = 0xffffffff
*(arg1 + 0x19c) = arg2
void* rbx_1 = &arg1[0x77]
arg1[0x44] = 0
arg1[0x45].d = 0
*(arg1 + 0x22c) = 8
arg1[0x46].d = 0xffff0101
*(arg1 + 0x234) = 0xff
arg1[0x4b] = 0
arg1[0x4c].d = 0
*(arg1 + 0x264) = 2
arg1[0x53] = 0
arg1[0x54].d = 0
*(arg1 + 0x2a4) = 3
__builtin_memset(&arg1[0x55], 0, 0x48)
arg1[0x66].d = 0
*(arg1 + 0x334) = 4
__builtin_memset(&arg1[0x67], 0, 0x40)
arg1[0x6f] = -1
arg1[0x70].d = 0xffffffff
__builtin_memset(arg1 + 0x384, 0, 0x14)
arg1[0x32] = &data_14333bfa0
arg1[0x73].d = 0xffffffff
arg1[0x74] = &arg1[0x11]
arg1[0x76].d = 0xffffffff
*(arg1 + 0x3b4) = 4
arg1[0x75] = &data_14333c018
*(rbx_1 + 0x68) = 0
*(rbx_1 + 0x70) = 0
*(rbx_1 + 0x74) = 1
__builtin_memset(rbx_1 + 0x78, 0, 0x18)
*(rbx_1 + 0x90) = 0xffffffff
*(rbx_1 + 0x9c) &= 0xfc0c003c
*(rbx_1 + 0x9c) |= 0x40c003c
*(rbx_1 + 0x94) = 0
*(rbx_1 + 0x98) = 0xffff0000
int64_t rdi_1 = sx.q(*(rbx_1 + 0x70))
int32_t rax = (rdi_1 + 1).d
*(rbx_1 + 0x70) = rax

if (rax s> *(rbx_1 + 0x74))
    sub_14083a750(rbx_1, rdi_1.d)

void* rax_1 = *(rbx_1 + 0x68)

if (rax_1 != 0)
    rbx_1 = rax_1

void* rax_2 = rdi_1 * 0x68
void* rax_3 = rax_2 + rbx_1

if (rax_2 != neg.q(rbx_1))
    *(rax_3 + 0x3c) &= 0xf8000000
    *(rax_3 + 0x64) &= 0xfffff800
    __builtin_memset(rax_3, 0, 0x3c)
    *(rax_3 + 0x48) = 1
    *(rax_3 + 0x58) = 0xffffffff
    *(rax_3 + 0x5c) = 0
    *(rax_3 + 0x60) = 0x3f800000

arg1[0x8b] = &arg1[0xc]
arg1[0x8c] = &arg1[0x32]
arg1[0x8d] = 0
arg1[0x8e] = 0
return arg1
