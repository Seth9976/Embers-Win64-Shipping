// 函数: sub_1419dee50
// 地址: 0x1419dee50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, arg2)
int128_t zmm0 = data_143013fb0
int64_t* rdx = &arg1[8]
void* rcx = &arg1[0x12]
*arg1 = &data_1430139c0
arg1[6] = 0
arg1[7] = 0
rdx[2] = 0
rdx[3].d = 0
*(rdx + 0x1c) = 0x80
int64_t* rax = rdx[2]

if (rax != 0)
    rdx = rax

*rdx = 0
rdx[1] = 0
arg1[0xc].d = 0xffffffff
*(arg1 + 0x64) = 0
arg1[0xe] = 0
arg1[0xf].d = 0
arg1[0x10] = 0
arg1[0x11] = 0
*(rcx + 0x10) = 0
*(rcx + 0x18) = 0
*(rcx + 0x1c) = 0x80
void* rax_1 = *(rcx + 0x10)

if (rax_1 != 0)
    rcx = rax_1

*rcx = 0
*(rcx + 8) = 0
arg1[0x16].d = 0xffffffff
*(arg1 + 0xb4) = 0
arg1[0x18] = 0
arg1[0x19].d = 0
arg1[0x1a] = 0
arg1[0x1b] = 0
arg1[0x1d] = 0
arg1[0x1e] = 0
*(arg1 + 0x118) = zmm0
arg1[0x25].d = 1.d
*(arg1 + 0x12c) = 0
*(arg1 + 0x134) = 0x42c80000
arg1[0x27].b = 0
__builtin_memset(&arg1[0x1f], 0, 0x20)
*(arg1 + 0x144) = 0
return arg1
