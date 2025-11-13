// 函数: sub_142b83f20
// 地址: 0x142b83f20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_8 = arg1.q
int64_t arg_20
memmove(&arg_20, &arg_8, 8)
int64_t r9 = arg_20
int64_t rcx_2 = r9 & 0xfffffffffffff
int64_t rax_1 = r9 & 0x7ff0000000000000
int64_t rdx_1 = rcx_2 + 0x10000000000000

if (rax_1 == 0)
    rdx_1 = rcx_2

int32_t r9_1

if (rax_1 != 0)
    r9_1 = ((r9 u>> 0x34).d & 0x7ff) - 0x433
else
    r9_1 = -0x432

while ((0x10000000000000 & rdx_1) == 0)
    rdx_1 *= 2
    r9_1 -= 1

int32_t var_90 = r9_1 - 0xb
int64_t var_b8 = 0
int32_t var_b0 = 0
int64_t var_a8 = 0
int32_t var_a0 = 0
int32_t arg_10

if (arg2 != 0)
    arg1.d = fconvert.s(arg1.q)
    arg_10 = arg1.d
    memmove(&arg_8, &arg_10, 4)
    arg_10 = arg_8.d
    sub_142b844f0(&arg_10, &var_b8, &var_a8)
else
    arg_8 = arg1.q
    memmove(&arg_20, &arg_8, 8)
    arg_8 = arg_20
    sub_142b843a0(&arg_8, &var_b8, &var_a8)

int64_t var_c8 = 0
int32_t var_c0 = 0
int32_t arg_18
sub_142b90d70(0xffffff84 - (r9_1 - 0xb), zx.q(0xffffffa0 - (r9_1 - 0xb)), &var_c8, &arg_18)
uint128_t var_88 = (rdx_1 << 0xb).o
sub_142b90ce0(&var_88, &var_c8)
uint128_t var_68 = var_b8.o
sub_142b90ce0(&var_68, &var_c8)
uint128_t var_78 = var_a8.o
sub_142b90ce0(&var_78, &var_c8)
int128_t zmm1 = *arg3
uint128_t zmm0 = var_88
int64_t r14_2 = var_78.q + 1
int64_t var_98
var_98.o = zmm0
int64_t r10 = 1
uint128_t temp0 = _mm_bsrli_si128(zmm0, 8)
int64_t r9_7 = r14_2 - var_68.q + 1
int32_t r13 = temp0.d
var_a8.o = zmm1
*arg4 = 0
int64_t r15 = var_a8
char r12_1 = (neg.d(r13)).b
int64_t rax_4 = 1 << r12_1
uint32_t rsi_2 = (r14_2 u>> r12_1).d
arg_20 = rax_4
arg_8 = rax_4 - 1
int64_t r8_4 = (rax_4 - 1) & r14_2
int32_t rdi_2 = ((r13 + 0x41) * 0x4d1) s>> 0xc

if (rsi_2 u>= *(&data_14367e0f8 + (sx.q(rdi_2 + 1) << 2)))
    rdi_2 += 1

uint32_t r11 = *(&data_14367e0f8 + (sx.q(rdi_2) << 2))
int64_t var_e8
int64_t var_e0
int64_t var_d8
int32_t rdx_17
int64_t r14_4

if (rdi_2 s<= 0)
label_142b84190:
    int64_t r11_2 = arg_8
    
    do
        int64_t r8_6 = r8_4 * 0xa
        r10 *= 0xa
        r9_7 *= 0xa
        r8_4 = r8_6 & r11_2
        sx.q(*arg4)[r15] = (r8_6 u>> (neg.d(r13)).b).b + 0x30
        rdi_2 -= 1
        *arg4 += 1
        rdx_17 = *arg4
    while (r8_4 u>= r9_7)
    
    var_d8 = r10
    var_e0 = arg_20
    var_e8 = r8_4
    r14_4 = (r14_2 - var_98) * r10
else
    while (true)
        rdi_2 -= 1
        uint64_t rdx_11 = zx.q(modu.dp.d(0:rsi_2, r11))
        uint8_t rax_9 = (divu.dp.d(0:rsi_2, r11)).b + 0x30
        rsi_2 = rdx_11.d
        *(sx.q(*arg4) + r15) = rax_9
        *arg4 += 1
        int64_t rdx_13 = (rdx_11 << r12_1) + r8_4
        arg_10 = *arg4
        
        if (rdx_13 u< r9_7)
            var_d8 = 1
            r14_4 = r14_2 - var_98
            var_e0 = zx.q(r11) << r12_1
            var_e8 = rdx_13
            rdx_17 = arg_10
            break
        
        r11 u/= 0xa
        
        if (rdi_2 s<= 0)
            goto label_142b84190

var_a8.o = zmm1
char rax_14 = sub_142b84620(&var_a8, rdx_17, r14_4, r9_7, var_e8, var_e0, var_d8)
*arg5 = rdi_2 - arg_18
return zx.q(rax_14)
