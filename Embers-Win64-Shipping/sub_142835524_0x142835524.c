// 函数: sub_142835524
// 地址: 0x142835524
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

for (int64_t* i = arg2[1]; i != 0; i = i[1])
    int16_t* r9_1 = *i
    uint32_t r10_1 = zx.d(*r9_1)
    
    if (r10_1 == 0x2b)
        *(arg1 + 0x18) = zx.d(r9_1[1].b)
        *(arg1 + 0x1c) = zx.d(*(r9_1 + 3))
    else if (r10_1 == 0x2c)
        *(arg1 + 0x20) = zx.d(r9_1[1].b)
        *(arg1 + 0x24) = zx.d(*(r9_1 + 3))
    else
        *((zx.q(r10_1) << 5) + arg1 + 0x30) = _mm_cvtepi32_pd(zx.q(sx.d(r9_1[1]))).q
        *((zx.q(*r9_1) << 5) + arg1 + 0x28) = 1

int64_t* rax_10 = *arg2

if (rax_10 != 0 && *rax_10 != 0)
    char* rax_11
    int64_t r8
    rax_11, r8 = sub_142837318()
    *(arg1 + 0x10) = rax_11
    
    if (rax_11 == 0)
        sub_142833a04((&rax_11[1]).d, "Out of memory", r8)
        return 0xffffffff
    
    if (sub_142835188(rax_11, **arg2, arg3) != 0)
        return 0xffffffff

int64_t* rdi_1 = arg2[2]
int32_t rbp_1 = 0

if (rdi_1 == 0)
    return 0

while (true)
    char* rsi_1 = *rdi_1
    char* rax_13 = sub_1428383dc()
    char* r9_2 = rax_13
    
    if (rax_13 == 0)
        return 0xffffffff
    
    *(rax_13 + 0x10) = 0
    *(rax_13 + 8) = _mm_cvtepi32_pd(zx.q(sx.d(*(rsi_1 + 4)))).q
    int32_t rcx_2
    rcx_2.b = *rsi_1
    rax_13[2] = 0
    rcx_2.b &= 0x7f
    rax_13[1] = rcx_2.b
    rcx_2.b = *rsi_1
    rcx_2.b u>>= 3
    rcx_2.b &= 0x10
    char r8_2 = rcx_2.b
    rax_13[2] = r8_2
    rax_13.b = r8_2
    rax_13.b |= 1
    char rcx_3 = rax_13.b
    
    if ((*rsi_1 & 0x100) == 0)
        rcx_3 = r8_2
    
    r9_2[2] = rcx_3
    rax_13.b = rcx_3
    rax_13.b |= 2
    char r8_3 = rax_13.b
    
    if ((*rsi_1 & 0x200) == 0)
        r8_3 = rcx_3
    
    r9_2[2] = r8_3
    uint32_t rax_15 = zx.d(*rsi_1) u>> 0xa
    
    if (rax_15 != 0)
        if (rax_15 == 1)
            r9_2[2] = r8_3 | 4
        else if (rax_15 == 2)
            r9_2[2] = r8_3 | 8
        else if (rax_15 != 3)
            *(r9_2 + 8) = 0
        else
            r9_2[2] = r8_3 | 0xc
    
    rax_15.b = rsi_1[2]
    *r9_2 = rax_15.b
    rax_15.b = rsi_1[6]
    rax_15.b &= 0x7f
    r9_2[4] = 0
    r9_2[3] = rax_15.b
    rax_15.b = rsi_1[6]
    rax_15.b u>>= 3
    rax_15.b &= 0x10
    char r8_4 = rax_15.b
    r9_2[4] = r8_4
    rax_15.b = r8_4
    rax_15.b |= 1
    char rcx_5 = rax_15.b
    
    if ((*(rsi_1 + 6) & 0x100) == 0)
        rcx_5 = r8_4
    
    r9_2[4] = rcx_5
    rax_15.b = rcx_5
    rax_15.b |= 2
    char r8_5 = rax_15.b
    
    if ((*(rsi_1 + 6) & 0x200) == 0)
        r8_5 = rcx_5
    
    r9_2[4] = r8_5
    uint32_t rax_17 = zx.d(*(rsi_1 + 6)) u>> 0xa
    
    if (rax_17 != 0)
        if (rax_17 == 1)
            r9_2[4] = r8_5 | 4
        else if (rax_17 == 2)
            r9_2[4] = r8_5 | 8
        else if (rax_17 != 3)
            *(r9_2 + 8) = 0
        else
            r9_2[4] = r8_5 | 0xc
    
    if (*(rsi_1 + 8) != 0)
        *(r9_2 + 8) = 0
    
    if (rbp_1 != 0)
        void* i_2 = *(arg1 + 0x7a8)
        
        for (void* i_1 = *(i_2 + 0x10); i_1 != 0; i_1 = *(i_1 + 0x10))
            i_2 = i_1
        
        *(i_2 + 0x10) = r9_2
    else
        *(arg1 + 0x7a8) = r9_2
    
    rdi_1 = rdi_1[1]
    rbp_1 += 1
    
    if (rdi_1 == 0)
        return 0
