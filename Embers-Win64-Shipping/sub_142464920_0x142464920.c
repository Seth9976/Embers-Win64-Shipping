// 函数: sub_142464920
// 地址: 0x142464920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
arg1[1] = arg2[1]
arg1[2].d = arg2[2].d
*(arg1 + 0x14) = *(arg2 + 0x14)
*(arg1 + 0x15) = *(arg2 + 0x15)
*(arg1 + 0x16) = *(arg2 + 0x16)
arg1[3] = 0
arg1[4].d = 0xffffffff
__builtin_memset(arg1 + 0x24, 0, 0x14)
sub_140cea340()
void* rax_7
bool rcx

if (arg2[3] == 0)
    rcx = true
    rax_7 = nullptr
else
    bool cond:0_1 = sub_140d3e110(&arg2[4]) == 0
    rax_7 = arg2[3]
    rcx = cond:0_1

if (rcx != 0 && arg2[6].d != 0)
    rax_7 = sub_140cd0630(&arg2[3], nullptr, 0)
    
    if (rax_7 == 0 || (data_143e1b828 & *(*(rax_7 + 8) + 0x10)) == 0)
        rax_7 = arg2[3]
        
        if (rax_7 != 0)
            arg2[4].d = 0xffffffff
            rax_7 = nullptr
            *(arg2 + 0x24) = 0
            arg2[3] = 0
    else
        arg2[3] = rax_7

arg1[3] = rax_7
arg1[4] = arg2[4]
sub_140780c40(&arg1[5], &arg2[5])
arg1[7].d = arg2[7].d
*(arg1 + 0x3c) = *(arg2 + 0x3c)
arg1[8] = 0
arg1[9].d = 0xffffffff
__builtin_memset(arg1 + 0x4c, 0, 0x14)
sub_140cea340()
void* rax_12
bool rcx_5

if (arg2[8] == 0)
    rcx_5 = true
    rax_12 = nullptr
else
    bool cond:1_1 = sub_140d3e110(&arg2[9]) == 0
    rax_12 = arg2[8]
    rcx_5 = cond:1_1

if (rcx_5 != 0 && arg2[0xb].d != 0)
    rax_12 = sub_140cd0630(&arg2[8], nullptr, 0)
    
    if (rax_12 == 0 || (data_143e1b828 & *(*(rax_12 + 8) + 0x10)) == 0)
        rax_12 = arg2[8]
        
        if (rax_12 != 0)
            arg2[9].d = 0xffffffff
            rax_12 = nullptr
            *(arg2 + 0x4c) = 0
            arg2[8] = 0
    else
        arg2[8] = rax_12

arg1[8] = rax_12
arg1[9] = arg2[9]
sub_140780c40(&arg1[0xa], &arg2[0xa])
arg1[0xc] = 0
arg1[0xd].d = 0xffffffff
__builtin_memset(arg1 + 0x6c, 0, 0x14)
sub_140cea340()
void* rax_15
bool rcx_10

if (arg2[0xc] == 0)
    rcx_10 = true
    rax_15 = nullptr
else
    bool cond:2_1 = sub_140d3e110(&arg2[0xd]) == 0
    rax_15 = arg2[0xc]
    rcx_10 = cond:2_1

if (rcx_10 != 0 && arg2[0xf].d != 0)
    rax_15 = sub_140cd0630(&arg2[0xc], nullptr, 0)
    
    if (rax_15 == 0 || (data_143e1b828 & *(*(rax_15 + 8) + 0x10)) == 0)
        rax_15 = arg2[0xc]
        
        if (rax_15 != 0)
            arg2[0xd].d = 0xffffffff
            rax_15 = nullptr
            *(arg2 + 0x6c) = 0
            arg2[0xc] = 0
    else
        arg2[0xc] = rax_15

arg1[0xc] = rax_15
arg1[0xd] = arg2[0xd]
sub_140780c40(&arg1[0xe], &arg2[0xe])
return arg1
