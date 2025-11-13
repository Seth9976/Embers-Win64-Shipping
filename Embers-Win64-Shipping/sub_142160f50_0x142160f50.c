// 函数: sub_142160f50
// 地址: 0x142160f50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = *arg2
int32_t result = arg1[0x55].d
int64_t* rdx_5

if (result == *(arg1 + 0x2d4))
label_142160fde:
    rdx_5 = nullptr
else
    int32_t rax_1 = sub_140b5ead0(rbx.d) + rbx:4.d
    void* r8 = &arg1[0x5b]
    void* rcx_1 = *(r8 + 8)
    
    if (rcx_1 != 0)
        r8 = rcx_1
    
    result = *(r8 + (((sx.q(arg1[0x5d].d) - 1) & sx.q(rax_1)) << 2))
    
    if (result == 0xffffffff)
    label_142160fde_1:
        rdx_5 = nullptr
    else
        while (true)
            rdx_5 = (sx.q(result) << 5) + arg1[0x54]
            
            if (*rdx_5 == rbx)
                break
            
            result = rdx_5[3].d
            
            if (result == 0xffffffff)
                goto label_142160fde_2
        
        if (result == 0xffffffff)
        label_142160fde_2:
            rdx_5 = nullptr

void* rsi = &rdx_5[1]

if (rdx_5 == 0)
    rsi = nullptr

if (rsi == 0)
    return result

int32_t* rcx_7

if (arg1[1].d == *(arg1 + 0x34))
label_14216104e:
    rcx_7 = nullptr
else
    void* rdx_6 = arg1[8]
    void* r8_2 = &arg1[7]
    int64_t r9_1 = sx.q(*rsi)
    
    if (rdx_6 != 0)
        r8_2 = rdx_6
    
    int32_t rax_4 = *(r8_2 + (((sx.q(arg1[9].d) - 1) & r9_1) << 2))
    
    if (rax_4 == 0xffffffff)
    label_14216104e_1:
        rcx_7 = nullptr
    else
        while (true)
            rcx_7 = sx.q(rax_4) * 0x38 + *arg1
            
            if (*rcx_7 == r9_1.d)
                break
            
            rax_4 = rcx_7[0xc]
            
            if (rax_4 == 0xffffffff)
                goto label_14216104e_2
        
        if (rax_4 == 0xffffffff)
        label_14216104e_2:
            rcx_7 = nullptr

void* rax_5 = &rcx_7[2]

if (rcx_7 == 0)
    rax_5 = nullptr

if (rax_5 != 0)
    char rcx_8 = *(rax_5 + 0x20) & 0xfb
    *(rax_5 + 0x20) = rcx_8
    
    if (arg3 == 0)
        *(rax_5 + 0x20) = rcx_8 | 8
    
    int64_t* rax_6 = sub_140d3c6e0(rax_5)
    
    if (rax_6 != 0)
        sub_14217e5c0(arg1, *rsi, rax_6)
        int64_t rdx_8 = *rax_6
        void* rax_7 = (*(rdx_8 + 0x150))(rax_6, rdx_8)
        
        if (rax_7 != 0)
            int64_t* rcx_12 = *(rax_7 + 0x130)
            
            if (rcx_12 != 0)
                (*(*rcx_12 + 0x628))(rcx_12, rax_6)

float zmm2[0x2] = data_143f4d260

if (not(zmm2[0] <= 0f))
    void* rax_9 = arg1[0x29]
    int64_t temp0_1 = _mm_cvtps_pd(zmm2)
    uint128_t zmm1
    zmm1.q = *(rax_9 + 0x218) f- *(rsi + 8)
    
    if (not(zmm1.q f< temp0_1))
        int64_t rax_10 = *arg2
        int64_t temp0_2 = _mm_cvtpd_ps(zmm1)
        int64_t var_38 = rax_10
        int32_t var_30_1 = temp0_2.d
        sub_14213cae0(&arg1[0x5e], &var_38)

sub_142174110(&arg1[0x54], *arg2)
return sub_140943780(&arg1[0x2b], *arg2)
