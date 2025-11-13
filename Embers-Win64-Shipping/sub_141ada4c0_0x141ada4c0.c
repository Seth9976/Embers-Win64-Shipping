// 函数: sub_141ada4c0
// 地址: 0x141ada4c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141adb020(arg1, arg2)
*(arg1 + 0xc8) = *(arg2 + 0xc8)
*(arg1 + 0xcc) = *(arg2 + 0xcc)
*(arg1 + 0xd0) = *(arg2 + 0xd0)
*(arg1 + 0xe0) = *(arg2 + 0xe0)
*(arg1 + 0xf0) = *(arg2 + 0xf0)
*(arg1 + 0x100) = *(arg2 + 0x100)
*(arg1 + 0x110) = *(arg2 + 0x110)
*(arg1 + 0x120) = *(arg2 + 0x120)
*(arg1 + 0x130) = *(arg2 + 0x130)
*(arg1 + 0x140) = *(arg2 + 0x140)
*(arg1 + 0x150) = *(arg2 + 0x150)
*(arg1 + 0x160) = *(arg2 + 0x160)
*(arg1 + 0x168) = *(arg2 + 0x168)
*(arg1 + 0x16c) = *(arg2 + 0x16c)
*(arg1 + 0x174) = *(arg2 + 0x174)
*(arg1 + 0x178) = *(arg2 + 0x178)
*(arg1 + 0x17c) = *(arg2 + 0x17c)
*(arg1 + 0x184) = *(arg2 + 0x184)
*(arg1 + 0x188) = *(arg2 + 0x188)
*(arg1 + 0x18c) = *(arg2 + 0x18c)
*(arg1 + 0x190) = *(arg2 + 0x190)
*(arg1 + 0x194) = *(arg2 + 0x194)
*(arg1 + 0x19c) = *(arg2 + 0x19c)
*(arg1 + 0x1a0) = *(arg2 + 0x1a0)
*(arg1 + 0x1a8) = *(arg2 + 0x1a8)
*(arg1 + 0x1ac) = *(arg2 + 0x1ac)
*(arg1 + 0x1b4) = *(arg2 + 0x1b4)
*(arg1 + 0x1b8) = *(arg2 + 0x1b8)
*(arg1 + 0x1bc) = *(arg2 + 0x1bc)
*(arg1 + 0x1c0) = *(arg2 + 0x1c0)
*(arg1 + 0x1c4) = *(arg2 + 0x1c4)
*(arg1 + 0x1d4) = *(arg2 + 0x1d4)
*(arg1 + 0x1e4) = *(arg2 + 0x1e4)
*(arg1 + 0x1f4) = *(arg2 + 0x1f4)
*(arg1 + 0x204) = *(arg2 + 0x204)

if (arg1 + 0x210 != arg2 + 0x210)
    int64_t rbp_1 = sx.q(*(arg2 + 0x218))
    int64_t r14_1 = *(arg2 + 0x210)
    int32_t r8_1 = *(arg1 + 0x21c)
    *(arg1 + 0x218) = rbp_1.d
    
    if (rbp_1.d != 0 || r8_1 != 0)
        sub_1409912e0(arg1 + 0x210, rbp_1.d, r8_1)
        memcpy(*(arg1 + 0x210), r14_1, (rbp_1 * 0x24).d)
    else
        *(arg1 + 0x21c) = 0

*(arg1 + 0x220) = *(arg2 + 0x220)
*(arg1 + 0x224) = *(arg2 + 0x224)
*(arg1 + 0x22c) = *(arg2 + 0x22c)

if (arg1 + 0x230 != arg2 + 0x230)
    int64_t rbp_2 = sx.q(*(arg2 + 0x238))
    int64_t r14_2 = *(arg2 + 0x230)
    int32_t r8_5 = *(arg1 + 0x23c)
    *(arg1 + 0x238) = rbp_2.d
    
    if (rbp_2.d != 0 || r8_5 != 0)
        sub_1407c35c0(arg1 + 0x230, rbp_2.d, r8_5)
        memcpy(*(arg1 + 0x230), r14_2, (rbp_2 << 6).d)
    else
        *(arg1 + 0x23c) = 0

*(arg1 + 0x240) = *(arg2 + 0x240)
*(arg1 + 0x241) = *(arg2 + 0x241)
*(arg1 + 0x242) = *(arg2 + 0x242)
*(arg1 + 0x243) = *(arg2 + 0x243)
*(arg1 + 0x244) ^= (*(arg1 + 0x244) ^ *(arg2 + 0x244)) & 1
char rax_24 = *(arg1 + 0x244)
char rcx_4 = ((*(arg2 + 0x244) ^ rax_24) & 2) ^ rax_24
*(arg1 + 0x244) = rcx_4
char rax_25 = ((rcx_4 ^ *(arg2 + 0x244)) & 4) ^ rcx_4
*(arg1 + 0x244) = rax_25
char rcx_5 = ((rax_25 ^ *(arg2 + 0x244)) & 8) ^ rax_25
*(arg1 + 0x244) = rcx_5
char rax_26 = ((rcx_5 ^ *(arg2 + 0x244)) & 0x10) ^ rcx_5
*(arg1 + 0x244) = rax_26
char rcx_6 = ((rax_26 ^ *(arg2 + 0x244)) & 0x20) ^ rax_26
*(arg1 + 0x244) = rcx_6
char rax_27 = ((rcx_6 ^ *(arg2 + 0x244)) & 0x40) ^ rcx_6
*(arg1 + 0x244) = rax_27
*(arg1 + 0x244) = ((rax_27 ^ *(arg2 + 0x244)) & 0x7f) ^ *(arg2 + 0x244)
*(arg1 + 0x245) ^= (*(arg1 + 0x245) ^ *(arg2 + 0x245)) & 1
char rax_29 = *(arg1 + 0x245)
char rcx_7 = ((*(arg2 + 0x245) ^ rax_29) & 2) ^ rax_29
*(arg1 + 0x245) = rcx_7
char rax_30 = ((rcx_7 ^ *(arg2 + 0x245)) & 4) ^ rcx_7
*(arg1 + 0x245) = rax_30
char rcx_8 = ((rax_30 ^ *(arg2 + 0x245)) & 8) ^ rax_30
*(arg1 + 0x245) = rcx_8
*(arg1 + 0x245) = ((rcx_8 ^ *(arg2 + 0x245)) & 0x10) ^ rcx_8
*(arg1 + 0x250) = *(arg2 + 0x250)
*(arg1 + 0x260) = *(arg2 + 0x260)
*(arg1 + 0x270) = *(arg2 + 0x270)
*(arg1 + 0x280) = *(arg2 + 0x280)
*(arg1 + 0x290) = *(arg2 + 0x290)
*(arg1 + 0x2a0) = *(arg2 + 0x2a0)
*(arg1 + 0x2b0) = *(arg2 + 0x2b0)
*(arg1 + 0x2c0) = *(arg2 + 0x2c0)
*(arg1 + 0x2c4) = *(arg2 + 0x2c4)
*(arg1 + 0x2cc) = *(arg2 + 0x2cc)
*(arg1 + 0x2d0) = *(arg2 + 0x2d0)
*(arg1 + 0x2d4) = *(arg2 + 0x2d4)
*(arg1 + 0x2d8) = *(arg2 + 0x2d8)
*(arg1 + 0x2dc) = *(arg2 + 0x2dc)
*(arg1 + 0x2e0) = *(arg2 + 0x2e0)
*(arg1 + 0x2e4) = *(arg2 + 0x2e4)
*(arg1 + 0x350) = *(arg2 + 0x350)
*(arg1 + 0x354) = *(arg2 + 0x354)
*(arg1 + 0x355) = *(arg2 + 0x355)

if (arg1 + 0x358 != arg2 + 0x358)
    int32_t rbp_3 = *(arg2 + 0x360)
    int64_t r14_3 = *(arg2 + 0x358)
    int32_t r8_8 = *(arg1 + 0x364)
    *(arg1 + 0x360) = rbp_3
    
    if (rbp_3 != 0 || r8_8 != 0)
        sub_1405c4b20(arg1 + 0x358, rbp_3, r8_8)
        memcpy(*(arg1 + 0x358), r14_3, rbp_3 * 0x1c)
    else
        *(arg1 + 0x364) = 0

*(arg1 + 0x368) = *(arg2 + 0x368)
*(arg1 + 0x370) = *(arg2 + 0x370)
*(arg1 + 0x374) = *(arg2 + 0x374)
*(arg1 + 0x378) = *(arg2 + 0x378)
*(arg1 + 0x380) = *(arg2 + 0x380)
*(arg1 + 0x384) = *(arg2 + 0x384)
*(arg1 + 0x388) = *(arg2 + 0x388)
*(arg1 + 0x38c) = *(arg2 + 0x38c)
*(arg1 + 0x390) = *(arg2 + 0x390)
*(arg1 + 0x394) = *(arg2 + 0x394)

if (arg1 + 0x398 != arg2 + 0x398)
    int32_t i_2 = *(arg1 + 0x3a0)
    
    if (i_2 != 0)
        int64_t* rsi_4 = *(arg1 + 0x398) + 0x1b8
        int32_t i
        
        do
            sub_14180c130(rsi_4)
            rsi_4 = &rsi_4[0x3e]
            i = i_2
            i_2 -= 1
        while (i != 1)
    
    int32_t i_3 = *(arg2 + 0x3a0)
    int128_t* rsi_5 = *(arg2 + 0x398)
    int32_t r8_10 = *(arg1 + 0x3a4)
    *(arg1 + 0x3a0) = i_3
    
    if (i_3 != 0 || r8_10 != 0)
        sub_141adcf90(arg1 + 0x398, i_3, r8_10)
        int128_t* rbp_4 = *(arg1 + 0x398)
        
        if (i_3 != 0)
            int32_t i_1
            
            do
                sub_141a8f8d0(rbp_4, rsi_5)
                rbp_4 = &rbp_4[0x1f]
                rsi_5 = &rsi_5[0x1f]
                i_1 = i_3
                i_3 -= 1
            while (i_1 != 1)
    else
        *(arg1 + 0x3a4) = 0

if (arg1 + 0x3a8 != arg2 + 0x3a8)
    int64_t rbp_5 = sx.q(*(arg2 + 0x3b0))
    int64_t r14_4 = *(arg2 + 0x3a8)
    int32_t r8_11 = *(arg1 + 0x3b4)
    *(arg1 + 0x3b0) = rbp_5.d
    
    if (rbp_5.d != 0 || r8_11 != 0)
        sub_1405c4a00(arg1 + 0x3a8, rbp_5.d, r8_11)
        memcpy(*(arg1 + 0x3a8), r14_4, (rbp_5 << 3).d)
    else
        *(arg1 + 0x3b4) = 0

if (arg1 + 0x3b8 != arg2 + 0x3b8)
    int64_t rbp_6 = sx.q(*(arg2 + 0x3c0))
    int64_t r14_5 = *(arg2 + 0x3b8)
    int32_t r8_14 = *(arg1 + 0x3c4)
    *(arg1 + 0x3c0) = rbp_6.d
    
    if (rbp_6.d != 0 || r8_14 != 0)
        sub_1405c4a00(arg1 + 0x3b8, rbp_6.d, r8_14)
        memcpy(*(arg1 + 0x3b8), r14_5, (rbp_6 << 3).d)
    else
        *(arg1 + 0x3c4) = 0

if (arg1 + 0x3c8 != arg2 + 0x3c8)
    int32_t rbp_7 = *(arg2 + 0x3d0)
    int64_t r14_6 = *(arg2 + 0x3c8)
    int32_t r8_17 = *(arg1 + 0x3d4)
    *(arg1 + 0x3d0) = rbp_7
    
    if (rbp_7 != 0 || r8_17 != 0)
        sub_141add0d0(arg1 + 0x3c8, rbp_7, r8_17)
        memcpy(*(arg1 + 0x3c8), r14_6, rbp_7 * 0x68)
    else
        *(arg1 + 0x3d4) = 0

if (arg1 + 0x3d8 != arg2 + 0x3d8)
    int64_t rbp_8 = sx.q(*(arg2 + 0x3e0))
    int64_t r14_7 = *(arg2 + 0x3d8)
    int32_t r8_19 = *(arg1 + 0x3e4)
    *(arg1 + 0x3e0) = rbp_8.d
    
    if (rbp_8.d != 0 || r8_19 != 0)
        sub_1405a4b40(arg1 + 0x3d8, rbp_8.d, r8_19)
        memcpy(*(arg1 + 0x3d8), r14_7, (rbp_8 * 0x30).d)
    else
        *(arg1 + 0x3e4) = 0

if (arg1 + 0x3e8 != arg2 + 0x3e8)
    int64_t rbp_9 = sx.q(*(arg2 + 0x3f0))
    int64_t r14_8 = *(arg2 + 0x3e8)
    int32_t r8_23 = *(arg1 + 0x3f4)
    *(arg1 + 0x3f0) = rbp_9.d
    
    if (rbp_9.d != 0 || r8_23 != 0)
        sub_1409da0d0(arg1 + 0x3e8, rbp_9.d, r8_23)
        memcpy(*(arg1 + 0x3e8), r14_8, (rbp_9 * 0x60).d)
    else
        *(arg1 + 0x3f4) = 0

sub_140780bc0(arg1 + 0x3f8, arg2 + 0x3f8)

if (arg1 + 0x408 != arg2 + 0x408)
    int64_t rbp_10 = sx.q(*(arg2 + 0x410))
    int64_t r14_9 = *(arg2 + 0x408)
    int32_t r8_27 = *(arg1 + 0x414)
    *(arg1 + 0x410) = rbp_10.d
    
    if (rbp_10.d != 0 || r8_27 != 0)
        sub_1405a4be0(arg1 + 0x408, rbp_10.d, r8_27)
        memcpy(*(arg1 + 0x408), r14_9, (rbp_10 << 4).d)
    else
        *(arg1 + 0x414) = 0

sub_14090a0d0(arg1 + 0x418, arg2 + 0x418)
*(arg1 + 0x428) = *(arg2 + 0x428)
*(arg1 + 0x430) = *(arg2 + 0x430)
*(arg1 + 0x434) = *(arg2 + 0x434)
*(arg1 + 0x43c) = *(arg2 + 0x43c)
return arg1
