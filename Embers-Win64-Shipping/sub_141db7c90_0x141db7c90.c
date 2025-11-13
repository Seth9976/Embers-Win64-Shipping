// 函数: sub_141db7c90
// 地址: 0x141db7c90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, arg2)
sub_140b0b2f0(&arg1[5])
int64_t* rcx_1 = &arg1[0xd]
*arg1 = &data_14323cc38
arg1[5] = &data_14323ce98
__builtin_memset(&arg1[0xa], 0, 0x18)
rcx_1[2] = 0
rcx_1[3].d = 0
*(rcx_1 + 0x1c) = 0x80
int64_t* rax = rcx_1[2]

if (rax != 0)
    rcx_1 = rax

*rcx_1 = 0
rcx_1[1] = 0
arg1[0x11].d = 0xffffffff
*(arg1 + 0x8c) = 0
arg1[0x13] = 0
arg1[0x14].d = 0
__builtin_memset(&arg1[0x15], 0, 0x20)
arg1[0x19].d = 0xffffffff
*(arg1 + 0xcc) = 0
arg1[0x1b].d &= 0xfffffffe
arg1[0x1b].d |= 2
__builtin_memcpy(&arg1[6], 
    "\x00\x00\xc0\x3f\xcd\xcc\x4c\x3e\x6f\x12\x83\x3a\x00\x00\x00\x3f\x00\x00\xc0\x3f\x00\x00\xfa\x43\x"
"00\x00\x20\x41", 
    0x1c)
return arg1
