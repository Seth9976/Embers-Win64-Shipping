// 函数: sub_142c01c70
// 地址: 0x142c01c70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = arg3

if (arg3 == 0)
    rax = sub_142bfb140(arg2)

*(arg1 + 0x18) = rax
int64_t r15
r15.b = 0
int32_t* rax_1 = sub_142bff770(arg2 + 0xa8)
int128_t* const rdi = &data_14369a5d0
int128_t* const rdx = &data_14369a5d0

if (rax_1[6] u>= 0x4e)
    rdx = *(rax_1 + 0x10)

if ((*(rdx + 0x3f) u>> 7 & 1) != 0)
    int32_t* rax_2 = sub_142bff770(arg2 + 0xa8)
    int128_t* const r8 = &data_14369a5d0
    
    if (rax_2[6] u>= 0x4e)
        r8 = *(rax_2 + 0x10)
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(zx.w(*(r8 + 0x45)) + zx.w(*(r8 + 0x44)) * 0x100)
    *(arg1 + 4) = (temp1_1 ^ temp0_1) - temp0_1
    int32_t* rax_8 = sub_142bff770(arg2 + 0xa8)
    int128_t* const rcx_5 = &data_14369a5d0
    
    if (rax_8[6] u>= 0x4e)
        rcx_5 = *(rax_8 + 0x10)
    
    int32_t temp6_1
    int32_t temp7_1
    temp6_1:temp7_1 = sx.q(zx.w(*(rcx_5 + 0x47)) + zx.w(*(rcx_5 + 0x46)) * 0x100)
    *(arg1 + 8) = neg.d((temp7_1 ^ temp6_1) - temp6_1)
    int32_t* rax_15 = sub_142bff770(arg2 + 0xa8)
    int128_t* const r8_3 = &data_14369a5d0
    
    if (rax_15[6] u>= 0x4e)
        r8_3 = *(rax_15 + 0x10)
    
    *(arg1 + 0xc) = sx.d(zx.w(*(r8_3 + 0x49)) + zx.w(*(r8_3 + 0x48)) * 0x100)
    r15.b = (*(arg1 + 4) | *(arg1 + 8)) != 0

int32_t var_68 = 0
int128_t var_60
__builtin_memset(&var_60, 0, 0x15)
int32_t var_48 = 0
int64_t var_40 = 0
int32_t var_38 = sub_142bfb130(arg2)
char var_34 = 1
int32_t* rax_22 = sub_142bfc560(&var_68, sub_142bfb150(arg2, 0x68686561))
int128_t* const r11 = &data_14369a5d0

if (rax_22[6] u>= 0x24)
    r11 = *(rax_22 + 0x10)

*(arg1 + 0x14) = (zx.d(*(r11 + 0x22)) << 8) + zx.d(*(r11 + 0x23))

if (r15.b == 0)
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(zx.w(*(r11 + 5)) + zx.w(*(r11 + 4)) * 0x100)
    int32_t r10_3 = (temp3_1 ^ temp2_1) - temp2_1
    *(arg1 + 4) = r10_3
    int32_t temp4_1
    int32_t temp5_1
    temp4_1:temp5_1 = sx.q(zx.w(*(r11 + 6)) * 0x100 + zx.w(*(r11 + 7)))
    int32_t r9_4 = neg.d((temp5_1 ^ temp4_1) - temp4_1)
    *(arg1 + 8) = r9_4
    *(arg1 + 0xc) = sx.d(zx.w(*(r11 + 8)) * 0x100 + zx.w(*(r11 + 9)))
    r15.b = (r10_3 | r9_4) != 0

sub_142c09b70(rax_22)
*arg1 = r15.b
var_68 = 0
int128_t var_60_1
__builtin_memset(&var_60_1, 0, 0x15)
int32_t var_48_1 = 0
int64_t var_40_1 = 0
int32_t var_38_1 = sub_142bfb130(arg2)
char var_34_1 = 1
int32_t* rax_36 = sub_142bfb560(&var_68, sub_142bfb150(arg2, 0x686d7478))
*(arg1 + 0x20) = rax_36
int32_t* rcx_19 = &data_14369a5d0

if (rax_36 != 0)
    rcx_19 = rax_36

int32_t r8_4 = rcx_19[6]

if (*(arg1 + 0x14) << 2 u> r8_4)
    *(arg1 + 0x14) = r8_4 u>> 2

uint64_t rdx_13 = zx.q(*(arg1 + 0x14))
*(arg1 + 0x10) = ((r8_4 - (rdx_13 << 2).d) u>> 1) + rdx_13.d

if (rdx_13.d == 0)
    *(arg1 + 0x10) = 0
    int128_t* rax_42 = *(arg1 + 0x20)
    
    if (rax_42 != 0)
        rdi = rax_42
    
    sub_142c09b70(rdi)
    *(arg1 + 0x20) = 0
    *(arg1 + 0x20) = &data_14369a5d0

var_68 = 0
int128_t var_60_2
__builtin_memset(&var_60_2, 0, 0x15)
int32_t var_48_2 = 0
int64_t var_40_2 = 0
int32_t var_38_2 = sub_142bfb130(arg2)
char var_34_2 = 1
int32_t* result = sub_142bfbb20(&var_68, sub_142bfb150(arg2, 0x48564152))
*(arg1 + 0x28) = result
return result
