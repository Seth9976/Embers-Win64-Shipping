// 函数: sub_141c2a560
// 地址: 0x141c2a560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_8a8
int64_t rax_1 = __security_cookie ^ &var_8a8
int64_t rcx = *(arg1 + 0x20)

if (rcx != 0)
    sub_140a74f90(rcx)
    *(arg1 + 0x20) = 0

void var_860
memset(&var_860, 0, 0x848)
int32_t r8 = *(arg1 + 0x14)
int32_t rcx_2 = 0x80
int32_t var_868 = 0x26a5050
int32_t var_864 = r8
int64_t result

if (r8 s> 0x80)
label_141c2a72e:
    
    if (arg2 != 3)
        if (arg2 == 4)
            int64_t rcx_14 = *(arg1 + 0x20)
            
            if (rcx_14 != 0)
                sub_140a74f90(rcx_14)
                *(arg1 + 0x20) = 0
            
            int32_t* rax_11 = sub_140a82f30((sx.q(*(arg1 + 0x14)) << 2) + 0x20, 0)
            int64_t var_888_1
            __builtin_memset(&var_888_1, 0, 0x20)
            *rax_11 = var_888_1.o
            int64_t var_878_1
            *(rax_11 + 0x10) = var_878_1.o
            memset(&rax_11[8], 0, sx.q(*(arg1 + 0x14)) << 2)
            *(arg1 + 0x20) = rax_11
            *rax_11 = 0x787c4fc
            rax_11[1] = *(arg1 + 0x14)
            *(arg1 + 0x30) = sub_141c29f60
            *(arg1 + 0x28) = sub_141c29f60
            goto label_141c2a85d
        
        result = 0xa
    else
        int64_t rcx_10 = *(arg1 + 0x20)
        
        if (rcx_10 != 0)
            sub_140a74f90(rcx_10)
            *(arg1 + 0x20) = 0
        
        int32_t* rax_9 = sub_140a82f30((sx.q(*(arg1 + 0x14)) << 2) + 0x20, 0)
        int64_t var_888
        __builtin_memset(&var_888, 0, 0x20)
        *rax_9 = var_888.o
        int64_t var_878
        *(rax_9 + 0x10) = var_878.o
        memset(&rax_9[8], 0, sx.q(*(arg1 + 0x14)) << 2)
        *(arg1 + 0x20) = rax_9
        *rax_9 = 0x6f70a93
        rax_9[1] = *(arg1 + 0x14)
        *(arg1 + 0x30) = sub_141c2bcb0
        *(arg1 + 0x28) = sub_141c2bcb0
    label_141c2a85d:
        void* rcx_18 = *(arg1 + 0x20)
        *(arg1 + 0x38) = sub_141c29f30
        
        if (rcx_18 != 0)
            int64_t rax_13 = sx.q(*(arg1 + 0x14))
            *(rcx_18 + 4) = rax_13.d
            *(rcx_18 + 8) = 1
            memset(rcx_18 + 0x1c, 0, rax_13 << 2)
        
        result = 0
else
    int32_t (* rax_2)(int64_t* arg1, int64_t* arg2)
    
    if (r8 == 1)
        rax_2 = sub_141c2ac00
    else if (r8 == 2)
        rax_2 = sub_141c2b790
    else if (r8 != 4)
        rax_2 = sub_141c2b090
        
        if (r8 == 6)
            rax_2 = sub_141c2a8c0
    else
        rax_2 = sub_141c2b3e0
    
    *(arg1 + 0x30) = rax_2
    *(arg1 + 0x28) = rax_2
    *(arg1 + 0x38) = sub_141c2b720
    int32_t rax_3
    
    if (arg2 != 0)
        if (arg2 == 1)
            rcx_2 = 0x1eb
            void* const var_838_2 = &data_1430a2374
            rax_3 = 0x57a4
            goto label_141c2a696
        
        if (arg2 != 2)
            goto label_141c2a72e
        
        void* const var_838_1 = &data_14309fce4
        rax_3 = 0x99e
        goto label_141c2a696
    
    rcx_2 = 0x94d
    void* const var_838_3 = &data_1430b8214
    rax_3 = 0x5310d
label_141c2a696:
    int32_t var_84c_1 = rcx_2
    int32_t rcx_3 = 0x1000
    int32_t var_850_1 = rax_3
    uint128_t zmm1
    zmm1.q = _mm_cvtepi32_pd(zx.q(rax_3)).q f* 2.5
    zmm1.q = zmm1.q f/ _mm_cvtepi32_pd(zx.q(rcx_2)).q
    zmm1.q = zmm1.q f* 256.0
    int32_t rax_4 = int.d(zmm1.q)
    
    if (rax_4 s> 0x1000)
        rcx_3 = rax_4
    
    int32_t rcx_4 = rcx_3 * r8
    int32_t var_824_1 = rcx_4
    void* rax_6 = sub_140a82f30((sx.q(rcx_4 + r8) << 2) + 0x84c, 0)
    
    if (rax_6 == 0)
        goto label_141c2a72e
    
    memcpy(rax_6, &var_868, 0x850)
    *(arg1 + 0x20) = rax_6
    sub_141c2b720(arg1)
    int32_t i = *(rax_6 + 0x18)
    int32_t rcx_9 = 0
    
    if (i s> 1)
        do
            i |= 1 << (rcx_9 u% 0x20)
            rcx_9 += 1
        while (1 << rcx_9.b s< i)
    
    if (rcx_9 + 0xb s>= 0x20)
        goto label_141c2a72e
    
    result = 0

__security_check_cookie(rax_1 ^ &var_8a8)
return result
