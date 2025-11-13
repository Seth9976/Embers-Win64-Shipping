// 函数: sub_142134ab0
// 地址: 0x142134ab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdx = *(arg1 + 0xd0)

if (rdx == 0)
    *(arg1 + 0xd8) &= 0xf3
    *(arg1 + 0xdc) = 0
    *(arg1 + 0xd9) = 0
    *(arg1 + 0x138) = 2
    *(arg1 + 0xd8) &= 0xdf
    return 2

char rcx = *(arg1 + 0x130)

if ((rcx & 1) == 0)
    (*(*rdx + 0x3e8))(rdx)
    rcx = *(arg1 + 0x130)
    *(arg1 + 0x134) = arg2
else
    arg2 = *(arg1 + 0x134)

*(arg1 + 0xdc) = arg2

if ((rcx & 0x10) == 0)
    int64_t* rcx_2 = *(arg1 + 0xd0)
    char rax_4 = (*(*rcx_2 + 0x3f0))(rcx_2)
    *(arg1 + 0x131) &= 0xfe
    rcx = *(arg1 + 0x130)
    rax_4 = ((rax_4 << 4 ^ *(arg1 + 0xd8)) & 0x10) ^ *(arg1 + 0xd8)
    *(arg1 + 0xd8) = rax_4
    *(arg1 + 0x131) |= rax_4 u>> 4 & 1
else
    char rax_2 = *(arg1 + 0x131)
    *(arg1 + 0xd8) &= 0xef
    *(arg1 + 0xd8) |= (rax_2 & 1) << 4

char rax_5

if ((rcx & 2) == 0)
    int64_t* rcx_3 = *(arg1 + 0xd0)
    rax_5 = (*(*rcx_3 + 0x3f8))(rcx_3)
    rcx = *(arg1 + 0x130)
    *(arg1 + 0x132) = rax_5
else
    rax_5 = *(arg1 + 0x132)

*(arg1 + 0xd9) = rax_5
char rdx_2
void arg_8

if ((rcx & 4) == 0)
    int64_t* rcx_8 = *(arg1 + 0xd0)
    *(arg1 + 0x138) = *(*(*rcx_8 + 0x400))(rcx_8, &arg_8)
    int64_t* rcx_10 = *(arg1 + 0xd0)
    rdx_2 = (((*(*rcx_10 + 0x408))(rcx_10) << 5 ^ *(arg1 + 0xd8)) & 0x20) ^ *(arg1 + 0xd8)
    *(arg1 + 0xd8) = rdx_2
    
    if ((rdx_2 & 0x20) == 0)
        uint32_t rax_17 = zx.d(*(arg1 + 0x138))
        char rax_18
        
        if (rax_17 != 0)
            uint64_t rflags_1
            char temp0_1
            temp0_1, rflags_1 = _bit_scan_forward(rax_17)
            rax_18 = temp0_1
        else
            rax_18 = 0x20
        
        *(arg1 + 0x133) = rax_18
    else
        *(arg1 + 0x133) = 0xd
else
    char rax_7 = *(arg1 + 0x133)
    
    if (rax_7 != 0xd)
        *(arg1 + 0xd8) &= 0xdf
        rdx_2 = *(arg1 + 0xd8)
        *(arg1 + 0x138) = (1 << (zx.d(rax_7) u% 0x20)).w
    else
        int64_t* rcx_4 = *(arg1 + 0xd0)
        *(arg1 + 0x138) = *(*(*rcx_4 + 0x400))(rcx_4, &arg_8)
        int64_t* rcx_6 = *(arg1 + 0xd0)
        char rax_11 = ((*(*rcx_6 + 0x408))(rcx_6) << 5 ^ *(arg1 + 0xd8)) & 0x20
        *(arg1 + 0xd8) ^= rax_11
        rdx_2 = *(arg1 + 0xd8)
uint8_t rax_22 = *(arg1 + 0x130)
uint8_t rcx_11

if ((rax_22 & 0x20) == 0)
    int64_t* rcx_12 = *(arg1 + 0xd0)
    char rax_20 = ((*(*rcx_12 + 0x410))(rcx_12, rdx_2) << 2 ^ *(arg1 + 0xd8)) & 4
    *(arg1 + 0xd8) ^= rax_20
    rcx_11 = *(arg1 + 0xd8)
    *(arg1 + 0x130) ^= (rcx_11 << 4 ^ *(arg1 + 0x130)) & 0x40
    rax_22 = *(arg1 + 0x130)
else
    rcx_11 = ((rax_22 u>> 4 ^ rdx_2) & 4) ^ rdx_2
    *(arg1 + 0xd8) = rcx_11

if ((rax_22 & 8) != 0)
    rax_22 = ((rax_22 u>> 4 ^ rcx_11) & 8) ^ rcx_11
    *(arg1 + 0xd8) = rax_22
    return rax_22

int64_t* rcx_13 = *(arg1 + 0xd0)
char rax_24 = (*(*rcx_13 + 0x418))(rcx_13)
*(arg1 + 0x130) &= 0x7f
rax_24 = ((rax_24 << 3 ^ *(arg1 + 0xd8)) & 8) ^ *(arg1 + 0xd8)
*(arg1 + 0x130) |= (rax_24 & 0xf8) << 4
*(arg1 + 0xd8) = rax_24
return rax_24
