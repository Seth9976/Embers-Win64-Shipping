// 函数: sub_141a66970
// 地址: 0x141a66970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_158
int64_t rax_1 = __security_cookie ^ &var_158
TEB* gsbase

if (data_143f2a818 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f2a818)
    
    if (data_143f2a818 == 0xffffffff)
        sub_140b58170(&data_143f2a810, "IntegralCurve", 1)
        _Init_thread_footer(&data_143f2a818)

int32_t rcx
rcx.b = *(arg2 + 0xc) == 0
int64_t result

if ((rcx.b & sub_140b5b8a0(*(arg2 + 8), 0xa).b) == 0 || *(arg2 + 0x1c) != data_143f2a810)
    result.b = 0
else
    void** const var_f8 = &data_14302e030
    int64_t var_f0
    __builtin_memset(&var_f0, 0, 0x2c)
    int32_t var_c4_1 = 0x80
    int32_t var_c0_1 = 0xffffffff
    int32_t var_bc_1 = 0
    int64_t var_b0_1 = 0
    int32_t var_a8_1 = 0
    int64_t var_a0
    __builtin_memset(&var_a0, 0, 0x1c)
    int32_t var_80_1 = 0x7fffffff
    char var_7c_1 = 0
    sub_140ca6840(sub_1424cf2e0(), arg3, &var_f8, 0)
    
    if (var_80_1 != 0x7fffffff)
        *(arg1 + 0x19) = 1
        int32_t rax_5
        rax_5.b = var_80_1 != 0
        *(arg1 + 0x18) = rax_5.b
    
    int32_t var_88
    int32_t rdx_1 = var_88
    
    if (rdx_1 s> *(arg1 + 0x14))
        sub_1405dadb0(arg1 + 8, rdx_1)
        rdx_1 = var_88
    
    if (rdx_1 s> *(arg1 + 0x2c))
        sub_1405c5510(arg1 + 0x20, rdx_1)
    
    int64_t var_130
    int128_t zmm6_1
    uint128_t zmm7_1
    zmm6_1, zmm7_1 = sub_141a514d0(&var_130)
    int64_t* var_110
    sub_141f89770(&var_f8, &var_110)
    int64_t rdi_1 = var_130
    int64_t r12_1 = -2
    int128_t var_48_1 = zmm6_1
    int32_t var_120_1 = -2
    void* rsi_1 = -fffffffffffffffc
    int64_t var_100_1 = -2
    uint128_t var_58_1 = zmm7_1
    
    while (true)
        int32_t var_108
        int64_t rax_6 = sx.q(var_108)
        
        if (rax_6.d s< 0)
            break
        
        int64_t* rdx_3 = var_110
        
        if (rax_6.d s>= rdx_3[1].d)
            break
        
        zmm6_1 = _mm_cvtps_pd((*(*rdx_3 + (rax_6 << 3))).q)
        var_130 = rdi_1
        uint128_t zmm0_1 = sub_140b21100(&var_130)
        uint128_t zmm0_2 = sub_140b21100(&var_130) ^ -0x8000000000000000
        
        if (not(zmm6_1.q f< zmm0_2.q))
            zmm0_2 = _mm_min_sd(zmm0_1.q, zmm6_1.q)
        
        int64_t* rax_8 = var_110
        uint128_t zmm1_1
        zmm1_1.q = _mm_cvtepi32_pd(zx.q(var_130.d)).q f* zmm0_2.q
        int32_t r13_1
        r13_1.b = *(*rax_8 + (sx.q(var_108) << 3) + 4) != 0
        char var_138_1 = r13_1.b
        zmm1_1.q = zmm1_1.q f/ _mm_cvtepi32_pd(zx.q(var_130:4.d)).q
        int64_t rcx_10 = int.q(zmm1_1.q)
        
        if (rcx_10 != -0x8000000000000000)
            zmm0_2.q = float.d(rcx_10)
            
            if (not(zmm0_2.q f== zmm1_1.q))
                zmm1_1.q =
                    float.d(rcx_10 - (zx.q(_mm_movemask_pd(_mm_unpacklo_pd(zmm1_1, zmm1_1.q))) & 1))
        
        int32_t rbx_1 = int.d(zmm1_1.q)
        int32_t var_128 = rbx_1
        
        if (r12_1 + 2 s<= 0)
            int64_t rsi_5 = sx.q(*(arg1 + 0x10))
            int32_t rax_23 = (rsi_5 + 1).d
            *(arg1 + 0x10) = rax_23
            
            if (rax_23 s> *(arg1 + 0x14))
                sub_1405a4cf0(arg1 + 8)
            
            *(*(arg1 + 8) + (rsi_5 << 2)) = rbx_1
        label_141a66d40:
            int64_t rbx_2 = sx.q(*(arg1 + 0x28))
            int32_t rax_25 = (rbx_2 + 1).d
            *(arg1 + 0x28) = rax_25
            
            if (rax_25 s> *(arg1 + 0x2c))
                sub_140679a80(arg1 + 0x20)
            
            *(rbx_2 + *(arg1 + 0x20)) = r13_1.b
        else
            int32_t* rcx_12 = *(arg1 + 8)
            
            if (rbx_1 s>= *(rcx_12 + rsi_1))
                int64_t rsi_2 = sx.q(*(arg1 + 0x10))
                int32_t rax_12 = (rsi_2 + 1).d
                *(arg1 + 0x10) = rax_12
                
                if (rax_12 s> *(arg1 + 0x14))
                    sub_1405a4cf0(arg1 + 8)
                    rcx_12 = *(arg1 + 8)
                
                rcx_12[rsi_2] = rbx_1
                goto label_141a66d40
            
            r13_1 = var_120_1
            int64_t rsi_3 = r12_1
            
            if (r12_1 s>= 0)
                void* rax_15 = rsi_1 - 4 + rcx_12
                int64_t temp0_7
                
                do
                    if (rbx_1 s>= *rax_15)
                        sub_141a54e70(arg1 + 8, &var_128, r13_1 + 1)
                        int32_t r12_2 = *(arg1 + 0x28)
                        *(arg1 + 0x28) = r12_2 + 1
                        
                        if (r12_2 + 1 s> *(arg1 + 0x2c))
                            sub_140679a80(arg1 + 0x20)
                        
                        int64_t rdx_9 = sx.q(r13_1 + 1) + *(arg1 + 0x20)
                        memmove(rdx_9 + 1, rdx_9, r12_2 - (r13_1 + 1))
                        r12_1 = var_100_1
                        *(*(arg1 + 0x20) + rsi_3 + 1) = var_138_1
                        break
                    
                    r13_1 -= 1
                    rax_15 -= 4
                    temp0_7 = rsi_3
                    rsi_3 -= 1
                while (temp0_7 - 1 s>= 0)
            
            if (r13_1 s< 0)
                int64_t rsi_4 = sx.q(*(arg1 + 0x10))
                int32_t rax_19 = (rsi_4 + 1).d
                *(arg1 + 0x10) = rax_19
                
                if (rax_19 s> *(arg1 + 0x14))
                    sub_1405a4cf0(arg1 + 8)
                
                int64_t rdx_11 = *(arg1 + 8)
                memmove(rdx_11 + 4, rdx_11, (rsi_4 << 2).d)
                **(arg1 + 8) = rbx_1
                uint32_t count = *(arg1 + 0x28)
                *(arg1 + 0x28) = count + 1
                
                if (count + 1 s> *(arg1 + 0x2c))
                    sub_140679a80(arg1 + 0x20)
                
                int64_t rdx_13 = *(arg1 + 0x20)
                memmove(rdx_13 + 1, rdx_13, count)
                **(arg1 + 0x20) = var_138_1
        
        r12_1 += 1
        var_120_1 += 1
        rsi_1 += 4
        var_108 += 1
        var_100_1 = r12_1
    
    var_f8 = &data_14302e030
    int64_t var_90
    
    if (var_90 != 0)
        sub_140a74f90(var_90)
    
    int64_t rcx_26 = var_a0
    var_f8 = &data_142d6a040
    
    if (rcx_26 != 0)
        sub_140a74f90(rcx_26)
    
    sub_1405ae180(&var_f0)
    result.b = 1

__security_check_cookie(rax_1 ^ &var_158)
return result
