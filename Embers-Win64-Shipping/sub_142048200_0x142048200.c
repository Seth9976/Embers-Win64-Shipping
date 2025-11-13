// 函数: sub_142048200
// 地址: 0x142048200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1].d = 0xffffffff
*(arg1 + 0xc) = arg2
arg1[0x12] = 0
arg1[0x13].d = 0
*(arg1 + 0x9c) = 8
arg1[0x14].d = 0xffff0001
*(arg1 + 0xa4) = 0xff
arg1[0x19] = 0
arg1[0x1a].d = 0
*(arg1 + 0xd4) = 2
arg1[0x21] = 0
arg1[0x22].d = 0
*(arg1 + 0x114) = 3
__builtin_memset(&arg1[0x23], 0, 0x18)
*arg1 = &data_1432aa078
arg1[0x26].d = 0
__builtin_memset(&arg1[0x27], 0, 0x34)
__builtin_memset(&arg1[0x2e], 0, 0x28)
int32_t rdx

if (data_143f4080c s<= 0)
    rdx = 0x100
    
    if (data_143a2e1bc s<= 0x100)
        rdx = data_143a2e1bc
else
    rdx = data_143a2e1bc

data_143f40ab0 = rdx
arg1[0x33].d = arg3
return arg1
