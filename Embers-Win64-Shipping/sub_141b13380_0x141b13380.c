// 函数: sub_141b13380
// 地址: 0x141b13380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
int32_t r14 = 0
arg2[9] = 0
int32_t r13 = *(arg1 + 0x644)
int32_t var_d8 = 0
uint128_t zmm0

if ((r13.b & 1) != 0)
    char rax_2
    rax_2, arg4 = sub_141a467f0(arg1, arg3, &var_d8)
    
    if (rax_2 != 0)
        zmm0 = var_d8
        arg2[9] |= 1
        *arg2 = zmm0.d

var_d8 = 0

if (((r13 u>> 1).b & 1) != 0)
    char rax_5
    rax_5, arg4 = sub_141a467f0(arg1 + 0xa0, arg3, &var_d8)
    
    if (rax_5 != 0)
        arg2[1] = var_d8.d
        arg2[9] |= 2

var_d8 = 0

if (((r13 u>> 2).b & 1) != 0)
    char rax_8
    rax_8, arg4 = sub_141a467f0(arg1 + 0x140, arg3, &var_d8)
    
    if (rax_8 != 0)
        arg2[2] = var_d8.d
        arg2[9] |= 4

uint8_t r10_1 = (r13 u>> 3).b & 1
uint32_t var_d0

if (*(arg1 + 0x648) != 0)
    int32_t r12_1 = 0x7fffffff
    int32_t r15_1 = -0x80000000
    int32_t r11_1 = -1
    
    if (r10_1 != 0)
        int32_t i_3 = *(arg1 + 0x1f8)
        int32_t r8_6 = 0
        int64_t rcx_5 = *(arg1 + 0x1f0)
        
        if (i_3 s> 0)
            int32_t i = i_3
            int64_t rax_20
            
            do
                int32_t rcx_7 = i & 0x80000001
                
                if (rcx_7 s< 0)
                    rcx_7 = ((rcx_7 - 1) | 0xfffffffe) + 1
                
                int32_t temp0_1
                int32_t temp1_1
                temp0_1:temp1_1 = sx.q(i)
                int32_t i_4 = (temp1_1 - temp0_1) s>> 1
                i = i_4
                int32_t rax_19 = i_4 + r8_6
                rax_20 = *(arg1 + 0x1f0)
                
                if (arg3.d s>= *(rax_20 + (sx.q(rax_19) << 2)))
                    r8_6 = rax_19 + rcx_7
            while (i s> 0)
            
            rcx_5 = rax_20
        
        int32_t rdx_8 = -1
        int32_t r9_1 = -1
        
        if (r8_6 - 1 s>= 0)
            rdx_8 = r8_6 - 1
        
        if (r8_6 s< *(arg1 + 0x1f8))
            r9_1 = r8_6
        
        if (rdx_8 != 0xffffffff && r9_1 != 0xffffffff)
            int32_t rdx_9 = *(rcx_5 + (sx.q(rdx_8) << 2))
            
            if (rdx_9 != arg3.d && rdx_9 s> 0x80000000)
                r15_1 = rdx_9
            
            int32_t r8_7 = *(rcx_5 + (sx.q(r9_1) << 2))
            
            if (r8_7 != arg3.d && rdx_9 s< 0x7fffffff)
                r12_1 = r8_7
    
    uint8_t rax_25 = (r13 u>> 4).b & 1
    
    if (rax_25 != 0)
        int32_t i_5 = *(arg1 + 0x298)
        int32_t r8_8 = 0
        int64_t rcx_11 = *(arg1 + 0x290)
        
        if (i_5 s> 0)
            int32_t i_1 = i_5
            int64_t rax_30
            
            do
                int32_t rcx_13 = i_1 & 0x80000001
                
                if (rcx_13 s< 0)
                    rcx_13 = ((rcx_13 - 1) | 0xfffffffe) + 1
                
                int32_t temp2_1
                int32_t temp3_1
                temp2_1:temp3_1 = sx.q(i_1)
                int32_t i_6 = (temp3_1 - temp2_1) s>> 1
                i_1 = i_6
                int32_t rax_29 = i_6 + r8_8
                rax_30 = *(arg1 + 0x290)
                
                if (arg3.d s>= *(rax_30 + (sx.q(rax_29) << 2)))
                    r8_8 = rax_29 + rcx_13
            while (i_1 s> 0)
            
            rcx_11 = rax_30
        
        int32_t rdx_12 = -1
        int32_t r9_2 = -1
        
        if (r8_8 - 1 s>= 0)
            rdx_12 = r8_8 - 1
        
        if (r8_8 s< *(arg1 + 0x298))
            r9_2 = r8_8
        
        if (rdx_12 != 0xffffffff && r9_2 != 0xffffffff)
            int32_t rdx_13 = *(rcx_11 + (sx.q(rdx_12) << 2))
            
            if (rdx_13 != arg3.d && rdx_13 s> r15_1)
                r15_1 = rdx_13
            
            int32_t r8_9 = *(rcx_11 + (sx.q(r9_2) << 2))
            
            if (r8_9 != arg3.d && rdx_13 s< r12_1)
                r12_1 = r8_9
    
    uint32_t rax_35
    rax_35.b = (r13 u>> 5).b & 1
    var_d0 = rax_35
    
    if (rax_35.b != 0)
        int32_t i_7 = *(arg1 + 0x338)
        int64_t r9_3 = *(arg1 + 0x330)
        
        if (i_7 s> 0)
            int32_t i_2 = i_7
            
            do
                int32_t rcx_18 = i_2 & 0x80000001
                
                if (rcx_18 s< 0)
                    rcx_18 = ((rcx_18 - 1) | 0xfffffffe) + 1
                
                int32_t temp4_1
                int32_t temp5_1
                temp4_1:temp5_1 = sx.q(i_2)
                int32_t i_8 = (temp5_1 - temp4_1) s>> 1
                i_2 = i_8
                int32_t rax_39 = i_8 + r14
                
                if (arg3.d s>= *(r9_3 + (sx.q(rax_39) << 2)))
                    r14 = rax_39 + rcx_18
            while (i_2 s> 0)
        
        int32_t rcx_22 = -1
        
        if (r14 - 1 s>= 0)
            rcx_22 = r14 - 1
        
        if (r14 s< *(arg1 + 0x338))
            r11_1 = r14
        
        if (rcx_22 != 0xffffffff && r11_1 != 0xffffffff)
            int32_t rcx_23 = *(r9_3 + (sx.q(rcx_22) << 2))
            
            if (rcx_23 != arg3.d && rcx_23 s> r15_1)
                r15_1 = rcx_23
            
            int32_t rdx_16 = *(r9_3 + (sx.q(r11_1) << 2))
            
            if (rdx_16 != arg3.d && rcx_23 s< r12_1)
                r12_1 = rdx_16
    
    int32_t var_90
    int64_t var_b8
    int64_t var_a0
    float var_78[0x4]
    
    if (r15_1 == 0x80000000 || r12_1 == 0x7fffffff)
        var_b8 = 0
        int32_t var_b0_3 = 0
        
        if (r10_1 != 0 && sub_141a467f0(arg1 + 0x1e0, arg3, &var_d8) != 0)
            var_b8.d = var_d8
        
        if (rax_25 != 0 && sub_141a467f0(arg1 + 0x280, arg3, &var_d8) != 0)
            var_b8:4.d = var_d8
        
        if (var_d0.b != 0 && sub_141a467f0(arg1 + 0x320, arg3, &var_d8) != 0)
            int32_t var_b0_4 = var_d8
        
        sub_140ada080(&var_78, &var_b8)
        sub_140ad3dc0(sub_140acd070(&var_a0, &var_78), &var_90)
    else
        uint128_t var_38_1 = arg4
        zmm0 = _mm_cvtps_pd(arg3:4.d.q)
        var_a0 = 0
        int32_t var_98_1 = 0
        var_b8 = 0
        int32_t var_b0_1 = 0
        arg4.q = _mm_cvtepi32_pd(zx.q(arg3.d)).q f+ zmm0.q
        arg4.q = arg4.q f- _mm_cvtepi32_pd(zx.q(r15_1)).q
        arg4.q = arg4.q f/ _mm_cvtepi32_pd(zx.q(r12_1 - r15_1)).q
        int32_t var_c8
        
        if (r10_1 != 0)
            var_c8 = r15_1
            int32_t var_c4_1 = 0
            
            if (sub_141a467f0(arg1 + 0x1e0, var_c8.q, &var_d8) != 0)
                var_a0.d = var_d8
            
            var_c8 = r12_1
            int32_t var_c4_2 = 0
            
            if (sub_141a467f0(arg1 + 0x1e0, var_c8.q, &var_d8) != 0)
                var_b8.d = var_d8
        
        if (rax_25 != 0)
            var_c8 = r15_1
            int32_t var_c4_3 = 0
            
            if (sub_141a467f0(arg1 + 0x280, var_c8.q, &var_d8) != 0)
                var_a0:4.d = var_d8
            
            var_c8 = r12_1
            int32_t var_c4_4 = 0
            
            if (sub_141a467f0(arg1 + 0x280, var_c8.q, &var_d8) != 0)
                var_b8:4.d = var_d8
        
        if (var_d0.b != 0)
            var_c8 = r15_1
            int32_t var_c4_5 = 0
            
            if (sub_141a467f0(arg1 + 0x320, var_c8.q, &var_d8) != 0)
                int32_t var_98_2 = var_d8
            
            var_c8 = r12_1
            int32_t var_c4_6 = 0
            
            if (sub_141a467f0(arg1 + 0x320, var_c8.q, &var_d8) != 0)
                int32_t var_b0_2 = var_d8
        
        void var_58
        sub_140ada080(&var_58, &var_a0)
        void var_68
        float (* rax_51)[0x4] =
            sub_140ae0e60(&var_c8, &var_58, &var_68, _mm_cvtpd_ps(sub_140ada080(&var_68, &var_b8)))
        float zmm5_1[0x4] = data_143f2c520
        var_d0 = 0x322bcc77
        float zmm6_1[0x4] = *rax_51
        float zmm1_1[0x4] = _mm_mul_ps(zmm6_1, zmm6_1)
        zmm1_1 = _mm_add_ps(zmm1_1, _mm_shuffle_ps(zmm1_1, zmm1_1, 0x4e))
        float zmm4_1[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm1_1, zmm1_1, 0x39), zmm1_1)
        zmm1_1 = _mm_rsqrt_ps(zmm4_1)
        uint32_t zmm3_1[0x4] = _mm_mul_ps(zmm4_1, zmm5_1)
        float zmm2_1[0x4] = _mm_add_ps(
            _mm_mul_ps(_mm_sub_ps(zmm5_1, _mm_mul_ps(_mm_mul_ps(zmm1_1, zmm1_1), zmm3_1)), zmm1_1), 
            zmm1_1)
        zmm5_1 = _mm_sub_ps(zmm5_1, _mm_mul_ps(_mm_mul_ps(zmm2_1, zmm2_1), zmm3_1))
        float zmm0_10[0x4] = var_d0
        zmm0_10 = _mm_cmpeq_ps(_mm_shuffle_ps(zmm0_10, zmm0_10, 0), zmm4_1, 2)
        var_78 = _mm_and_ps(
            _mm_mul_ps(_mm_add_ps(_mm_mul_ps(zmm5_1, zmm2_1), zmm2_1), zmm6_1) ^ data_143f2c510, 
            zmm0_10) ^ data_143f2c510
        int64_t* rax_52
        int512_t zmm6_2
        rax_52, zmm6_2 = sub_140acd070(&var_c8, &var_78)
        sub_140ad3dc0(rax_52, &var_90)
        zmm6_2.o = var_38_1
    arg2[3] = var_90
    arg2[9] |= 8
    int32_t var_8c
    arg2[4] = var_8c
    arg2[9] |= 0x10
    int32_t var_88
    arg2[5] = var_88
    arg2[9] |= 0x20
else
    var_d8 = 0
    
    if (r10_1 != 0 && sub_141a467f0(arg1 + 0x1e0, arg3, &var_d8) != 0)
        arg2[3] = var_d8
        arg2[9] |= 8
    
    var_d8 = 0
    
    if (((r13 u>> 4).b & 1) != 0 && sub_141a467f0(arg1 + 0x280, arg3, &var_d8) != 0)
        arg2[4] = var_d8
        arg2[9] |= 0x10
    
    var_d8 = 0
    
    if (((r13 u>> 5).b & 1) != 0 && sub_141a467f0(arg1 + 0x320, arg3, &var_d8) != 0)
        arg2[5] = var_d8
        arg2[9] |= 0x20

var_d0 = 0

if (((r13 u>> 6).b & 1) != 0 && sub_141a467f0(arg1 + 0x3c0, arg3, &var_d0) != 0)
    arg2[6] = var_d0
    arg2[9] |= 0x40

var_d0 = 0

if (((r13 u>> 7).b & 1) != 0 && sub_141a467f0(arg1 + 0x460, arg3, &var_d0) != 0)
    arg2[7] = var_d0
    arg2[9] |= 0x80

var_d0 = 0
int32_t* result

if (((r13 u>> 8).b & 1) == 0)
    result = arg2
else
    result = arg2
    
    if (sub_141a467f0(arg1 + 0x500, arg3, &var_d0) != 0)
        arg2[8] = var_d0
        arg2[9] |= 0x100

__security_check_cookie(rax_1 ^ &var_f8)
return result
