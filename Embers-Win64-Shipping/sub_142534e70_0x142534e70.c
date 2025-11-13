// 函数: sub_142534e70
// 地址: 0x142534e70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1425350b0(arg1, arg2)

if (arg1 + 0x1a0 != arg2 + 0x1a0)
    int64_t rbp_1 = sx.q(*(arg2 + 0x1a8))
    int64_t r14_1 = *(arg2 + 0x1a0)
    int32_t r8_1 = *(arg1 + 0x1ac)
    *(arg1 + 0x1a8) = rbp_1.d
    
    if (rbp_1.d != 0 || r8_1 != 0)
        sub_1405c4a00(arg1 + 0x1a0, rbp_1.d, r8_1)
        memcpy(*(arg1 + 0x1a0), r14_1, (rbp_1 << 3).d)
    else
        *(arg1 + 0x1ac) = 0

if (arg1 + 0x1b0 != arg2 + 0x1b0)
    int64_t rbp_2 = sx.q(*(arg2 + 0x1b8))
    int64_t r14_2 = *(arg2 + 0x1b0)
    int32_t r8_4 = *(arg1 + 0x1bc)
    *(arg1 + 0x1b8) = rbp_2.d
    
    if (rbp_2.d != 0 || r8_4 != 0)
        sub_140808f70(arg1 + 0x1b0, rbp_2.d, r8_4)
        memcpy(*(arg1 + 0x1b0), r14_2, (rbp_2 * 0x18).d)
    else
        *(arg1 + 0x1bc) = 0

if (arg1 + 0x1c0 != arg2 + 0x1c0)
    int64_t rbp_3 = sx.q(*(arg2 + 0x1c8))
    int64_t r14_3 = *(arg2 + 0x1c0)
    int32_t r8_8 = *(arg1 + 0x1cc)
    *(arg1 + 0x1c8) = rbp_3.d
    
    if (rbp_3.d != 0 || r8_8 != 0)
        sub_140808f70(arg1 + 0x1c0, rbp_3.d, r8_8)
        memcpy(*(arg1 + 0x1c0), r14_3, (rbp_3 * 0x18).d)
    else
        *(arg1 + 0x1cc) = 0

sub_140780c40(arg1 + 0x1d0, arg2 + 0x1d0)
sub_140780c40(arg1 + 0x1e0, arg2 + 0x1e0)

if (arg1 + 0x1f0 != arg2 + 0x1f0)
    int64_t rbp_4 = sx.q(*(arg2 + 0x1f8))
    int64_t r14_4 = *(arg2 + 0x1f0)
    int32_t r8_12 = *(arg1 + 0x1fc)
    *(arg1 + 0x1f8) = rbp_4.d
    
    if (rbp_4.d != 0 || r8_12 != 0)
        sub_1405c4a00(arg1 + 0x1f0, rbp_4.d, r8_12)
        memcpy(*(arg1 + 0x1f0), r14_4, (rbp_4 << 3).d)
    else
        *(arg1 + 0x1fc) = 0

if (arg1 + 0x200 != arg2 + 0x200)
    int64_t rbp_5 = sx.q(*(arg2 + 0x208))
    int64_t r14_5 = *(arg2 + 0x200)
    int32_t r8_15 = *(arg1 + 0x20c)
    *(arg1 + 0x208) = rbp_5.d
    
    if (rbp_5.d != 0 || r8_15 != 0)
        sub_1405c4a00(arg1 + 0x200, rbp_5.d, r8_15)
        memcpy(*(arg1 + 0x200), r14_5, (rbp_5 << 3).d)
    else
        *(arg1 + 0x20c) = 0

sub_14081d8c0(arg1 + 0x210, arg2 + 0x210)
*(arg1 + 0x220) ^= (*(arg1 + 0x220) ^ *(arg2 + 0x220)) & 1
int32_t rax_8 = *(arg1 + 0x220)
*(arg1 + 0x220) = ((rax_8 ^ *(arg2 + 0x220)) & 2) ^ rax_8
return arg1
