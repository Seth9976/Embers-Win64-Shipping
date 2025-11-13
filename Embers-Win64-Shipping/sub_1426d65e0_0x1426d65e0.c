// 函数: sub_1426d65e0
// 地址: 0x1426d65e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r13 = *(arg2 + 0xc0)
void** r12 = arg3

if (r13 == 0 || r13[0x4a] == 0)
    return 1

*arg3 = 0
int32_t rdi = 1
arg3[1] = data_143b58058.q
arg3[2].d = data_143b58060
*(arg3 + 0x14) = 0
void* r15 = r13[0x4a]
void* rax_1 = *(r15 + 0x130)
int32_t var_f8
int32_t var_f4
uint32_t var_f0
uint64_t var_d8
int32_t var_d0
int32_t* rax_2
uint128_t zmm1

if (rax_1 == 0)
    var_d0 = data_143dbb200
    rax_2 = &var_d8
    var_d8 = data_143dbb1f8.q
else
    zmm1 = *(rax_1 + 0x1d0)
    rax_2 = &var_f8
    var_f8 = zmm1.d
    uint128_t zmm0 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
    var_f0 = _mm_shuffle_ps(zmm1, zmm1, 0xaa).d
    var_f4 = zmm0.d

int32_t rax_4 = rax_2[2]
void* r14 = *(arg2 + 0xb8)
uint64_t var_108 = *rax_2
void* const rbx_1

if (*(arg1 + 0x88) == 0)
    rbx_1 = nullptr
else
    void* rax_5 = sub_14272ef20()
    
    if (rax_5 == 0)
        rbx_1 = nullptr
    else
        rbx_1 = *(arg1 + 0x88)
        int64_t rax_6 = sx.q(*(rax_5 + 0x38))
        
        if (rax_6.d s> *(rbx_1 + 0x38) || *(*(rbx_1 + 0x30) + (rax_6 << 3)) != rax_5 + 0x30)
            rbx_1 = nullptr

float zmm6[0x4]
float var_48[0x4] = zmm6
uint128_t zmm7
uint128_t var_58 = zmm7
uint128_t zmm8
uint128_t var_68 = zmm8
uint128_t zmm9
uint128_t var_78 = zmm9
uint32_t zmm10[0x4]
uint32_t var_88[0x4] = zmm10
uint128_t zmm11
uint128_t var_98 = zmm11
uint128_t zmm2
uint128_t zmm3

if (rbx_1 != sub_14272e650())
    void* const rbx_3
    
    if (*(arg1 + 0x88) == 0)
        rbx_3 = nullptr
    else
        void* rax_21 = sub_14272ef20()
        
        if (rax_21 == 0)
            rbx_3 = nullptr
        else
            rbx_3 = *(arg1 + 0x88)
            int64_t rax_22 = sx.q(*(rax_21 + 0x38))
            
            if (rax_22.d s> *(rbx_3 + 0x38) || *(*(rbx_3 + 0x30) + (rax_22 << 3)) != rax_21 + 0x30)
                rbx_3 = nullptr
    
    uint128_t zmm12
    uint128_t var_a8_1 = zmm12
    uint64_t* rdx_7
    uint32_t rbx_4
    uint128_t zmm0_2
    
    if (rbx_3 != sub_14272e8c0())
        void* const rbx_5
        
        if (*(arg1 + 0x88) == 0)
            rbx_5 = nullptr
        else
            void* rax_29 = sub_14272ef20()
            
            if (rax_29 == 0)
                rbx_5 = nullptr
            else
                rbx_5 = *(arg1 + 0x88)
                int64_t rax_30 = sx.q(*(rax_29 + 0x38))
                
                if (rax_30.d s> *(rbx_5 + 0x38)
                        || *(*(rbx_5 + 0x30) + (rax_30 << 3)) != rax_29 + 0x30)
                    rbx_5 = nullptr
        
        if (rbx_5 == sub_14272e720())
            void* rcx_8 = *(r14 + 0xc0)
            char r15_1 = *(arg1 + 0x90)
            uint64_t rax_32
            uint64_t zmm0_3
            
            if (rcx_8 == 0)
            label_1426d6e52:
                zmm0_3 = data_143f720c0.d
                zmm2 = data_143f720c0:4.d
                zmm1 = data_143f720c8
                var_f8 = zmm0_3.d
                int32_t var_f4_1 = zmm2.d
                int32_t var_f0_4 = zmm1.d
            else
                rax_32 = sub_1426b21a0(rcx_8, r15_1)
                
                if (rax_32 == 0)
                    goto label_1426d6e52
                
                void* rbx_6 = *(rax_32 + 8)
                
                if (rbx_6 == 0)
                    goto label_1426d6e52
                
                if (*(rbx_6 + 0x10) != sub_14272e720())
                    goto label_1426d6e52
                
                void* r9_1 = *(rax_32 + 8)
                uint8_t rdx_10 = *(r9_1 + 0x2b) u>> 1 & 1
                
                if (rdx_10 != 0)
                    r9_1 = *(*(r14 + 0xe8) + (zx.q(r15_1) << 3))
                
                uint32_t rax_35
                
                if (*(r14 + 0xd0) != 0)
                    rax_35.b = zx.d(r15_1) s< *(r14 + 0xe0)
                
                int64_t r8_3
                
                if (*(r14 + 0xd0) == 0 || rax_35.b == 0)
                    r8_3 = 0
                else
                    r8_3 = zx.q(*(*(r14 + 0xd8) + (zx.q(r15_1) << 1))) + *(r14 + 0xc8)
                
                int64_t* r8_4 = r8_3 + (zx.q(rdx_10) << 2)
                int64_t* rax_38
                
                if (r8_4 == 0)
                    var_d0 = data_143f720c8
                    rax_38 = &var_d8
                    var_d8 = data_143f720c0
                else
                    rax_38 = sub_1426b3c70(&var_d8, r9_1, r8_4)
                
                var_f8.q = *rax_38
                zmm2 = var_f4
                zmm0_3 = var_f8
                zmm1 = rax_38[1].d
            
            if (zmm0_3.d f!= data_143b58048 || zmm2.d f!= data_143b5804c
                    || zmm1.d f!= data_143b58050)
                rax_32 = 1
            else
                rax_32.b = 0
            
            if (rax_32.b != 0)
                sub_140ae4210(&var_f8, &var_d8)
                void* rcx_13 = *(r15 + 0x130)
                uint64_t var_e8
                float* rax_41
                
                if (rcx_13 == 0)
                    int32_t var_e0_1 = data_14399f6a0
                    rax_41 = &var_e8
                    var_e8 = data_14399f698.q
                else
                    rax_41 = sub_141f133e0(rcx_13, &var_e8)
                
                zmm7 = zx.o(*rax_41)
                int32_t rax_43 = rax_41[2]
                zmm1 = 0x7fffffff
                zmm2 = 0x38d1b717
                bool cond:4_1 = _mm_and_ps(zmm7, 0x7fffffff).d f> 9.99999975e-05f
                var_e8 = zmm7.q
                zmm6 = var_e8:4.d
                
                if (cond:4_1)
                    rax_43.b = 0
                else if (_mm_and_ps(zmm6, 0x7fffffff).d f> 9.99999975e-05f)
                    rax_43.b = 0
                else if (_mm_and_ps(rax_43, 0x7fffffff).d f> 9.99999975e-05f)
                    rax_43.b = 0
                else
                    rax_43 = 1
                
                zmm10 = var_d0
                zmm8 = var_d8:4.d
                zmm11 = var_d8.d
                
                if (rax_43.b != 0)
                    zmm6 = 0x3f800000
                else
                    if (_mm_and_ps(zmm11, 0x7fffffff).d f> 9.99999975e-05f)
                        rax_43.b = 0
                    else if (_mm_and_ps(zmm8, 0x7fffffff).d f> 9.99999975e-05f)
                        rax_43.b = 0
                    else if (_mm_and_ps(zmm10, 0x7fffffff).d f> 9.99999975e-05f)
                        rax_43.b = 0
                    else
                        rax_43 = 1
                    
                    if (rax_43.b != 0)
                        zmm6 = 0x3f800000
                    else
                        zmm2 = 0x3f000000
                        float zmm13[0x4] = zmm6
                        zmm0_2.d = zmm7.d f* zmm7.d
                        zmm1.d = zmm6.d f* zmm13[0]
                        zmm12 = zmm11
                        zmm9 = zmm8
                        zmm1.d = zmm1.d f+ zmm0_2.d
                        uint128_t zmm3_1
                        uint128_t zmm4_3
                        uint128_t zmm5_3
                        
                        if (not(zmm1.d f<= 9.99999994e-09f))
                            zmm4_3 = _mm_rsqrt_ss(zmm1.d, zmm1.d)
                            zmm3_1.d = zmm1.d f* 0.5f
                            zmm0_2.d = zmm4_3.d f* zmm4_3.d
                            zmm1.d = zmm3_1.d f* zmm0_2.d
                            zmm2.d = 0.5f f- zmm1.d
                            zmm0_2.d = zmm4_3.d f* zmm2.d
                            zmm2 = 0x3f000000
                            zmm4_3.d = zmm4_3.d f+ zmm0_2.d
                            zmm6 = zmm4_3
                            zmm1.d = zmm4_3.d f* zmm4_3.d
                            zmm3_1.d = zmm3_1.d f* zmm1.d
                            zmm5_3.d = 0.5f f- zmm3_1.d
                            zmm6[0] = zmm6[0] f* zmm5_3.d
                            zmm6[0] = zmm6[0] f+ zmm4_3.d
                            zmm6[0] = zmm6[0] * zmm13[0]
                            zmm0_2.d = zmm6.d f* zmm7.d
                            zmm7 = zmm0_2
                        
                        zmm1.d = zmm11.d f* zmm11.d
                        zmm0_2.d = zmm8.d f* zmm8.d
                        zmm1.d = zmm1.d f+ zmm0_2.d
                        
                        if (not(zmm1.d f<= 9.99999994e-09f))
                            zmm5_3 = zmm2
                            zmm4_3 = _mm_rsqrt_ss(zmm1.d, zmm1.d)
                            zmm3_1.d = zmm1.d f* zmm5_3.d
                            zmm0_2.d = zmm4_3.d f* zmm4_3.d
                            zmm1.d = zmm3_1.d f* zmm0_2.d
                            zmm2.d = zmm5_3.d f- zmm1.d
                            zmm0_2.d = zmm4_3.d f* zmm2.d
                            zmm4_3.d = zmm4_3.d f+ zmm0_2.d
                            zmm1.d = zmm4_3.d f* zmm4_3.d
                            zmm3_1.d = zmm3_1.d f* zmm1.d
                            zmm5_3.d = zmm5_3.d f- zmm3_1.d
                            zmm9.d = zmm4_3.d f* zmm5_3.d
                            zmm9.d = zmm9.d f+ zmm4_3.d
                            zmm12 = zmm9
                            zmm9.d = zmm9.d f* zmm8.d
                            zmm12.d = zmm12.d f* zmm11.d
                        
                        zmm6[0] = zmm6[0] f* zmm9.d
                        zmm7.d = zmm7.d f* zmm12.d
                        zmm6[0] = zmm6[0] f+ zmm7.d
                
                if (zmm6[0] f< *(arg1 + 0x9c))
                    zmm0_2 = 0x461c4000
                    rdx_7 = &var_e8
                    zmm6 = var_108.d
                    zmm11.d = zmm11.d f* 10000f
                    zmm8.d = zmm8.d f* 10000f
                    zmm10[0] = zmm10[0] f* 10000f
                    zmm6[0] = zmm6[0] f+ zmm11.d
                    zmm8.d = zmm8.d f+ var_108:4.d
                    zmm10[0] = zmm10[0] f+ rax_4
                    zmm6 = _mm_unpacklo_ps(zmm6, zmm8.q)
                    var_e8 = zmm6.q
                    rbx_4 = zmm10[0]
                    uint32_t var_e0_3 = rbx_4
                    goto label_1426d713d
                
                rdi = 0
    else
        sub_1426a2930(r14, &var_f8, *(arg1 + 0x90))
        zmm2 = data_143b58058
        zmm6 = var_f8
        zmm8 = var_f0
        zmm7 = var_f4
        char rax_25
        
        if ((zmm2 ^ 0x80000000).d f>= zmm6[0] || zmm6[0] f>= zmm2.d)
            rax_25 = 0
        else
            zmm2 = data_143b5805c
            
            if ((zmm2 ^ 0x80000000).d f>= zmm7.d || zmm7.d f>= zmm2.d)
                rax_25 = 0
            else
                zmm2 = data_143b58060
                
                if ((zmm2 ^ 0x80000000).d f>= zmm8.d || zmm8.d f>= zmm2.d)
                    rax_25 = 0
                else
                    rax_25 = 1
        
        if (rax_25 != 0)
            void* rcx_6 = *(r15 + 0x130)
            zmm6[0] = zmm6[0] f- var_108.d
            zmm7.d = zmm7.d f- var_108:4.d
            zmm8.d = zmm8.d f- rax_4
            float* rax_26
            
            if (rcx_6 == 0)
                int32_t var_d0_4 = data_14399f6a0
                rax_26 = &var_d8
                var_d8 = data_14399f698.q
            else
                rax_26, zmm6 = sub_141f133e0(rcx_6, &var_d8)
            
            zmm10 = zx.o(*rax_26)
            zmm1 = 0x7fffffff
            zmm2 = 0x38d1b717
            zmm0_2 = _mm_and_ps(zmm10, 0x7fffffff)
            int32_t rax_28 = rax_26[2]
            zmm9 = zmm10.q:4.d
            
            if (zmm0_2.d f> 9.99999975e-05f)
                rax_28.b = 0
            else
                zmm0_2 = _mm_and_ps(zmm9, 0x7fffffff)
                
                if (zmm0_2.d f> 9.99999975e-05f)
                    rax_28.b = 0
                else
                    zmm0_2 = _mm_and_ps(rax_28, 0x7fffffff)
                    
                    if (zmm0_2.d f> 9.99999975e-05f)
                        rax_28.b = 0
                    else
                        rax_28 = 1
            
            if (rax_28.b != 0)
                zmm6 = 0x3f800000
            else
                zmm0_2 = _mm_and_ps(zmm6, 0x7fffffff)
                
                if (zmm0_2.d f> 9.99999975e-05f)
                    rax_28.b = 0
                else
                    zmm0_2 = _mm_and_ps(zmm7, 0x7fffffff)
                    
                    if (zmm0_2.d f> 9.99999975e-05f)
                        rax_28.b = 0
                    else if (_mm_and_ps(zmm8, 0x7fffffff).d f> 9.99999975e-05f)
                        rax_28.b = 0
                    else
                        rax_28 = 1
                
                if (rax_28.b != 0)
                    zmm6 = 0x3f800000
                else
                    zmm8 = zmm9
                    zmm1.d = zmm9.d f* zmm8.d
                    zmm0_2.d = zmm10.d f* zmm10[0]
                    zmm1.d = zmm1.d f+ zmm0_2.d
                    
                    if (not(zmm1.d f<= 9.99999994e-09f))
                        float zmm5_2[0x4] = 0x3f000000
                        float temp0_20[0x4] = _mm_rsqrt_ss(zmm1[0], zmm1.d)
                        zmm3.d = zmm1.d f* 0.5f
                        zmm0_2.d = temp0_20.d f* temp0_20[0]
                        zmm1.d = zmm3.d f* zmm0_2.d
                        zmm2.d = 0.5f f- zmm1.d
                        zmm0_2.d = temp0_20.d f* zmm2.d
                        temp0_20[0] = temp0_20[0] f+ zmm0_2.d
                        zmm1.d = temp0_20.d f* temp0_20[0]
                        zmm3.d = zmm3.d f* zmm1.d
                        zmm5_2[0] = 0.5f f- zmm3.d
                        zmm9.d = temp0_20.d f* zmm5_2[0]
                        zmm9.d = zmm9.d f+ temp0_20[0]
                        zmm0_2 = zmm9
                        zmm9.d = zmm9.d f* zmm8.d
                        zmm0_2.d = zmm0_2.d f* zmm10[0]
                        zmm10 = zmm0_2
                    
                    zmm1.d = zmm7.d f* zmm7.d
                    zmm0_2.d = zmm6.d f* zmm6[0]
                    zmm1.d = zmm1.d f+ zmm0_2.d
                    
                    if (not(zmm1.d f<= 9.99999994e-09f))
                        float zmm4_2[0x4] = 0x3f000000
                        float temp0_21[0x4] = _mm_rsqrt_ss(zmm1[0], zmm1.d)
                        zmm3.d = zmm1.d f* 0.5f
                        zmm0_2.d = temp0_21.d f* temp0_21[0]
                        zmm1.d = zmm3.d f* zmm0_2.d
                        zmm2.d = 0.5f f- zmm1.d
                        zmm0_2.d = temp0_21.d f* zmm2.d
                        temp0_21[0] = temp0_21[0] f+ zmm0_2.d
                        zmm1.d = temp0_21.d f* temp0_21[0]
                        zmm3.d = zmm3.d f* zmm1.d
                        zmm4_2[0] = 0.5f f- zmm3.d
                        zmm0_2.d = temp0_21.d f* zmm4_2[0]
                        temp0_21[0] = temp0_21[0] f+ zmm0_2.d
                        zmm6[0] = zmm6[0] * temp0_21[0]
                        zmm7.d = zmm7.d f* temp0_21[0]
                    
                    zmm6[0] = zmm6[0] f* zmm10[0]
                    zmm9.d = zmm9.d f* zmm7.d
                    zmm6[0] = zmm6[0] f+ zmm9.d
            
            if (zmm6[0] f>= *(arg1 + 0x9c))
                rdi = 0
            else
                zmm6 = zx.o(var_f8.q)
                rdx_7 = &var_d8
                rbx_4 = var_f0
                var_d8 = zmm6.q
                uint32_t var_d0_5 = rbx_4
            label_1426d713d:
                (*(*r13 + 0x7d8))(zmm0_2, rdx_7, zmm1, zmm2)
                r12[1] = zmm6.q
                rdi = 3
                r12[2].d = rbx_4
else
    void* rax_9 = sub_1426a2600(r14, *(arg1 + 0x90))
    
    if (rax_9 != 0)
        void* rax_10 = sub_142452380()
        void* rdx_2 = *(rax_9 + 0x10)
        int64_t rax_11 = sx.q(*(rax_10 + 0x38))
        
        if (rax_11.d s<= *(rdx_2 + 0x38) && *(*(rdx_2 + 0x30) + (rax_11 << 3)) == rax_10 + 0x30)
            void* rax_13 = *(rax_9 + 0x130)
            int32_t* rax_14
            uint128_t zmm0_1
            
            if (rax_13 == 0)
                int32_t var_d0_1 = data_143dbb200
                rax_14 = &var_d8
                var_d8 = data_143dbb1f8.q
            else
                zmm1 = *(rax_13 + 0x1d0)
                rax_14 = &var_f8
                var_f8 = zmm1.d
                zmm0_1 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
                int32_t var_f0_1 = _mm_shuffle_ps(zmm1, zmm1, 0xaa).d
                var_f4 = zmm0_1.d
            
            zmm0_1 = zx.o(*rax_14)
            void* rcx_3 = *(r15 + 0x130)
            zmm10 = rax_14[2]
            zmm7 = _mm_shuffle_ps(zmm0_1, zmm0_1, 0x55)
            var_d8 = zmm0_1.q
            zmm7.d = zmm7.d f- var_108:4.d
            zmm9.d = zmm0_1.d f- var_108.d
            zmm10[0] = zmm10[0] f- rax_4
            float* rax_17
            
            if (rcx_3 == 0)
                int32_t var_d0_3 = data_14399f6a0
                rax_17 = &var_d8
                var_d8 = data_14399f698.q
            else
                rax_17 = sub_141f133e0(rcx_3, &var_d8)
            
            zmm8 = zx.o(*rax_17)
            zmm1 = 0x7fffffff
            zmm2 = 0x38d1b717
            zmm0_1 = _mm_and_ps(zmm8, 0x7fffffff)
            int32_t rax_19 = rax_17[2]
            var_f8.q = zmm8.q
            zmm6 = var_f4
            
            if (zmm0_1.d f> 9.99999975e-05f)
                rax_19.b = 0
            else
                zmm0_1 = _mm_and_ps(zmm6, 0x7fffffff)
                
                if (zmm0_1.d f> 9.99999975e-05f)
                    rax_19.b = 0
                else
                    zmm0_1 = _mm_and_ps(rax_19, 0x7fffffff)
                    
                    if (zmm0_1.d f> 9.99999975e-05f)
                        rax_19.b = 0
                    else
                        rax_19 = 1
            
            if (rax_19.b != 0)
                zmm6 = 0x3f800000
            else
                zmm0_1 = _mm_and_ps(zmm9, 0x7fffffff)
                
                if (zmm0_1.d f> 9.99999975e-05f)
                    rax_19.b = 0
                else
                    zmm0_1 = _mm_and_ps(zmm7, 0x7fffffff)
                    
                    if (zmm0_1.d f> 9.99999975e-05f)
                        rax_19.b = 0
                    else if (_mm_and_ps(zmm10, 0x7fffffff)[0] f> 9.99999975e-05f)
                        rax_19.b = 0
                    else
                        rax_19 = 1
                
                if (rax_19.b != 0)
                    zmm6 = 0x3f800000
                else
                    zmm1.d = zmm6.d f* zmm6[0]
                    zmm0_1.d = zmm8.d f* zmm8.d
                    zmm1.d = zmm1.d f+ zmm0_1.d
                    uint128_t zmm5_1
                    
                    if (not(zmm1.d f<= 9.99999994e-09f))
                        zmm5_1 = _mm_rsqrt_ss(zmm1.d, zmm1.d)
                        zmm3.d = zmm1.d f* 0.5f
                        zmm0_1.d = zmm5_1.d f* zmm5_1.d
                        zmm1.d = zmm3.d f* zmm0_1.d
                        zmm2.d = 0.5f f- zmm1.d
                        zmm0_1.d = zmm5_1.d f* zmm2.d
                        zmm5_1.d = zmm5_1.d f+ zmm0_1.d
                        zmm1.d = zmm5_1.d f* zmm5_1.d
                        zmm3.d = zmm3.d f* zmm1.d
                        zmm0_1.d = zmm5_1.d f* (0.5f f- zmm3.d)
                        zmm5_1.d = zmm5_1.d f+ zmm0_1.d
                        zmm8.d = zmm8.d f* zmm5_1.d
                        zmm6[0] = zmm6[0] f* zmm5_1.d
                    
                    zmm1.d = zmm7.d f* zmm7.d
                    zmm0_1.d = zmm9.d f* zmm9.d
                    zmm1.d = zmm1.d f+ zmm0_1.d
                    
                    if (not(zmm1.d f<= 9.99999994e-09f))
                        zmm3.d = zmm1.d
                        zmm5_1 = _mm_rsqrt_ss(zmm3.d, zmm3.d)
                        zmm3.d = zmm3.d f* 0.5f
                        zmm0_1.d = zmm5_1.d f* zmm5_1.d
                        zmm1.d = zmm3.d f* zmm0_1.d
                        zmm2.d = 0.5f f- zmm1.d
                        zmm0_1.d = zmm5_1.d f* zmm2.d
                        zmm5_1.d = zmm5_1.d f+ zmm0_1.d
                        zmm1.d = zmm5_1.d f* zmm5_1.d
                        zmm3.d = zmm3.d f* zmm1.d
                        zmm0_1.d = zmm5_1.d f* (0.5f f- zmm3.d)
                        zmm5_1.d = zmm5_1.d f+ zmm0_1.d
                        zmm9.d = zmm9.d f* zmm5_1.d
                        zmm7.d = zmm7.d f* zmm5_1.d
                    
                    zmm6[0] = zmm6[0] f* zmm7.d
                    zmm8.d = zmm8.d f* zmm9.d
                    zmm6[0] = zmm6[0] f+ zmm8.d
            
            if (zmm6[0] f< *(arg1 + 0x9c))
                (*(*r13 + 0x7e0))(zmm0_1, zmm1, zmm2)
                *(r12 + 0x14) = 1
                rdi = 3
                *r12 = rax_9
            else
                rdi = 0
return zx.q(rdi)
