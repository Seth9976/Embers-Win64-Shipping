// 函数: sub_14228e130
// 地址: 0x14228e130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm7[0x4]
float var_58[0x4] = zmm7
float zmm11[0x4]
float var_98[0x4] = zmm11
int128_t zmm12
int128_t var_a8 = zmm12
int128_t zmm13
int128_t var_b8 = zmm13
void var_208
int64_t rax_1 = __security_cookie ^ &var_208
float (* r14)[0x4] = arg3
int128_t zmm6 = *(arg2 + 0xc)
int32_t i = 0
int128_t zmm8 = *arg2
int128_t zmm9 = *(arg2 + 4)
int128_t zmm10 = *(arg2 + 8)
float zmm1[0x4] = arg4[1]
float var_158[0x4] = *arg4
int64_t var_138 = arg4[2][0].q
int32_t var_1a8 = zmm8.d
int32_t var_1a4 = zmm9.d
int32_t var_1a0 = zmm10.d
int32_t var_194 = zmm6.d
int32_t var_190 = zmm6.d
int32_t var_18c = 0
int32_t var_19c = 0
float (* var_168)[0x4] = arg3
float var_148 = zmm1[0]
void* var_e8 = nullptr
int32_t var_d8 = 0
int32_t var_d4 = 1
int64_t result
float zmm0[0x4]
float zmm2[0x4]
float zmm3[0x4]

if (arg3 == 0)
label_14228e580:
    zmm0 = zx.o(0)
    zmm1 = zx.o(0)
    zmm0[0].q = fconvert.d(zmm6.d)
    zmm2 = zx.o(0)
    int64_t var_1c8_1 = zmm0.q
    zmm3 = zx.o(0)
    zmm1[0].q = fconvert.d(zmm6.d)
    zmm2[0].q = fconvert.d(zmm6.d)
    int64_t var_1d0_1 = zmm1.q
    int64_t var_1d8_1 = zmm2.q
    zmm3[0].q = fconvert.d(zmm8.d)
    int64_t var_1e0_1 = fconvert.d(zmm10.d)
    int64_t var_1e8_1 = fconvert.d(zmm9.d)
    sub_140af98a0("Unknown", 0xc2, 
        Failed to find an octree node for an element with bounds (%f,%f,%f) +/- (%f,%f,%f)!", zmm3[0].q)
    result = sub_140afbb40()
else
    zmm7 = var_1a8.o
    int32_t rdi_1 = arg2.d
    int32_t rbx_1 = arg2.d
    
    while (true)
        float rcx = (*r14)[0x16]
        (*r14)[0x16] = (((rcx i+ 1) ^ rcx) & 0x7fffffff) ^ rcx
        float rbx_2
        
        if ((rcx u>> 0x1f).b != 0)
            rbx_2 = (*r14)[2]
            
            if (rbx_2 i+ 1 s<= 4 || var_148[0] f<= *(arg1 + 0x90))
            label_14228e643:
                (*r14)[2] = rbx_2 i+ 1
                
                if (rbx_2 i+ 1 s> (*r14)[3])
                    sub_140a05e50(r14)
                
                int64_t rcx_18 = sx.q(rbx_2) * 0xb0
                
                if (rcx_18 != neg.q(*r14))
                    sub_1422871c0(rcx_18 + *r14, arg2)
                
                result = sx.q(*(arg1 + 0x98) + 0xb0)
                *(arg1 + 0x98) = result
            else
                var_1a0.q = 0
                int64_t rbx_3 = 0
                int32_t rdi_8 = 0
                var_1a8.q = 0
                
                if (&var_1a8 != r14)
                    var_1a8.o = *r14
                    rdi_8 = var_1a0
                    rbx_3 = var_1a8.q
                    *r14 = var_1a8.o
                
                *(arg1 + 0x98) = sx.q(*(arg1 + 0x98) - rdi_8 * 0xb0)
                (*r14)[0x16] = 0f
                
                for (; i s>= 0; i += 1)
                    if (i s>= rdi_8)
                        break
                    
                    sub_14228e130(arg1, sx.q(i) * 0xb0 + rbx_3, r14, &var_158)
                
                result = sub_14228e130(arg1, arg2, r14, &var_158)
                
                if (rbx_3 != 0)
                    result = sub_140a74f90(rbx_3)
            
            if (var_e8 == 0)
                break
            
            result = sub_140a74f90(var_e8)
            break
        
        zmm3 = var_158
        zmm2 = var_138:4.d
        float temp0_1[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
        float temp0_2[0x4] = _mm_sub_ps(zmm3, temp0_1)
        float temp0_3[0x4] = _mm_add_ps(temp0_1, zmm3)
        float temp0_4[0x4] = _mm_sub_ps(zmm7, temp0_2)
        zmm0 = var_138.d
        float temp0_5[0x4] = _mm_sub_ps(temp0_3, zmm7)
        int32_t rdi_3
        
        if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_shuffle_ps(zmm0, zmm0, 0), 
                _mm_add_ps(_mm_min_ps(temp0_5, temp0_4), zmm6.d.o), 1)) == 0)
            uint32_t temp0_14 = _mm_movemask_ps(_mm_cmpeq_ps(_mm_shuffle_ps(zmm3, zmm3, 0xaa), 
                _mm_shuffle_ps(zmm7, zmm7, 0xaa), 1))
            float temp0_15[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0x55)
            float temp0_16[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0x55)
            float temp0_17[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0)
            int32_t rdi_4
            rdi_4.b = temp0_14 != 0
            int32_t rcx_2
            rcx_2.b = _mm_movemask_ps(_mm_cmpeq_ps(temp0_16, temp0_15, 1)) != 0
            int32_t rcx_3
            rcx_3.b = _mm_movemask_ps(_mm_cmpeq_ps(temp0_17, _mm_shuffle_ps(zmm7, zmm7, 0), 1)) != 0
            rdi_3 = (((rdi_4 * 2) | rcx_2) * 2) | rcx_3
        else
            rdi_3 = 8
        
        rdi_1 = rdi_3 | (rdi_1 & 0xfffffff0)
        
        if (((rdi_1 u>> 3).b & 1) != 0)
            rbx_2 = (*r14)[2]
        else
            uint64_t r15_2 = zx.q(rdi_1) & 7
            uint64_t r12_1 = zx.q(rdi_1)
            
            if (*(r14 + (r15_2 << 3) + 0x18) == 0)
                int64_t* rax_12 = j_sub_140a82f30(0x60)
                int64_t* rdx_1 = rax_12
                
                if (rax_12 == 0)
                    rdx_1 = nullptr
                else
                    *rax_12 = 0
                    rbx_1 &= 0xfffffff0
                    rax_12[1] = 0
                    rax_12[2] = r14
                    rax_12[0xb].d = 0x80000000
                    
                    do
                        rdx_1[(zx.q(rbx_1) & 7) + 3] = 0
                        
                        if ((rbx_1.b & 7) u>= 7)
                            rbx_1 |= 8
                        else
                            rbx_1 ^= ((rbx_1 + 1) ^ rbx_1) & 7
                    while (((rbx_1 u>> 3).b & 1) == 0)
                
                *(r14 + (r15_2 << 3) + 0x18) = rdx_1
                *(arg1 + 0x98) = sx.q(*(arg1 + 0x98) + 0x60)
            
            int64_t r14_1 = sx.q(var_d8)
            int32_t rax_23 = (r14_1 + 1).d
            var_d8 = rax_23
            void var_128
            
            if (rax_23 s> var_d4)
                sub_1409da570(&var_128, r14_1.d)
            
            void* rdx_3 = &var_128
            
            if (var_e8 != 0)
                rdx_3 = var_e8
            
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
            
            *rdx_4 = *(var_168 + (r15_2 << 3) + 0x18)
            zmm0 = var_138:4.d
            zmm0[0] = zmm0[0] f* *(&data_142e669e0 + ((zx.q(r12_1.d) & 1) << 2))
            zmm0[0] = zmm0[0] + var_158[0]
            *(rdx_4 + 0x10) = zmm0[0]
            zmm0 = var_138:4.d
            zmm0[0] = zmm0[0] f* *(&data_142e669e0 + ((zx.q((r12_1 u>> 1).d) & 1) << 2))
            zmm0[0] = zmm0[0] + var_158[1]
            *(rdx_4 + 0x14) = zmm0[0]
            zmm0 = var_138:4.d
            zmm0[0] = zmm0[0] f* *(&data_142e669e0 + ((zx.q((r12_1 u>> 2).d) & 1) << 2))
            zmm0[0] = zmm0[0] + var_158[2]
            *(rdx_4 + 0x1c) = 0
            *(rdx_4 + 0x18) = zmm0[0]
            *(rdx_4 + 0x20) = var_138.d[0]
            *(rdx_4 + 0x24) = var_138.d[0]
            *(rdx_4 + 0x28) = var_138.d[0]
            *(rdx_4 + 0x2c) = 0
            zmm1 = var_138.d
            zmm1[0] = zmm1[0] * 0.5f
            zmm1[0] = zmm1[0] * 1.0625f
            *(rdx_4 + 0x30) = zmm1[0]
            zmm0 = var_138.d
            zmm0[0] = zmm0[0] - zmm1[0]
            *(rdx_4 + 0x34) = zmm0[0]
            int32_t rcx_8 = var_d8
            
            if (rcx_8 == 0)
                zmm1 = data_142d3f660
                var_1a8.q = 0
                var_168.o = var_1a8.o
                float var_178[0x4]
                var_138 = var_178[0].q
                var_158 = zmm1
                var_148 = zmm1[0]
            else
                void* r9 = &var_128
                
                if (var_e8 != 0)
                    r9 = var_e8
                
                int64_t rax_35 = sx.q(rcx_8 - 1) << 6
                var_168.o = *(rax_35 + r9)
                var_158 = *(rax_35 + r9 + 0x10)
                var_148 = (*(rax_35 + r9 + 0x20))[0]
                var_138 = (*(rax_35 + r9 + 0x30))[0].q
                
                if (0 != 0)
                    memmove((sx.q(rcx_8 - 1) << 6) + r9, (sx.q(rcx_8) << 6) + r9, 0 << 6)
                    rcx_8 = var_d8
                
                var_d8 = rcx_8 - 1
                sub_1409da950(&var_128)
            
            r14 = var_168
            
            if (r14 != 0)
                continue
            
            if (var_e8 != 0)
                sub_140a74f90(var_e8)
            
            goto label_14228e580
        
        goto label_14228e643
__security_check_cookie(rax_1 ^ &var_208)
return result
