// 函数: sub_1418fad40
// 地址: 0x1418fad40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg3)
*arg1 = 0xe
char r14 = 1
int64_t rbp = sx.q(arg4)

if (not(test_bit(arg11, 0x12)))
    r14 = arg14

memset(&arg1[1], 0, 0x54)

if (rdi.d u<= 6)
    switch (rdi)
        case 1, 3, 5, 6
            arg1[5] = 1
        case 2
            arg1[5] = 2

int32_t rax_1 = sub_1418f0050(rbp.d, (arg11 u>> 4).b & 1)
int32_t r10_1 = arg11 & 0x10000
int32_t r9 = (&data_1439c85fc)[rbp * 0xa]
int32_t rcx_4 = r9

if (r10_1 == 0)
    rcx_4 = rax_1

arg1[6] = rcx_4

if (arg13 != 0)
    *arg13 = rax_1

if (arg12 != 0)
    *arg12 = r9

arg1[7] = arg5
arg1[8] = arg6
int32_t rax_5 = 1

if (rdi.d == 2)
    rax_5 = arg7

arg1[9] = rax_5
arg1[0xa] = arg9
int32_t rax_7

if (rdi.d != 3)
    rax_7 = 1

if (rdi.d == 3 || rdi.d == 6)
    rax_7 = 6

arg1[0xb] = rax_7 * arg8
int32_t rax_9

if (rdi.d != 3)
    rax_9 = 0

if (rdi.d == 3 || rdi.d == 6)
    rax_9 = 0x10

arg1[4] = rax_9

if ((arg11.b & 0x10) != 0)
    if ((*(arg2 + 0x1af0) & 0x1000) == 0)
        arg1[4] = rax_9 | 8
    else
        arg1[0x16] = 0x3b9d0838
        __builtin_memset(&arg1[0x17], 0, 0x1c)
        *(arg1 + 0x60) = *(arg1 + 8)
        *(arg1 + 8) = &arg1[0x16]
        *(arg1 + 0x70) = &arg1[0x1e]
        arg1[0x1a] = 2
        arg1[0x1e] = r9
        arg1[0x1f] = rax_1

if ((*(arg2 + 0x1af0) & 1) != 0 && arg1[5] == 2)
    arg1[4] |= 0x20

int32_t r8_1 = 1

if (r14 == 0)
    r8_1 = *((rdi << 2) + 0x142ff1db8)

arg1[0xd] = r8_1
int32_t rdx_4 = 7
arg1[0xe] = 7

if (test_bit(arg11, 0x11))
    rdx_4 = 0xf
    arg1[0xe] = rdx_4
else if ((arg11.b & 5) != 0)
    arg1[0xd] = 0
    
    if (test_bit(arg11, 9))
        rdx_4 = 0x87
    
    rdx_4 |= ((not.d(arg11) & 1) + 1) << 4
    arg1[0xe] = rdx_4
    
    if (test_bit(arg11, 0xb))
        rdx_4 |= 0x40
        arg1[0xe] = rdx_4
    
    r8_1 = 0
else if (test_bit(arg11, 0x1a))
    rdx_4 = 0x27
label_1418faf5f:
    r8_1 = 0
    arg1[0xd] = 0
    arg1[0xe] = rdx_4
else if ((arg11.b & 2) != 0)
    rdx_4 = 0x17
    goto label_1418faf5f

if (r10_1 != 0)
    rdx_4 |= 8
    arg1[0xe] = rdx_4

int32_t rax_14 = arg10
*(arg1 + 0x3c) = 0
*(arg1 + 0x48) = 0

if (r8_1 == 1 && rax_14 u> 1)
    rax_14 = 1

uint64_t result = zx.q(rax_14 - 1)

if (result.d u<= 0x3f)
    result = zx.q(lookup_table_1418fb0c0[result])
    
    switch (result)
        case 0
            arg1[0xc] = 1
        case 1
            arg1[0xc] = 2
        case 2
            arg1[0xc] = 4
        case 3
            arg1[0xc] = 8
        case 4
            arg1[0xc] = 0x10
        case 5
            arg1[0xc] = 0x20
        case 6
            arg1[0xc] = 0x40

bool cond:2_1

if (r8_1 == 1)
    result = (sx.q(arg1[6]) + 0x104) * 3
    int32_t rcx_9 = *(arg2 + (result << 2))
    
    if ((1 & rcx_9.b) == 0)
        rdx_4 &= 0xfffffffb
        arg1[0xe] = rdx_4
    
    if ((rcx_9.b & 2) == 0)
        rdx_4 &= 0xfffffff7
        arg1[0xe] = rdx_4
    
    if (rcx_9.b s>= 0)
        rdx_4 &= 0xffffffef
        arg1[0xe] = rdx_4
    
    cond:2_1 = (rcx_9 & 0x200) != 0
label_1418fb05e:
    
    if (not(cond:2_1))
        arg1[0xe] = rdx_4 & 0xffffffdf
else if (r8_1 == 0)
    result = zx.q(*(arg2 + sx.q(arg1[6]) * 0xc + 0xc34))
    
    if ((1 & result.b) == 0)
        rdx_4 &= 0xfffffffb
        arg1[0xe] = rdx_4
    
    if ((result.b & 2) == 0)
        rdx_4 &= 0xfffffff7
        arg1[0xe] = rdx_4
    
    if (result.b s>= 0)
        rdx_4 &= 0xffffffef
        arg1[0xe] = rdx_4
    
    cond:2_1 = (result.d & 0x200) != 0
    goto label_1418fb05e
return result
