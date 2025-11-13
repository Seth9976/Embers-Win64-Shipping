// 函数: sub_14205f060
// 地址: 0x14205f060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = 0
arg1[0x14] = 0

if (arg1[0x15] != 0)
    sub_1405dadb0(&arg1[0x12], 0)

int32_t rcx_1 = arg1[0x18]
void* r14 = &arg1[0x16]
int32_t rax = *arg1

if (rax s> rcx_1)
    *(r14 + 8) = rax
    
    if (rax s> *(r14 + 0xc))
        sub_140638a00(r14)
else if (rax s< rcx_1 && rax != rcx_1)
    *(r14 + 8) = rax
    sub_140775970(r14)

int32_t r12 = arg1[0xe]
uint128_t zmm0
zmm0.d = _mm_cvtepi32_ps(zx.o(*arg1)).d f* arg1[0xf]
arg1[0x14] = 0
int32_t rdx_2 = int.d(zmm0.d)

if (arg1[0x15] != rdx_2)
    sub_1405dadb0(&arg1[0x12], rdx_2)

int32_t i = 0

if (*arg1 s> 0)
    int64_t r13_1 = 0
    int64_t r15_1 = 0
    
    do
        int64_t rax_1 = *(arg1 + 0x68)
        uint64_t* rcx_5 = *r14
        int32_t var_40_1 = (*(r15_1 + rax_1 + 0x38)).d
        *(rcx_5 + r13_1) = (_mm_unpacklo_ps(*(r15_1 + rax_1 + 0x30), *(r15_1 + rax_1 + 0x34))).q
        *(rcx_5 + r13_1 + 8) = var_40_1
        int64_t zmm1 = arg1[0xf]
        
        if (not(zmm1.d f>= 1f))
            r12 = r12 * 0xbb38435 + 0x3619636b
            zmm0.d = (r12 u>> 9 | 0x3f800000).d f- 1f
        
        if (zmm1.d f>= 1f || not(zmm0.d f> zmm1.d))
            int64_t r14_1 = sx.q(arg1[0x14])
            int32_t rax_6 = (r14_1 + 1).d
            arg1[0x14] = rax_6
            
            if (rax_6 s> arg1[0x15])
                sub_1405a4cf0(&arg1[0x12])
            
            *(*(arg1 + 0x48) + (r14_1 << 2)) = i
            r14 = &arg1[0x16]
        
        i += 1
        r15_1 += 0x40
        r13_1 += 0xc
    while (i s< *arg1)

arg1[1] = arg1[0x14]
int64_t rdi = data_143f43260
int64_t rcx_7

if (data_143de5480 == 0)
    rcx_7 = 0
else
    rcx_7.b = GetCurrentThreadId() != data_143de5470

int32_t r8 = *(rdi + (rcx_7 << 2))
arg1[0xb] = r8
int64_t rdi_1 = data_143f43290
int64_t rcx_8

if (data_143de5480 == 0)
    rcx_8 = 0
else
    uint32_t rax_10 = GetCurrentThreadId()
    r8 = arg1[0xb]
    rcx_8.b = rax_10 != data_143de5470

int32_t temp0_2 = divs.dp.d(sx.q(arg1[1]), *(rdi_1 + (rcx_8 << 2)))
int32_t rcx_9 = temp0_2

if (temp0_2 s< r8)
    arg1[0xb] = temp0_2
    int64_t rdi_2 = data_143f43278
    int64_t rdx_5
    
    if (data_143de5480 == 0)
        rdx_5 = 0
    else
        uint32_t rax_14 = GetCurrentThreadId()
        rcx_9 = arg1[0xb]
        rdx_5.b = rax_14 != data_143de5470
    
    if (rcx_9 s< *(rdi_2 + (rdx_5 << 2)))
        arg1[0xb] = 0

int64_t rdi_3 = data_143f42e18

if (data_143de5480 != 0)
    rsi.b = GetCurrentThreadId() != data_143de5470

int32_t rcx_10 = *(rdi_3 + (rsi << 2))
int32_t r8_1 = arg1[1]
arg1[0xc]
int32_t result = divs.dp.d(sx.q(r8_1), arg1[0xc])
arg1[0xa] = rcx_10

if (result s< rcx_10)
    int32_t result_1 = divs.dp.d(sx.q(r8_1), rcx_10)
    
    if (result_1 s< 1)
        arg1[0xc] = 1
        return 1
    
    result = 0x400
    
    if (result_1 s< 0x400)
        result = result_1
    
    arg1[0xc] = result

return result
