// 函数: sub_1423469b0
// 地址: 0x1423469b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_4c8
int64_t rax_1 = __security_cookie ^ &var_4c8
int64_t var_460 = *(arg2 + 0x1b0)
int64_t r14 = sx.q(arg3)
int32_t r8 = 0
int32_t r9 = (r14 + 2).d
int32_t var_464 = *(*(arg5 + 0xb0) + (r14 << 2))
int32_t var_448[0x20]
int32_t var_248[0x80]

do
    uint64_t rdi_1 = zx.q(0xfffffffe - r14.d + r9)
    
    if (r9 - 2 u>= arg4)
        var_248[rdi_1] = 0
        var_448[rdi_1] = r8
    else
        int64_t rdx = sx.q(r9)
        int64_t rax_19 = *(arg5 + 0xc0)
        var_248[rdi_1] = *(*arg6 + (rdx << 2) - 8)
        var_448[rdi_1] = r8
        r8 += *(rax_19 + (rdx << 2) - 8)
    
    uint64_t rdi_2 = zx.q(not.d(r14.d) + r9)
    
    if (r9 - 1 u>= arg4)
        var_248[rdi_2] = 0
        var_448[rdi_2] = r8
    else
        int64_t rdx_1 = sx.q(r9)
        int64_t rax_22 = *(arg5 + 0xc0)
        var_248[rdi_2] = *(*arg6 + (rdx_1 << 2) - 4)
        var_448[rdi_2] = r8
        r8 += *(rax_22 + (rdx_1 << 2) - 4)
    
    uint64_t rax_24 = zx.q(r9 - r14.d)
    uint64_t rdi_3 = zx.q(rax_24.d)
    
    if (r9 u>= arg4)
        var_248[rax_24] = 0
        var_448[rax_24] = r8
    else
        int64_t rdx_2 = sx.q(r9)
        int64_t rax_26 = *(arg5 + 0xc0)
        var_248[rdi_3] = *(*arg6 + (rdx_2 << 2))
        var_448[rdi_3] = r8
        r8 += *(rax_26 + (rdx_2 << 2))
    
    uint64_t rdi_4 = zx.q(r9 + 1 - r14.d)
    
    if (r9 + 1 u>= arg4)
        var_248[rdi_4] = 0
        var_448[rdi_4] = r8
    else
        int64_t rdx_3 = sx.q(r9)
        int64_t rax_29 = *(arg5 + 0xc0)
        var_248[rdi_4] = *(*arg6 + (rdx_3 << 2) + 4)
        var_448[rdi_4] = r8
        r8 += *(rax_29 + (rdx_3 << 2) + 4)
    
    uint64_t rdi_5 = zx.q(2 - r14.d + r9)
    
    if (r9 + 2 u>= arg4)
        var_248[rdi_5] = 0
        var_448[rdi_5] = r8
    else
        int64_t rdx_4 = sx.q(r9)
        int64_t rax_32 = *(arg5 + 0xc0)
        var_248[rdi_5] = *(*arg6 + (rdx_4 << 2) + 8)
        var_448[rdi_5] = r8
        r8 += *(rax_32 + (rdx_4 << 2) + 8)
    
    uint64_t rdi_7 = zx.q(3 - r14.d + r9)
    
    if (r9 + 3 u>= arg4)
        var_248[rdi_7] = 0
        var_448[rdi_7] = r8
    else
        int64_t rdx_5 = sx.q(r9)
        int64_t rax_35 = *(arg5 + 0xc0)
        var_248[rdi_7] = *(*arg6 + (rdx_5 << 2) + 0xc)
        var_448[rdi_7] = r8
        r8 += *(rax_35 + (rdx_5 << 2) + 0xc)
    
    uint64_t rdi_9 = zx.q(4 - r14.d + r9)
    
    if (r9 + 4 u>= arg4)
        var_248[rdi_9] = 0
        var_448[rdi_9] = r8
    else
        int64_t rdx_6 = sx.q(r9)
        int64_t rax_38 = *(arg5 + 0xc0)
        var_248[rdi_9] = *(*arg6 + (rdx_6 << 2) + 0x10)
        var_448[rdi_9] = r8
        r8 += *(rax_38 + (rdx_6 << 2) + 0x10)
    
    uint64_t rdi_11 = zx.q(5 - r14.d + r9)
    
    if (r9 + 5 u>= arg4)
        var_248[rdi_11] = 0
        var_448[rdi_11] = r8
    else
        int64_t rdx_7 = sx.q(r9)
        int64_t rax_41 = *(arg5 + 0xc0)
        var_248[rdi_11] = *(*arg6 + (rdx_7 << 2) + 0x14)
        var_448[rdi_11] = r8
        r8 += *(rax_41 + (rdx_7 << 2) + 0x14)
    
    uint64_t rdi_13 = zx.q(6 - r14.d + r9)
    
    if (r9 + 6 u>= arg4)
        var_248[rdi_13] = 0
        var_448[rdi_13] = r8
    else
        int64_t rdx_8 = sx.q(r9)
        int64_t rax_44 = *(arg5 + 0xc0)
        var_248[rdi_13] = *(*arg6 + (rdx_8 << 2) + 0x18)
        var_448[rdi_13] = r8
        r8 += *(rax_44 + (rdx_8 << 2) + 0x18)
    
    uint64_t rdi_15 = zx.q(7 - r14.d + r9)
    
    if (r9 + 7 u>= arg4)
        var_248[rdi_15] = 0
        var_448[rdi_15] = r8
    else
        int64_t rdx_9 = sx.q(r9)
        int64_t rax_47 = *(arg5 + 0xc0)
        var_248[rdi_15] = *(*arg6 + (rdx_9 << 2) + 0x1c)
        var_448[rdi_15] = r8
        r8 += *(rax_47 + (rdx_9 << 2) + 0x1c)
    
    uint64_t rdi_17 = zx.q(8 - r14.d + r9)
    
    if (r9 + 8 u>= arg4)
        var_248[rdi_17] = 0
        var_448[rdi_17] = r8
    else
        int64_t rdx_10 = sx.q(r9)
        int64_t rax_50 = *(arg5 + 0xc0)
        var_248[rdi_17] = *(*arg6 + (rdx_10 << 2) + 0x20)
        var_448[rdi_17] = r8
        r8 += *(rax_50 + (rdx_10 << 2) + 0x20)
    
    uint64_t rdi_19 = zx.q(9 - r14.d + r9)
    
    if (r9 + 9 u>= arg4)
        var_248[rdi_19] = 0
        var_448[rdi_19] = r8
    else
        int64_t rdx_11 = sx.q(r9)
        int64_t rax_53 = *(arg5 + 0xc0)
        var_248[rdi_19] = *(*arg6 + (rdx_11 << 2) + 0x24)
        var_448[rdi_19] = r8
        r8 += *(rax_53 + (rdx_11 << 2) + 0x24)
    
    uint64_t rdi_21 = zx.q(0xa - r14.d + r9)
    
    if (r9 + 0xa u>= arg4)
        var_248[rdi_21] = 0
        var_448[rdi_21] = r8
    else
        int64_t rdx_12 = sx.q(r9)
        int64_t rax_56 = *(arg5 + 0xc0)
        var_248[rdi_21] = *(*arg6 + (rdx_12 << 2) + 0x28)
        var_448[rdi_21] = r8
        r8 += *(rax_56 + (rdx_12 << 2) + 0x28)
    
    uint64_t rdi_23 = zx.q(0xb - r14.d + r9)
    
    if (r9 + 0xb u>= arg4)
        var_248[rdi_23] = 0
        var_448[rdi_23] = r8
    else
        int64_t rdx_13 = sx.q(r9)
        int64_t rax_59 = *(arg5 + 0xc0)
        var_248[rdi_23] = *(*arg6 + (rdx_13 << 2) + 0x2c)
        var_448[rdi_23] = r8
        r8 += *(rax_59 + (rdx_13 << 2) + 0x2c)
    
    uint64_t rdi_25 = zx.q(0xc - r14.d + r9)
    
    if (r9 + 0xc u>= arg4)
        var_248[rdi_25] = 0
        var_448[rdi_25] = r8
    else
        int64_t rdx_14 = sx.q(r9)
        int64_t rax_62 = *(arg5 + 0xc0)
        var_248[rdi_25] = *(*arg6 + (rdx_14 << 2) + 0x30)
        var_448[rdi_25] = r8
        r8 += *(rax_62 + (rdx_14 << 2) + 0x30)
    
    uint64_t rdi_27 = zx.q(0xd - r14.d + r9)
    
    if (r9 + 0xd u>= arg4)
        var_248[rdi_27] = 0
        var_448[rdi_27] = r8
    else
        int64_t rdx_15 = sx.q(r9)
        int64_t rax_65 = *(arg5 + 0xc0)
        var_248[rdi_27] = *(*arg6 + (rdx_15 << 2) + 0x34)
        var_448[rdi_27] = r8
        r8 += *(rax_65 + (rdx_15 << 2) + 0x34)
    
    r9 += 0x10
while (0xfffffffe - r14.d + r9 u< 0x80)

sub_140741e30(arg2, &var_460, arg1 + 0x12c, &var_464, 0)
sub_142324090(arg2, &var_460, arg1 + 0x126, &var_448, 0)
uint64_t result = sub_142324090(arg2, &var_460, arg1 + 0x120, &var_248, 0)
__security_check_cookie(rax_1 ^ &var_4c8)
return result
