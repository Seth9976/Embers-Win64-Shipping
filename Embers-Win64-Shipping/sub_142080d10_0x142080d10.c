// 函数: sub_142080d10
// 地址: 0x142080d10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sub_142087ec0(arg3, 0)
int64_t result_1 = sx.q(*(arg1 + 0x4a0))

if (result_1.d != 0)
    sub_141a00920(arg2, result_1.d, *(arg1 + 0x4a8), 0, 1)
    void* rdx_1 = nullptr
    void* var_f0_1 = nullptr
    
    if (*(arg1 + 0x468) s> 0)
        void* rax = sub_141f641a0(arg1, *(arg1 + 0x460), 0)
        rdx_1 = rax
        var_f0_1 = rax
    
    int32_t r8_1 = *(arg1 + 0x4c0)
    int32_t r14_1 = 0
    result = result_1
    
    if (result_1.d s> 0)
        int128_t zmm0_1 = 0xbf800000
        int64_t r13_1 = 0
        int128_t zmm6
        int128_t var_48_1 = zmm6
        int128_t zmm7
        int128_t var_58_1 = zmm7
        int128_t zmm8
        int128_t var_68_1 = zmm8
        float zmm9[0x4]
        float var_78_1[0x4] = zmm9
        int128_t zmm10
        int128_t var_88_1 = zmm10
        int128_t zmm11
        int128_t var_98_1 = zmm11
        int128_t zmm12
        int128_t var_a8_1 = zmm12
        int128_t zmm13
        int128_t var_b8_1 = zmm13
        int128_t zmm14
        int128_t var_c8_1 = zmm14
        int128_t zmm15
        int128_t var_d8_1 = zmm15
        
        do
            int32_t r15_1
            
            if (r14_1 s< 0 || r14_1 s>= *(arg1 + 0x4d8))
                r15_1 = r14_1
            else
                r15_1 = *(*(arg1 + 0x4d0) + (r13_1 << 2))
                result = result_1
            
            if (r15_1 != 0xffffffff)
                float var_104_1 = zmm0_1.d
                zmm14 = zmm0_1
                int128_t* rsi_3 = (r13_1 << 6) + *(arg1 + 0x498)
                zmm13 = zmm0_1
                zmm15 = zmm0_1
                
                if (rdx_1 != 0 && r14_1 s>= 0 && r14_1 s< *(rdx_1 + 0x28))
                    int64_t rax_2 = *(rdx_1 + 0x20)
                    int64_t rcx_4 = r13_1 * 2
                    zmm14 = *(rax_2 + (rcx_4 << 3))
                    zmm13 = *(rax_2 + (rcx_4 << 3) + 4)
                    zmm15 = *(rax_2 + (rcx_4 << 3) + 8)
                    var_104_1 = (*(rax_2 + (rcx_4 << 3) + 0xc)).d
                
                int64_t* rcx_5 = *arg2
                zmm9 = rsi_3[3].d
                zmm6 = *(rsi_3 + 0x34)
                zmm7 = *(rsi_3 + 0x38)
                int64_t rbx = arg2[1]
                zmm8.d = ((r8_1 * 0xbb38435 + 0x3619636b) u>> 9 | 0x3f800000).d f- 1f
                (*(*rcx_5 + 0x28))(rcx_5)
                int64_t* rcx_6 = *arg2
                (*(*rcx_6 + 0x20))(rcx_6)
                float temp0_1[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0xe1)
                temp0_1[0] = zmm6.d
                int64_t r12_1 = sx.q(r15_1)
                float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xc6)
                temp0_2[0] = zmm7.d
                float temp0_3[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0x27)
                temp0_3[0] = zmm8.d
                *(rbx + r12_1 * 0x10) = _mm_shuffle_ps(temp0_3, temp0_3, 0x39)
                zmm6 = *rsi_3
                zmm7 = *(rsi_3 + 4)
                zmm8 = *(rsi_3 + 8)
                zmm9 = rsi_3[1].d
                zmm10 = *(rsi_3 + 0x14)
                zmm11 = *(rsi_3 + 0x18)
                int64_t rdx_3 = *(*arg2[2] + 0x28)
                zmm12 = rsi_3[2].d
                int64_t rbx_1 = arg2[3]
                int32_t var_108_1 = (*(rsi_3 + 0x24)).d
                int32_t var_110_2 = (*(rsi_3 + 0x28)).d
                
                if (arg2[9].b == 0)
                    rdx_3()
                    int64_t* rcx_36 = arg2[2]
                    (*(*rcx_36 + 0x20))(rcx_36)
                    int64_t rax_59 = r12_1 * 0xc
                    *(rbx_1 + (rax_59 << 2)) = zmm6.d
                    *(rbx_1 + (rax_59 << 2) + 4) = zmm7.d
                    *(rbx_1 + (rax_59 << 2) + 8) = zmm8.d
                    *(rbx_1 + (rax_59 << 2) + 0xc) = 0
                    *(rbx_1 + (rax_59 << 2) + 0x10) = zmm9[0]
                    *(rbx_1 + (rax_59 << 2) + 0x14) = zmm10.d
                    *(rbx_1 + (rax_59 << 2) + 0x18) = zmm11.d
                    *(rbx_1 + (rax_59 << 2) + 0x1c) = 0
                    *(rbx_1 + (rax_59 << 2) + 0x20) = zmm12.d
                    *(rbx_1 + (rax_59 << 2) + 0x24) = var_108_1.d
                    *(rbx_1 + (rax_59 << 2) + 0x28) = var_110_2.d
                    *(rbx_1 + (rax_59 << 2) + 0x2c) = 0
                else
                    rdx_3()
                    int64_t* rcx_8 = arg2[2]
                    (*(*rcx_8 + 0x20))(rcx_8)
                    int32_t var_118_1 = zmm6.d
                    int64_t rdx_4 = r12_1 * 3
                    uint16_t r8_5 =
                        (var_118_1 u>> 0x1f).w << 0xf | (*(rbx_1 + (rdx_4 << 3)) & 0x7fff)
                    uint16_t rax_14 = (var_118_1 u>> 0x17).w
                    uint32_t rcx_9 = zx.d(rax_14.b)
                    
                    if (rcx_9 u<= 0x70)
                        r8_5 &= 0x8000
                        *(rbx_1 + (rdx_4 << 3)) = r8_5
                        
                        if (0x70 - rcx_9 + 0xe s<= 0x18)
                            int32_t r9_3 = (var_118_1 & 0x7fffff) | 0x800000
                            uint16_t rax_16 = ((r9_3 u>> (0x70 - rcx_9 + 0xe).b).w & 0x3ff) | r8_5
                            *(rbx_1 + (rdx_4 << 3)) = rax_16
                            
                            if (((r9_3 u>> ((0x70 - rcx_9).b + 0xd)).b & 1) != 0)
                                *(rbx_1 + (rdx_4 << 3)) = rax_16 + 1
                    else if (rcx_9 u< 0x8f)
                        *(rbx_1 + (rdx_4 << 3)) = ((var_118_1 u>> 0xd).w & 0x3ff)
                            | ((rax_14 - 0x10) & 0x1f) << 0xa | (r8_5 & 0x8000)
                    else
                        *(rbx_1 + (rdx_4 << 3)) = (r8_5 & 0xfbff) | 0x7bff
                    
                    int32_t var_118_2 = zmm7.d
                    uint16_t r8_7 =
                        (var_118_2 u>> 0x1f).w << 0xf | (*(rbx_1 + (rdx_4 << 3) + 2) & 0x7fff)
                    uint16_t rax_19 = (var_118_2 u>> 0x17).w
                    uint32_t rcx_12 = zx.d(rax_19.b)
                    
                    if (rcx_12 u<= 0x70)
                        r8_7 &= 0x8000
                        *(rbx_1 + (rdx_4 << 3) + 2) = r8_7
                        
                        if (0x70 - rcx_12 + 0xe s<= 0x18)
                            int32_t r9_8 = (var_118_2 & 0x7fffff) | 0x800000
                            uint16_t rax_21 = ((r9_8 u>> (0x70 - rcx_12 + 0xe).b).w & 0x3ff) | r8_7
                            *(rbx_1 + (rdx_4 << 3) + 2) = rax_21
                            
                            if (((r9_8 u>> ((0x70 - rcx_12).b + 0xd)).b & 1) != 0)
                                *(rbx_1 + (rdx_4 << 3) + 2) = rax_21 + 1
                    else if (rcx_12 u< 0x8f)
                        *(rbx_1 + (rdx_4 << 3) + 2) = ((var_118_2 u>> 0xd).w & 0x3ff)
                            | ((rax_19 - 0x10) & 0x1f) << 0xa | (r8_7 & 0x8000)
                    else
                        *(rbx_1 + (rdx_4 << 3) + 2) = (r8_7 & 0xfbff) | 0x7bff
                    
                    int32_t var_118_3 = zmm8.d
                    uint16_t r8_9 =
                        (var_118_3 u>> 0x1f).w << 0xf | (*(rbx_1 + (rdx_4 << 3) + 4) & 0x7fff)
                    uint16_t rax_24 = (var_118_3 u>> 0x17).w
                    uint32_t rcx_15 = zx.d(rax_24.b)
                    
                    if (rcx_15 u<= 0x70)
                        r8_9 &= 0x8000
                        *(rbx_1 + (rdx_4 << 3) + 4) = r8_9
                        
                        if (0x70 - rcx_15 + 0xe s<= 0x18)
                            int32_t r9_13 = (var_118_3 & 0x7fffff) | 0x800000
                            uint16_t rax_26 = ((r9_13 u>> (0x70 - rcx_15 + 0xe).b).w & 0x3ff) | r8_9
                            *(rbx_1 + (rdx_4 << 3) + 4) = rax_26
                            
                            if (((r9_13 u>> ((0x70 - rcx_15).b + 0xd)).b & 1) != 0)
                                *(rbx_1 + (rdx_4 << 3) + 4) = rax_26 + 1
                    else if (rcx_15 u< 0x8f)
                        *(rbx_1 + (rdx_4 << 3) + 4) = ((rax_24 - 0x10) & 0x1f) << 0xa
                            | ((var_118_3 u>> 0xd).w & 0x3ff) | (r8_9 & 0x8000)
                    else
                        *(rbx_1 + (rdx_4 << 3) + 4) = (r8_9 & 0xfbff) | 0x7bff
                    
                    float var_118_4 = zmm9[0]
                    *(rbx_1 + (rdx_4 << 3) + 6) = 0
                    uint16_t r8_11 =
                        (var_118_4 u>> 0x1f).w << 0xf | (*(rbx_1 + (rdx_4 << 3) + 8) & 0x7fff)
                    uint16_t rax_29 = (var_118_4 u>> 0x17).w
                    uint32_t rcx_18 = zx.d(rax_29.b)
                    
                    if (rcx_18 u<= 0x70)
                        r8_11 &= 0x8000
                        *(rbx_1 + (rdx_4 << 3) + 8) = r8_11
                        
                        if (0x70 - rcx_18 + 0xe s<= 0x18)
                            int32_t r9_17 = (var_118_4 & 0x7fffff) | 0x800000
                            uint16_t rax_31 =
                                ((r9_17 u>> (0x70 - rcx_18 + 0xe).b).w & 0x3ff) | r8_11
                            *(rbx_1 + (rdx_4 << 3) + 8) = rax_31
                            
                            if (((r9_17 u>> ((0x70 - rcx_18).b + 0xd)).b & 1) != 0)
                                *(rbx_1 + (rdx_4 << 3) + 8) = rax_31 + 1
                    else if (rcx_18 u< 0x8f)
                        *(rbx_1 + (rdx_4 << 3) + 8) = ((rax_29 - 0x10) & 0x1f) << 0xa
                            | ((var_118_4 u>> 0xd).w & 0x3ff) | (r8_11 & 0x8000)
                    else
                        *(rbx_1 + (rdx_4 << 3) + 8) = (r8_11 & 0xfbff) | 0x7bff
                    
                    int32_t var_118_5 = zmm10.d
                    uint16_t r8_13 =
                        (var_118_5 u>> 0x1f).w << 0xf | (*(rbx_1 + (rdx_4 << 3) + 0xa) & 0x7fff)
                    uint16_t rax_34 = (var_118_5 u>> 0x17).w
                    uint32_t rcx_21 = zx.d(rax_34.b)
                    
                    if (rcx_21 u<= 0x70)
                        r8_13 &= 0x8000
                        *(rbx_1 + (rdx_4 << 3) + 0xa) = r8_13
                        
                        if (0x70 - rcx_21 + 0xe s<= 0x18)
                            int32_t r9_23 = (var_118_5 & 0x7fffff) | 0x800000
                            uint16_t rax_36 =
                                ((r9_23 u>> (0x70 - rcx_21 + 0xe).b).w & 0x3ff) | r8_13
                            *(rbx_1 + (rdx_4 << 3) + 0xa) = rax_36
                            
                            if (((r9_23 u>> ((0x70 - rcx_21).b + 0xd)).b & 1) != 0)
                                *(rbx_1 + (rdx_4 << 3) + 0xa) = rax_36 + 1
                    else if (rcx_21 u< 0x8f)
                        *(rbx_1 + (rdx_4 << 3) + 0xa) = ((var_118_5 u>> 0xd).w & 0x3ff)
                            | ((rax_34 - 0x10) & 0x1f) << 0xa | (r8_13 & 0x8000)
                    else
                        *(rbx_1 + (rdx_4 << 3) + 0xa) = (r8_13 & 0xfbff) | 0x7bff
                    
                    int32_t var_118_6 = zmm11.d
                    uint16_t r8_15 =
                        (var_118_6 u>> 0x1f).w << 0xf | (*(rbx_1 + (rdx_4 << 3) + 0xc) & 0x7fff)
                    uint16_t rax_39 = (var_118_6 u>> 0x17).w
                    uint32_t rcx_24 = zx.d(rax_39.b)
                    
                    if (rcx_24 u<= 0x70)
                        r8_15 &= 0x8000
                        *(rbx_1 + (rdx_4 << 3) + 0xc) = r8_15
                        
                        if (0x70 - rcx_24 + 0xe s<= 0x18)
                            int32_t r9_27 = (var_118_6 & 0x7fffff) | 0x800000
                            uint16_t rax_41 =
                                ((r9_27 u>> (0x70 - rcx_24 + 0xe).b).w & 0x3ff) | r8_15
                            *(rbx_1 + (rdx_4 << 3) + 0xc) = rax_41
                            
                            if (((r9_27 u>> ((0x70 - rcx_24).b + 0xd)).b & 1) != 0)
                                *(rbx_1 + (rdx_4 << 3) + 0xc) = rax_41 + 1
                    else if (rcx_24 u< 0x8f)
                        *(rbx_1 + (rdx_4 << 3) + 0xc) = ((rax_39 - 0x10) & 0x1f) << 0xa
                            | ((var_118_6 u>> 0xd).w & 0x3ff) | (r8_15 & 0x8000)
                    else
                        *(rbx_1 + (rdx_4 << 3) + 0xc) = (r8_15 & 0xfbff) | 0x7bff
                    
                    int32_t var_118_7 = zmm12.d
                    *(rbx_1 + (rdx_4 << 3) + 0xe) = 0
                    uint16_t r8_17 =
                        (var_118_7 u>> 0x1f).w << 0xf | (*(rbx_1 + (rdx_4 << 3) + 0x10) & 0x7fff)
                    uint16_t rax_44 = (var_118_7 u>> 0x17).w
                    uint32_t rcx_27 = zx.d(rax_44.b)
                    
                    if (rcx_27 u<= 0x70)
                        r8_17 &= 0x8000
                        *(rbx_1 + (rdx_4 << 3) + 0x10) = r8_17
                        
                        if (0x70 - rcx_27 + 0xe s<= 0x18)
                            int32_t r9_33 = (var_118_7 & 0x7fffff) | 0x800000
                            uint16_t rax_46 =
                                ((r9_33 u>> (0x70 - rcx_27 + 0xe).b).w & 0x3ff) | r8_17
                            *(rbx_1 + (rdx_4 << 3) + 0x10) = rax_46
                            
                            if (((r9_33 u>> ((0x70 - rcx_27).b + 0xd)).b & 1) != 0)
                                *(rbx_1 + (rdx_4 << 3) + 0x10) = rax_46 + 1
                    else if (rcx_27 u< 0x8f)
                        *(rbx_1 + (rdx_4 << 3) + 0x10) = ((var_118_7 u>> 0xd).w & 0x3ff)
                            | ((rax_44 - 0x10) & 0x1f) << 0xa | (r8_17 & 0x8000)
                    else
                        *(rbx_1 + (rdx_4 << 3) + 0x10) = (r8_17 & 0xfbff) | 0x7bff
                    
                    int32_t var_118_8 = var_108_1.d
                    uint16_t r8_19 =
                        (var_118_8 u>> 0x1f).w << 0xf | (*(rbx_1 + (rdx_4 << 3) + 0x12) & 0x7fff)
                    uint16_t rax_49 = (var_118_8 u>> 0x17).w
                    uint32_t rcx_30 = zx.d(rax_49.b)
                    
                    if (rcx_30 u<= 0x70)
                        r8_19 &= 0x8000
                        *(rbx_1 + (rdx_4 << 3) + 0x12) = r8_19
                        
                        if (0x70 - rcx_30 + 0xe s<= 0x18)
                            int32_t r9_37 = (var_118_8 & 0x7fffff) | 0x800000
                            uint16_t rax_51 =
                                ((r9_37 u>> (0x70 - rcx_30 + 0xe).b).w & 0x3ff) | r8_19
                            *(rbx_1 + (rdx_4 << 3) + 0x12) = rax_51
                            
                            if (((r9_37 u>> ((0x70 - rcx_30).b + 0xd)).b & 1) != 0)
                                *(rbx_1 + (rdx_4 << 3) + 0x12) = rax_51 + 1
                    else if (rcx_30 u< 0x8f)
                        *(rbx_1 + (rdx_4 << 3) + 0x12) = ((var_118_8 u>> 0xd).w & 0x3ff)
                            | ((rax_49 - 0x10) & 0x1f) << 0xa | (r8_19 & 0x8000)
                    else
                        *(rbx_1 + (rdx_4 << 3) + 0x12) = (r8_19 & 0xfbff) | 0x7bff
                    
                    int32_t var_118_9 = var_110_2.d
                    uint16_t r8_21 =
                        (var_118_9 u>> 0x1f).w << 0xf | (*(rbx_1 + (rdx_4 << 3) + 0x14) & 0x7fff)
                    uint16_t rax_54 = (var_118_9 u>> 0x17).w
                    uint32_t rcx_33 = zx.d(rax_54.b)
                    
                    if (rcx_33 u<= 0x70)
                        r8_21 &= 0x8000
                        *(rbx_1 + (rdx_4 << 3) + 0x14) = r8_21
                        
                        if (0x70 - rcx_33 + 0xe s> 0x18)
                            *(rbx_1 + (rdx_4 << 3) + 0x16) = 0
                        else
                            int32_t r9_43 = (var_118_9 & 0x7fffff) | 0x800000
                            uint16_t rax_56 =
                                ((r9_43 u>> (0x70 - rcx_33 + 0xe).b).w & 0x3ff) | r8_21
                            *(rbx_1 + (rdx_4 << 3) + 0x14) = rax_56
                            
                            if (((r9_43 u>> ((0x70 - rcx_33).b + 0xd)).b & 1) == 0)
                                *(rbx_1 + (rdx_4 << 3) + 0x16) = 0
                            else
                                *(rbx_1 + (rdx_4 << 3) + 0x14) = rax_56 + 1
                                *(rbx_1 + (rdx_4 << 3) + 0x16) = 0
                    else if (rcx_33 u< 0x8f)
                        *(rbx_1 + (rdx_4 << 3) + 0x14) = ((var_118_9 u>> 0xd).w & 0x3ff)
                            | ((rax_54 - 0x10) & 0x1f) << 0xa | (r8_21 & 0x8000)
                        *(rbx_1 + (rdx_4 << 3) + 0x16) = 0
                    else
                        *(rbx_1 + (rdx_4 << 3) + 0x14) = (r8_21 & 0xfbff) | 0x7bff
                        *(rbx_1 + (rdx_4 << 3) + 0x16) = 0
                
                int64_t* rcx_37 = arg2[4]
                int64_t rbx_2 = arg2[5]
                (*(*rcx_37 + 0x28))(rcx_37)
                int64_t* rcx_38 = arg2[4]
                (*(*rcx_38 + 0x20))(rcx_38)
                int512_t zmm2
                zmm2.o = 0x46fffe00
                zmm14.d = zmm14.d f* 32767f
                int32_t rcx_39 = int.d(zmm14.d)
                int16_t rax_62
                
                if (rcx_39 s>= 0xffff8000)
                    rax_62 = 0x7fff
                    
                    if (rcx_39 s< 0x7fff)
                        rax_62 = rcx_39.w
                else
                    rax_62 = -0x8000
                
                zmm13.d = zmm13.d f* 32767f
                *(rbx_2 + (r12_1 << 3)) = rax_62
                int32_t rcx_40 = int.d(zmm13.d)
                int16_t rax_63
                
                if (rcx_40 s>= 0xffff8000)
                    rax_63 = 0x7fff
                    
                    if (rcx_40 s< 0x7fff)
                        rax_63 = rcx_40.w
                else
                    rax_63 = -0x8000
                
                zmm15.d = zmm15.d f* 32767f
                *(rbx_2 + (r12_1 << 3) + 2) = rax_63
                int32_t rcx_41 = int.d(zmm15.d)
                int16_t rax_64
                
                if (rcx_41 s>= 0xffff8000)
                    rax_64 = 0x7fff
                    
                    if (rcx_41 s< 0x7fff)
                        rax_64 = rcx_41.w
                else
                    rax_64 = -0x8000
                
                *(rbx_2 + (r12_1 << 3) + 4) = rax_64
                int32_t rcx_42 = int.d(var_104_1 * 32767f)
                int16_t rax_65
                
                if (rcx_42 s>= 0xffff8000)
                    rax_65 = 0x7fff
                    
                    if (rcx_42 s< 0x7fff)
                        rax_65 = rcx_42.w
                else
                    rax_65 = -0x8000
                
                *(rbx_2 + (r12_1 << 3) + 6) = rax_65
                int32_t rcx_43 = *(arg2 + 0x44)
                int32_t rsi_4 = 0
                
                if (rcx_43 s> 0)
                    int32_t rax_72
                    
                    do
                        rax_72 = rcx_43
                        
                        if (rsi_4 s< rcx_43)
                            int64_t* rcx_44 = arg2[6]
                            int64_t rbx_3 = arg2[7]
                            (*(*rcx_44 + 0x28))(rcx_44)
                            int64_t* rcx_45 = arg2[6]
                            (*(*rcx_45 + 0x20))(rcx_45)
                            *(rbx_3 + (sx.q(*(arg2 + 0x44) * r15_1 + rsi_4) << 2)) = 0
                            rax_72 = *(arg2 + 0x44)
                        
                        rsi_4 += 1
                        rcx_43 = rax_72
                    while (rsi_4 s< rax_72)
                
                int32_t rdx_5 = *(arg1 + 0x4a8)
                int32_t rsi_5 = 0
                
                if (rdx_5 s> 0)
                    do
                        zmm6 = *(*(arg1 + 0x4b0) + (sx.q(rdx_5 * r14_1 + rsi_5) << 2))
                        
                        if (rsi_5 s< *(arg2 + 0x44))
                            int64_t* rcx_47 = arg2[6]
                            int64_t rbx_4 = arg2[7]
                            (*(*rcx_47 + 0x28))(rcx_47)
                            int64_t* rcx_48 = arg2[6]
                            (*(*rcx_48 + 0x20))(rcx_48)
                            *(rbx_4 + (sx.q(*(arg2 + 0x44) * r15_1 + rsi_5) << 2)) = zmm6.d
                            rdx_5 = *(arg1 + 0x4a8)
                        
                        rsi_5 += 1
                    while (rsi_5 s< rdx_5)
                
                r8_1 = r8_1 * 0xbb38435 + 0x3619636b
                result = result_1
                zmm0_1 = 0xbf800000
            
            rdx_1 = var_f0_1
            r14_1 += 1
            r13_1 += 1
        while (r13_1 s< result)

return result
