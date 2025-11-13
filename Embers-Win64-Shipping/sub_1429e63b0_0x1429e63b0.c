// 函数: sub_1429e63b0
// 地址: 0x1429e63b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* var_50 = &arg1[0x6b2]
int32_t rax_2 = (1 << (*(arg2 + 0x47ac)).b) - 1
arg1[0x7d9].d = 1
int64_t var_48 = 0
int32_t i = arg1[1].d
void var_88

if (__intrinsic_setjmp(&arg1[0x7da], &var_88) != 0)
    arg1[0x7d9].d = 0
    *(arg1 + 0x365c) = 1
    *arg1 = 0
    return 0

*(arg1 + 0x365c) = 0
void* r9_1 = &arg1[0x6ce]

do
    int64_t i_1 = sx.q(i)
    void* rsi_1 = arg2 + ((i_1 + ((i_1 + 0x487) << 1)) << 3)
    memset(r9_1, 0, 0x800)
    uint64_t r9_2 = zx.q(*(rsi_1 + 0x10))
    sub_142a24fe0(var_50, arg2 + 0x270, 0, r9_2.d)
    int64_t rbx_1 = *(rsi_1 + 8)
    int64_t r15_1 = *(arg2 + 0x4eb0)
    int64_t r12_1 = *(arg2 + 0x4ea8)
    int64_t rsi_2 = *rsi_1
    
    if (rbx_1 == 0 || rbx_1 u> *arg1 - rsi_2)
        sub_1429da010(&arg1[0x7ce], 7, "Truncated packet or corrupt tile length", r9_2)
    
    if (sub_142a23290(&arg1[2], rsi_2, rbx_1, r12_1, r15_1) != 0)
        sub_1429da010(&arg1[0x7ce], 2, "Failed to allocate bool decoder %d", 1)
    
    int32_t j = 0
    void* rdx_3 = &arg1[0x68a]
    int64_t r9_4 = 0
    void* r10_1 = &arg1[0x6c0]
    
    do
        *(rdx_3 - 0x50) = &arg1[0x6ce]
        *r10_1 = *(arg2 + 0x47f8) + (((sx.q(*(arg2 + 0x5d4) + 7) & 0xfffffffffffffff8) * r9_4) << 1)
        int128_t zmm1
        
        if (j s> 0)
            *rdx_3 = *(arg2 + 0x610)
            zmm1 = *(arg2 + 0x620)
        else
            *rdx_3 = *(arg2 + 0x5f0)
            zmm1 = *(arg2 + 0x600)
        
        *(rdx_3 + 0x10) = zmm1
        rdx_3 -= -0x80
        j += 1
        arg1[0x6bc] = *(arg2 + 0x13d8)
        r9_4 += 1
        r10_1 += 8
    while (j s< 3)
    
    arg1[0x6c9] = *(arg2 + 0x47f0)
    arg1[0x6b4].d = *(arg2 + 0x5d8)
    arg1[0x6cc] = arg2 + 0x270
    void* const rax_19
    
    if (*(arg2 + 0x5a8) == 0 || *(arg2 + 0x5b8) != 0)
        rax_19 = &data_143603228
    else
        rax_19 = *(arg2 + 0x13d8) + 0x7e
    
    arg1[0x6b9] = rax_19
    arg1[0x6cc] = &arg1[0x7ce]
    
    for (int32_t j_1 = *var_50; j_1 s< var_50[1]; j_1 += 8)
        __builtin_memset(&arg1[0x6c3], 0, 0x30)
        arg1[0x6ca] = 0
        
        for (int32_t k = var_50[2]; k s< var_50[3]; k += 8)
            int64_t var_68_1
            var_68_1.b = 0xc
            sub_1429e2860(arg1, arg2, j_1, k, var_68_1.b, 4)
    
    if (*(rsi_1 + 0x10) == rax_2)
        var_48 = sub_142a23260(&arg1[2])
    
    if (*(arg1 + 0x365c) != 0)
        break
    
    i += 1
    r9_1 = &arg1[0x6ce]
while (i s<= *(arg1 + 0xc))

bool cond:0_1 = *(arg1 + 0x365c) == 0
*arg1 = var_48
int32_t r13
r13.b = cond:0_1
return zx.q(r13)
