// 函数: sub_140819f30
// 地址: 0x140819f30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x68) = 0
int32_t rsi = *(arg2 + 0x70)
void* rbp = *(arg2 + 0x68)
*(arg1 + 0x70) = rsi

if (rsi != 0)
    sub_14083a160(arg1, rsi, 0)
    void* r9_1 = *(arg1 + 0x68)
    void* rdx_1 = arg2
    void* rcx = arg1
    
    if (rbp != 0)
        rdx_1 = rbp
    
    if (r9_1 != 0)
        rcx = r9_1
    
    memcpy(rcx, rdx_1, rsi * 0x68)
else
    *(arg1 + 0x74) = 1

*(arg1 + 0x78) = *(arg2 + 0x78)
*(arg1 + 0x80) = *(arg2 + 0x80)
*(arg1 + 0x88) = *(arg2 + 0x88)
*(arg1 + 0x90) = *(arg2 + 0x90)
*(arg1 + 0x94) = *(arg2 + 0x94)
*(arg1 + 0x98) = *(arg2 + 0x98)
*(arg1 + 0x9a) = *(arg2 + 0x9a)
*(arg1 + 0x9b) = *(arg2 + 0x9b)
*(arg1 + 0x9c) ^= (*(arg1 + 0x9c) ^ *(arg2 + 0x9c)) & 1
int32_t rax_11 = *(arg1 + 0x9c)
int32_t rcx_4 = ((rax_11 ^ *(arg2 + 0x9c)) & 2) ^ rax_11
*(arg1 + 0x9c) = rcx_4
int32_t rax_15 = ((rcx_4 ^ *(arg2 + 0x9c)) & 4) ^ rcx_4
*(arg1 + 0x9c) = rax_15
int32_t rcx_8 = ((rax_15 ^ *(arg2 + 0x9c)) & 8) ^ rax_15
*(arg1 + 0x9c) = rcx_8
int32_t rax_19 = ((rcx_8 ^ *(arg2 + 0x9c)) & 0x10) ^ rcx_8
*(arg1 + 0x9c) = rax_19
int32_t rcx_12 = ((rax_19 ^ *(arg2 + 0x9c)) & 0x20) ^ rax_19
*(arg1 + 0x9c) = rcx_12
int32_t rax_23 = ((rcx_12 ^ *(arg2 + 0x9c)) & 0x40) ^ rcx_12
*(arg1 + 0x9c) = rax_23
int32_t rcx_16 = ((rax_23 ^ *(arg2 + 0x9c)) & 0x1f80) ^ rax_23
*(arg1 + 0x9c) = rcx_16
int32_t rax_27 = ((rcx_16 ^ *(arg2 + 0x9c)) & 0xe000) ^ rcx_16
*(arg1 + 0x9c) = rax_27
int32_t rcx_20 = ((rax_27 ^ *(arg2 + 0x9c)) & 0x10000) ^ rax_27
*(arg1 + 0x9c) = rcx_20
int32_t rax_31 = ((rcx_20 ^ *(arg2 + 0x9c)) & 0x20000) ^ rcx_20
*(arg1 + 0x9c) = rax_31
int32_t rcx_24 = ((rax_31 ^ *(arg2 + 0x9c)) & 0x40000) ^ rax_31
*(arg1 + 0x9c) = rcx_24
int32_t rax_35 = ((rcx_24 ^ *(arg2 + 0x9c)) & 0x80000) ^ rcx_24
*(arg1 + 0x9c) = rax_35
int32_t rcx_28 = ((rax_35 ^ *(arg2 + 0x9c)) & 0x100000) ^ rax_35
*(arg1 + 0x9c) = rcx_28
int32_t rax_39 = ((rcx_28 ^ *(arg2 + 0x9c)) & 0x200000) ^ rcx_28
*(arg1 + 0x9c) = rax_39
int32_t rcx_32 = ((rax_39 ^ *(arg2 + 0x9c)) & 0x400000) ^ rax_39
*(arg1 + 0x9c) = rcx_32
int32_t rdx_5 = ((rcx_32 ^ *(arg2 + 0x9c)) & 0x3800000) ^ rcx_32
*(arg1 + 0x9c) = rdx_5
*(arg1 + 0x9c) = ((rdx_5 ^ *(arg2 + 0x9c)) & 0x4000000) ^ rdx_5
return arg1
