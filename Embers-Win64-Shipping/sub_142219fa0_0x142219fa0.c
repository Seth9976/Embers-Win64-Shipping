// 函数: sub_142219fa0
// 地址: 0x142219fa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1421b9fc0(arg1, arg2, arg3)
void* rcx_1 = *(sub_142192ca0(arg2, 0) + 0x48)
*(arg1 + 0x238) = rcx_1

if (*(rcx_1 + 0x38) s<= 0)
    *(rcx_1 + 0x38) = 1
    rcx_1 = *(arg1 + 0x238)

int32_t rsi = 0
*(arg1 + 0x1e8) ^= (*(rcx_1 + 0x40) ^ *(arg1 + 0x1e8)) & 1
int32_t rdx = *(rcx_1 + 0x38)
*(arg1 + 0x1dc) = rdx
*(arg1 + 0x1f8) = 0

if (*(arg1 + 0x1fc) != rdx)
    sub_1405dadb0(arg1 + 0x1f0, rdx)
    rsi = *(arg1 + 0x1f8)

int64_t rbp = sx.q(*(arg1 + 0x1dc))
int32_t rax_4 = rsi + rbp.d
*(arg1 + 0x1f8) = rax_4

if (rax_4 s> *(arg1 + 0x1fc))
    sub_1406105e0(arg1 + 0x1f0)

memset(*(arg1 + 0x1f0) + (sx.q(rsi) << 2), 0, rbp << 2)
int32_t rdx_2 = *(arg1 + 0x1dc)
int32_t rsi_1 = 0
*(arg1 + 0x260) = 0

if (*(arg1 + 0x264) != rdx_2)
    sub_140638cc0(arg1 + 0x258, rdx_2)
    rsi_1 = *(arg1 + 0x260)

int64_t rbp_1 = sx.q(*(arg1 + 0x1dc))
int32_t rax_6 = rsi_1 + rbp_1.d
*(arg1 + 0x260) = rax_6

if (rax_6 s> *(arg1 + 0x264))
    sub_140638a00(arg1 + 0x258)

memset(*(arg1 + 0x258) + sx.q(rsi_1) * 0xc, 0, rbp_1 * 0xc)
int32_t rdx_4 = *(arg1 + 0x1dc)
int32_t rsi_2 = 0
*(arg1 + 0x270) = 0

if (*(arg1 + 0x274) != rdx_4)
    sub_1405a5410(arg1 + 0x268, rdx_4)
    rsi_2 = *(arg1 + 0x270)

int64_t rbp_2 = sx.q(*(arg1 + 0x1dc))
int32_t rax_9 = rsi_2 + rbp_2.d
*(arg1 + 0x270) = rax_9

if (rax_9 s> *(arg1 + 0x274))
    sub_1405a4f90(arg1 + 0x268)

memset((sx.q(rsi_2) << 4) + *(arg1 + 0x268), 0, rbp_2 << 4)
int32_t rdx_6 = *(arg1 + 0x1dc)
int32_t rsi_3 = 0
*(arg1 + 0x280) = 0

if (*(arg1 + 0x284) != rdx_6)
    sub_140638cc0(arg1 + 0x278, rdx_6)
    rsi_3 = *(arg1 + 0x280)

int64_t r14 = sx.q(*(arg1 + 0x1dc))
int32_t rax_10 = r14.d + rsi_3
*(arg1 + 0x280) = rax_10

if (rax_10 s> *(arg1 + 0x284))
    sub_140638a00(arg1 + 0x278)

memset(*(arg1 + 0x278) + sx.q(rsi_3) * 0xc, 0, r14 * 0xc)
int32_t rdx_8 = *(arg1 + 0x1dc)
int32_t rsi_4 = 0
*(arg1 + 0x290) = 0

if (*(arg1 + 0x294) != rdx_8)
    sub_140638cc0(arg1 + 0x288, rdx_8)
    rsi_4 = *(arg1 + 0x290)

int64_t rbp_3 = sx.q(*(arg1 + 0x1dc))
int32_t rax_13 = rsi_4 + rbp_3.d
*(arg1 + 0x290) = rax_13

if (rax_13 s> *(arg1 + 0x294))
    sub_140638a00(arg1 + 0x288)

memset(*(arg1 + 0x288) + sx.q(rsi_4) * 0xc, 0, rbp_3 * 0xc)
int32_t rdx_10 = *(arg1 + 0x1dc)
int32_t rsi_5 = 0
*(arg1 + 0x2a0) = 0

if (*(arg1 + 0x2a4) != rdx_10)
    sub_1405dadb0(arg1 + 0x298, rdx_10)
    rsi_5 = *(arg1 + 0x2a0)

int64_t rbp_4 = sx.q(*(arg1 + 0x1dc))
int32_t rax_16 = rsi_5 + rbp_4.d
*(arg1 + 0x2a0) = rax_16

if (rax_16 s> *(arg1 + 0x2a4))
    sub_1406105e0(arg1 + 0x298)

memset(*(arg1 + 0x298) + (sx.q(rsi_5) << 2), 0, rbp_4 << 2)
int32_t rdx_12 = *(arg1 + 0x1dc)
int32_t rsi_6 = 0
*(arg1 + 0x2b0) = 0

if (*(arg1 + 0x2b4) != rdx_12)
    sub_140638cc0(arg1 + 0x2a8, rdx_12)
    rsi_6 = *(arg1 + 0x2b0)

int64_t rbp_5 = sx.q(*(arg1 + 0x1dc))
int32_t rax_18 = rsi_6 + rbp_5.d
*(arg1 + 0x2b0) = rax_18

if (rax_18 s> *(arg1 + 0x2b4))
    sub_140638a00(arg1 + 0x2a8)

memset(*(arg1 + 0x2a8) + sx.q(rsi_6) * 0xc, 0, rbp_5 * 0xc)
int32_t rdx_14 = *(arg1 + 0x1dc)
int32_t rsi_7 = 0
*(arg1 + 0x2c0) = 0

if (*(arg1 + 0x2c4) != rdx_14)
    sub_1405a5410(arg1 + 0x2b8, rdx_14)
    rsi_7 = *(arg1 + 0x2c0)

int64_t r14_1 = sx.q(*(arg1 + 0x1dc))
int32_t rax_21 = r14_1.d + rsi_7
*(arg1 + 0x2c0) = rax_21

if (rax_21 s> *(arg1 + 0x2c4))
    sub_1405a4f90(arg1 + 0x2b8)

memset((sx.q(rsi_7) << 4) + *(arg1 + 0x2b8), 0, r14_1 << 4)
int32_t rdx_16 = *(arg1 + 0x1dc)
int32_t rsi_8 = 0
*(arg1 + 0x2d0) = 0

if (*(arg1 + 0x2d4) != rdx_16)
    sub_140638cc0(arg1 + 0x2c8, rdx_16)
    rsi_8 = *(arg1 + 0x2d0)

int64_t rbp_6 = sx.q(*(arg1 + 0x1dc))
int32_t rax_22 = rsi_8 + rbp_6.d
*(arg1 + 0x2d0) = rax_22

if (rax_22 s> *(arg1 + 0x2d4))
    sub_140638a00(arg1 + 0x2c8)

memset(*(arg1 + 0x2c8) + sx.q(rsi_8) * 0xc, 0, rbp_6 * 0xc)
int32_t rdx_18 = *(arg1 + 0x1dc)
int32_t rsi_9 = 0
*(arg1 + 0x2e0) = 0

if (*(arg1 + 0x2e4) != rdx_18)
    sub_140638cc0(arg1 + 0x2d8, rdx_18)
    rsi_9 = *(arg1 + 0x2e0)

int64_t rbp_7 = sx.q(*(arg1 + 0x1dc))
int32_t rax_25 = rsi_9 + rbp_7.d
*(arg1 + 0x2e0) = rax_25

if (rax_25 s> *(arg1 + 0x2e4))
    sub_140638a00(arg1 + 0x2d8)

memset(*(arg1 + 0x2d8) + sx.q(rsi_9) * 0xc, 0, rbp_7 * 0xc)
int32_t rdx_20 = *(arg1 + 0x1dc)
int32_t rsi_10 = 0
*(arg1 + 0x2f0) = 0

if (*(arg1 + 0x2f4) != rdx_20)
    sub_1405dadb0(arg1 + 0x2e8, rdx_20)
    rsi_10 = *(arg1 + 0x2f0)

int64_t rbp_8 = sx.q(*(arg1 + 0x1dc))
int32_t rax_28 = rsi_10 + rbp_8.d
*(arg1 + 0x2f0) = rax_28

if (rax_28 s> *(arg1 + 0x2f4))
    sub_1406105e0(arg1 + 0x2e8)

memset(*(arg1 + 0x2e8) + (sx.q(rsi_10) << 2), 0, rbp_8 << 2)
int32_t rdx_22 = *(arg1 + 0x1dc)
int32_t rsi_11 = 0
*(arg1 + 0x218) = 0

if (*(arg1 + 0x21c) != rdx_22)
    sub_1405dadb0(arg1 + 0x210, rdx_22)
    rsi_11 = *(arg1 + 0x218)

int64_t rbp_9 = sx.q(*(arg1 + 0x1dc))
int32_t rax_30 = rsi_11 + rbp_9.d
*(arg1 + 0x218) = rax_30

if (rax_30 s> *(arg1 + 0x21c))
    sub_1406105e0(arg1 + 0x210)

memset(*(arg1 + 0x210) + (sx.q(rsi_11) << 2), 0, rbp_9 << 2)
int32_t rdx_24 = *(arg1 + 0x1dc)
int32_t rsi_12 = 0
*(arg1 + 0x228) = 0

if (*(arg1 + 0x22c) != rdx_24)
    sub_1405dadb0(arg1 + 0x220, rdx_24)
    rsi_12 = *(arg1 + 0x228)

int64_t r14_2 = sx.q(*(arg1 + 0x1dc))
int32_t rax_32 = r14_2.d + rsi_12
*(arg1 + 0x228) = rax_32

if (rax_32 s> *(arg1 + 0x22c))
    sub_1406105e0(arg1 + 0x220)

memset(*(arg1 + 0x220) + (sx.q(rsi_12) << 2), 0, r14_2 << 2)
int32_t rdx_26 = *(arg1 + 0x1dc)
int32_t rsi_13 = 0
*(arg1 + 0x308) = 0

if (*(arg1 + 0x30c) != rdx_26)
    sub_140638cc0(arg1 + 0x300, rdx_26)
    rsi_13 = *(arg1 + 0x308)

int64_t r14_3 = sx.q(*(arg1 + 0x1dc))
int32_t rax_34 = r14_3.d + rsi_13
*(arg1 + 0x308) = rax_34

if (rax_34 s> *(arg1 + 0x30c))
    sub_140638a00(arg1 + 0x300)

memset(*(arg1 + 0x300) + sx.q(rsi_13) * 0xc, 0, r14_3 * 0xc)
int32_t rdx_28 = *(arg1 + 0x1dc)
int32_t rsi_14 = 0
*(arg1 + 0x328) = 0

if (*(arg1 + 0x32c) != rdx_28)
    sub_1405dadb0(arg1 + 0x320, rdx_28)
    rsi_14 = *(arg1 + 0x328)

int64_t r14_4 = sx.q(*(arg1 + 0x1dc))
int32_t rax_37 = r14_4.d + rsi_14
*(arg1 + 0x328) = rax_37

if (rax_37 s> *(arg1 + 0x32c))
    sub_1405a4cf0(arg1 + 0x320)

memset(*(arg1 + 0x320) + (sx.q(rsi_14) << 2), 0, r14_4 << 2)
memset(*(arg1 + 0x320), 0xff, sx.q(*(arg1 + 0x1dc)) << 2)
int32_t rdx_30 = *(arg1 + 0x1dc)
int32_t rsi_15 = 0
*(arg1 + 0x338) = 0

if (*(arg1 + 0x33c) != rdx_30)
    sub_1405dadb0(arg1 + 0x330, rdx_30)
    rsi_15 = *(arg1 + 0x338)

int64_t rbp_10 = sx.q(*(arg1 + 0x1dc))
int32_t rax_39 = rsi_15 + rbp_10.d
*(arg1 + 0x338) = rax_39

if (rax_39 s> *(arg1 + 0x33c))
    sub_1406105e0(arg1 + 0x330)

memset(*(arg1 + 0x330) + (sx.q(rsi_15) << 2), 0, rbp_10 << 2)
int32_t rdx_32 = *(arg1 + 0x1dc)
int32_t rsi_16 = 0
*(arg1 + 0x348) = 0

if (*(arg1 + 0x34c) != rdx_32)
    sub_1405dadb0(arg1 + 0x340, rdx_32)
    rsi_16 = *(arg1 + 0x348)

int64_t r14_5 = sx.q(*(arg1 + 0x1dc))
int32_t rax_41 = r14_5.d + rsi_16
*(arg1 + 0x348) = rax_41

if (rax_41 s> *(arg1 + 0x34c))
    sub_1406105e0(arg1 + 0x340)

memset(*(arg1 + 0x340) + (sx.q(rsi_16) << 2), 0, r14_5 << 2)
int32_t rdx_34 = *(arg1 + 0x1dc)
int32_t rsi_17 = 0
*(arg1 + 0x358) = 0

if (*(arg1 + 0x35c) != rdx_34)
    sub_1405dadb0(arg1 + 0x350, rdx_34)
    rsi_17 = *(arg1 + 0x358)

int64_t rbp_11 = sx.q(*(arg1 + 0x1dc))
int32_t rax_43 = rsi_17 + rbp_11.d
*(arg1 + 0x358) = rax_43

if (rax_43 s> *(arg1 + 0x35c))
    sub_1406105e0(arg1 + 0x350)

memset(*(arg1 + 0x350) + (sx.q(rsi_17) << 2), 0, rbp_11 << 2)
int32_t rdx_36 = *(arg1 + 0x1dc)
int32_t rsi_18 = 0
*(arg1 + 0x368) = 0

if (*(arg1 + 0x36c) != rdx_36)
    sub_1405dadb0(arg1 + 0x360, rdx_36)
    rsi_18 = *(arg1 + 0x368)

int64_t r14_6 = sx.q(*(arg1 + 0x1dc))
int32_t rax_45 = r14_6.d + rsi_18
*(arg1 + 0x368) = rax_45

if (rax_45 s> *(arg1 + 0x36c))
    sub_1406105e0(arg1 + 0x360)

memset(*(arg1 + 0x360) + (sx.q(rsi_18) << 2), 0, r14_6 << 2)
*(arg1 + 0x1d0) = 0
return sub_14221f950(arg1) __tailcall
