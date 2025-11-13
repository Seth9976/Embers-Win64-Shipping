// 函数: sub_142b84820
// 地址: 0x142b84820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_20 = arg4
uint128_t zmm0 = *arg1
int64_t rbx = 0
int64_t var_68 = 0
uint128_t var_58 = zmm0
uint128_t var_48 = zmm0
int64_t i = 0
int32_t r9 = 0
int32_t r10 = _mm_bsrli_si128(zmm0, 8).d
int32_t var_60 = 0

if (r10 s> 0)
    int64_t rdx = 0
    arg4 = 0x1999999999999998
    
    while (i u<= 0x1999999999999998)
        r9 += 1
        int32_t rax_2 = sx.d(*(var_48.q + rdx)) - 0x30
        rdx += 1
        i = sx.q(rax_2) + i * 0xa
        
        if (r9 s>= r10)
            break

int32_t r10_1 = var_58:8.d
int32_t r10_2

if (r10_1 != r9)
    int64_t i_2 = i + 1
    
    if (*(sx.q(r9) + var_58.q) s< 0x35)
        i_2 = i
    
    r10_2 = r10_1 - r9
    var_58.q = i_2
else
    var_58.q = i
    r10_2 = 0

int32_t rsi_1 = arg2 + r10_2
var_58:8.d = 0
var_68.o = var_58
int64_t rax_5 = var_68
int32_t rcx_2 = var_60

while ((-0x40000000000000 & rax_5) == 0)
    rax_5 <<= 0xa
    rcx_2 -= 0xa

if (rax_5 s>= 0)
    int64_t temp1_1
    int64_t temp2_1
    
    do
        rcx_2 -= 1
        temp1_1 = rax_5
        temp2_1 = rax_5
        rax_5 *= 2
    while (temp1_1 + temp2_1 s>= 0)

var_68 = rax_5
uint64_t rdi_2 = (zx.q((sbb.q(arg4, arg4, r10_2 != 0)).d) & 4) << (var_60.b - rcx_2.b)

if (rsi_1 s>= 0xfffffea4)
    var_58.q = 0
    var_58:8.d = 0
    int32_t arg_10[0x4]
    sub_142b90e00(rsi_1, &var_58, &arg_10)
    int32_t rax_8 = arg_10[0]
    
    if (rax_8 != rsi_1)
        int32_t rsi_2 = rsi_1 - rax_8
        sub_142b84710(&var_48, rsi_2)
        sub_142b90ce0(&var_68, &var_48)
        
        if (0x13 - *(arg1 + 8) s< rsi_2)
            rdi_2 += 4
    
    sub_142b90ce0(&var_68, &var_58)
    int64_t rdx_6 = var_68
    int64_t rax_10
    rax_10.b = rdi_2 != 0
    int32_t r8_1 = rcx_2
    
    while ((-0x40000000000000 & rdx_6) == 0)
        rdx_6 <<= 0xa
        r8_1 -= 0xa
    
    if (rdx_6 s>= 0)
        int64_t temp3_1
        int64_t temp4_1
        
        do
            r8_1 -= 1
            temp3_1 = rdx_6
            temp4_1 = rdx_6
            rdx_6 *= 2
        while (temp3_1 + temp4_1 s>= 0)
    
    var_68 = rdx_6
    int32_t var_60_2 = r8_1
    int64_t rdi_5 = (rdi_2 + rax_10 + 8) << (rcx_2.b - r8_1.b)
    int32_t rax_15
    
    if (r8_1 + 0x40 s>= 0xfffffc03)
        rax_15 = 0x35
    else if (r8_1 + 0x40 s> 0xfffffbce)
        rax_15 = r8_1 + 0x472
    else
        rax_15 = 0
    
    int32_t r9_1 = 0x40 - rax_15
    
    if (r9_1 + 3 s>= 0x40)
        int32_t rcx_9 = r9_1 - 0x3c
        r9_1 = 0x3c
        rdx_6 u>>= rcx_9.b
        r8_1 += rcx_9
        var_68 = rdx_6
        rdi_5 = (rdi_5 u>> rcx_9.b) + 9
        int32_t var_60_3 = r8_1
    
    int32_t rax_17 = r8_1 + r9_1
    int64_t r14_2 = 1 << (r9_1.b - 1) << 3
    int64_t rsi_6 = (((1 << r9_1.b) - 1) & rdx_6) << 3
    uint64_t i_1 = rdx_6 u>> r9_1.b
    int64_t r15_1 = r14_2 + rdi_5
    
    if (rsi_6 u>= r15_1)
        i_1 += 1
    
    while (i_1 u> 0x1fffffffffffff)
        i_1 u>>= 1
        rax_17 += 1
    
    if (rax_17 s< 0x3cc)
        bool cond:2_1 = rax_17 != 0xfffffbce
        
        if (rax_17 s>= 0xfffffbce)
            if (rax_17 s> 0xfffffbce)
                while ((0x10000000000000 & i_1) == 0)
                    i_1 *= 2
                    rax_17 -= 1
                    
                    if (rax_17 s<= 0xfffffbce)
                        break
                
                cond:2_1 = rax_17 != 0xfffffbce
            
            if (cond:2_1 || (0x10000000000000 & i_1) != 0)
                rbx = sx.q(rax_17 + 0x433)
            
            rbx = rbx << 0x34 | (i_1 & 0xfffffffffffff)
    else
        rbx = 0x7ff0000000000000
    
    int64_t arg_8 = rbx
    int64_t arg_20
    memmove(&arg_20, &arg_8, 8)
    *arg3 = arg_20
    
    if (r14_2 - rdi_5 u< rsi_6 && rsi_6 u< r15_1)
        return 0
else
    *arg3 = 0

return 1
