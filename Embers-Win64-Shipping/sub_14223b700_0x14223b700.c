// 函数: sub_14223b700
// 地址: 0x14223b700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, arg2)
int64_t* rcx = &arg1[0x12]
*arg1 = &data_14330a528
arg1[5] = &data_14330a788
__builtin_memset(&arg1[6], 0, 0x30)
__builtin_memcpy(&arg1[0xc], 
    "\x03\x00\x00\x00\x02\x00\x00\x00\x01\x00\x00\x00\x01\x00\x00\x00\x01\x00\x00\x00\x02\x00\x00\x00", 
    0x18)
arg1[0x10] = 0
arg1[0x11] = 0
rcx[2] = 0
rcx[3].d = 0
*(rcx + 0x1c) = 0x80
int64_t* rax = rcx[2]

if (rax != 0)
    rcx = rax

*rcx = 0
rcx[1] = 0
void* rcx_1 = &arg1[0x1c]
arg1[0x16].d = 0xffffffff
*(arg1 + 0xb4) = 0
arg1[0x18] = 0
arg1[0x19].d = 0
arg1[0x1a] = 0
arg1[0x1b] = 0
*(rcx_1 + 0x10) = 0
*(rcx_1 + 0x18) = 0
*(rcx_1 + 0x1c) = 0x80
void* rax_1 = *(rcx_1 + 0x10)

if (rax_1 != 0)
    rcx_1 = rax_1

*rcx_1 = 0
*(rcx_1 + 8) = 0
arg1[0x20].d = 0xffffffff
*(arg1 + 0x104) = 0
arg1[0x22] = 0
arg1[0x23].d = 0
arg1[0x25] = 0
arg1[0x26] = 0
return arg1
