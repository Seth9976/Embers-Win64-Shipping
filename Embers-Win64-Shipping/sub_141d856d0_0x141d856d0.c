// 函数: sub_141d856d0
// 地址: 0x141d856d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1].w = 0x100
arg1[3] = 0
arg1[4] = 0
*arg1 = &data_143237408
arg1[2] = &data_143237430
__builtin_memset(&arg1[5], 0, 0x78)
arg1[0x14].d = 1
*(arg1 + 0xa4) = 1
arg1[0x15].w = 0
*(arg1 + 0xaa) = 0
__builtin_memset(&arg1[0x16], 0, 0x20)
arg1[0x1a].d = 0xbf800000
*(arg1 + 0xd4) = 0x101
arg1[0x1b].w = 0
arg1[0x1c] = 0
arg1[0x1d] = 0
arg1[0x1e] = 2
arg1[0x1f] = 0
arg1[0x20] = 0
arg1[0x21] = 2
arg1[0x22] = 0
arg1[0x23] = 0
arg1[0x24] = 2
arg1[0x25] = 0
arg1[0x26] = 0
arg1[0x27] = 2
arg1[0x28] = 0
arg1[0x29].b = 0
InitializeCriticalSection(&arg1[0x2a])
SetCriticalSectionSpinCount(&arg1[0x2a], 0xfa0)
__builtin_memset(&arg1[0x2f], 0, 0x20)
int32_t var_10 = 0x10
void*** rax = sub_140a84c80(0, 0x30, 0)

if (rax != 0)
    rax[1] = arg1
    *rax = &data_142ed9048
    *(rax + 0x10) = sub_141d867e0.o
    rax[5] = sub_140a387b0()
    void** r8_1 = *rax
    r8_1[8](rax, &data_143de56c8, r8_1)
else if (data_143de56d0 != 0)
    int64_t* rcx_3 = data_143de56c8
    
    if (rcx_3 != 0)
        (*(*rcx_3 + 0x38))(rcx_3, 0)
        int64_t rcx_4 = data_143de56c8
        
        if (rcx_4 != 0)
            data_143de56c8 = sub_140a84c80(rcx_4, 0, 0)
        
        data_143de56d0 = 0

if (rax != 0)
    (*rax)[7](rax, 0)
    int64_t rax_5 = sub_140a84c80(rax, 0, 0)
    
    if (rax_5 != 0)
        sub_140a74f90(rax_5)

int32_t var_10_1 = 0x10
int64_t* rax_6 = sub_140a84c80(0, 0x30, 0)

if (rax_6 != 0)
    rax_6[1] = arg1
    *rax_6 = &data_143237d10
    *(rax_6 + 0x10) = sub_141d867d0.o
    rax_6[5] = sub_140a387b0()
    *rax_6 = &data_143237d68

if (rax_6 != 0)
    sub_140599630(&data_14399fbf8, 1)
    void arg_8
    (*(*rax_6 + 0x30))(rax_6, &arg_8)
    int64_t rsi_1 = sx.q(data_14399fc00)
    int32_t rax_9 = (rsi_1 + 1).d
    bool cond:0_1 = rax_9 s<= data_14399fc04
    data_14399fc00 = rax_9
    
    if (not(cond:0_1))
        sub_1405a4f90(&data_14399fbf8)
    
    void** rax_12 = (rsi_1 << 4) + data_14399fbf8
    *rax_12 = rax_6
    rax_12[1].d = 3

return arg1
