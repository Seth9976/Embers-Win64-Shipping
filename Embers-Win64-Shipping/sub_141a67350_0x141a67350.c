// 函数: sub_141a67350
// 地址: 0x141a67350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_178
int64_t rax_1 = __security_cookie ^ &var_178
TEB* gsbase

if (data_143f2a838 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f2a838)
    
    if (data_143f2a838 == 0xffffffff)
        sub_140b58170(&data_143f2a830, "RichCurve", 1)
        _Init_thread_footer(&data_143f2a838)

int32_t rcx
rcx.b = *(arg2 + 0xc) == 0
int64_t result

if ((rcx.b & sub_140b5b8a0(*(arg2 + 8), 0xa).b) == 0 || *(arg2 + 0x1c) != data_143f2a830)
    result.b = 0
else
    int64_t var_100
    __builtin_memset(&var_100, 0, 0x2c)
    int32_t var_d4_1 = 0x80
    int32_t var_d0_1 = 0xffffffff
    int32_t var_cc_1 = 0
    int64_t var_c0_1 = 0
    int32_t var_b8_1 = 0
    int64_t var_b0_1 = 0
    int64_t var_a8_1 = 0
    int32_t var_a0_1 = 0x7f7fffff
    int16_t var_9c_1 = 0x404
    void** const var_108 = &data_142da7f70
    int64_t var_98_1 = 0
    int32_t var_90_1 = 0
    sub_140ca6840(sub_142585510(), arg3, &var_108, 0)
    
    if (not(var_a0_1 f== 3.40282347e+38f))
        *(arg1 + 0x30) = var_a0_1
        *(arg1 + 0x34) = 1
    
    int32_t rdx_1 = var_90_1
    *(arg1 + 8) = var_9c_1.b
    *(arg1 + 9) = var_9c_1:1.b
    
    if (rdx_1 s> *(arg1 + 0x1c))
        sub_1405dadb0(arg1 + 0x10, rdx_1)
        rdx_1 = var_90_1
    
    if (rdx_1 s> *(arg1 + 0x2c))
        sub_1413f6f70(arg1 + 0x20, rdx_1)
    
    int64_t var_158
    int128_t zmm6_1
    uint128_t zmm7_1
    zmm6_1, zmm7_1 = sub_141a514d0(&var_158)
    int64_t rdi_1 = var_158
    int32_t var_154
    uint128_t zmm1_1
    zmm1_1.q = _mm_cvtepi32_pd(zx.q(var_154)).q f/ _mm_cvtepi32_pd(zx.q(rdi_1.d))
    uint128_t zmm8_1 = _mm_cvtpd_ps(zmm1_1)
    int64_t* var_120
    sub_141f89790(&var_108, &var_120)
    void*** r13_1 = -fffffffffffffffe
    var_158 = -2
    int64_t r12_1 = -4
    int32_t var_118
    int32_t rax_7 = var_118
    int128_t var_48_1 = zmm6_1
    uint128_t var_58_1 = zmm7_1
    
    while (true)
        int64_t* rdx_3 = var_120
        void** const* rcx_5
        
        if (rax_7 s< 0 || rax_7 s>= rdx_3[1].d)
            rcx_5.b = 0
        else
            rcx_5.b = 1
        
        if (rcx_5.b == 0)
            break
        
        int64_t rsi_1 = *rdx_3
        char* rbx_1 = sx.q(rax_7) * 0x1c
        zmm6_1 = _mm_cvtps_pd((*(rbx_1 + rsi_1 + 4)).q)
        int64_t var_148 = rdi_1
        uint128_t zmm0_3 = sub_140b21100(&var_148)
        uint128_t zmm2_1 = sub_140b21100(&var_148) ^ -0x8000000000000000
        
        if (not(zmm6_1.q f< zmm2_1.q))
            zmm2_1 = _mm_min_sd(zmm0_3.q, zmm6_1.q)
        
        uint128_t zmm1_2
        zmm1_2.d = zmm8_1.d f* *(rbx_1 + rsi_1 + 0x14)
        char rax_9 = rbx_1[rsi_1]
        int32_t var_140 = (*(rbx_1 + rsi_1 + 8)).d
        uint128_t zmm0_4
        zmm0_4.d = zmm8_1.d f* *(rbx_1 + rsi_1 + 0xc)
        int32_t var_138_1 = zmm1_2.d
        int32_t var_13c_1 = zmm0_4.d
        zmm0_4 = zx.o(var_148:4.d)
        char var_127_1 = rbx_1[rsi_1 + 1]
        int64_t var_134_1 = 0
        char var_12c_1 = 0
        char var_126_1 = 0
        zmm1_2.q = _mm_cvtepi32_pd(zx.q(var_148.d)).q f* zmm2_1.q
        zmm1_2.q = zmm1_2.q f/ _mm_cvtepi32_pd(zmm0_4.q).q
        int64_t rcx_8 = int.q(zmm1_2.q)
        
        if (rcx_8 != -0x8000000000000000)
            zmm0_4.q = float.d(rcx_8)
            
            if (not(zmm0_4.q f== zmm1_2.q))
                zmm1_2.q =
                    float.d(rcx_8 - (zx.q(_mm_movemask_pd(_mm_unpacklo_pd(zmm1_2, zmm1_2.q))) & 1))
        
        int32_t rbx_2 = int.d(zmm1_2.q)
        int32_t var_150 = rbx_2
        
        if (r13_1 + 2 s<= 0)
            int64_t rsi_4 = sx.q(*(arg1 + 0x18))
            int32_t rax_17 = (rsi_4 + 1).d
            *(arg1 + 0x18) = rax_17
            
            if (rax_17 s> *(arg1 + 0x1c))
                sub_1405a4cf0(arg1 + 0x10)
            
            *(*(arg1 + 0x10) + (rsi_4 << 2)) = rbx_2
        label_141a6770f:
            int64_t rbx_3 = sx.q(*(arg1 + 0x28))
            int32_t rax_19 = (rbx_3 + 1).d
            *(arg1 + 0x28) = rax_19
            
            if (rax_19 s> *(arg1 + 0x2c))
                sub_1405c50f0(arg1 + 0x20)
            
            rcx_5 = *(arg1 + 0x20)
            uint128_t* rdx_12 = rbx_3 * 0x1c
            *(rdx_12 + rcx_5) = var_140.o
            *(rdx_12 + rcx_5 + 0x10) = var_134_1
            *(rdx_12 + rcx_5 + 0x18) = rax_9.d
        else
            int32_t* rdx_4 = *(arg1 + 0x10)
            
            if (rbx_2 s>= *(rdx_4 + r12_1))
                int64_t rsi_2 = sx.q(*(arg1 + 0x18))
                int32_t rax_14 = (rsi_2 + 1).d
                *(arg1 + 0x18) = rax_14
                
                if (rax_14 s> *(arg1 + 0x1c))
                    sub_1405a4cf0(arg1 + 0x10)
                    rdx_4 = *(arg1 + 0x10)
                
                rdx_4[rsi_2] = rbx_2
                goto label_141a6770f
            
            int32_t rsi_3 = var_158.d
            rcx_5 = r13_1
            
            if (r13_1 s>= 0)
                int32_t* rax_16 = &rdx_4[-1] + r12_1
                void** const* temp0_10
                
                do
                    if (rbx_2 s>= *rax_16)
                        sub_141a54e70(arg1 + 0x10, &var_150, rsi_3 + 1)
                        sub_141a54ef0(arg1 + 0x20, &var_140, rsi_3 + 1)
                        break
                    
                    rsi_3 -= 1
                    rax_16 -= 4
                    temp0_10 = rcx_5
                    rcx_5 -= 1
                while (temp0_10 - 1 s>= 0)
            
            if (rsi_3 s< 0)
                sub_141a54e70(arg1 + 0x10, &var_150, 0)
                sub_141a54ef0(arg1 + 0x20, &var_140, 0)
        
        r12_1 += 4
        var_158.d += 1
        r13_1 += 1
        rax_7 = var_118 + 1
        var_118 = rax_7
    
    if (var_98_1 != 0)
        sub_140a74f90(var_98_1)
    
    var_108 = &data_142d6a040
    
    if (var_b0_1 != 0)
        sub_140a74f90(var_b0_1)
    
    sub_1405ae180(&var_100)
    result.b = 1

__security_check_cookie(rax_1 ^ &var_178)
return result
