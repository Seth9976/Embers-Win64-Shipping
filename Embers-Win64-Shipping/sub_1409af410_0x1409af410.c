// 函数: sub_1409af410
// 地址: 0x1409af410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm8
int128_t var_68 = zmm8
int128_t zmm9
int128_t var_78 = zmm9
void var_468
int64_t rax_1 = __security_cookie ^ &var_468
int32_t i_3 = 0
float zmm1[0x4] = arg4[1]
int128_t* r14 = arg3
float var_398[0x4] = *arg4
int64_t var_378 = arg4[2][0].q
int128_t* var_418 = arg2
int128_t* var_3a8 = arg3
float var_388 = zmm1[0]
void* var_328 = nullptr
int32_t var_318 = 0
int32_t var_314 = 1
float zmm6[0x4] = arg2[1]
float zmm7[0x4] = arg2[2]
int96_t var_408 = zmm6[0].12
int96_t var_3f8 = zmm7[0].12
int64_t result
float zmm2[0x4]
float zmm3[0x4]

if (arg3 == 0)
label_1409af866:
    int64_t var_428_1 = (_mm_cvtps_pd(var_3f8:8.d[0].q)).q
    int64_t var_430_1 = (_mm_cvtps_pd(var_3f8:4.d[0].q)).q
    zmm2 = _mm_cvtps_pd(var_3f8.d[0].q)
    float zmm4[0x2] = _mm_cvtps_pd(var_408:8.d)
    int64_t var_438_1 = zmm2.q
    zmm3 = _mm_cvtps_pd(var_408.d[0].q)
    float var_440_1[0x2] = zmm4
    float var_448_1[0x2] = _mm_cvtps_pd(var_408:4.d)
    sub_140af98a0("Unknown", 0xc2, 
        Failed to find an octree node for an element with bounds (%f,%f,%f) +/- (%f,%f,%f)!", zmm3[0].q)
    result = sub_140afbb40()
else
    int32_t rdi_1 = var_418.d
    int32_t rbx_1 = var_418.d
    
    while (true)
        int32_t rcx = *(r14 + 0x188)
        *(r14 + 0x188) = (((rcx + 1) ^ rcx) & 0x7fffffff) ^ rcx
        int32_t rbx_2
        float zmm0[0x4]
        
        if ((rcx u>> 0x1f).b == 0)
            zmm3 = var_398
            zmm2 = var_378:4.d
            zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0)
            zmm0 = _mm_sub_ps(zmm3, zmm2)
            zmm2 = _mm_add_ps(zmm2, zmm3)
            zmm1 = _mm_sub_ps(zmm6, zmm0)
            zmm0 = var_378.d
            zmm2 = _mm_sub_ps(zmm2, zmm6)
            int32_t rdi_3
            
            if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_shuffle_ps(zmm0, zmm0, 0), 
                    _mm_add_ps(_mm_min_ps(zmm2, zmm1), zmm7), 1)) == 0)
                uint32_t temp0_14 = _mm_movemask_ps(_mm_cmpeq_ps(_mm_shuffle_ps(zmm3, zmm3, 0xaa), 
                    _mm_shuffle_ps(zmm6, zmm6, 0xaa), 1))
                zmm0 = _mm_shuffle_ps(zmm6, zmm6, 0x55)
                zmm1 = _mm_shuffle_ps(zmm3, zmm3, 0x55)
                zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0)
                int32_t rdi_4
                rdi_4.b = temp0_14 != 0
                int32_t rcx_2
                rcx_2.b = _mm_movemask_ps(_mm_cmpeq_ps(zmm1, zmm0, 1)) != 0
                int32_t rcx_3
                rcx_3.b = _mm_movemask_ps(_mm_cmpeq_ps(zmm3, _mm_shuffle_ps(zmm6, zmm6, 0), 1)) != 0
                rdi_3 = (((rdi_4 * 2) | rcx_2) * 2) | rcx_3
            else
                rdi_3 = 8
            
            rdi_1 = rdi_3 | (rdi_1 & 0xfffffff0)
            
            if (((rdi_1 u>> 3).b & 1) != 0)
                rbx_2 = r14[0x13].d
            else
                uint64_t r15_2 = zx.q(rdi_1) & 7
                uint64_t r12_1 = zx.q(rdi_1)
                
                if (*(r14 + (r15_2 << 3) + 0x148) == 0)
                    void* rax_12 = j_sub_140a82f30(0x190)
                    void* const rdx_1 = rax_12
                    
                    if (rax_12 == 0)
                        rdx_1 = nullptr
                    else
                        *(rax_12 + 0x120) = 0
                        rbx_1 &= 0xfffffff0
                        *(rax_12 + 0x130) = 0
                        *(rax_12 + 0x134) = 6
                        *(rax_12 + 0x140) = r14
                        *(rax_12 + 0x188) = 0x80000000
                        
                        do
                            *(rdx_1 + ((zx.q(rbx_1) & 7) << 3) + 0x148) = 0
                            
                            if ((rbx_1.b & 7) u>= 7)
                                rbx_1 |= 8
                            else
                                rbx_1 ^= ((rbx_1 + 1) ^ rbx_1) & 7
                        while (((rbx_1 u>> 3).b & 1) == 0)
                    
                    *(r14 + (r15_2 << 3) + 0x148) = rdx_1
                    *(arg1 + 0x1c8) = sx.q(*(arg1 + 0x1c8) + 0x190)
                
                int64_t r14_1 = sx.q(var_318)
                int32_t rax_23 = (r14_1 + 1).d
                var_318 = rax_23
                void var_368
                
                if (rax_23 s> var_314)
                    sub_1409da570(&var_368, r14_1.d)
                
                void* rdx_3 = &var_368
                
                if (var_328 != 0)
                    rdx_3 = var_328
                
                int64_t rax_26 = r14_1 << 6
                void* rdx_4 = rdx_3 + rax_26
                
                if (rdx_3 == neg.q(rax_26))
                    rdx_4 = nullptr
                else
                    *(rdx_4 + 0x10) = 0
                    *(rdx_4 + 0x18) = 0
                    *(rdx_4 + 0x1c) = 0x3f800000
                    *(rdx_4 + 0x24) = 0
                    *(rdx_4 + 0x2c) = 0x3f800000
                    *rdx_4 = 0
                
                *rdx_4 = *(var_3a8 + (r15_2 << 3) + 0x148)
                zmm0 = var_378:4.d
                zmm0[0] = zmm0[0] f* *(&data_142e669e0 + ((zx.q(r12_1.d) & 1) << 2))
                zmm0[0] = zmm0[0] + var_398[0]
                *(rdx_4 + 0x10) = zmm0[0]
                zmm0 = var_378:4.d
                zmm0[0] = zmm0[0] f* *(&data_142e669e0 + ((zx.q((r12_1 u>> 1).d) & 1) << 2))
                zmm0[0] = zmm0[0] + var_398[1]
                *(rdx_4 + 0x14) = zmm0[0]
                zmm0 = var_378:4.d
                zmm0[0] = zmm0[0] f* *(&data_142e669e0 + ((zx.q((r12_1 u>> 2).d) & 1) << 2))
                zmm0[0] = zmm0[0] + var_398[2]
                *(rdx_4 + 0x1c) = 0
                *(rdx_4 + 0x18) = zmm0[0]
                *(rdx_4 + 0x20) = var_378.d[0]
                *(rdx_4 + 0x24) = var_378.d[0]
                *(rdx_4 + 0x28) = var_378.d[0]
                *(rdx_4 + 0x2c) = 0
                zmm1 = var_378.d
                zmm1[0] = zmm1[0] * 0.5f
                zmm1[0] = zmm1[0] * 1.0625f
                *(rdx_4 + 0x30) = zmm1[0]
                zmm0 = var_378.d
                zmm0[0] = zmm0[0] - zmm1[0]
                *(rdx_4 + 0x34) = zmm0[0]
                int32_t rcx_8 = var_318
                
                if (rcx_8 == 0)
                    zmm1 = data_142d3f660
                    var_3a8.o = 0.o
                    float var_3b8[0x4]
                    var_378 = var_3b8[0].q
                    var_398 = zmm1
                    var_388 = zmm1[0]
                else
                    void* r9 = &var_368
                    
                    if (var_328 != 0)
                        r9 = var_328
                    
                    int64_t rax_35 = sx.q(rcx_8 - 1) << 6
                    var_3a8.o = *(rax_35 + r9)
                    var_398 = *(rax_35 + r9 + 0x10)
                    var_388 = (*(rax_35 + r9 + 0x20))[0]
                    var_378 = (*(rax_35 + r9 + 0x30))[0].q
                    
                    if (0 != 0)
                        memmove((sx.q(rcx_8 - 1) << 6) + r9, (sx.q(rcx_8) << 6) + r9, 0 << 6)
                        rcx_8 = var_318
                    
                    var_318 = rcx_8 - 1
                    sub_1409da950(&var_368)
                
                r14 = var_3a8
                
                if (r14 != 0)
                    continue
                
                if (var_328 != 0)
                    sub_140a74f90(var_328)
                
                goto label_1409af866
            
            goto label_1409af8e7
        
        rbx_2 = r14[0x13].d
        
        if (rbx_2 + 1 s<= 6 || var_388[0] f<= *(arg1 + 0x1c0))
        label_1409af8e7:
            r14[0x13].d = rbx_2 + 1
            
            if (rbx_2 + 1 s> *(r14 + 0x134))
                sub_1409da200(r14, rbx_2)
            
            int128_t* rax_41 = r14[0x12].q
            int128_t* rdx_9 = r14
            int128_t* r10_2 = var_418
            
            if (rax_41 != 0)
                rdx_9 = rax_41
            
            void* rax_45 = &rdx_9[sx.q(rbx_2) * 3]
            
            if (sx.q(rbx_2) * 0x30 != neg.q(rdx_9))
                *rax_45 = *r10_2
                *(rax_45 + 0x10) = r10_2[1]
                *(rax_45 + 0x20) = r10_2[2]
            
            int32_t rax_47 = *(arg1 + 0x1c8) + 0x30
            var_418 = r14
            *(arg1 + 0x1c8) = sx.q(rax_47)
            int32_t var_410_1 = r14[0x13].d - 1
            var_418.o = var_418.o
            result = sub_140998ea0(*r10_2 + 0x618, r10_2 + 8, &var_418)
        else
            void* var_1e8_1 = nullptr
            int32_t var_1d4_1 = 6
            uint64_t rdx_11 = 0
            int32_t var_1d8_1 = 0
            void* r8_3 = nullptr
            void var_308
            
            if (&var_308 != r14)
                int64_t i_4 = 2
                void var_1c8
                float (* rax_52)[0x4] = &var_1c8
                int64_t i_5 = 2
                void* rcx_21 = &var_308
                int64_t i
                
                do
                    rax_52 = &rax_52[8]
                    zmm0 = *rcx_21
                    zmm1 = *(rcx_21 + 0x10)
                    rcx_21 += 0x80
                    rax_52[-8] = zmm0
                    zmm0 = *(rcx_21 - 0x60)
                    rax_52[-7] = zmm1
                    zmm1 = *(rcx_21 - 0x50)
                    rax_52[-6] = zmm0
                    zmm0 = *(rcx_21 - 0x40)
                    rax_52[-5] = zmm1
                    zmm1 = *(rcx_21 - 0x30)
                    rax_52[-4] = zmm0
                    zmm0 = *(rcx_21 - 0x20)
                    rax_52[-3] = zmm1
                    zmm1 = *(rcx_21 - 0x10)
                    rax_52[-2] = zmm0
                    rax_52[-1] = zmm1
                    i = i_5
                    i_5 -= 1
                while (i != 1)
                int64_t i_6 = 2
                zmm1 = *(rcx_21 + 0x10)
                *rax_52 = *rcx_21
                zmm0 = *(rcx_21 + 0x20)
                rax_52[1] = zmm1
                zmm1 = *(rcx_21 + 0x30)
                int128_t* rcx_22 = r14
                rax_52[2] = zmm0
                rax_52[3] = zmm1
                float (* rax_53)[0x4] = &var_308
                int64_t i_1
                
                do
                    rax_53 = &rax_53[8]
                    zmm0 = *rcx_22
                    zmm1 = rcx_22[1]
                    rcx_22 = &rcx_22[8]
                    rax_53[-8] = zmm0
                    zmm0 = rcx_22[-6]
                    rax_53[-7] = zmm1
                    zmm1 = rcx_22[-5]
                    rax_53[-6] = zmm0
                    zmm0 = rcx_22[-4]
                    rax_53[-5] = zmm1
                    zmm1 = rcx_22[-3]
                    rax_53[-4] = zmm0
                    zmm0 = rcx_22[-2]
                    rax_53[-3] = zmm1
                    zmm1 = rcx_22[-1]
                    rax_53[-2] = zmm0
                    rax_53[-1] = zmm1
                    i_1 = i_6
                    i_6 -= 1
                while (i_1 != 1)
                zmm1 = rcx_22[1]
                *rax_53 = *rcx_22
                zmm0 = rcx_22[2]
                rax_53[1] = zmm1
                zmm1 = rcx_22[3]
                float (* rcx_23)[0x4] = &var_1c8
                rax_53[2] = zmm0
                rax_53[3] = zmm1
                int128_t* rax_54 = r14
                int64_t i_2
                
                do
                    rax_54 = &rax_54[8]
                    zmm0 = *rcx_23
                    zmm1 = rcx_23[1]
                    rcx_23 = &rcx_23[8]
                    rax_54[-8] = zmm0
                    zmm0 = rcx_23[-6]
                    rax_54[-7] = zmm1
                    zmm1 = rcx_23[-5]
                    rax_54[-6] = zmm0
                    zmm0 = rcx_23[-4]
                    rax_54[-5] = zmm1
                    zmm1 = rcx_23[-3]
                    rax_54[-4] = zmm0
                    zmm0 = rcx_23[-2]
                    rax_54[-3] = zmm1
                    zmm1 = rcx_23[-1]
                    rax_54[-2] = zmm0
                    rax_54[-1] = zmm1
                    i_2 = i_4
                    i_4 -= 1
                while (i_2 != 1)
                rdx_11 = zx.q(var_1d8_1)
                zmm1 = rcx_23[1]
                r8_3 = var_1e8_1
                *rax_54 = *rcx_23
                zmm0 = rcx_23[2]
                rax_54[1] = zmm1
                zmm1 = rcx_23[3]
                rax_54[2] = zmm0
                rax_54[3] = zmm1
            
            *(arg1 + 0x1c8) = sx.q(*(arg1 + 0x1c8) - ((rdx_11 * 3).d << 4))
            *(r14 + 0x188) = 0
            
            while (i_3 s>= 0)
                if (i_3 s>= rdx_11.d)
                    break
                
                void* rdx_12 = &var_308
                
                if (r8_3 != 0)
                    rdx_12 = r8_3
                
                sub_1409af410(arg1, rdx_12 + sx.q(i_3) * 0x30, r14, &var_398)
                rdx_11 = zx.q(var_1d8_1)
                i_3 += 1
                r8_3 = var_1e8_1
            
            result = sub_1409af410(arg1, var_418, r14, &var_398)
            
            if (var_1e8_1 != 0)
                result = sub_140a74f90(var_1e8_1)
        
        if (var_328 == 0)
            break
        
        result = sub_140a74f90(var_328)
        break
__security_check_cookie(rax_1 ^ &var_468)
return result
