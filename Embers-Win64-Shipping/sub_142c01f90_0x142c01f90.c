// 函数: sub_142c01f90
// 地址: 0x142c01f90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = arg3

if (arg3 == 0)
    rax = sub_142bfb140(arg2)

*(arg1 + 0x18) = rax
int32_t var_58 = 0
int128_t var_50
__builtin_memset(&var_50, 0, 0x15)
int32_t var_38 = 0
int64_t var_30 = 0
int32_t var_28 = sub_142bfb130(arg2)
char var_24 = 1
int32_t* rax_3 = sub_142bfc560(&var_58, sub_142bfb150(arg2, 0x76686561))
int128_t* const r14 = &data_14369a5d0
int128_t* const rbx = &data_14369a5d0

if (rax_3[6] u>= 0x24)
    rbx = *(rax_3 + 0x10)

*(arg1 + 0x14) = (zx.d(*(rbx + 0x22)) << 8) + zx.d(*(rbx + 0x23))
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(zx.w(*(rbx + 5)) + zx.w(*(rbx + 4)) * 0x100)
int32_t r10_2 = (temp1 ^ temp0) - temp0
*(arg1 + 4) = r10_2
int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(zx.w(*(rbx + 7)) + zx.w(*(rbx + 6)) * 0x100)
int32_t r9_3 = neg.d((temp3 ^ temp2) - temp2)
*(arg1 + 8) = r9_3
*(arg1 + 0xc) = sx.d(zx.w(*(rbx + 8)) * 0x100 + zx.w(*(rbx + 9)))
rbx.b = (r10_2 | r9_3) != 0
sub_142c09b70(rax_3)
*arg1 = rbx.b
var_58 = 0
int128_t var_50_1
__builtin_memset(&var_50_1, 0, 0x15)
int32_t var_38_1 = 0
int64_t var_30_1 = 0
int32_t var_28_1 = sub_142bfb130(arg2)
char var_24_1 = 1
int32_t* rax_16 = sub_142bfb560(&var_58, sub_142bfb150(arg2, 0x766d7478))
*(arg1 + 0x20) = rax_16
int32_t* rcx_12 = &data_14369a5d0

if (rax_16 != 0)
    rcx_12 = rax_16

int32_t r8_2 = rcx_12[6]

if (*(arg1 + 0x14) << 2 u> r8_2)
    *(arg1 + 0x14) = r8_2 u>> 2

uint64_t rdx_6 = zx.q(*(arg1 + 0x14))
*(arg1 + 0x10) = ((r8_2 - (rdx_6 << 2).d) u>> 1) + rdx_6.d

if (rdx_6.d == 0)
    *(arg1 + 0x10) = 0
    int128_t* rax_22 = *(arg1 + 0x20)
    
    if (rax_22 != 0)
        r14 = rax_22
    
    sub_142c09b70(r14)
    *(arg1 + 0x20) = 0
    *(arg1 + 0x20) = &data_14369a5d0

var_58 = 0
int128_t var_50_2
__builtin_memset(&var_50_2, 0, 0x15)
int32_t var_38_2 = 0
int64_t var_30_2 = 0
int32_t var_28_2 = sub_142bfb130(arg2)
char var_24_2 = 1
int32_t* result = sub_142bfbb20(&var_58, sub_142bfb150(arg2, 0x56564152))
*(arg1 + 0x28) = result
return result
