// 函数: sub_140b94650
// 地址: 0x140b94650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1].b = 0
*arg1 = &data_142d44d70

if (data_143de5432 == 0)
    sub_140bbbba0()
    void* rdi_1 = data_143e1a338
    EnterCriticalSection(rdi_1 + 0x38)
    int64_t rbp_1 = sx.q(*(rdi_1 + 0x30))
    int32_t rax_1 = (rbp_1 + 1).d
    *(rdi_1 + 0x30) = rax_1
    
    if (rax_1 s> *(rdi_1 + 0x34))
        sub_1405a4d70(rdi_1 + 0x28)
    
    *(*(rdi_1 + 0x28) + (rbp_1 << 3)) = arg1
    
    if (rdi_1 != -0x38)
        LeaveCriticalSection(rdi_1 + 0x38)
    
    arg1[1].b = 1

void* rcx_3 = &arg1[0x2e]
*arg1 = &data_142e83838
arg1[2].d = *arg3
*(arg1 + 0x14) = *(arg3 + 4)
*(arg1 + 0x1c) = *(arg3 + 0xc)
*(arg1 + 0x24) = *(arg3 + 0x14)
arg1[7] = 0
arg1[8].d = arg3[0xc]
*(arg1 + 0x44) = arg3[0xd]
arg1[9].d = arg3[0xe]
__builtin_memset(&arg1[0xa], 0, 0x74)
*(arg1 + 0xc4) = 0x7f7fffff
*(arg1 + 0xcc) = 0
*(arg1 + 0xce) = 0
__builtin_memset(&arg1[0x1a], 0, 0x24)
__builtin_memset(&arg1[0x1f], 0, 0x64)
arg1[0x2c] = 0
arg1[0x2d] = 0
*(rcx_3 + 0x10) = 0
*(rcx_3 + 0x18) = 0
*(rcx_3 + 0x1c) = 0x80
void* rax_9 = *(rcx_3 + 0x10)

if (rax_9 != 0)
    rcx_3 = rax_9

*rcx_3 = 0
*(rcx_3 + 8) = 0
arg1[0x32].d = 0xffffffff
*(arg1 + 0x194) = 0
arg1[0x34] = 0
arg1[0x35].d = 0
InitializeCriticalSection(&arg1[0x36])
SetCriticalSectionSpinCount(&arg1[0x36], 0xfa0)
arg1[0x3b] = arg2
void* rcx_6 = &arg1[0x3f]
arg1[0x3c] = arg4
arg1[0x3d] = 0
arg1[0x3e] = 0
*(rcx_6 + 0x10) = 0
*(rcx_6 + 0x18) = 0
*(rcx_6 + 0x1c) = 0x80
void* rax_10 = *(rcx_6 + 0x10)

if (rax_10 != 0)
    rcx_6 = rax_10

*rcx_6 = 0
*(rcx_6 + 8) = 0
arg1[0x43].d = 0xffffffff
*(arg1 + 0x21c) = 0
arg1[0x45] = 0
arg1[0x46].d = 0
arg1[0x47].b = 0
int32_t rax_11 = data_143e1a574
data_143e1a574 += 1
void* rcx_7 = &arg1[0x56]
*(arg1 + 0x23c) = rax_11 + 1
__builtin_memset(&arg1[0x48], 0, 0x70)
*(rcx_7 + 0x10) = 0
*(rcx_7 + 0x18) = 0
*(rcx_7 + 0x1c) = 0x80
void* rax_13 = *(rcx_7 + 0x10)

if (rax_13 != 0)
    rcx_7 = rax_13

*rcx_7 = 0
*(rcx_7 + 8) = 0
void* rcx_8 = &arg1[0x60]
arg1[0x5a].d = 0xffffffff
*(arg1 + 0x2d4) = 0
arg1[0x5c] = 0
arg1[0x5d].d = 0
arg1[0x5e] = 0
arg1[0x5f] = 0
*(rcx_8 + 0x10) = 0
*(rcx_8 + 0x18) = 0
*(rcx_8 + 0x1c) = 0x80
void* rax_14 = *(rcx_8 + 0x10)

if (rax_14 != 0)
    rcx_8 = rax_14

*rcx_8 = 0
*(rcx_8 + 8) = 0
void* rcx_9 = &arg1[0x6c]
arg1[0x64].d = 0xffffffff
*(arg1 + 0x324) = 0
arg1[0x66] = 0
arg1[0x67].d = 0
arg1[0x68] = -1
arg1[0x69] = -1
arg1[0x6a] = 0
arg1[0x6b] = 0
*(rcx_9 + 0x10) = 0
*(rcx_9 + 0x18) = 0
*(rcx_9 + 0x1c) = 0x80
void* rax_15 = *(rcx_9 + 0x10)

if (rax_15 != 0)
    rcx_9 = rax_15

*rcx_9 = 0
*(rcx_9 + 8) = 0
void* rcx_10 = &arg1[0x76]
arg1[0x70].d = 0xffffffff
*(arg1 + 0x384) = 0
arg1[0x72] = 0
arg1[0x73].d = 0
arg1[0x74] = 0
arg1[0x75] = 0
*(rcx_10 + 0x10) = 0
*(rcx_10 + 0x18) = 0
*(rcx_10 + 0x1c) = 0x80
void* rax_16 = *(rcx_10 + 0x10)

if (rax_16 != 0)
    rcx_10 = rax_16

*rcx_10 = 0
*(rcx_10 + 8) = 0
void* rcx_11 = &arg1[0x80]
arg1[0x7a].d = 0xffffffff
*(arg1 + 0x3d4) = 0
arg1[0x7c] = 0
arg1[0x7d].d = 0
arg1[0x7e] = 0
arg1[0x7f] = 0
*(rcx_11 + 0x10) = 0
*(rcx_11 + 0x18) = 0
*(rcx_11 + 0x1c) = 0x80
void* rax_17 = *(rcx_11 + 0x10)

if (rax_17 != 0)
    rcx_11 = rax_17

*rcx_11 = 0
*(rcx_11 + 8) = 0
void* rcx_12 = &arg1[0x8a]
arg1[0x84].d = 0xffffffff
*(arg1 + 0x424) = 0
arg1[0x86] = 0
arg1[0x87].d = 0
arg1[0x88] = 0
arg1[0x89] = 0
*(rcx_12 + 0x10) = 0
*(rcx_12 + 0x18) = 0
*(rcx_12 + 0x1c) = 0x80
void* rax_18 = *(rcx_12 + 0x10)

if (rax_18 != 0)
    rcx_12 = rax_18

*rcx_12 = 0
*(rcx_12 + 8) = 0
void* rcx_13 = &arg1[0x94]
arg1[0x8e].d = 0xffffffff
*(arg1 + 0x474) = 0
arg1[0x90] = 0
arg1[0x91].d = 0
arg1[0x92] = 0
arg1[0x93] = 0
*(rcx_13 + 0x10) = 0
*(rcx_13 + 0x18) = 0
*(rcx_13 + 0x1c) = 0x80
void* rax_19 = *(rcx_13 + 0x10)

if (rax_19 != 0)
    rcx_13 = rax_19

*rcx_13 = 0
*(rcx_13 + 8) = 0
arg1[0x98].d = 0xffffffff
*(arg1 + 0x4c4) = 0
arg1[0x9a] = 0
arg1[0x9b].d = 0
__builtin_memset(&arg1[0x9c], 0, 0x1b)
__builtin_memset(&arg1[0xa0], 0, 0x16)
__builtin_memset(&arg1[0xa3], 0, 0x16)
__builtin_memset(&arg1[0xa6], 0, 0x16)
__builtin_memset(&arg1[0xa9], 0, 0x20)
sub_140b9b3f0(arg1, *arg3)
return arg1
