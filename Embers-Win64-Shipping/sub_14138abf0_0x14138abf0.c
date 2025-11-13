// 函数: sub_14138abf0
// 地址: 0x14138abf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x4200)
float zmm6[0x4]
float var_48[0x4] = zmm6
float zmm13[0x4]
float var_b8[0x4] = zmm13
int128_t zmm14
int128_t var_c8 = zmm14
int128_t zmm15
int128_t var_d8 = zmm15
void var_4238
int64_t rax_1 = __security_cookie ^ &var_4238
int32_t i = 0
int128_t zmm7 = arg2[1].d
void* r14 = arg3
int128_t zmm8 = *(arg2 + 0x14)
int128_t zmm9 = *(arg2 + 0x18)
int128_t zmm10 = *(arg2 + 0x1c)
int128_t zmm11 = arg2[2].d
int128_t zmm12 = *(arg2 + 0x24)
float zmm1[0x4] = arg4[1]
float var_4188[0x4] = *arg4
int64_t var_4168 = arg4[2][0].q
int32_t var_41d4 = zmm8.d
int32_t var_41d0 = zmm9.d
int32_t var_41c4 = zmm11.d
int32_t var_41c0 = zmm12.d
int32_t var_41bc = 0
int32_t var_41cc = 0
void* var_4198 = arg3
float var_4178 = zmm1[0]
void* var_4118 = nullptr
int32_t var_4108 = 0
int32_t var_4104 = 1
void* result
float zmm0[0x4]
float zmm2[0x4]
float zmm3[0x4]

if (arg3 == 0)
label_14138b0ab:
    zmm0 = zx.o(0)
    zmm1 = zx.o(0)
    zmm0[0].q = fconvert.d(zmm12.d)
    zmm2 = zx.o(0)
    int64_t var_41f8_1 = zmm0.q
    zmm3 = zx.o(0)
    zmm1[0].q = fconvert.d(zmm11.d)
    zmm2[0].q = fconvert.d(zmm10.d)
    int64_t var_4200_1 = zmm1.q
    int64_t var_4208_1 = zmm2.q
    zmm3[0].q = fconvert.d(zmm7.d)
    int64_t var_4210_1 = fconvert.d(zmm9.d)
    int64_t var_4218_1 = fconvert.d(zmm8.d)
    sub_140af98a0("Unknown", 0xc2, 
        Failed to find an octree node for an element with bounds (%f,%f,%f) +/- (%f,%f,%f)!", zmm3[0].q)
    result = sub_140afbb40()
else
    zmm6 = zmm7.d.o
    int32_t rdi_1 = arg2.d
    int32_t rbx_1 = arg2.d
    
    while (true)
        int32_t rcx = *(r14 + 0x4058)
        *(r14 + 0x4058) = (((rcx + 1) ^ rcx) & 0x7fffffff) ^ rcx
        int32_t rbx_2
        
        if ((rcx u>> 0x1f).b != 0)
            rbx_2 = *(r14 + 0x4008)
            
            if (rbx_2 + 1 s<= 0x100 || var_4178[0] f<= *(arg1 + 0x4090))
            label_14138b186:
                *(r14 + 0x4008) = rbx_2 + 1
                
                if (rbx_2 + 1 s> *(r14 + 0x400c))
                    sub_1413a8850(r14, rbx_2)
                
                void* rax_41 = *(r14 + 0x4000)
                void* rdx_9 = r14
                
                if (rax_41 != 0)
                    rdx_9 = rax_41
                
                int64_t rax_43 = sx.q(rbx_2) << 6
                float (* rdx_10)[0x4] = rdx_9 + rax_43
                
                if (rdx_9 != neg.q(rax_43))
                    *rdx_10 = *arg2
                    rdx_10[1] = arg2[1]
                    rdx_10[2] = arg2[2]
                    rdx_10[3] = arg2[3]
                
                *(arg1 + 0x4098) = sx.q(*(arg1 + 0x4098) + 0x40)
                int32_t var_41e0_1 = *(r14 + 0x4008) - 1
                result = *arg2
                *(result + 0x58) = r14.o
            else
                void* var_f8_1 = nullptr
                int32_t var_f0_1 = 0
                int32_t var_ec_1 = 0x100
                void var_40f8
                sub_141384ce0(&var_40f8, r14)
                int32_t rdx_12 = var_f0_1
                *(arg1 + 0x4098) = sx.q(*(arg1 + 0x4098) - (rdx_12 << 6))
                *(r14 + 0x4058) = 0
                
                for (; i s>= 0; i += 1)
                    if (i s>= rdx_12)
                        break
                    
                    void* rdx_13 = &var_40f8
                    
                    if (var_f8_1 != 0)
                        rdx_13 = var_f8_1
                    
                    sub_14138abf0(arg1, rdx_13 + (sx.q(i) << 6), r14, &var_4188)
                    rdx_12 = var_f0_1
                
                result = sub_14138abf0(arg1, arg2, r14, &var_4188)
                
                if (var_f8_1 != 0)
                    result = sub_140a74f90(var_f8_1)
            
            if (var_4118 == 0)
                break
            
            result = sub_140a74f90(var_4118)
            break
        
        zmm3 = var_4188
        zmm2 = var_4168:4.d
        float temp0_1[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
        float temp0_2[0x4] = _mm_sub_ps(zmm3, temp0_1)
        float temp0_3[0x4] = _mm_add_ps(temp0_1, zmm3)
        float temp0_4[0x4] = _mm_sub_ps(zmm6, temp0_2)
        zmm0 = var_4168.d
        float temp0_5[0x4] = _mm_sub_ps(temp0_3, zmm6)
        int32_t rdi_3
        
        if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_shuffle_ps(zmm0, zmm0, 0), 
                _mm_add_ps(_mm_min_ps(temp0_5, temp0_4), zmm10.d.o), 1)) == 0)
            uint32_t temp0_14 = _mm_movemask_ps(_mm_cmpeq_ps(_mm_shuffle_ps(zmm3, zmm3, 0xaa), 
                _mm_shuffle_ps(zmm6, zmm6, 0xaa), 1))
            float temp0_15[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0x55)
            float temp0_16[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0x55)
            float temp0_17[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0)
            int32_t rdi_4
            rdi_4.b = temp0_14 != 0
            int32_t rcx_2
            rcx_2.b = _mm_movemask_ps(_mm_cmpeq_ps(temp0_16, temp0_15, 1)) != 0
            int32_t rcx_3
            rcx_3.b = _mm_movemask_ps(_mm_cmpeq_ps(temp0_17, _mm_shuffle_ps(zmm6, zmm6, 0), 1)) != 0
            rdi_3 = (((rdi_4 * 2) | rcx_2) * 2) | rcx_3
        else
            rdi_3 = 8
        
        rdi_1 = rdi_3 | (rdi_1 & 0xfffffff0)
        
        if (((rdi_1 u>> 3).b & 1) != 0)
            rbx_2 = *(r14 + 0x4008)
        else
            uint64_t r15_2 = zx.q(rdi_1) & 7
            uint64_t r12_1 = zx.q(rdi_1)
            
            if (*(r14 + (r15_2 << 3) + 0x4018) == 0)
                void* rax_12 = j_sub_140a82f30(0x4060)
                void* const rdx_1 = rax_12
                
                if (rax_12 == 0)
                    rdx_1 = nullptr
                else
                    *(rax_12 + 0x4000) = 0
                    rbx_1 &= 0xfffffff0
                    *(rax_12 + 0x4008) = 0
                    *(rax_12 + 0x400c) = 0x100
                    *(rax_12 + 0x4010) = r14
                    *(rax_12 + 0x4058) = 0x80000000
                    
                    do
                        *(rdx_1 + ((zx.q(rbx_1) & 7) << 3) + 0x4018) = 0
                        
                        if ((rbx_1.b & 7) u>= 7)
                            rbx_1 |= 8
                        else
                            rbx_1 ^= ((rbx_1 + 1) ^ rbx_1) & 7
                    while (((rbx_1 u>> 3).b & 1) == 0)
                
                *(r14 + (r15_2 << 3) + 0x4018) = rdx_1
                *(arg1 + 0x4098) = sx.q(*(arg1 + 0x4098) + 0x4060)
            
            int64_t r14_1 = sx.q(var_4108)
            int32_t rax_23 = (r14_1 + 1).d
            var_4108 = rax_23
            void var_4158
            
            if (rax_23 s> var_4104)
                sub_1409da570(&var_4158, r14_1.d)
            
            void* rdx_3 = &var_4158
            
            if (var_4118 != 0)
                rdx_3 = var_4118
            
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
            
            *rdx_4 = *(var_4198 + (r15_2 << 3) + 0x4018)
            zmm0 = var_4168:4.d
            zmm0[0] = zmm0[0] f* *(&data_142e669e0 + ((zx.q(r12_1.d) & 1) << 2))
            zmm0[0] = zmm0[0] + var_4188[0]
            *(rdx_4 + 0x10) = zmm0[0]
            zmm0 = var_4168:4.d
            zmm0[0] = zmm0[0] f* *(&data_142e669e0 + ((zx.q((r12_1 u>> 1).d) & 1) << 2))
            zmm0[0] = zmm0[0] + var_4188[1]
            *(rdx_4 + 0x14) = zmm0[0]
            zmm0 = var_4168:4.d
            zmm0[0] = zmm0[0] f* *(&data_142e669e0 + ((zx.q((r12_1 u>> 2).d) & 1) << 2))
            zmm0[0] = zmm0[0] + var_4188[2]
            *(rdx_4 + 0x1c) = 0
            *(rdx_4 + 0x18) = zmm0[0]
            *(rdx_4 + 0x20) = var_4168.d[0]
            *(rdx_4 + 0x24) = var_4168.d[0]
            *(rdx_4 + 0x28) = var_4168.d[0]
            *(rdx_4 + 0x2c) = 0
            zmm1 = var_4168.d
            zmm1[0] = zmm1[0] * 0.5f
            zmm1[0] = zmm1[0] * 1.0625f
            *(rdx_4 + 0x30) = zmm1[0]
            zmm0 = var_4168.d
            zmm0[0] = zmm0[0] - zmm1[0]
            *(rdx_4 + 0x34) = zmm0[0]
            int32_t rcx_8 = var_4108
            
            if (rcx_8 == 0)
                zmm1 = data_142d3f660
                int32_t var_41d8
                var_41d8.q = 0
                var_4198.o = var_41d8.o
                float var_41a8[0x4]
                var_4168 = var_41a8[0].q
                var_4188 = zmm1
                var_4178 = zmm1[0]
            else
                void* r9 = &var_4158
                
                if (var_4118 != 0)
                    r9 = var_4118
                
                int64_t rax_35 = sx.q(rcx_8 - 1) << 6
                var_4198.o = *(rax_35 + r9)
                var_4188 = *(rax_35 + r9 + 0x10)
                var_4178 = (*(rax_35 + r9 + 0x20))[0]
                var_4168 = (*(rax_35 + r9 + 0x30))[0].q
                
                if (0 != 0)
                    memmove((sx.q(rcx_8 - 1) << 6) + r9, (sx.q(rcx_8) << 6) + r9, 0 << 6)
                    rcx_8 = var_4108
                
                var_4108 = rcx_8 - 1
                sub_1409da950(&var_4158)
            
            r14 = var_4198
            
            if (r14 != 0)
                continue
            
            if (var_4118 != 0)
                sub_140a74f90(var_4118)
            
            goto label_14138b0ab
        
        goto label_14138b186
__security_check_cookie(rax_1 ^ &var_4238)
return result
