// 函数: sub_1420580d0
// 地址: 0x1420580d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = arg1[1].d
int32_t rbx_1 = rbx - 1
int128_t zmm14 = zx.o(0)

if (rbx - 1 s< 0)
    return 

float zmm2 = 9.99999994e-09f
uint32_t zmm3[0x4] = 0x3f000000
uint32_t zmm6[0x4]
uint32_t var_18_1[0x4] = zmm6
uint32_t zmm8[0x4]
uint32_t var_38_1[0x4] = zmm8
uint32_t zmm10[0x4]
uint32_t var_58_1[0x4] = zmm10
uint32_t zmm11[0x4]
uint32_t var_68_1[0x4] = zmm11
uint32_t zmm13[0x4]
uint32_t var_88_1[0x4] = zmm13
uint32_t zmm7[0x4]
uint32_t var_28_1[0x4] = zmm7
uint32_t zmm12[0x4]
uint32_t var_78_1[0x4] = zmm12
int64_t rsi_2 = sx.q(rbx_1) * 0x18
int32_t temp10_1

do
    int128_t* r9_1 = *arg1
    int32_t r8_1 = arg1[1].d
    zmm11 = *(r9_1 + rsi_2)
    zmm13 = *(r9_1 + rsi_2 + 4)
    int32_t rax_4 = r8_1
    
    if (rbx_1 != 0)
        rax_4 = rbx_1
    
    int64_t rcx = sx.q(rax_4) * 3
    zmm11[0] = zmm11[0] f- *(r9_1 + (rcx << 3) - 0x18)
    zmm13[0] = zmm13[0] f- *(r9_1 + (rcx << 3) - 0x14)
    zmm11[0] = zmm11[0] f* zmm11[0]
    zmm13[0] = zmm13[0] f* zmm13[0]
    zmm13[0] = zmm13[0] f+ zmm11[0]
    int64_t zmm1
    float zmm4
    
    if (zmm13[0] f<= zmm2)
        zmm12 = zx.o(0)
        zmm7 = zx.o(0)
    else
        zmm4 = zmm3[0]
        zmm7 = _mm_rsqrt_ss(zmm13[0], zmm13[0])
        zmm13[0] = zmm13[0] f* zmm4
        zmm7[0] = zmm7[0] f* zmm7[0]
        zmm1.d = zmm13[0].q.d f* zmm7[0]
        zmm7[0] = zmm7[0] f* (zmm4 f- zmm1.d)
        zmm2 = 9.99999994e-09f
        zmm7[0] = zmm7[0] f+ zmm7[0]
        zmm1.d = zmm7[0].q.d f* zmm7[0]
        zmm13[0] = zmm13[0] f* zmm1.d
        zmm3 = 0x3f000000
        zmm7[0] = zmm7[0] f* (zmm4 f- zmm13[0])
        zmm7[0] = zmm7[0] f+ zmm7[0]
        zmm12 = zmm7
        zmm7[0] = zmm7[0] f* zmm13[0]
        zmm12[0] = zmm12[0] f* zmm11[0]
    
    int64_t rcx_1 = sx.q(mods.dp.d(sx.q(rbx_1 + 1), r8_1)) * 3
    zmm10 = *(r9_1 + (rcx_1 << 3))
    zmm10[0] = zmm10[0] f- zmm11[0]
    zmm11 = *(r9_1 + (rcx_1 << 3) + 4)
    zmm11[0] = zmm11[0] f- zmm13[0]
    zmm10[0] = zmm10[0] f* zmm10[0]
    zmm11[0] = zmm11[0] f* zmm11[0]
    zmm11[0] = zmm11[0] f+ zmm10[0]
    uint32_t zmm5[0x4]
    
    if (zmm11[0] f<= zmm2)
        zmm1 = (zx.o(0)).q
        zmm5 = zx.o(0)
    else
        zmm4 = zmm3[0]
        zmm5 = _mm_rsqrt_ss(zmm11[0], zmm11[0])
        zmm11[0] = zmm11[0] f* zmm4
        zmm5[0] = zmm5[0] f* zmm5[0]
        zmm1.d = zmm11[0].q.d f* zmm5[0]
        zmm5[0] = zmm5[0] f* (zmm4 f- zmm1.d)
        zmm5[0] = zmm5[0] f+ zmm5[0]
        zmm1.d = zmm5[0].q.d f* zmm5[0]
        zmm11[0] = zmm11[0] f* zmm1.d
        zmm5[0] = zmm5[0] f* (zmm4 f- zmm11[0])
        zmm5[0] = zmm5[0] f+ zmm5[0]
        zmm1 = zmm5[0].q
        zmm5[0] = zmm5[0] f* zmm11[0]
        zmm1.d = zmm1.d f* zmm10[0]
    
    if (zmm13[0] f< 9.99999975e-05f || zmm11[0] f< 9.99999975e-05f)
    label_14205835b:
        int32_t rax_8 = r8_1 - rbx_1
        
        if (rax_8 != 1)
            memmove(r9_1 + sx.q(rbx_1) * 0x18, r9_1 + (sx.q(rbx_1) + 1) * 0x18, (rax_8 - 1) * 0x18)
            r8_1 = arg1[1].d
        
        arg1[1].d = r8_1 - 1
        sub_1405fde90(arg1)
    else
        zmm12[0] = zmm12[0] f- zmm1.d
        
        if (not(_mm_and_ps(zmm12, 0x7fffffff)[0] f> 0.00999999978f))
            zmm7[0] = zmm7[0] f- zmm5[0]
            
            if (_mm_and_ps(zmm7, 0x7fffffff)[0] f<= 0.00999999978f)
                goto label_14205835b
        
        zmm5[0] = zmm5[0] f* zmm12[0]
        zmm1.d = zmm1.d f* zmm7[0]
        zmm5[0] = zmm5[0] f- zmm1.d
        int64_t rax
        uint32_t zmm0[0x4]
        
        if (zmm5[0] f>= -1f)
            zmm0, rax = asinf(__minss_xmmss_memss(zmm5[0], 0x3f800000)[0])
            zmm14.d = zmm14.d f+ zmm0[0]
        else
            zmm0, rax = asinf(0xbf800000[0])
            zmm14.d = zmm14.d f+ zmm0[0]
    
    zmm2 = 9.99999994e-09f
    rsi_2 -= 0x18
    temp10_1 = rbx_1
    rbx_1 -= 1
    zmm3 = 0x3f000000
while (temp10_1 - 1 s>= 0)

if (zmm14.d f>= 0f)
    return 

void* rbx_2 = nullptr
int64_t i_2 = sx.q(arg1[1].d)
void* var_b8 = nullptr
int32_t rsi_3 = i_2.d
int32_t var_ac_1 = 0
int32_t var_b0_1 = i_2.d

if (i_2.d s> 0)
    sub_1405a4df0(&var_b8)
    rsi_3 = var_b0_1
    rbx_2 = var_b8

int64_t i_1 = i_2

if (i_1 s> 0)
    void* rdx_5 = rbx_2
    int64_t rcx_7 = i_1 * 0x18
    int64_t i
    
    do
        int64_t rax_16 = *arg1
        rdx_5 += 0x18
        rcx_7 -= 0x18
        *(rdx_5 - 0x18) = *(rcx_7 + rax_16)
        *(rdx_5 - 8) = *(rcx_7 + rax_16 + 0x10)
        i = i_1
        i_1 -= 1
    while (i != 1)

if (arg1 != &var_b8)
    int32_t r8_4 = *(arg1 + 0xc)
    arg1[1].d = rsi_3
    
    if (rsi_3 != 0 || r8_4 != 0)
        sub_140808f70(arg1, rsi_3, r8_4)
        memcpy(*arg1, rbx_2, rsi_3 * 0x18)
    else
        *(arg1 + 0xc) = rsi_3

if (rbx_2 != 0)
    sub_140a74f90(rbx_2)
