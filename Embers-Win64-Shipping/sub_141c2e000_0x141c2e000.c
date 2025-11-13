// 函数: sub_141c2e000
// 地址: 0x141c2e000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_1432050f8
int64_t i_1 = 2
arg1[1].d = 0
__builtin_memset(&arg1[2], 0, 0x1c)
*(arg1 + 0x2c) = 1
arg1[6] = &data_1432050f8
arg1[7].d = 0
__builtin_memset(&arg1[8], 0, 0x1c)
*(arg1 + 0x5c) = 1
arg1[0xc].d = 0
__builtin_memset(&arg1[0xd], 0, 0x50)
arg1[0x17].d = 0x41200000
*(arg1 + 0xbc) = 0x41a00000
arg1[0x18].d = 0x447a0000
*(arg1 + 0xc4) = 0xc0c00000
arg1[0x19].d = 0x3f800000
*(arg1 + 0xcc) = 0x40a00000
arg1[0x1a].d = 0x3f800000
*(arg1 + 0xd4) = 0x3f800000
arg1[0x1b] = 0x3f800000
arg1[0x1c].d = 0x100
*(arg1 + 0xe4) = 0

if (*(arg1 + 0x94) != 2)
    sub_1405c5570(&arg1[0x11], 2)

int64_t i

do
    int64_t rsi_1 = sx.q(arg1[0x12].d)
    int32_t rax_1 = (rsi_1 + 1).d
    arg1[0x12].d = rax_1
    
    if (rax_1 s> *(arg1 + 0x94))
        sub_1405a4d70(&arg1[0x11])
    
    int32_t* rdx_2 = &arg1[0x11][rsi_1]
    
    if (rdx_2 != 0)
        *rdx_2 = arg2.d
        rdx_2[1] = arg2.d
    
    i = i_1
    i_1 -= 1
while (i != 1)
return arg1
