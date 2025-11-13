// 函数: sub_141738160
// 地址: 0x141738160
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = 0
int32_t rdi = 0
float zmm7[0x4] = arg5
uint128_t zmm6 = zx.o(0)
int32_t arg_8 = 0
uint128_t zmm1 = 0x80000000
int32_t r12 = 0
int32_t i = 0
int32_t* r15 = arg4
int32_t var_1dc = 0
void* var_1e8 = nullptr
float var_1d8
int64_t var_1d4
int64_t var_1c8
uint128_t zmm3
int128_t zmm10_1
float zmm11_1[0x4]
uint128_t zmm12_1
int128_t zmm13_1

do
    int64_t* rax_1
    int32_t rbx_1
    
    if (i != 0)
        int64_t* rax_2
        int32_t rbx_2
        
        if (i != 1)
            rbx_2 = rbx | 4
            int64_t var_168 = 0
            int32_t var_160_1 = 0x3f800000
            rax_2 = &var_168
        else
            rbx_2 = rbx | 2
            int32_t var_174 = 0
            int64_t var_170_1 = 0x3f800000
            rax_2 = &var_174
        
        rbx_1 = rbx_2 | 8
        int32_t var_13c_1 = rax_2[1].d
        uint64_t var_144
        rax_1 = &var_144
        var_144 = *rax_2
    else
        rbx_1 = rbx | 1
        int64_t var_180 = 0x3f800000
        int32_t i_1 = i
        rax_1 = &var_180
    
    uint128_t zmm0 = zx.o(*rax_1)
    int32_t rax_4 = rax_1[1].d
    int32_t rcx_1 = rbx_1 & 0xfffffff7
    uint128_t zmm4 = zmm0
    uint128_t zmm2
    zmm2.d = (*(arg1 + 0x10)).d f- zmm7[0]
    void** const var_1b8 = &data_142fc47b8
    zmm3 = _mm_shuffle_ps(zmm0, zmm0, 0x55)
    
    if ((rbx_1.b & 8) == 0)
        rcx_1 = rbx_1
    
    int32_t var_ec_1 = (rax_4 ^ zmm1).d
    int32_t var_1b0_1 = 0x1000202
    int32_t rdx_1 = rcx_1 & 0xfffffffb
    char var_1ac_1 = 0
    zmm0.d = (*(arg1 + 0x18)).d f- zmm7[0]
    zmm4 ^= zmm1
    zmm3 ^= zmm1
    
    if ((rcx_1.b & 4) == 0)
        rdx_1 = rcx_1
    
    zmm1.d = (*(arg1 + 0x14)).d f- zmm7[0]
    int32_t rcx_3 = rdx_1 & 0xfffffffd
    int32_t var_f8_1 = zmm0.d
    
    if ((rdx_1.b & 2) == 0)
        rcx_3 = rdx_1
    
    uint64_t var_1a8_1 = (_mm_unpacklo_ps(zmm2, zmm1.q)).q
    int32_t rbx_4 = rcx_3 & 0xfffffffe
    
    if ((rcx_3.b & 1) == 0)
        rbx_4 = rcx_3
    
    int32_t var_1a0_1 = var_f8_1
    zmm0 = _mm_unpacklo_ps(zmm4, zmm3.q)
    int32_t var_194_1 = var_ec_1
    uint64_t var_19c_1 = zmm0.q
    int32_t var_190
    int32_t zmm6_1
    uint128_t zmm7_1
    zmm6_1, zmm7_1 = sub_141737e80(&var_1b8, &var_190, arg3, r15, zmm0, zmm6.d)
    char var_184
    uint128_t zmm0_1
    uint128_t zmm1_1
    uint128_t zmm2_1
    
    if (var_184 != 0)
        zmm1_1.d = var_190.d f- *arg3
        int32_t var_188
        zmm0_1.d = var_188.d f- arg3[2]
        int32_t var_18c
        zmm2_1.d = var_18c.d f- arg3[1]
        zmm1_1.d = zmm1_1.d f* zmm1_1.d
        int64_t r15_1 = sx.q(rdi)
        zmm0_1.d = zmm0_1.d f* zmm0_1.d
        zmm2_1.d = zmm2_1.d f* zmm2_1.d
        rdi = (r15_1 + 1).d
        zmm2_1.d = zmm2_1.d f+ zmm1_1.d
        zmm1_1 = var_190.o
        int64_t var_11c_1 = zmm1_1.q
        zmm2_1.d = zmm2_1.d f+ zmm0_1.d
        int32_t var_114_1 = _mm_bsrli_si128(zmm1_1, 8).d
        int32_t var_120_1 = _mm_sqrt_ss(0, zmm2_1.d).d
        
        if (rdi s> r12)
            sub_1405a4f90(&var_1e8)
            r12 = var_1dc
        
        r15 = arg4
        *(var_1e8 + r15_1 * 0x10) = var_120_1.o
    
    int32_t rbx_5
    uint64_t* r8_1
    
    if (i != 0)
        int64_t* rax_13
        int32_t rcx_7
        
        if (i != 1)
            var_1c8 = 0
            rax_13 = &var_1c8
            int32_t var_1c0_1 = 0x3f800000
            rcx_7 = 0xc0
        else
            var_1d8 = 0f
            rax_13 = &var_1d8
            var_1d4 = 0x3f800000
            rcx_7 = 0xa0
        
        uint64_t var_12c
        r8_1 = &var_12c
        int32_t rax_14 = rax_13[1].d
        rbx_5 = rbx_4 | rcx_7
        var_12c = *rax_13
        int32_t var_124_1 = rax_14
    else
        rbx_5 = rbx_4 | 0x10
        uint64_t var_15c = 0x3f800000
        int32_t i_2 = i
        r8_1 = &var_15c
    
    int32_t var_1b0_2 = 0x1000202
    int32_t rcx_9 = rbx_5 & 0xffffff7f
    char var_1ac_2 = 0
    zmm0_1.d = zmm7_1.d f+ *(arg1 + 0x24)
    
    if ((rbx_5.b & 0x80) == 0)
        rcx_9 = rbx_5
    
    zmm2_1.d = zmm7_1.d f+ *(arg1 + 0x1c)
    int32_t rdx_5 = rcx_9 & 0xffffffbf
    zmm1_1.d = zmm7_1.d f+ *(arg1 + 0x20)
    int32_t var_148_1 = zmm0_1.d
    
    if ((rcx_9.b & 0x40) == 0)
        rdx_5 = rcx_9
    
    int32_t rcx_11 = rdx_5 & 0xffffffdf
    uint64_t var_1a8_2 = (_mm_unpacklo_ps(zmm2_1, zmm1_1.q)).q
    zmm0_1 = zx.o(*r8_1)
    
    if ((rdx_5.b & 0x20) == 0)
        rcx_11 = rdx_5
    
    uint64_t var_19c_2 = zmm0_1.q
    rbx = rcx_11 & 0xffffffef
    var_1b8 = &data_142fc47b8
    
    if ((rcx_11.b & 0x10) == 0)
        rbx = rcx_11
    
    int32_t var_1a0_2 = var_148_1
    int32_t var_194_2 = r8_1[1].d
    int64_t var_e8[0x2]
    int64_t* rax_21
    rax_21, zmm6, zmm7, zmm10_1, zmm11_1, zmm12_1, zmm13_1 =
        sub_141737e80(&var_1b8, &var_e8, arg3, r15, zmm0_1, zmm6_1)
    zmm3 = *rax_21
    int64_t rcx_13 = _mm_bsrli_si128(zmm3, 8).q
    var_190.o = zmm3
    
    if ((rcx_13 u>> 0x20).b != 0)
        int64_t r15_2 = sx.q(rdi)
        zmm2.d = _mm_shuffle_ps(zmm3, zmm3, 0x55).d f- arg3[1]
        zmm1.d = zmm3.d f- *arg3
        uint64_t var_10c_1 = zmm3.q
        rdi = (r15_2 + 1).d
        int32_t var_104_1 = rcx_13.d
        zmm2.d = zmm2.d f* zmm2.d
        zmm1.d = zmm1.d f* zmm1.d
        zmm0.d = _mm_shuffle_ps(zmm3, zmm3, 0xaa).d f- arg3[2]
        zmm2.d = zmm2.d f+ zmm1.d
        zmm0.d = zmm0.d f* zmm0.d
        zmm2.d = zmm2.d f+ zmm0.d
        int32_t var_110_1 = _mm_sqrt_ss(0, zmm2.d).d
        
        if (rdi s> r12)
            sub_1405a4f90(&var_1e8)
            r12 = var_1dc
        
        r15 = arg4
        *(var_1e8 + r15_2 * 0x10) = var_110_1.o
    
    zmm1 = 0x80000000
    i += 1
while (i s< 3)

void* rsi = var_1e8
float zmm8[0x4]
float var_68[0x4] = zmm8
uint128_t zmm9
uint128_t var_78 = zmm9
int128_t var_88 = zmm10_1
float var_98[0x4] = zmm11_1
int128_t var_b8 = zmm13_1
int128_t zmm14
int128_t var_c8 = zmm14
float zmm15[0x4]
float var_d8[0x4] = zmm15
arg_8.b = 0
sub_1416e6770(rsi, rdi, arg2.b)
void* r8_4 = rsi
void* r9_4 = (sx.q(rdi) << 4) + rsi
int32_t rax_55
int64_t* result

if (rsi == r9_4)
label_14173898a:
    result = arg2
    int32_t var_148_2 = 0
    rax_55 = 0
    *result = (_mm_unpacklo_ps(zmm6, zmm6.q)).q
    *(result + 0xc) = 0
else
    zmm11_1 = *(arg1 + 0x14)
    void* r10_1 = rsi + 0xc
    zmm15 = *(arg1 + 0x18)
    zmm14.q = fconvert.d(zmm7[0])
    zmm14.q = zmm14.q f+ 0.0001
    
    while (true)
        zmm8 = *(r10_1 - 8)
        bool cond:11_1 = zmm8[0] f> *(arg1 + 0x1c)
        zmm9 = *(r10_1 - 4)
        uint128_t zmm5_1 = *r10_1
        zmm11_1[0] = zmm11_1[0] f- zmm9.d
        uint128_t zmm4_1 = *(arg1 + 0x10)
        zmm8[0] = zmm8[0] f- *(arg1 + 0x1c)
        uint128_t zmm2_2
        zmm2_2.d = zmm9.d f- *(arg1 + 0x20)
        zmm4_1.d = zmm4_1.d f- zmm8[0]
        zmm3.d = zmm5_1.d f- *(arg1 + 0x24)
        var_1c8:4.d = zmm11_1[0]
        zmm15[0] = zmm15[0] f- zmm5_1.d
        var_1d8 = zmm8[0]
        var_1d4.d = zmm2_2.d
        var_1c8.d = zmm4_1.d
        var_1d4:4.d = zmm3.d
        float var_1c0_2 = zmm15[0]
        float zmm0_2[0x4]
        
        if (cond:11_1 || zmm9.d f> *(arg1 + 0x20) || zmm5_1.d f> *(arg1 + 0x24)
                || zmm8[0] f< *(arg1 + 0x10) || zmm9.d f< zmm11_1[0] || zmm5_1.d f< zmm15[0])
            if (not(zmm8[0] f<= zmm6.d))
                zmm4_1 = zmm8
                zmm5_1 = 0x80000000
            else if (zmm4_1.d f<= zmm6.d)
                zmm4_1 = zmm6
                zmm5_1 = 0x80000000
            else
                zmm5_1 = 0x80000000
                zmm4_1 ^= 0x80000000
            
            if (not(zmm2_2.d f> zmm6.d))
                if (zmm11_1[0] f<= zmm6.d)
                    zmm2_2 = zmm6
                else
                    zmm2_2.d = zmm9.d f- zmm11_1[0]
            
            if (not(zmm3.d f> zmm6.d))
                if (zmm15[0] f<= zmm6.d)
                    zmm3 = zmm6
                else
                    zmm3 = zmm15 ^ zmm5_1
            
            zmm0_2 = zmm2_2
            zmm5_1.d = zmm4_1.d f* zmm4_1.d
            float zmm1_2[0x4] = zmm3
            zmm0_2[0] = zmm0_2[0] f* zmm2_2.d
            zmm1_2[0] = zmm1_2[0] f* zmm3.d
            zmm5_1.d = zmm5_1.d f+ zmm0_2[0]
            zmm5_1.d = zmm5_1.d f+ zmm1_2[0]
            
            if (not(zmm5_1.d f>= 9.99999975e-05f))
                int32_t rcx_29 = rbx & 0xffbfffff
                zmm4_1 = zmm12_1
                zmm2_2 = zmm6
                zmm3 = zmm6
                zmm7 = zmm6
                
                if ((rbx & 0x400000) == 0)
                    rcx_29 = rbx
                
                int32_t rdx_19 = rcx_29 & 0xffdfffff
                
                if ((rcx_29 & 0x200000) == 0)
                    rdx_19 = rcx_29
                
                int32_t rbx_13 = rdx_19 & 0xffefffff
                
                if ((rdx_19 & 0x100000) == 0)
                    rbx_13 = rdx_19
                
                rbx = rbx_13 & 0xfff7ffff
                goto label_141738920
            
            zmm0_2 = zmm12_1
            zmm7 = _mm_sqrt_ss(0, zmm5_1.d)
            bool cond:8_1 = zmm7[0] >= 9.99999975e-05f
            zmm0_2[0] = zmm0_2[0] / zmm7[0]
            zmm4_1.d = zmm4_1.d f* zmm0_2[0]
            zmm2_2.d = zmm2_2.d f* zmm0_2[0]
            zmm3.d = zmm3.d f* zmm0_2[0]
            
            if (not(cond:8_1))
            label_141738920:
                zmm4_1.d f- zmm6.d
                
                if (not(zmm4_1.d f<= zmm6.d))
                    zmm4_1 = zmm12_1
                else if (not(zmm4_1.d f>= zmm6.d))
                    zmm4_1 = 0xbf800000
                
                zmm2_2.d f- zmm6.d
                
                if (not(zmm2_2.d f<= zmm6.d))
                    zmm2_2 = zmm12_1
                else if (not(zmm2_2.d f>= zmm6.d))
                    zmm2_2 = 0xbf800000
                
                zmm3.d f- zmm6.d
                
                if (not(zmm3.d f<= zmm6.d))
                    zmm3 = zmm12_1
                else if (not(zmm3.d f>= zmm6.d))
                    zmm3 = 0xbf800000
                
                zmm2_2.d = zmm2_2.d f* zmm2_2.d
                zmm4_1.d = zmm4_1.d f* zmm4_1.d
                zmm3.d = zmm3.d f* zmm3.d
                zmm2_2.d = zmm2_2.d f+ zmm4_1.d
                zmm2_2.d = zmm2_2.d f+ zmm3.d
        else
            float temp0_11[0x4] = _mm_max_ss(zmm11_1[0], zmm2_2.d)
            zmm7 = _mm_max_ss(zmm8[0], zmm4_1.d)
            float temp0_13[0x4] = _mm_max_ss(zmm15[0], zmm3.d)
            int64_t rax_26
            
            if (zmm7[0] <= temp0_11[0])
                if (temp0_11[0] <= temp0_13[0])
                    zmm7 = temp0_13
                    rax_26 = 2
                else
                    rax_26 = 1
                    zmm7 = temp0_11
            else if (zmm7[0] <= temp0_13[0])
                zmm7 = temp0_13
                rax_26 = 2
            else
                rax_26 = 0
            
            int32_t rcx_21
            int32_t rdx_12
            bool cond:15_1
            
            if ((*(&var_1c8 + (rax_26 << 2)))[0] >= (&var_1d8)[rax_26])
                int32_t rcx_22
                
                if (rax_26.d != 0)
                    rcx_22 = 0x50400
                    
                    if (rax_26.d != 1)
                        rcx_22 = 0x60400
                else
                    rcx_22 = 0x8400
                
                int32_t rbx_10 = rbx | rcx_22 | 0x200
                int32_t rcx_24 = rbx_10 & 0xfffbffff
                
                if ((rbx_10 & 0x40000) == 0)
                    rcx_24 = rbx_10
                
                int32_t rdx_14 = rcx_24 & 0xfffdffff
                
                if ((rcx_24 & 0x20000) == 0)
                    rdx_14 = rcx_24
                
                rcx_21 = rdx_14 & 0xfffeffff
                
                if ((rdx_14 & 0x10000) == 0)
                    rcx_21 = rdx_14
                
                rdx_12 = rcx_21 & 0xffff7fff
                cond:15_1 = (rcx_21 & 0x8000) == 0
            else
                int32_t rcx_17
                
                if (rax_26.d != 0)
                    rcx_17 = 0x5000
                    
                    if (rax_26.d != 1)
                        rcx_17 = 0x6000
                else
                    rcx_17 = 0x800
                
                int32_t rbx_8 = rbx | rcx_17 | 0x100
                int32_t rcx_19 = rbx_8 & 0xffffbfff
                
                if ((rbx_8 & 0x4000) == 0)
                    rcx_19 = rbx_8
                
                int32_t rdx_10 = rcx_19 & 0xffffdfff
                
                if ((rcx_19 & 0x2000) == 0)
                    rdx_10 = rcx_19
                
                rcx_21 = rdx_10 & 0xffffefff
                
                if ((rdx_10 & 0x1000) == 0)
                    rcx_21 = rdx_10
                
                rdx_12 = rcx_21 & 0xfffff7ff
                cond:15_1 = (rcx_21 & 0x800) == 0
            
            if (cond:15_1)
                rdx_12 = rcx_21
            
            int32_t rcx_27 = rdx_12 & 0xfffffbff
            
            if ((rdx_12 & 0x400) == 0)
                rcx_27 = rdx_12
            
            int32_t rdx_17 = rcx_27 & 0xfffffdff
            
            if ((rcx_27 & 0x200) == 0)
                rdx_17 = rcx_27
            
            rbx = rdx_17 & 0xfffffeff
            
            if ((rdx_17 & 0x100) == 0)
                rbx = rdx_17
        
        zmm0_2 = zx.o(0)
        zmm0_2[0].q = fconvert.d(zmm7[0])
        
        if (zmm0_2[0].q f< zmm14.q)
            result = arg2
            *result = *(r8_4 + 4)
            rax_55 = *(r8_4 + 0xc)
            *(result + 0xc) = 1
            break
        
        r8_4 += 0x10
        r10_1 += 0x10
        
        if (r8_4 == r9_4)
            goto label_14173898a

result[1].d = rax_55

if (rsi != 0)
    sub_140a74f90(rsi)

return result
