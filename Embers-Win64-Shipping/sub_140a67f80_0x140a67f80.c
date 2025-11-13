// 函数: sub_140a67f80
// 地址: 0x140a67f80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140a60270(arg2)
int32_t rsi = 0

if (*arg2 != &data_142e62550)
    int32_t rdx = 0
    arg2[1].d = 0
    
    if (*(arg2 + 0xc) != 4)
        sub_1405947f0(arg2, 4)
        rdx = arg2[1].d
    
    arg2[1].d = rdx + 4
    
    if (rdx + 4 s> *(arg2 + 0xc))
        sub_140594770(arg2)
    
    **arg2 = 0x4e0061004e

if (arg2[2] != &data_142d404b0)
    int32_t rdx_1 = 0
    arg2[3].d = 0
    
    if (*(arg2 + 0x1c) != 2)
        sub_1405947f0(&arg2[2], 2)
        rdx_1 = arg2[3].d
    
    arg2[3].d = rdx_1 + 2
    
    if (rdx_1 + 2 s> *(arg2 + 0x1c))
        sub_140594770(&arg2[2])
    
    *arg2[2] = 0x2d

if (arg2[0xa] != &data_142e5c1c0)
    int32_t rdx_2 = 0
    arg2[0xb].d = 0
    
    if (*(arg2 + 0x5c) != 2)
        sub_1405947f0(&arg2[0xa], 2)
        rdx_2 = arg2[0xb].d
    
    arg2[0xb].d = rdx_2 + 2
    
    if (rdx_2 + 2 s> *(arg2 + 0x5c))
        sub_140594770(&arg2[0xa])
    
    *arg2[0xa] = 0x2b

if (arg2[0xc] != &data_142d404b0)
    arg2[0xd].d = 0
    
    if (*(arg2 + 0x6c) != 2)
        sub_1405947f0(&arg2[0xc], 2)
        rsi = arg2[0xd].d
    
    arg2[0xd].d = rsi + 2
    
    if (rsi + 2 s> *(arg2 + 0x6c))
        sub_140594770(&arg2[0xc])
    
    *arg2[0xc] = 0x2d

arg2[0xe].d = 0x2e002c
*(arg2 + 0x74) = 0x303
return arg2
