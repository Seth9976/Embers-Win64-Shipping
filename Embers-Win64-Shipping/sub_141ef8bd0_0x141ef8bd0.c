// 函数: sub_141ef8bd0
// 地址: 0x141ef8bd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm6 = arg2
int32_t var_88
int32_t var_78
uint64_t var_68

if (*(arg1 + 0x16a) == 3)
    void* rax = arg1[0x16]
    int32_t* rax_1
    uint128_t zmm0
    
    if (rax == 0)
        int32_t var_60_1 = data_143dbb200
        rax_1 = &var_68
        var_68 = data_143dbb1f8.q
    else
        uint128_t zmm2 = *(rax + 0x1d0)
        rax_1 = &var_88
        var_88 = zmm2.d
        zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
        int32_t var_80_1 = _mm_shuffle_ps(zmm2, zmm2, 0xaa).d
        int32_t var_84_1 = zmm0.d
    
    int32_t var_70_1 = rax_1[2]
    int32_t var_80_2 = *(arg1 + 0xcc)
    var_78.q = *rax_1
    zmm0 = zx.o(*(arg1 + 0xc4))
    var_88.q = zmm0.q
    (*(*arg1 + 0x958))(zmm0)
    int64_t r8_1 = *arg1
    (*(r8_1 + 0x5b0))(arg1, zx.q(*(arg1[0x29] + 0x328)), r8_1)
    (*(*arg1 + 0x460))(arg1)
    void* rcx_2 = arg1[0x29]
    *(arg1 + 0x387) &= 0xdf
    
    if (rcx_2 != 0)
        sub_141ee04e0(rcx_2 + 0x410, 0)
        sub_141ffd2b0(&arg1[0x9b])
        sub_141ffd2b0(arg1[0x29] + 0x390)
    
    (*(*arg1 + 0x908))(arg1, zmm6, &var_78, &var_88)
    (*(*arg1 + 0x910))(arg1, zmm6, &var_78, &var_88)
    void* rcx_9 = arg1[0x16]
    int32_t var_60_2
    
    if (rcx_9 == 0)
        int32_t rax_10 = data_143dbb200
        var_68 = data_143dbb1f8.q
        var_60_2 = rax_10
    else
        arg2 = *(rcx_9 + 0x1d0)
        var_68.d = arg2.d
        zmm0 = _mm_shuffle_ps(arg2, arg2, 0x55)
        var_60_2 = _mm_shuffle_ps(arg2, arg2, 0xaa).d
        var_68:4.d = zmm0.d
    
    arg1[0x4a] = var_68
    arg1[0x4b].d = var_60_2
    
    if (rcx_9 == 0)
        var_68.o = data_14399f720
    else
        var_68.o = *(rcx_9 + 0x1c0)
    
    int32_t rax_12 = *(arg1 + 0xcc)
    *(arg1 + 0x240) = var_68.o
    *(arg1 + 0x25c) = *(arg1 + 0xc4)
    *(arg1 + 0x264) = rax_12
    return rax_12

uint64_t rax_14

if (sub_141ea5fd0(arg1[0x29]) == 0)
    rax_14 = sub_142008300(&arg1[0x9b])
    char rcx_16 = *(arg1 + 0x389)
    uint128_t var_58
    uint128_t zmm0_1
    
    if (rax_14.b == 0)
        if (rcx_16 s< 0)
            *(arg1 + 0x389) = rcx_16 & 0x7f
            sub_141ee04e0(arg1[0x29] + 0x410, 0)
            int64_t* rcx_29 = arg1[0x29]
            (*(*rcx_29 + 0x420))(rcx_29)
            int64_t* rcx_30 = arg1[0x29]
            (*(*rcx_30 + 0x768))(rcx_30)
            int64_t r8_8 = *arg1
            rax_14 = (*(r8_8 + 0x5b0))(arg1, zx.q(*(arg1[0x29] + 0x328)), r8_8)
        
        void* rbx_3 = arg1[0x29]
        
        if ((*(rbx_3 + 0x58) & 0x10) != 0)
            void* rcx_32 = arg1[0x16]
            
            if (rcx_32 != 0)
                int64_t* rbx_4 = *(rbx_3 + 0x280)
                int32_t rax_28
                
                if (rbx_4 == 0)
                    zmm0_1 = zx.o(data_143dbb1f8.q)
                    rax_28 = data_143dbb200
                else
                    zmm0_1 = zx.o(*(rbx_4 + 0x11c))
                    rax_28 = *(rbx_4 + 0x124)
                
                char r14_3 = *(arg1 + 0x1f1)
                int64_t* rdx_10 = nullptr
                *(rcx_32 + 0x1c0)
                
                if (r14_3 s>= 0)
                    rdx_10 = rbx_4
                
                var_68 = zmm0_1.q
                int512_t zmm1
                int128_t zmm6_1
                zmm1, zmm6_1 = sub_141f2dda0(&var_58, rdx_10)
                char rax_29 = sub_141dce090(arg1[0x29])
                char rax_30
                
                if (rax_29 == 0)
                    rax_30 = sub_141ea5ff0(arg1[0x29])
                
                if (rax_29 != 0 || rax_30 != 0)
                    zmm1.o = zmm6_1
                    (*(*arg1 + 0x928))(arg1, zmm1)
                else
                    zmm1.o = zmm6_1
                    (*(*arg1 + 0x938))(arg1, zmm1)
                
                float zmm7_1[0x4]
                float zmm8_1[0x4]
                float zmm9_1[0x4]
                float zmm10_1[0x4]
                rax_14, zmm6, zmm7_1, zmm8_1, zmm9_1, zmm10_1 = sub_141f2f360(&var_58)
                
                if (r14_3 s>= 0 && *(arg1 + 0x16a) == 1)
                    rax_14 = arg1[0x16]
                    
                    if (rax_14 != 0)
                        float zmm3_1[0x4] = *(rax_14 + 0x1c0)
                        rax_14 = arg1[0x29]
                        
                        if (rbx_4 == *(rax_14 + 0x280))
                            uint32_t zmm4_1[0x4] = data_143f3a9d0
                            arg2 = _mm_sub_ps(zmm3_1, zmm7_1)
                            float temp0_10[0x4] = _mm_shuffle_ps(0x358637bd, 0x358637bd, 0)
                            rax_14 = zx.q(_mm_movemask_ps(_mm_cmpeq_ps(temp0_10, 
                                _mm_and_ps(arg2, zmm4_1), 1)))
                            
                            if (rax_14.d != 0)
                                zmm7_1 = _mm_and_ps(_mm_add_ps(zmm7_1, zmm3_1), zmm4_1)
                                rax_14 = zx.q(_mm_movemask_ps(_mm_cmpeq_ps(temp0_10, zmm7_1, 1)))
                                
                                if (rax_14.d != 0)
                                    rax_14 = arg1[0x97]
                                    
                                    if (rax_14 != 0)
                                        float zmm0_3[0x4] = zx.o(var_68)
                                        *(rax_14 + 0xe0) = zmm3_1
                                        int64_t* rcx_39 = arg1[0x29]
                                        int32_t var_70_3 = rax_28
                                        var_78.q = zmm0_3.q
                                        rax_14, zmm6 = sub_141f48240(rbx_4, &var_78, 
                                            (*(*rcx_39 + 0x778))(rcx_39, &var_58), 0, zmm7_1, 
                                            zmm8_1, zmm9_1, zmm10_1, 0, 0)
    else
        void* rax_16 = arg1[0x16]
        *(arg1 + 0x389) = rcx_16 | 0x80
        int64_t* rcx_17 = arg1[0x29]
        int64_t r15
        r15.b = 0
        arg2 = *(rax_16 + 0x1d0)
        var_78 = arg2.d
        int32_t var_74_1 = _mm_shuffle_ps(arg2, arg2, 0x55).d
        int32_t var_70_2 = _mm_shuffle_ps(arg2, arg2, 0xaa).d
        var_58 = *(rax_16 + 0x1c0)
        
        if (rcx_17[0x83].d s> 0)
            int128_t* rdi_3 = rcx_17[0x82] - 0xa0 + sx.q(rcx_17[0x83].d) * 0xa0
            char rax_18 = sub_141eabc30(rcx_17, rdi_3)
            *(arg1 + 0x22c) = *(rdi_3 + 0x88)
            *(arg1 + 0x234) = rdi_3[9].d
            r15 = 0
            
            if (rax_18 != 0)
                r15 = 1
            
            int64_t* rcx_18 = arg1[0x29]
            (*(*rcx_18 + 0x430))(rcx_18, rdi_3 + 0x94)
            *(arg1 + 0x25c) = *(rdi_3 + 0x94)
            *(arg1 + 0x264) = *(rdi_3 + 0x9c)
            zmm6 = sub_141ede080(arg1, &arg1[0x9b], &rdi_3[5], *rdi_3)
            sub_142001510(&rdi_3[5])
            sub_142012a10(&arg1[0x9b], &rdi_3[5], 1)
            void* r14_2 = arg1[0x29]
            
            if (*(r14_2 + 0x41c) s< 0)
                sub_141ee04e0(r14_2 + 0x410, 0)
            else
                int32_t i_1 = *(r14_2 + 0x418)
                
                if (i_1 != 0)
                    void* rbx_2 = *(r14_2 + 0x410) + 0x58
                    int32_t i
                    
                    do
                        *(rbx_2 - 8) = &data_143258940
                        sub_140596d80(rbx_2 + 0x10)
                        sub_140596d80(rbx_2)
                        rbx_2 += 0xa0
                        i = i_1
                        i_1 -= 1
                    while (i != 1)
                
                *(r14_2 + 0x418) = 0
        
        rax_14 = (*(*arg1 + 0x928))(arg1, zmm6)
        
        if (r15.b != 0)
            void* rax_23 = arg1[0x16]
            var_88.o = *(rax_23 + 0x1c0)
            arg2 = *(rax_23 + 0x1d0)
            int64_t rax_24 = arg1[0x28]
            zmm0_1 = _mm_shuffle_ps(arg2, arg2, 0x55)
            var_68.d = arg2.d
            int32_t var_60_3 = _mm_shuffle_ps(arg2, arg2, 0xaa).d
            var_68:4.d = zmm0_1.d
            rax_14 = (*(rax_24 + 0x20))(zmm0_1, &var_78, &var_58, &var_68, &var_88)
label_141ef92aa:
    
    if (*(arg1 + 0x1f1) s>= 0)
        return (*(*arg1 + 0x958))(arg1, zmm6)
else
    *(arg1 + 0x389) |= 0x80
    rax_14 = arg1[0x29]
    
    if (rax_14 == 0 || *(rax_14 + 0x280) == 0)
    label_141ef8e19:
        
        if (arg1[0xb4].b != 0)
            rax_14, zmm6 = sub_141ef88d0(arg1, zmm6, &arg1[0xb6])
        
        int64_t* rcx_14 = arg1[0x29]
        
        if (rcx_14 != 0 && rcx_14[0x83].d s> 0)
            rax_14, zmm6 = sub_141eadf20(rcx_14)
        
        goto label_141ef92aa
    
    zmm6 = sub_141efcd30(arg1, zmm6)
    rax_14 = (*(*arg1 + 0x5c0))(arg1)
    
    if (rax_14.b != 0)
        goto label_141ef8e19

return rax_14
