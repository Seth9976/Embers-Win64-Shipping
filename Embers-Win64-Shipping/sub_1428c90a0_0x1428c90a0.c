// 函数: sub_1428c90a0
// 地址: 0x1428c90a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
uint64_t r14 = zx.q(arg2[0x1a].d)
*(r14 + &arg2[0xa]) = 0x80
void* const r14_1 = r14 + 1

if (r14_1 u> 0x70)
    memset(r14_1 + &arg2[0xa], 0, 0x80 - r14_1)
    r14_1 = nullptr
    sub_1428c9b90(arg2, &arg2[0xa], 1)

memset(r14_1 + &arg2[0xa], 0, 0x70 - r14_1)
*(arg2 + 0xcf) = arg2[8].b
*(arg2 + 0xce) = (zx.q(arg2[8].d) u>> 8).b
*(arg2 + 0xcd) = (zx.q(arg2[8].d) u>> 0x10).b
*(arg2 + 0xcc) = (zx.q(arg2[8].d) u>> 0x18).b
*(arg2 + 0xcb) = (arg2[8] u>> 0x20).b
*(arg2 + 0xca) = (arg2[8] u>> 0x28).b
*(arg2 + 0xc9) = *(arg2 + 0x46)
arg2[0x19].b = *(arg2 + 0x47)
*(arg2 + 0xc7) = arg2[9].b
*(arg2 + 0xc6) = (zx.q(arg2[9].d) u>> 8).b
*(arg2 + 0xc5) = (zx.q(arg2[9].d) u>> 0x10).b
*(arg2 + 0xc4) = (zx.q(arg2[9].d) u>> 0x18).b
*(arg2 + 0xc3) = (arg2[9] u>> 0x20).b
*(arg2 + 0xc2) = (arg2[9] u>> 0x28).b
*(arg2 + 0xc1) = *(arg2 + 0x4e)
arg2[0x18].b = *(arg2 + 0x4f)
sub_1428c9b90(arg2, &arg2[0xa], 1)

if (arg1 != 0)
    int32_t rax_26 = *(arg2 + 0xd4)
    
    if (rax_26 == 0x1c)
        int64_t rcx_22 = *arg2
        *arg1 = (rcx_22 u>> 0x38).b
        arg1[1] = (rcx_22 u>> 0x30).b
        arg1[2] = (rcx_22 u>> 0x28).b
        arg1[3] = (rcx_22 u>> 0x20).b
        arg1[4] = (rcx_22 u>> 0x18).b
        arg1[5] = (rcx_22 u>> 0x10).b
        arg1[6] = (rcx_22 u>> 8).b
        arg1[7] = rcx_22.b
        int64_t rcx_23 = arg2[1]
        arg1[8] = (rcx_23 u>> 0x38).b
        arg1[9] = (rcx_23 u>> 0x30).b
        arg1[0xa] = (rcx_23 u>> 0x28).b
        arg1[0xb] = (rcx_23 u>> 0x20).b
        arg1[0xc] = (rcx_23 u>> 0x18).b
        arg1[0xd] = (rcx_23 u>> 0x10).b
        arg1[0xe] = (rcx_23 u>> 8).b
        arg1[0xf] = rcx_23.b
        int64_t rcx_24 = arg2[2]
        arg1[0x10] = (rcx_24 u>> 0x38).b
        arg1[0x11] = (rcx_24 u>> 0x30).b
        arg1[0x12] = (rcx_24 u>> 0x28).b
        arg1[0x13] = (rcx_24 u>> 0x20).b
        arg1[0x14] = (rcx_24 u>> 0x18).b
        arg1[0x15] = (rcx_24 u>> 0x10).b
        arg1[0x16] = (rcx_24 u>> 8).b
        arg1[0x17] = rcx_24.b
        int64_t rdx_2 = arg2[3]
        arg1[0x18] = (rdx_2 u>> 0x38).b
        arg1[0x19] = (rdx_2 u>> 0x30).b
        arg1[0x1a] = (rdx_2 u>> 0x28).b
        arg1[0x1b] = (rdx_2 u>> 0x20).b
        return 1
    
    if (rax_26 == 0x20)
        int64_t rcx_18 = *arg2
        *arg1 = (rcx_18 u>> 0x38).b
        arg1[1] = (rcx_18 u>> 0x30).b
        arg1[2] = (rcx_18 u>> 0x28).b
        arg1[3] = (rcx_18 u>> 0x20).b
        arg1[4] = (rcx_18 u>> 0x18).b
        arg1[5] = (rcx_18 u>> 0x10).b
        arg1[6] = (rcx_18 u>> 8).b
        arg1[7] = rcx_18.b
        int64_t rcx_19 = arg2[1]
        arg1[8] = (rcx_19 u>> 0x38).b
        arg1[9] = (rcx_19 u>> 0x30).b
        arg1[0xa] = (rcx_19 u>> 0x28).b
        arg1[0xb] = (rcx_19 u>> 0x20).b
        arg1[0xc] = (rcx_19 u>> 0x18).b
        arg1[0xd] = (rcx_19 u>> 0x10).b
        arg1[0xe] = (rcx_19 u>> 8).b
        arg1[0xf] = rcx_19.b
        int64_t rcx_20 = arg2[2]
        arg1[0x10] = (rcx_20 u>> 0x38).b
        arg1[0x11] = (rcx_20 u>> 0x30).b
        arg1[0x12] = (rcx_20 u>> 0x28).b
        arg1[0x13] = (rcx_20 u>> 0x20).b
        arg1[0x14] = (rcx_20 u>> 0x18).b
        arg1[0x15] = (rcx_20 u>> 0x10).b
        arg1[0x16] = (rcx_20 u>> 8).b
        arg1[0x17] = rcx_20.b
        int64_t rcx_21 = arg2[3]
        arg1[0x18] = (rcx_21 u>> 0x38).b
        arg1[0x19] = (rcx_21 u>> 0x30).b
        arg1[0x1a] = (rcx_21 u>> 0x28).b
        arg1[0x1b] = (rcx_21 u>> 0x20).b
        arg1[0x1c] = (rcx_21 u>> 0x18).b
        arg1[0x1d] = (rcx_21 u>> 0x10).b
        arg1[0x1e] = (rcx_21 u>> 8).b
        arg1[0x1f] = rcx_21.b
        return 1
    
    if (rax_26 == 0x30)
        int64_t rcx_12 = *arg2
        *arg1 = (rcx_12 u>> 0x38).b
        arg1[1] = (rcx_12 u>> 0x30).b
        arg1[2] = (rcx_12 u>> 0x28).b
        arg1[3] = (rcx_12 u>> 0x20).b
        arg1[4] = (rcx_12 u>> 0x18).b
        arg1[5] = (rcx_12 u>> 0x10).b
        arg1[6] = (rcx_12 u>> 8).b
        arg1[7] = rcx_12.b
        int64_t rcx_13 = arg2[1]
        arg1[8] = (rcx_13 u>> 0x38).b
        arg1[9] = (rcx_13 u>> 0x30).b
        arg1[0xa] = (rcx_13 u>> 0x28).b
        arg1[0xb] = (rcx_13 u>> 0x20).b
        arg1[0xc] = (rcx_13 u>> 0x18).b
        arg1[0xd] = (rcx_13 u>> 0x10).b
        arg1[0xe] = (rcx_13 u>> 8).b
        arg1[0xf] = rcx_13.b
        int64_t rcx_14 = arg2[2]
        arg1[0x10] = (rcx_14 u>> 0x38).b
        arg1[0x11] = (rcx_14 u>> 0x30).b
        arg1[0x12] = (rcx_14 u>> 0x28).b
        arg1[0x13] = (rcx_14 u>> 0x20).b
        arg1[0x14] = (rcx_14 u>> 0x18).b
        arg1[0x15] = (rcx_14 u>> 0x10).b
        arg1[0x16] = (rcx_14 u>> 8).b
        arg1[0x17] = rcx_14.b
        int64_t rcx_15 = arg2[3]
        arg1[0x18] = (rcx_15 u>> 0x38).b
        arg1[0x19] = (rcx_15 u>> 0x30).b
        arg1[0x1a] = (rcx_15 u>> 0x28).b
        arg1[0x1b] = (rcx_15 u>> 0x20).b
        arg1[0x1c] = (rcx_15 u>> 0x18).b
        arg1[0x1d] = (rcx_15 u>> 0x10).b
        arg1[0x1e] = (rcx_15 u>> 8).b
        arg1[0x1f] = rcx_15.b
        int64_t rcx_16 = arg2[4]
        arg1[0x20] = (rcx_16 u>> 0x38).b
        arg1[0x21] = (rcx_16 u>> 0x30).b
        arg1[0x22] = (rcx_16 u>> 0x28).b
        arg1[0x23] = (rcx_16 u>> 0x20).b
        arg1[0x24] = (rcx_16 u>> 0x18).b
        arg1[0x25] = (rcx_16 u>> 0x10).b
        arg1[0x26] = (rcx_16 u>> 8).b
        arg1[0x27] = rcx_16.b
        int64_t rcx_17 = arg2[5]
        arg1[0x28] = (rcx_17 u>> 0x38).b
        arg1[0x29] = (rcx_17 u>> 0x30).b
        arg1[0x2a] = (rcx_17 u>> 0x28).b
        arg1[0x2b] = (rcx_17 u>> 0x20).b
        arg1[0x2c] = (rcx_17 u>> 0x18).b
        arg1[0x2d] = (rcx_17 u>> 0x10).b
        arg1[0x2e] = (rcx_17 u>> 8).b
        arg1[0x2f] = rcx_17.b
        return 1
    
    if (rax_26 == 0x40)
        int64_t rcx_4 = *arg2
        *arg1 = (rcx_4 u>> 0x38).b
        arg1[1] = (rcx_4 u>> 0x30).b
        arg1[2] = (rcx_4 u>> 0x28).b
        arg1[3] = (rcx_4 u>> 0x20).b
        arg1[4] = (rcx_4 u>> 0x18).b
        arg1[5] = (rcx_4 u>> 0x10).b
        arg1[6] = (rcx_4 u>> 8).b
        arg1[7] = rcx_4.b
        int64_t rcx_5 = arg2[1]
        arg1[8] = (rcx_5 u>> 0x38).b
        arg1[9] = (rcx_5 u>> 0x30).b
        arg1[0xa] = (rcx_5 u>> 0x28).b
        arg1[0xb] = (rcx_5 u>> 0x20).b
        arg1[0xc] = (rcx_5 u>> 0x18).b
        arg1[0xd] = (rcx_5 u>> 0x10).b
        arg1[0xe] = (rcx_5 u>> 8).b
        arg1[0xf] = rcx_5.b
        int64_t rcx_6 = arg2[2]
        arg1[0x10] = (rcx_6 u>> 0x38).b
        arg1[0x11] = (rcx_6 u>> 0x30).b
        arg1[0x12] = (rcx_6 u>> 0x28).b
        arg1[0x13] = (rcx_6 u>> 0x20).b
        arg1[0x14] = (rcx_6 u>> 0x18).b
        arg1[0x15] = (rcx_6 u>> 0x10).b
        arg1[0x16] = (rcx_6 u>> 8).b
        arg1[0x17] = rcx_6.b
        int64_t rcx_7 = arg2[3]
        arg1[0x18] = (rcx_7 u>> 0x38).b
        arg1[0x19] = (rcx_7 u>> 0x30).b
        arg1[0x1a] = (rcx_7 u>> 0x28).b
        arg1[0x1b] = (rcx_7 u>> 0x20).b
        arg1[0x1c] = (rcx_7 u>> 0x18).b
        arg1[0x1d] = (rcx_7 u>> 0x10).b
        arg1[0x1e] = (rcx_7 u>> 8).b
        arg1[0x1f] = rcx_7.b
        int64_t rcx_8 = arg2[4]
        arg1[0x20] = (rcx_8 u>> 0x38).b
        arg1[0x21] = (rcx_8 u>> 0x30).b
        arg1[0x22] = (rcx_8 u>> 0x28).b
        arg1[0x23] = (rcx_8 u>> 0x20).b
        arg1[0x24] = (rcx_8 u>> 0x18).b
        arg1[0x25] = (rcx_8 u>> 0x10).b
        arg1[0x26] = (rcx_8 u>> 8).b
        arg1[0x27] = rcx_8.b
        int64_t rcx_9 = arg2[5]
        arg1[0x28] = (rcx_9 u>> 0x38).b
        arg1[0x29] = (rcx_9 u>> 0x30).b
        arg1[0x2a] = (rcx_9 u>> 0x28).b
        arg1[0x2b] = (rcx_9 u>> 0x20).b
        arg1[0x2c] = (rcx_9 u>> 0x18).b
        arg1[0x2d] = (rcx_9 u>> 0x10).b
        arg1[0x2e] = (rcx_9 u>> 8).b
        arg1[0x2f] = rcx_9.b
        int64_t rcx_10 = arg2[6]
        arg1[0x30] = (rcx_10 u>> 0x38).b
        arg1[0x31] = (rcx_10 u>> 0x30).b
        arg1[0x32] = (rcx_10 u>> 0x28).b
        arg1[0x33] = (rcx_10 u>> 0x20).b
        arg1[0x34] = (rcx_10 u>> 0x18).b
        arg1[0x35] = (rcx_10 u>> 0x10).b
        arg1[0x36] = (rcx_10 u>> 8).b
        arg1[0x37] = rcx_10.b
        int64_t rcx_11 = arg2[7]
        arg1[0x38] = (rcx_11 u>> 0x38).b
        arg1[0x39] = (rcx_11 u>> 0x30).b
        arg1[0x3a] = (rcx_11 u>> 0x28).b
        arg1[0x3b] = (rcx_11 u>> 0x20).b
        arg1[0x3c] = (rcx_11 u>> 0x18).b
        arg1[0x3d] = (rcx_11 u>> 0x10).b
        arg1[0x3e] = (rcx_11 u>> 8).b
        arg1[0x3f] = rcx_11.b
        return 1

return 0
