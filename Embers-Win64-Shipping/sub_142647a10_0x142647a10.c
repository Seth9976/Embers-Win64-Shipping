// 函数: sub_142647a10
// 地址: 0x142647a10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm6
uint128_t var_48 = zmm6
float zmm13[0x4]
float var_b8[0x4] = zmm13
int128_t zmm14
int128_t var_c8 = zmm14
int128_t zmm15
int128_t var_d8 = zmm15
void var_988
int64_t rax_1 = __security_cookie ^ &var_988
int32_t i_3 = 0
int128_t zmm7 = *arg2
uint128_t* r14 = arg3
int128_t zmm8 = *(arg2 + 4)
int128_t zmm9 = *(arg2 + 8)
int128_t zmm10 = *(arg2 + 0xc)
int128_t zmm11 = arg2[1].d
int128_t zmm12 = *(arg2 + 0x14)
uint128_t zmm1 = arg4[1]
uint128_t var_898 = *arg4
int64_t var_878 = arg4[2].q
int32_t var_918 = zmm7.d
int32_t var_914 = zmm8.d
int32_t var_910 = zmm9.d
int32_t var_908 = zmm10.d
int32_t var_904 = zmm11.d
int32_t var_900 = zmm12.d
int128_t* var_930 = arg2
int32_t var_8fc = 0
int32_t var_90c = 0
uint128_t* var_8a8 = arg3
float var_888 = zmm1.d
void* var_828 = nullptr
int32_t var_818 = 0
int32_t var_814 = 1
int32_t* result
uint128_t zmm0
float zmm2[0x4]
uint128_t zmm3

if (arg3 == 0)
label_142647eb5:
    zmm0.q = fconvert.d(zmm12.d)
    zmm2 = zx.o(0)
    uint64_t var_948_1 = zmm0.q
    zmm1.q = fconvert.d(zmm11.d)
    zmm2[0].q = fconvert.d(zmm10.d)
    uint64_t var_950_1 = zmm1.q
    int64_t var_958_1 = zmm2.q
    zmm3.q = fconvert.d(zmm7.d)
    int64_t var_960_1 = fconvert.d(zmm9.d)
    int64_t var_968_1 = fconvert.d(zmm8.d)
    sub_140af98a0("Unknown", 0xc2, 
        Failed to find an octree node for an element with bounds (%f,%f,%f) +/- (%f,%f,%f)!", zmm3.q)
    result = sub_140afbb40()
else
    zmm6 = var_918.o
    int32_t var_938
    int32_t rdi_1 = var_938
    int32_t rbx_1 = var_938
    
    while (true)
        int32_t rcx = *(r14 + 0x3d8)
        *(r14 + 0x3d8) = (((rcx + 1) ^ rcx) & 0x7fffffff) ^ rcx
        int32_t rbx_2
        
        if ((rcx u>> 0x1f).b == 0)
            zmm3 = var_898
            zmm2 = var_878:4.d
            float temp0_1[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
            zmm0 = _mm_sub_ps(zmm3, temp0_1)
            float temp0_3[0x4] = _mm_add_ps(temp0_1, zmm3)
            zmm1 = _mm_sub_ps(zmm6, zmm0)
            zmm0 = var_878.d
            float temp0_5[0x4] = _mm_sub_ps(temp0_3, zmm6)
            int32_t rdi_3
            
            if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_shuffle_ps(zmm0, zmm0, 0), 
                    _mm_add_ps(_mm_min_ps(temp0_5, zmm1), var_908.o), 1)) == 0)
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
                rbx_2 = *(r14 + 0x388)
            else
                uint64_t r15_2 = zx.q(rdi_1) & 7
                uint64_t r12_1 = zx.q(rdi_1)
                
                if (*(r14 + (r15_2 << 3) + 0x398) == 0)
                    void* rax_12 = j_sub_140a82f30(0x3e0)
                    void* const rdx_1 = rax_12
                    
                    if (rax_12 == 0)
                        rdx_1 = nullptr
                    else
                        *(rax_12 + 0x380) = 0
                        rbx_1 &= 0xfffffff0
                        *(rax_12 + 0x388) = 0
                        *(rax_12 + 0x38c) = 0x10
                        *(rax_12 + 0x390) = r14
                        *(rax_12 + 0x3d8) = 0x80000000
                        
                        do
                            *(rdx_1 + ((zx.q(rbx_1) & 7) << 3) + 0x398) = 0
                            
                            if ((rbx_1.b & 7) u>= 7)
                                rbx_1 |= 8
                            else
                                rbx_1 ^= ((rbx_1 + 1) ^ rbx_1) & 7
                        while (((rbx_1 u>> 3).b & 1) == 0)
                    
                    *(r14 + (r15_2 << 3) + 0x398) = rdx_1
                    *(arg1 + 0x418) = sx.q(*(arg1 + 0x418) + 0x3e0)
                
                int64_t r14_1 = sx.q(var_818)
                int32_t rax_23 = (r14_1 + 1).d
                var_818 = rax_23
                void var_868
                
                if (rax_23 s> var_814)
                    sub_1409da570(&var_868, r14_1.d)
                
                void* rdx_3 = &var_868
                
                if (var_828 != 0)
                    rdx_3 = var_828
                
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
                
                *rdx_4 = *(var_8a8 + (r15_2 << 3) + 0x398)
                zmm0.d = var_878:4.d.d f* *(&data_142e669e0 + ((zx.q(r12_1.d) & 1) << 2))
                zmm0.d = zmm0.d f+ var_898.d
                *(rdx_4 + 0x10) = zmm0.d
                zmm0.d = var_878:4.d.d f* *(&data_142e669e0 + ((zx.q((r12_1 u>> 1).d) & 1) << 2))
                zmm0.d = zmm0.d f+ var_898:4.d
                *(rdx_4 + 0x14) = zmm0.d
                zmm0.d = var_878:4.d.d f* *(&data_142e669e0 + ((zx.q((r12_1 u>> 2).d) & 1) << 2))
                zmm0.d = zmm0.d f+ var_898:8.d
                *(rdx_4 + 0x1c) = 0
                *(rdx_4 + 0x18) = zmm0.d
                *(rdx_4 + 0x20) = var_878.d.d
                *(rdx_4 + 0x24) = var_878.d.d
                *(rdx_4 + 0x28) = var_878.d.d
                *(rdx_4 + 0x2c) = 0
                zmm1.d = var_878.d.d f* 0.5f
                zmm1.d = zmm1.d f* 1.0625f
                *(rdx_4 + 0x30) = zmm1.d
                zmm0.d = var_878.d.d f- zmm1.d
                *(rdx_4 + 0x34) = zmm0.d
                int32_t rcx_8 = var_818
                
                if (rcx_8 == 0)
                    zmm2 = data_142d3f660
                    var_8a8.o = 0.o
                    uint128_t var_8b8
                    var_878 = var_8b8.q
                    int128_t var_8d8
                    __builtin_memcpy(&var_8d8, 
                        "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x"
                    "00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f", 
                        0x20)
                    var_898 = zmm2
                    var_888 = zmm2[0]
                else
                    void* r9 = &var_868
                    
                    if (var_828 != 0)
                        r9 = var_828
                    
                    int64_t rax_35 = sx.q(rcx_8 - 1) << 6
                    var_8a8.o = *(rax_35 + r9)
                    var_898 = *(rax_35 + r9 + 0x10)
                    var_888 = (*(rax_35 + r9 + 0x20)).d
                    var_878 = (*(rax_35 + r9 + 0x30)).q
                    
                    if (0 != 0)
                        memmove((sx.q(rcx_8 - 1) << 6) + r9, (sx.q(rcx_8) << 6) + r9, 0 << 6)
                        rcx_8 = var_818
                    
                    var_818 = rcx_8 - 1
                    sub_1409da950(&var_868)
                
                r14 = var_8a8
                
                if (r14 != 0)
                    continue
                
                if (var_828 != 0)
                    sub_140a74f90(var_828)
                
                goto label_142647eb5
            
            goto label_142647f7c
        
        rbx_2 = *(r14 + 0x388)
        
        if (rbx_2 + 1 s<= 0x10 || var_888.d f<= *(arg1 + 0x410))
        label_142647f7c:
            *(r14 + 0x388) = rbx_2 + 1
            
            if (rbx_2 + 1 s> *(r14 + 0x38c))
                sub_142667630(r14, rbx_2)
            
            uint128_t* rax_41 = r14[0x38].q
            uint128_t* r8_2 = r14
            int128_t* r10_2 = var_930
            
            if (rax_41 != 0)
                r8_2 = rax_41
            
            int64_t rcx_18 = sx.q(rbx_2) * 0x38
            void* r8_3 = r8_2 + rcx_18
            
            if (r8_2 != neg.q(rcx_18))
                *r8_3 = *r10_2
                *(r8_3 + 0x10) = r10_2[1].q
                *(r8_3 + 0x18) = *(r10_2 + 0x18)
                *(r8_3 + 0x20) = r10_2[2].q
                void* rax_45 = *(r10_2 + 0x28)
                *(r8_3 + 0x28) = rax_45
                
                if (rax_45 != 0)
                    *(rax_45 + 8) += 1
                
                *(r8_3 + 0x30) = r10_2[3].d
            
            int64_t* rcx_19 = arg1 + 0x440
            int32_t rax_48 = *(arg1 + 0x418) + 0x38
            uint128_t* var_928 = r14
            *(arg1 + 0x418) = sx.q(rax_48)
            int32_t var_920_1 = *(r14 + 0x388) - 1
            zmm0 = var_928.o
            var_938 = r10_2[3].d
            int32_t* var_8f8 = &var_938
            void** var_8f0_1 = &var_928
            
            if (arg1 == 0)
                rcx_19 = 0x450
            
            var_928.o = zmm0
            result = sub_14263f9c0(rcx_19, &var_930, &var_8f8, nullptr)
        else
            void* var_488_1 = nullptr
            int32_t var_47c_1 = 0x10
            int32_t rdx_10 = 0
            int32_t var_480_1 = 0
            void* r8_5 = nullptr
            void var_808
            
            if (&var_808 != r14)
                int64_t i_4 = 7
                void var_478
                uint128_t* rax_54 = &var_478
                int64_t i_5 = 7
                void* rcx_21 = &var_808
                int64_t i
                
                do
                    rax_54 = &rax_54[8]
                    zmm0 = *rcx_21
                    zmm1 = *(rcx_21 + 0x10)
                    rcx_21 += 0x80
                    rax_54[-8] = zmm0
                    zmm0 = *(rcx_21 - 0x60)
                    rax_54[-7] = zmm1
                    zmm1 = *(rcx_21 - 0x50)
                    rax_54[-6] = zmm0
                    zmm0 = *(rcx_21 - 0x40)
                    rax_54[-5] = zmm1
                    zmm1 = *(rcx_21 - 0x30)
                    rax_54[-4] = zmm0
                    zmm0 = *(rcx_21 - 0x20)
                    rax_54[-3] = zmm1
                    zmm1 = *(rcx_21 - 0x10)
                    rax_54[-2] = zmm0
                    rax_54[-1] = zmm1
                    i = i_5
                    i_5 -= 1
                while (i != 1)
                uint128_t* rcx_22 = r14
                int64_t i_6 = 7
                *rax_54 = *rcx_21
                uint128_t* rax_55 = &var_808
                int64_t i_1
                
                do
                    rax_55 = &rax_55[8]
                    zmm0 = *rcx_22
                    zmm1 = rcx_22[1]
                    rcx_22 = &rcx_22[8]
                    rax_55[-8] = zmm0
                    zmm0 = rcx_22[-6]
                    rax_55[-7] = zmm1
                    zmm1 = rcx_22[-5]
                    rax_55[-6] = zmm0
                    zmm0 = rcx_22[-4]
                    rax_55[-5] = zmm1
                    zmm1 = rcx_22[-3]
                    rax_55[-4] = zmm0
                    zmm0 = rcx_22[-2]
                    rax_55[-3] = zmm1
                    zmm1 = rcx_22[-1]
                    rax_55[-2] = zmm0
                    rax_55[-1] = zmm1
                    i_1 = i_6
                    i_6 -= 1
                while (i_1 != 1)
                uint128_t* rcx_23 = &var_478
                *rax_55 = *rcx_22
                int128_t* rax_56 = r14
                int64_t i_2
                
                do
                    rax_56 = &rax_56[8]
                    zmm0 = *rcx_23
                    zmm1 = rcx_23[1]
                    rcx_23 = &rcx_23[8]
                    rax_56[-8] = zmm0
                    zmm0 = rcx_23[-6]
                    rax_56[-7] = zmm1
                    zmm1 = rcx_23[-5]
                    rax_56[-6] = zmm0
                    zmm0 = rcx_23[-4]
                    rax_56[-5] = zmm1
                    zmm1 = rcx_23[-3]
                    rax_56[-4] = zmm0
                    zmm0 = rcx_23[-2]
                    rax_56[-3] = zmm1
                    zmm1 = rcx_23[-1]
                    rax_56[-2] = zmm0
                    rax_56[-1] = zmm1
                    i_2 = i_4
                    i_4 -= 1
                while (i_2 != 1)
                rdx_10 = var_480_1
                r8_5 = var_488_1
                *rax_56 = *rcx_23
            
            *(arg1 + 0x418) = sx.q(*(arg1 + 0x418) - rdx_10 * 0x38)
            *(r14 + 0x3d8) = 0
            
            while (i_3 s>= 0)
                if (i_3 s>= rdx_10)
                    break
                
                void* rdx_11 = &var_808
                
                if (r8_5 != 0)
                    rdx_11 = r8_5
                
                sub_142647a10(arg1, rdx_11 + sx.q(i_3) * 0x38, r14, &var_898)
                rdx_10 = var_480_1
                i_3 += 1
                r8_5 = var_488_1
            
            sub_142647a10(arg1, var_930, r14, &var_898)
            result = sub_142644e30(&var_808)
        
        if (var_828 == 0)
            break
        
        result = sub_140a74f90(var_828)
        break
__security_check_cookie(rax_1 ^ &var_988)
return result
