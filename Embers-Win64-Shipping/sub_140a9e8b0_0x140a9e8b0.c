// 函数: sub_140a9e8b0
// 地址: 0x140a9e8b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 0x1e8)
void* result = *(arg1 + 0x1d8)

if (result == 0)
    void* rax_1 = j_sub_140a82f30(0x1b0010)
    void* const rdx = rax_1
    
    if (rax_1 == 0)
        rdx = nullptr
    else
        *(rax_1 + 0x1b0000) = 0
    
    void* rcx_1 = rdx + 0x500
    int64_t i_3 = 0x400
    int64_t i
    
    do
        *(rcx_1 - 0x360) = *(arg1 + 0x1d8)
        *(rcx_1 - 0x1b0) = rcx_1 - 0x500
        *rcx_1 = rcx_1 - 0x350
        *(rcx_1 + 0x1b0) = rcx_1 - 0x1a0
        *(arg1 + 0x1d8) = rcx_1 + 0x10
        rcx_1 += 0x6c0
        i = i_3
        i_3 -= 1
    while (i != 1)
    *(rdx + 0x1b0000) = *(arg1 + 0x1d0)
    result = *(arg1 + 0x1d8)
    *(arg1 + 0x1d0) = rdx

int64_t rax_8 = *(result + 0x1a0)
*(arg1 + 0x1e0) += 1
*(arg1 + 0x1d8) = rax_8

if (arg1 != -0x1e8)
    LeaveCriticalSection(arg1 + 0x1e8)

memset(result, 0, 0x1a0)
__builtin_memset(result, 0, 0x1c)
*(result + 0x128) = 0
*(result + 0x130) = -1
*(result + 0x138) = 0
*(result + 0x140) = 0
void* const rax_9 = j_sub_140a82f30(0x20)

if (rax_9 == 0)
    rax_9 = nullptr
else
    __builtin_memset(rax_9, 0, 0x1a)

*(result + 0x148) = rax_9

if (rax_9 != 0)
    *(rax_9 + 0xc) += 1

int128_t zmm1 = arg3[1]
*(result + 0x160) = 0
void* rdx_1 = result + 0x1c
*(result + 0x170) = 0
void* rcx_4 = &data_14399eba4
*(result + 0x11c) = *arg2
uint128_t zmm0 = *arg3
*(result + 0x124) = arg2[1].d
*(result + 0x128) = zmm0
*(result + 0x138) = zmm1
*(result + 0x18) = data_14399eba0
int64_t i_2 = 2
int64_t i_1

do
    rdx_1 += 0x80
    zmm0 = *rcx_4
    rcx_4 += 0x80
    *(rdx_1 - 0x80) = zmm0
    *(rdx_1 - 0x70) = *(rcx_4 - 0x70)
    *(rdx_1 - 0x60) = *(rcx_4 - 0x60)
    *(rdx_1 - 0x50) = *(rcx_4 - 0x50)
    *(rdx_1 - 0x40) = *(rcx_4 - 0x40)
    *(rdx_1 - 0x30) = *(rcx_4 - 0x30)
    *(rdx_1 - 0x20) = *(rcx_4 - 0x20)
    *(rdx_1 - 0x10) = *(rcx_4 - 0x10)
    i_1 = i_2
    i_2 -= 1
while (i_1 != 1)
return result
