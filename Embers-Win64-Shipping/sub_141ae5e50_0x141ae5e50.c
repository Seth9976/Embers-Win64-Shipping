// 函数: sub_141ae5e50
// 地址: 0x141ae5e50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141adb020(arg1, arg2)
*(arg1 + 0xd0) = *(arg2 + 0xd0)
*(arg1 + 0xe0) = *(arg2 + 0xe0)
*(arg1 + 0xf0) = *(arg2 + 0xf0)
*(arg1 + 0x100) = *(arg2 + 0x100)
*(arg1 + 0x110) = *(arg2 + 0x110)
*(arg1 + 0x114) = *(arg2 + 0x114)
*(arg1 + 0x115) ^= (*(arg1 + 0x115) ^ *(arg2 + 0x115)) & 1
char rax_3 = *(arg1 + 0x115)
char rcx = ((*(arg2 + 0x115) ^ rax_3) & 2) ^ rax_3
*(arg1 + 0x115) = rcx
char rax_4 = ((rcx ^ *(arg2 + 0x115)) & 4) ^ rcx
*(arg1 + 0x115) = rax_4
char rcx_1 = ((rax_4 ^ *(arg2 + 0x115)) & 8) ^ rax_4
*(arg1 + 0x115) = rcx_1
char rax_5 = ((rcx_1 ^ *(arg2 + 0x115)) & 0x10) ^ rcx_1
*(arg1 + 0x115) = rax_5
char rcx_2 = ((rax_5 ^ *(arg2 + 0x115)) & 0x20) ^ rax_5
*(arg1 + 0x115) = rcx_2
*(arg1 + 0x115) = ((rcx_2 ^ *(arg2 + 0x115)) & 0x40) ^ rcx_2
*(arg1 + 0x118) = *(arg2 + 0x118)
*(arg1 + 0x11c) = *(arg2 + 0x11c)
sub_141ae65e0(arg1 + 0x120, arg2 + 0x120)
*(arg1 + 0x1a8) = *(arg2 + 0x1a8)
*(arg1 + 0x1b8) = *(arg2 + 0x1b8)
*(arg1 + 0x1c8) = *(arg2 + 0x1c8)

if (arg1 + 0x1d8 != arg2 + 0x1d8)
    int64_t rbp_1 = sx.q(*(arg2 + 0x1e0))
    int64_t r14_1 = *(arg2 + 0x1d8)
    int32_t r8_1 = *(arg1 + 0x1e4)
    *(arg1 + 0x1e0) = rbp_1.d
    
    if (rbp_1.d != 0 || r8_1 != 0)
        sub_140808f70(arg1 + 0x1d8, rbp_1.d, r8_1)
        memcpy(*(arg1 + 0x1d8), r14_1, (rbp_1 * 0x18).d)
    else
        *(arg1 + 0x1e4) = rbp_1.d

sub_140780bc0(arg1 + 0x1e8, arg2 + 0x1e8)

if (arg1 + 0x1f8 != arg2 + 0x1f8)
    int64_t rbp_2 = sx.q(*(arg2 + 0x200))
    int64_t r14_2 = *(arg2 + 0x1f8)
    int32_t r8_5 = *(arg1 + 0x204)
    *(arg1 + 0x200) = rbp_2.d
    
    if (rbp_2.d != 0 || r8_5 != 0)
        sub_1407c35c0(arg1 + 0x1f8, rbp_2.d, r8_5)
        memcpy(*(arg1 + 0x1f8), r14_2, (rbp_2 << 6).d)
    else
        *(arg1 + 0x204) = rbp_2.d

*(arg1 + 0x208) = *(arg2 + 0x208)
*(arg1 + 0x20c) = *(arg2 + 0x20c)
*(arg1 + 0x214) = *(arg2 + 0x214)
*(arg1 + 0x218) = *(arg2 + 0x218)
*(arg1 + 0x228) = *(arg2 + 0x228)
*(arg1 + 0x22c) = *(arg2 + 0x22c)
sub_140780bc0(arg1 + 0x230, arg2 + 0x230)

if (arg1 + 0x240 != arg2 + 0x240)
    int64_t rbp_3 = sx.q(*(arg2 + 0x248))
    int64_t r14_3 = *(arg2 + 0x240)
    int32_t r8_8 = *(arg1 + 0x24c)
    *(arg1 + 0x248) = rbp_3.d
    
    if (rbp_3.d != 0 || r8_8 != 0)
        sub_1405c4a90(arg1 + 0x240, rbp_3.d, r8_8)
        memcpy(*(arg1 + 0x240), r14_3, (rbp_3 << 2).d)
    else
        *(arg1 + 0x24c) = rbp_3.d

sub_14090a0d0(arg1 + 0x250, arg2 + 0x250)
return arg1
