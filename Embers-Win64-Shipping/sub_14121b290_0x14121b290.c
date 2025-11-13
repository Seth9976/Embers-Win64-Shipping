// 函数: sub_14121b290
// 地址: 0x14121b290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm6[0x4]
float var_48[0x4] = zmm6
float zmm11[0x4]
float var_98[0x4] = zmm11
int128_t zmm12
int128_t var_a8 = zmm12
int128_t zmm13
int128_t var_b8 = zmm13
void var_858
int64_t rax_1 = __security_cookie ^ &var_858
float (* r14)[0x4] = arg3
int64_t* rcx = *(arg2[2].q + 0x20)
int32_t var_800
(*(*rcx + 0x10))(rcx, &var_800)
int32_t var_7f4
int128_t zmm7 = var_7f4
int32_t i_3 = 0
int128_t zmm8 = var_800
int32_t var_7fc
int128_t zmm9 = var_7fc
int32_t var_7f8
int128_t zmm10 = var_7f8
float zmm1[0x4] = arg4[1]
float var_798[0x4] = *arg4
int64_t var_778 = arg4[2][0].q
int32_t var_7e4 = zmm9.d
int32_t var_7e0 = zmm10.d
int32_t var_7d4 = zmm7.d
int32_t var_7d0 = zmm7.d
int32_t var_7dc = 0
int32_t var_7cc = 0
float (* var_7a8)[0x4] = r14
float var_788 = zmm1[0]
void* var_728 = nullptr
int32_t var_718 = 0
int32_t var_714 = 1
void* result
float zmm0[0x4]
float zmm2[0x4]
float zmm3[0x4]

if (r14 == 0)
label_14121b71b:
    double zmm4_1[0x2] = zx.o(0)
    zmm0 = zx.o(0)
    zmm4_1[0] = fconvert.d(zmm7.d)
    zmm0[0].q = fconvert.d(zmm7.d)
    zmm1 = zx.o(0)
    int64_t var_818_1 = zmm0.q
    zmm3 = zx.o(0)
    double var_828_1[0x2] = _mm_unpacklo_pd(zmm4_1, zmm4_1[0])
    zmm2 = zx.o(0)
    zmm1[0].q = fconvert.d(zmm10.d)
    zmm3[0].q = fconvert.d(zmm8.d)
    zmm2[0].q = fconvert.d(zmm9.d)
    int64_t var_830_1 = zmm1.q
    int64_t var_838_1 = zmm2.q
    sub_140af98a0("Unknown", 0xc2, 
        Failed to find an octree node for an element with bounds (%f,%f,%f) +/- (%f,%f,%f)!", zmm3[0].q)
    result = sub_140afbb40()
else
    zmm6 = zmm8.d.o
    int32_t rdi_1 = arg2.d
    int32_t rbx_1 = arg2.d
    
    while (true)
        float rcx_1 = (*r14)[0xda]
        (*r14)[0xda] = (((rcx_1 i+ 1) ^ rcx_1) & 0x7fffffff) ^ rcx_1
        float rbx_2
        
        if ((rcx_1 u>> 0x1f).b == 0)
            zmm3 = var_798
            zmm2 = var_778:4.d
            float temp0_1[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
            float temp0_2[0x4] = _mm_sub_ps(zmm3, temp0_1)
            float temp0_3[0x4] = _mm_add_ps(temp0_1, zmm3)
            float temp0_4[0x4] = _mm_sub_ps(zmm6, temp0_2)
            zmm0 = var_778.d
            float temp0_5[0x4] = _mm_sub_ps(temp0_3, zmm6)
            int32_t rdi_3
            
            if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_shuffle_ps(zmm0, zmm0, 0), 
                    _mm_add_ps(_mm_min_ps(temp0_5, temp0_4), zmm7.d.o), 1)) == 0)
                uint32_t temp0_14 = _mm_movemask_ps(_mm_cmpeq_ps(_mm_shuffle_ps(zmm3, zmm3, 0xaa), 
                    _mm_shuffle_ps(zmm6, zmm6, 0xaa), 1))
                float temp0_15[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0x55)
                float temp0_16[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0x55)
                float temp0_17[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0)
                int32_t rdi_4
                rdi_4.b = temp0_14 != 0
                int32_t rcx_3
                rcx_3.b = _mm_movemask_ps(_mm_cmpeq_ps(temp0_16, temp0_15, 1)) != 0
                int32_t rcx_4
                rcx_4.b =
                    _mm_movemask_ps(_mm_cmpeq_ps(temp0_17, _mm_shuffle_ps(zmm6, zmm6, 0), 1)) != 0
                rdi_3 = (((rdi_4 * 2) | rcx_3) * 2) | rcx_4
            else
                rdi_3 = 8
            
            rdi_1 = rdi_3 | (rdi_1 & 0xfffffff0)
            
            if (((rdi_1 u>> 3).b & 1) != 0)
                rbx_2 = r14[0x31][0]
            else
                uint64_t r15_2 = zx.q(rdi_1) & 7
                uint64_t r12_1 = zx.q(rdi_1)
                
                if (*(r14 + (r15_2 << 3) + 0x328) == 0)
                    void* rax_14 = j_sub_140a82f30(0x370)
                    void* const rdx_2 = rax_14
                    
                    if (rax_14 == 0)
                        rdx_2 = nullptr
                    else
                        *(rax_14 + 0x300) = 0
                        rbx_1 &= 0xfffffff0
                        *(rax_14 + 0x310) = 0
                        *(rax_14 + 0x314) = 0x10
                        *(rax_14 + 0x320) = r14
                        *(rax_14 + 0x368) = 0x80000000
                        
                        do
                            *(rdx_2 + ((zx.q(rbx_1) & 7) << 3) + 0x328) = 0
                            
                            if ((rbx_1.b & 7) u>= 7)
                                rbx_1 |= 8
                            else
                                rbx_1 ^= ((rbx_1 + 1) ^ rbx_1) & 7
                        while (((rbx_1 u>> 3).b & 1) == 0)
                    
                    *(r14 + (r15_2 << 3) + 0x328) = rdx_2
                    *(arg1 + 0x3a8) = sx.q(*(arg1 + 0x3a8) + 0x370)
                
                int64_t r14_1 = sx.q(var_718)
                int32_t rax_25 = (r14_1 + 1).d
                var_718 = rax_25
                void var_768
                
                if (rax_25 s> var_714)
                    sub_1409da570(&var_768, r14_1.d)
                
                void* rdx_4 = &var_768
                
                if (var_728 != 0)
                    rdx_4 = var_728
                
                int64_t rax_28 = r14_1 << 6
                void* rdx_5 = rdx_4 + rax_28
                
                if (rdx_4 == neg.q(rax_28))
                    rdx_5 = nullptr
                else
                    *(rdx_5 + 0x10) = 0
                    *(rdx_5 + 0x18) = 0
                    *(rdx_5 + 0x1c) = 0x3f800000
                    *(rdx_5 + 0x24) = 0
                    *(rdx_5 + 0x2c) = 0x3f800000
                    *rdx_5 = 0
                
                *rdx_5 = *(var_7a8 + (r15_2 << 3) + 0x328)
                zmm0 = var_778:4.d
                zmm0[0] = zmm0[0] f* *(&data_142e669e0 + ((zx.q(r12_1.d) & 1) << 2))
                zmm0[0] = zmm0[0] + var_798[0]
                *(rdx_5 + 0x10) = zmm0[0]
                zmm0 = var_778:4.d
                zmm0[0] = zmm0[0] f* *(&data_142e669e0 + ((zx.q((r12_1 u>> 1).d) & 1) << 2))
                zmm0[0] = zmm0[0] + var_798[1]
                *(rdx_5 + 0x14) = zmm0[0]
                zmm0 = var_778:4.d
                zmm0[0] = zmm0[0] f* *(&data_142e669e0 + ((zx.q((r12_1 u>> 2).d) & 1) << 2))
                zmm0[0] = zmm0[0] + var_798[2]
                *(rdx_5 + 0x1c) = 0
                *(rdx_5 + 0x18) = zmm0[0]
                *(rdx_5 + 0x20) = var_778.d[0]
                *(rdx_5 + 0x24) = var_778.d[0]
                *(rdx_5 + 0x28) = var_778.d[0]
                *(rdx_5 + 0x2c) = 0
                zmm1 = var_778.d
                zmm1[0] = zmm1[0] * 0.5f
                zmm1[0] = zmm1[0] * 1.0625f
                *(rdx_5 + 0x30) = zmm1[0]
                zmm0 = var_778.d
                zmm0[0] = zmm0[0] - zmm1[0]
                *(rdx_5 + 0x34) = zmm0[0]
                int32_t rcx_9 = var_718
                
                if (rcx_9 == 0)
                    zmm1 = data_142d3f660
                    int32_t var_7e8
                    var_7e8.q = 0
                    var_7a8.o = var_7e8.o
                    float var_7b8[0x4]
                    var_778 = var_7b8[0].q
                    var_798 = zmm1
                    var_788 = zmm1[0]
                else
                    void* r9 = &var_768
                    
                    if (var_728 != 0)
                        r9 = var_728
                    
                    int64_t rax_37 = sx.q(rcx_9 - 1) << 6
                    var_7a8.o = *(rax_37 + r9)
                    var_798 = *(rax_37 + r9 + 0x10)
                    var_788 = (*(rax_37 + r9 + 0x20))[0]
                    var_778 = (*(rax_37 + r9 + 0x30))[0].q
                    
                    if (0 != 0)
                        memmove((sx.q(rcx_9 - 1) << 6) + r9, (sx.q(rcx_9) << 6) + r9, 0 << 6)
                        rcx_9 = var_718
                    
                    var_718 = rcx_9 - 1
                    sub_1409da950(&var_768)
                
                r14 = var_7a8
                
                if (r14 != 0)
                    continue
                
                if (var_728 != 0)
                    sub_140a74f90(var_728)
                
                goto label_14121b71b
            
            goto label_14121b7da
        
        rbx_2 = r14[0x31][0]
        
        if (rbx_2 i+ 1 s<= 0x10 || var_788[0] f<= *(arg1 + 0x3a0))
        label_14121b7da:
            r14[0x31][0] = rbx_2 i+ 1
            
            if (rbx_2 i+ 1 s> (*r14)[0xc5])
                sub_141238a90(r14, rbx_2)
            
            float (* rax_43)[0x4] = r14[0x30][0].q
            float (* rdx_10)[0x4] = r14
            
            if (rax_43 != 0)
                rdx_10 = rax_43
            
            void* rax_47 = &rdx_10[sx.q(rbx_2) * 3]
            
            if (sx.q(rbx_2) * 0x30 != neg.q(rdx_10))
                *rax_47 = *arg2
                *(rax_47 + 0x10) = arg2[1]
                *(rax_47 + 0x20) = arg2[2]
            
            var_800.q = r14
            *(arg1 + 0x3a8) = sx.q(*(arg1 + 0x3a8) + 0x30)
            int32_t var_7f8_1 = r14[0x31][0] i- 1
            result = arg2[2].q
            *(result + 0x30) = var_800.o
        else
            void* var_408_1 = nullptr
            int32_t var_3f4_1 = 0x10
            uint64_t rdx_11 = 0
            int32_t var_3f8_1 = 0
            void* r8_2 = nullptr
            void var_708
            
            if (&var_708 != r14)
                int64_t i_4 = 6
                void var_3e8
                float (* rax_54)[0x4] = &var_3e8
                int64_t i_5 = 6
                void* rcx_20 = &var_708
                int64_t i
                
                do
                    rax_54 = &rax_54[8]
                    zmm0 = *rcx_20
                    zmm1 = *(rcx_20 + 0x10)
                    rcx_20 += 0x80
                    rax_54[-8] = zmm0
                    zmm0 = *(rcx_20 - 0x60)
                    rax_54[-7] = zmm1
                    zmm1 = *(rcx_20 - 0x50)
                    rax_54[-6] = zmm0
                    zmm0 = *(rcx_20 - 0x40)
                    rax_54[-5] = zmm1
                    zmm1 = *(rcx_20 - 0x30)
                    rax_54[-4] = zmm0
                    zmm0 = *(rcx_20 - 0x20)
                    rax_54[-3] = zmm1
                    zmm1 = *(rcx_20 - 0x10)
                    rax_54[-2] = zmm0
                    rax_54[-1] = zmm1
                    i = i_5
                    i_5 -= 1
                while (i != 1)
                int64_t i_6 = 6
                zmm1 = *(rcx_20 + 0x10)
                float (* rcx_21)[0x4] = r14
                *rax_54 = *rcx_20
                rax_54[1] = zmm1
                float (* rax_55)[0x4] = &var_708
                int64_t i_1
                
                do
                    rax_55 = &rax_55[8]
                    zmm0 = *rcx_21
                    zmm1 = rcx_21[1]
                    rcx_21 = &rcx_21[8]
                    rax_55[-8] = zmm0
                    zmm0 = rcx_21[-6]
                    rax_55[-7] = zmm1
                    zmm1 = rcx_21[-5]
                    rax_55[-6] = zmm0
                    zmm0 = rcx_21[-4]
                    rax_55[-5] = zmm1
                    zmm1 = rcx_21[-3]
                    rax_55[-4] = zmm0
                    zmm0 = rcx_21[-2]
                    rax_55[-3] = zmm1
                    zmm1 = rcx_21[-1]
                    rax_55[-2] = zmm0
                    rax_55[-1] = zmm1
                    i_1 = i_6
                    i_6 -= 1
                while (i_1 != 1)
                zmm1 = rcx_21[1]
                float (* rcx_22)[0x4] = &var_3e8
                *rax_55 = *rcx_21
                rax_55[1] = zmm1
                int128_t* rax_56 = r14
                int64_t i_2
                
                do
                    rax_56 = &rax_56[8]
                    zmm0 = *rcx_22
                    zmm1 = rcx_22[1]
                    rcx_22 = &rcx_22[8]
                    rax_56[-8] = zmm0
                    zmm0 = rcx_22[-6]
                    rax_56[-7] = zmm1
                    zmm1 = rcx_22[-5]
                    rax_56[-6] = zmm0
                    zmm0 = rcx_22[-4]
                    rax_56[-5] = zmm1
                    zmm1 = rcx_22[-3]
                    rax_56[-4] = zmm0
                    zmm0 = rcx_22[-2]
                    rax_56[-3] = zmm1
                    zmm1 = rcx_22[-1]
                    rax_56[-2] = zmm0
                    rax_56[-1] = zmm1
                    i_2 = i_4
                    i_4 -= 1
                while (i_2 != 1)
                rdx_11 = zx.q(var_3f8_1)
                zmm1 = rcx_22[1]
                r8_2 = var_408_1
                *rax_56 = *rcx_22
                rax_56[1] = zmm1
            
            *(arg1 + 0x3a8) = sx.q(*(arg1 + 0x3a8) - ((rdx_11 * 3).d << 4))
            (*r14)[0xda] = 0f
            
            while (i_3 s>= 0)
                if (i_3 s>= rdx_11.d)
                    break
                
                void* rdx_12 = &var_708
                
                if (r8_2 != 0)
                    rdx_12 = r8_2
                
                sub_14121b290(arg1, rdx_12 + sx.q(i_3) * 0x30, r14, &var_798)
                rdx_11 = zx.q(var_3f8_1)
                i_3 += 1
                r8_2 = var_408_1
            
            result = sub_14121b290(arg1, arg2, r14, &var_798)
            
            if (var_408_1 != 0)
                result = sub_140a74f90(var_408_1)
        
        if (var_728 == 0)
            break
        
        result = sub_140a74f90(var_728)
        break
__security_check_cookie(rax_1 ^ &var_858)
return result
