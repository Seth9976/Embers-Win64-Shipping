// 函数: sub_140949850
// 地址: 0x140949850
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142e2d488
sub_140b0b2f0(&arg1[1])
*arg1 = &data_142e32e10
int32_t arg_8 = 0
arg1[1] = &data_142e32f98
arg1[2] = &data_142e32fa8
arg1[3] = 0
arg1[4].d = 0
arg1[5] = 0
arg1[6] = 0
sub_141c30760(&arg1[7])
__builtin_memset(&arg1[0x15], 0, 0x20)
void* rcx_2 = &arg1[0x20]
arg1[0x19].d = 0xffffffff
*(arg1 + 0xcc) = 0
*(arg1 + 0xd4) = 0
arg1[0x1b].w = 0
__builtin_memset(&arg1[0x1c], 0, 0x20)
*(rcx_2 + 0x10) = 0
*(rcx_2 + 0x18) = 0
*(rcx_2 + 0x1c) = 0x80
void* rax = *(rcx_2 + 0x10)

if (rax != 0)
    rcx_2 = rax

*rcx_2 = 0
*(rcx_2 + 8) = 0
void* rcx_3 = &arg1[0x2d]
arg1[0x24].d = 0xffffffff
*(arg1 + 0x124) = 0
arg1[0x26] = 0
arg1[0x27].d = 0
__builtin_memset(&arg1[0x28], 0, 0x28)
*(rcx_3 + 0x10) = 0
*(rcx_3 + 0x18) = 0
*(rcx_3 + 0x1c) = 0x80
void* rax_1 = *(rcx_3 + 0x10)

if (rax_1 != 0)
    rcx_3 = rax_1

*rcx_3 = 0
*(rcx_3 + 8) = 0
arg1[0x31].d = 0xffffffff
*(arg1 + 0x18c) = 0
arg1[0x33] = 0
arg1[0x34].d = 0
sub_141c30640(&arg1[0x35])
__builtin_memset(&arg1[0x5b], 0, 0x14)
arg1[0x5f] = 0x4000000000000000
int32_t var_20 = 0
int64_t* rax_2 = sub_140a84c80(0, 0x30, 0)

if (rax_2 != 0)
    rax_2[1] = arg1
    *rax_2 = &data_142da2598
    *(rax_2 + 0x10) = sub_14096e1f0.o
    rax_2[5] = sub_140a387b0()
    *rax_2 = &data_142da25f0

if (rax_2 != 0)
    sub_140599630(&data_1439aa970, 1)
    void arg_10
    (*(*rax_2 + 0x30))(rax_2, &arg_10)
    int64_t rsi_1 = sx.q(data_1439aa978)
    int32_t rax_5 = (rsi_1 + 1).d
    bool cond:0_1 = rax_5 s<= data_1439aa97c
    data_1439aa978 = rax_5
    
    if (not(cond:0_1))
        sub_1405a4f90(&data_1439aa970)
    
    void** rax_8 = (rsi_1 << 4) + data_1439aa970
    *rax_8 = rax_2
    rax_8[1].d = 3

void arg_18

if (arg2 != 0)
    arg1[3] = *(*(*arg2 + 0x18))(arg2, &arg_18)
return arg1
