// 函数: sub_141d4baa0
// 地址: 0x141d4baa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[3] = 0
arg1[4] = 0
*arg1 = &data_143226e58
arg1[1] = &data_143226e80
arg1[2] = &data_143226e90
arg1[5] = 0
arg1[6] = 0
arg1[0xd].b = 0
__builtin_memset(&arg1[0xe], 0, 0x50)
arg1[0x18] = -0x8000000000000000
int64_t* rax = j_sub_140a82f30(0x178)
int64_t* rsi = rax

if (rax == 0)
    rsi = nullptr
else
    *rax = 0
    void* rdx_1 = &rax[2]
    rax[1] = 0
    *(rdx_1 + 0x10) = 0
    *(rdx_1 + 0x18) = 0
    *(rdx_1 + 0x1c) = 0x80
    void* rcx = *(rdx_1 + 0x10)
    
    if (rcx != 0)
        rdx_1 = rcx
    
    void* rcx_1 = &rax[0xc]
    *rdx_1 = 0
    *(rdx_1 + 8) = 0
    rax[6].d = 0xffffffff
    *(rax + 0x34) = 0
    rax[8] = 0
    rax[9].d = 0
    rax[0xa] = 0
    rax[0xb] = 0
    *(rcx_1 + 0x10) = 0
    *(rcx_1 + 0x18) = 0
    *(rcx_1 + 0x1c) = 0x80
    void* rax_1 = *(rcx_1 + 0x10)
    
    if (rax_1 != 0)
        rcx_1 = rax_1
    
    *rcx_1 = 0
    *(rcx_1 + 8) = 0
    void* rcx_2 = &rsi[0x16]
    rsi[0x10].d = 0xffffffff
    *(rsi + 0x84) = 0
    rsi[0x12] = 0
    rsi[0x13].d = 0
    rsi[0x14] = 0
    rsi[0x15] = 0
    *(rcx_2 + 0x1c) = 0x80
    void* rax_2 = *(rcx_2 + 0x10)
    
    if (rax_2 != 0)
        rcx_2 = rax_2
    
    __builtin_memset(rcx_2, 0, 0x1c)
    void* rcx_3 = &rsi[0x20]
    rsi[0x1a].d = 0xffffffff
    *(rsi + 0xd4) = 0
    rsi[0x1c] = 0
    rsi[0x1d].d = 0
    rsi[0x1e] = 0
    rsi[0x1f] = 0
    *(rcx_3 + 0x1c) = 0x80
    void* rax_3 = *(rcx_3 + 0x10)
    
    if (rax_3 != 0)
        rcx_3 = rax_3
    
    __builtin_memset(rcx_3, 0, 0x1c)
    rsi[0x24].d = 0xffffffff
    *(rsi + 0x124) = 0
    rsi[0x26] = 0
    rsi[0x27].d = 0
    rsi[0x28] = 0
    rsi[0x29] = 0
    InitializeCriticalSection(&rsi[0x2a])
    SetCriticalSectionSpinCount(&rsi[0x2a], 0xfa0)

arg1[0x19] = rsi
InitializeCriticalSection(&arg1[0x1a])
SetCriticalSectionSpinCount(&arg1[0x1a], 0xfa0)
__builtin_memset(&arg1[0x1f], 0, 0x14)
arg1[0x22] = 0
arg1[0x23] = 0
arg1[0x24] = 2
__builtin_memset(&arg1[0x26], 0, 0x20)
int64_t* rax_4 = j_sub_140a82f30(0x10)

if (rax_4 == 0)
    rax_4 = nullptr
else
    *rax_4 = 0

arg1[0x2b] = rax_4
arg1[0x2a] = rax_4
arg1[0x2c] = -0x8000000000000000
return arg1
