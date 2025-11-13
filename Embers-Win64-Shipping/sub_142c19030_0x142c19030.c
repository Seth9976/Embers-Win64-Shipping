// 函数: sub_142c19030
// 地址: 0x142c19030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__builtin_memset(arg1, 0, 0x16)
*(arg1 + 0x10) = 0
*(arg1 + 0x18) = 0
*(arg1 + 0x30) = 0
*(arg1 + 0x38) = 0
*(arg1 + 0x18) = 0xffffffff
*(arg1 + 0x1c) = 0
*(arg1 + 0x20) = 0
*(arg1 + 0x28) = 0
__builtin_memset(arg1 + 0x40, 0, 0x16)
*(arg1 + 0x50) = 0
*(arg1 + 0x58) = 0
*(arg1 + 0x70) = 0
*(arg1 + 0x78) = 0
*(arg1 + 0x58) = 0xffffffff
*(arg1 + 0x5c) = 0
*(arg1 + 0x60) = 0
*(arg1 + 0x68) = 0
*(arg1 + 0x80) = arg3
void* rcx = *(arg3 + 0x18)
*(arg1 + 0x88) = rcx
*(arg1 + 0x90) = arg4
*(arg1 + 0x98) = 0
int128_t* const rdi = &data_14369a5d0
int32_t* rcx_2 = *sub_142c1f6d0(rcx + 0xb8)
int128_t* const rax_1 = &data_14369a5d0

if (rcx_2 != 0)
    rax_1 = rcx_2

if (*(rax_1 + 0x18) u>= 0xc)
    rdi = rax_1[1].q

*(arg1 + 0xa0) = rdi
*(arg1 + 0xa8) = sub_142c1fba0(rdi)
*(arg1 + 0xb0) = *(arg4 + 0x38)
*(arg1 + 0xb4) = 1
*(arg1 + 0xb8) = arg2
*(arg1 + 0xbc) = 0xffffffff
*(arg1 + 0xc0) = 0
*(arg1 + 0xc4) = 6
uint16_t rax_4 = zx.w(*(rdi + 5))
int16_t rdx_1 = zx.w(*(rdi + 4)) * 0x100
*(arg1 + 0xcd) = 0x101
*(arg1 + 0xcf) = 0
*(arg1 + 0xd0) = 1
rax_4.b = rdx_1 != neg.w(rax_4)
*(arg1 + 0xcc) = rax_4.b
sub_142c208d0(arg1)
return arg1
