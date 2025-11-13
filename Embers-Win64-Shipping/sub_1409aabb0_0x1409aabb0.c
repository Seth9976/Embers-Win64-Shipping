// 函数: sub_1409aabb0
// 地址: 0x1409aabb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, sub_140d20910())
int64_t* rcx_1 = &arg1[0xa]
arg1[5] = 0
*arg1 = &data_142e401e8
arg1[7].d = 0
arg1[8] = 0
arg1[9] = 0
rcx_1[2] = 0
rcx_1[3].d = 0
*(rcx_1 + 0x1c) = 0x80
int64_t* rax_1 = rcx_1[2]

if (rax_1 != 0)
    rcx_1 = rax_1

*rcx_1 = 0
rcx_1[1] = 0
void* rcx_2 = &arg1[0x11]
arg1[0xe].d = 0xffffffff
__builtin_memset(arg1 + 0x74, 0, 0x14)
*(rcx_2 + 0x10) = 0
*(rcx_2 + 0x18) = 0
*(rcx_2 + 0x1c) = 0x80
void* rax_2 = *(rcx_2 + 0x10)

if (rax_2 != 0)
    rcx_2 = rax_2

*rcx_2 = 0
*(rcx_2 + 8) = 0
arg1[0x15].d = 0xffffffff
__builtin_memset(arg1 + 0xac, 0, 0x14)
arg1[0x18] = data_143dbb1f8.q
arg1[0x19].d = data_143dbb200
*(arg1 + 0xcc) = data_143dbb1f8.q
*(arg1 + 0xd4) = data_143dbb200
arg1[0x1b].d = 0
*(arg1 + 0xdc) = 0x100
return arg1
