// 函数: sub_14150b030
// 地址: 0x14150b030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rflags
int32_t temp0
temp0, rflags = _bit_scan_reverse(arg2)
int64_t __saved_r15
int32_t r8

if (&__saved_r15 == 0x30)
    r8 = 0x20
else
    r8 = 0x1f - temp0

int32_t r8_2 = r8 << 0x1a s>> 0x1f
uint64_t rflags_1
int32_t temp0_1
temp0_1, rflags_1 = _bit_scan_reverse(arg2 - 1)
int32_t r9

if (r8_2 == 0)
    r9 = 0x20
else
    r9 = 0x1f - temp0_1

*(arg1 + 0x68) = (0x20 - r9) & not.d(r8_2)
int32_t rax_2 = *(arg1 + 0x14)
*(arg1 + 0x10) = 0

if (rax_2 s<= 0)
    sub_1405a5410(arg1 + 8, 1)

*(arg1 + 0x30) = 0

if (*(arg1 + 0x34) s< 1)
    sub_1405dadb0(arg1 + 0x28, 1)

*(arg1 + 0x40) = 0

if (*(arg1 + 0x44) s< 1)
    sub_1405947f0(arg1 + 0x38, 1)

int32_t rdx_2 = *(arg1 + 0x68) + 1
*(arg1 + 0x20) = 0

if (rdx_2 s> *(arg1 + 0x24))
    sub_1405947f0(arg1 + 0x18, rdx_2)

int64_t rbp = sx.q(*(arg1 + 0x10))
int32_t var_30 = (zx.d(*(arg1 + 0x68)) & 0xf) << 0x18
int32_t rax_6 = (rbp + 1).d
int32_t var_2c = 0xffffffff
*(arg1 + 0x10) = rax_6

if (rax_6 s> *(arg1 + 0x14))
    sub_1405a4f90(arg1 + 8)

*(*(arg1 + 8) + rbp * 0x10) = 0.o
int64_t rbp_1 = sx.q(*(arg1 + 0x30))
int32_t rax_8 = (rbp_1 + 1).d
*(arg1 + 0x30) = rax_8

if (rax_8 s> *(arg1 + 0x34))
    sub_1405a4cf0(arg1 + 0x28)

*(*(arg1 + 0x28) + (rbp_1 << 2)) = 0
int64_t rbp_2 = sx.q(*(arg1 + 0x40))
int32_t rax_10 = (rbp_2 + 1).d
*(arg1 + 0x40) = rax_10

if (rax_10 s> *(arg1 + 0x44))
    sub_140594770(arg1 + 0x38)

*(*(arg1 + 0x38) + (rbp_2 << 1)) = 0
int32_t rcx_13 = *(arg1 + 0x68) + 1 + *(arg1 + 0x20)
*(arg1 + 0x20) = rcx_13

if (rcx_13 s> *(arg1 + 0x24))
    sub_140594770(arg1 + 0x18)

int32_t i = *(arg1 + 0x68)
int32_t rdx_6
rdx_6.b = 0

if (i != 0)
    do
        uint64_t rcx_15 = zx.q(rdx_6.b)
        rdx_6.b += 1
        *(*(arg1 + 0x18) + (rcx_15 << 1)) = 0xffff
        i = *(arg1 + 0x68)
    while (zx.d(rdx_6.b) u< i)

int64_t result = *(arg1 + 0x18)
*(result + (sx.q(i) << 1)) = 0
return result
