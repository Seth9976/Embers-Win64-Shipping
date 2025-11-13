// 函数: sub_1420483b0
// 地址: 0x1420483b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = arg4
int32_t i_1 = 0
arg1[1] = arg2
__builtin_memset(&arg1[2], 0, 0x20)
arg1[6] = arg3
__builtin_memset(&arg1[9], 0, 0x28)
int32_t rax_1 = (*(*arg3 + 0x60))(arg3)
arg1[0xe].d = rax_1
void* rax_2 = sub_142337750(arg3, rax_1)
int64_t r12 = sx.q(arg1[5].d)
int32_t i_2 = *(rax_2 + 8)
int32_t rcx_2 = r12.d + i_2
arg1[5].d = rcx_2

if (rcx_2 s> *(arg1 + 0x2c))
    sub_142066590(&arg1[4])

void* rcx_5 = r12 * 0x150 + arg1[4]

if (i_2 != 0)
    int32_t i
    
    do
        __builtin_memset(rcx_5, 0, 0x40)
        *(rcx_5 + 0x40) = 0xffffffff
        __builtin_memset(rcx_5 + 0x44, 0, 0x14)
        *(rcx_5 + 0x58) = 1
        __builtin_memset(rcx_5 + 0x60, 0, 0x30)
        rcx_5 += 0x150
        *(rcx_5 - 0xc0) = data_14399f6e0
        *(rcx_5 - 0xb0) = data_14399f6f0
        *(rcx_5 - 0xa0) = data_14399f700
        *(rcx_5 - 0x90) = data_14399f710
        *(rcx_5 - 0x80) = data_14399f6e0
        *(rcx_5 - 0x70) = data_14399f6f0
        *(rcx_5 - 0x60) = data_14399f700
        int128_t zmm1 = data_14399f710
        __builtin_memset(rcx_5 - 0x40, 0, 0x38)
        *(rcx_5 - 0x50) = zmm1
        i = i_2
        i_2 -= 1
    while (i != 1)

int64_t rbp = sx.q(*(rax_2 + 8))
int64_t r15 = sx.q(arg1[3].d)
int32_t rax_3 = (r15 + rbp).d
arg1[3].d = rax_3

if (rax_3 s> *(arg1 + 0x1c))
    sub_1405a4f90(&arg1[2])

memset((r15 << 4) + arg1[2], 0, rbp << 4)

if (*(rax_2 + 8) s> 0)
    int64_t rcx_10 = 0
    
    do
        rcx_10 += 0x10
        *(rcx_10 + arg1[2] - 0x10) = arg1
        *(arg1[2] + rcx_10 - 8) = i_1
        i_1 += 1
    while (i_1 s< *(rax_2 + 8))

sub_1420725f0(arg1)
return arg1
