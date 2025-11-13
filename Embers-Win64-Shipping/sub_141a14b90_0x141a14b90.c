// 函数: sub_141a14b90
// 地址: 0x141a14b90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r15 = sx.q(arg2)
int64_t r14 = r15
int32_t rax_1 = *(arg1 + 0xf0) * 0xbb38435 + 0x3619636b
int32_t result
int128_t zmm6
int128_t zmm7
int128_t zmm8
float zmm9[0x4]
int128_t zmm10
int128_t zmm11
int128_t zmm12
int128_t zmm13
int128_t zmm14

if (*(arg1 + 0x170) == 0)
    *(arg1 + 0xf0) = rax_1
    int64_t rbx_4 = *(arg1 + 0x1c0)
    int64_t* rcx_45 = *(arg1 + 0x1b8)
    zmm9 = arg3[3].d
    zmm6 = *(arg3 + 0x34)
    zmm7 = *(arg3 + 0x38)
    zmm8.d = (rax_1 u>> 9 | 0x3f800000).d f- 1f
    (*(*rcx_45 + 0x28))(rcx_45)
    int64_t* rcx_46 = *(arg1 + 0x1b8)
    (*(*rcx_46 + 0x20))(rcx_46)
    float temp0_4[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0xe1)
    temp0_4[0] = zmm6.d
    float temp0_5[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0xc6)
    temp0_5[0] = zmm7.d
    float temp0_6[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0x27)
    temp0_6[0] = zmm8.d
    *(rbx_4 + r15 * 0x10) = _mm_shuffle_ps(temp0_6, temp0_6, 0x39)
    zmm6 = *arg3
    zmm7 = *(arg3 + 4)
    zmm8 = *(arg3 + 8)
    zmm9 = arg3[1].d
    zmm10 = *(arg3 + 0x14)
    zmm11 = *(arg3 + 0x18)
    zmm12 = arg3[2].d
    zmm13 = *(arg3 + 0x24)
    zmm14 = *(arg3 + 0x28)
    int64_t rdx_5 = *(**(arg1 + 0x1c8) + 0x28)
    int64_t rbx_5 = *(arg1 + 0x1d0)
    
    if (*(arg1 + 0x200) == 0)
        rdx_5()
        int64_t* rcx_81 = *(arg1 + 0x1c8)
        (*(*rcx_81 + 0x20))(rcx_81)
        int64_t rax_132 = r15 * 0xc
        *(rbx_5 + (rax_132 << 2)) = zmm6.d
        *(rbx_5 + (rax_132 << 2) + 4) = zmm7.d
        *(rbx_5 + (rax_132 << 2) + 8) = zmm8.d
        *(rbx_5 + (rax_132 << 2) + 0xc) = 0
        *(rbx_5 + (rax_132 << 2) + 0x10) = zmm9[0]
        *(rbx_5 + (rax_132 << 2) + 0x14) = zmm10.d
        *(rbx_5 + (rax_132 << 2) + 0x18) = zmm11.d
        *(rbx_5 + (rax_132 << 2) + 0x1c) = 0
        *(rbx_5 + (rax_132 << 2) + 0x20) = zmm12.d
        *(rbx_5 + (rax_132 << 2) + 0x24) = zmm13.d
        *(rbx_5 + (rax_132 << 2) + 0x28) = zmm14.d
        *(rbx_5 + (rax_132 << 2) + 0x2c) = 0
    else
        rdx_5()
        int64_t* rcx_48 = *(arg1 + 0x1c8)
        (*(*rcx_48 + 0x20))(rcx_48)
        int64_t rdx_6 = r15 * 3
        int32_t var_128_16 = zmm6.d
        uint16_t r9_20 = (var_128_16 u>> 0x1f).w << 0xf | (*(rbx_5 + (rdx_6 << 3)) & 0x7fff)
        uint16_t rax_82 = (var_128_16 u>> 0x17).w
        uint32_t rcx_49 = zx.d(rax_82.b)
        
        if (rcx_49 u<= 0x70)
            r9_20 &= 0x8000
            *(rbx_5 + (rdx_6 << 3)) = r9_20
            
            if (0x70 - rcx_49 + 0xe s<= 0x18)
                int32_t r10_48 = (var_128_16 & 0x7fffff) | 0x800000
                uint16_t rax_84 = ((r10_48 u>> (0x70 - rcx_49 + 0xe).b).w & 0x3ff) | r9_20
                *(rbx_5 + (rdx_6 << 3)) = rax_84
                
                if (((r10_48 u>> ((0x70 - rcx_49).b + 0xd)).b & 1) != 0)
                    *(rbx_5 + (rdx_6 << 3)) = rax_84 + 1
        else if (rcx_49 u< 0x8f)
            r9_20 ^= ((rax_82 - 0x10) << 0xa ^ r9_20) & 0x7c00
            *(rbx_5 + (rdx_6 << 3)) = (((var_128_16 u>> 0xd).w ^ r9_20) & 0x3ff) ^ r9_20
        else
            *(rbx_5 + (rdx_6 << 3)) = (r9_20 & 0xfbff) | 0x7bff
        
        int32_t var_128_17 = zmm7.d
        uint16_t r9_22 = (var_128_17 u>> 0x1f).w << 0xf | (*(rbx_5 + (rdx_6 << 3) + 2) & 0x7fff)
        uint16_t rax_87 = (var_128_17 u>> 0x17).w
        uint32_t rcx_52 = zx.d(rax_87.b)
        
        if (rcx_52 u<= 0x70)
            r9_22 &= 0x8000
            *(rbx_5 + (rdx_6 << 3) + 2) = r9_22
            
            if (0x70 - rcx_52 + 0xe s<= 0x18)
                int32_t r10_53 = (var_128_17 & 0x7fffff) | 0x800000
                uint16_t rax_89 = ((r10_53 u>> (0x70 - rcx_52 + 0xe).b).w & 0x3ff) | r9_22
                *(rbx_5 + (rdx_6 << 3) + 2) = rax_89
                
                if (((r10_53 u>> ((0x70 - rcx_52).b + 0xd)).b & 1) != 0)
                    *(rbx_5 + (rdx_6 << 3) + 2) = rax_89 + 1
        else if (rcx_52 u< 0x8f)
            r9_22 ^= ((rax_87 - 0x10) << 0xa ^ r9_22) & 0x7c00
            *(rbx_5 + (rdx_6 << 3) + 2) = (((var_128_17 u>> 0xd).w ^ r9_22) & 0x3ff) ^ r9_22
        else
            *(rbx_5 + (rdx_6 << 3) + 2) = (r9_22 & 0xfbff) | 0x7bff
        
        int32_t var_128_18 = zmm8.d
        uint16_t r9_24 = (var_128_18 u>> 0x1f).w << 0xf | (*(rbx_5 + (rdx_6 << 3) + 4) & 0x7fff)
        uint16_t rax_92 = (var_128_18 u>> 0x17).w
        uint32_t rcx_55 = zx.d(rax_92.b)
        
        if (rcx_55 u<= 0x70)
            r9_24 &= 0x8000
            *(rbx_5 + (rdx_6 << 3) + 4) = r9_24
            
            if (0x70 - rcx_55 + 0xe s<= 0x18)
                int32_t r10_58 = (var_128_18 & 0x7fffff) | 0x800000
                uint16_t rax_94 = ((r10_58 u>> (0x70 - rcx_55 + 0xe).b).w & 0x3ff) | r9_24
                *(rbx_5 + (rdx_6 << 3) + 4) = rax_94
                
                if (((r10_58 u>> ((0x70 - rcx_55).b + 0xd)).b & 1) != 0)
                    *(rbx_5 + (rdx_6 << 3) + 4) = rax_94 + 1
        else if (rcx_55 u< 0x8f)
            r9_24 ^= ((rax_92 - 0x10) << 0xa ^ r9_24) & 0x7c00
            *(rbx_5 + (rdx_6 << 3) + 4) = (((var_128_18 u>> 0xd).w ^ r9_24) & 0x3ff) ^ r9_24
        else
            *(rbx_5 + (rdx_6 << 3) + 4) = (r9_24 & 0xfbff) | 0x7bff
        
        float var_128_19 = zmm9[0]
        *(rbx_5 + (rdx_6 << 3) + 6) = 0
        uint16_t r9_26 = (var_128_19 u>> 0x1f).w << 0xf | (*(rbx_5 + (rdx_6 << 3) + 8) & 0x7fff)
        uint16_t rax_97 = (var_128_19 u>> 0x17).w
        uint32_t rcx_58 = zx.d(rax_97.b)
        
        if (rcx_58 u<= 0x70)
            r9_26 &= 0x8000
            *(rbx_5 + (rdx_6 << 3) + 8) = r9_26
            
            if (0x70 - rcx_58 + 0xe s<= 0x18)
                int32_t r10_63 = (var_128_19 & 0x7fffff) | 0x800000
                uint16_t rax_100 = ((r10_63 u>> (0x70 - rcx_58 + 0xe).b).w & 0x3ff) | r9_26
                *(rbx_5 + (rdx_6 << 3) + 8) = rax_100
                
                if (((r10_63 u>> ((0x70 - rcx_58).b + 0xd)).b & 1) != 0)
                    *(rbx_5 + (rdx_6 << 3) + 8) = rax_100 + 1
        else if (rcx_58 u< 0x8f)
            r9_26 ^= ((rax_97 - 0x10) << 0xa ^ r9_26) & 0x7c00
            *(rbx_5 + (rdx_6 << 3) + 8) = (((var_128_19 u>> 0xd).w ^ r9_26) & 0x3ff) ^ r9_26
        else
            *(rbx_5 + (rdx_6 << 3) + 8) = (r9_26 & 0xfbff) | 0x7bff
        
        int32_t var_128_21 = zmm10.d
        uint16_t r9_28 = (var_128_21 u>> 0x1f).w << 0xf | (*(rbx_5 + (rdx_6 << 3) + 0xa) & 0x7fff)
        uint16_t rax_103 = (var_128_21 u>> 0x17).w
        uint32_t rcx_62 = zx.d(rax_103.b)
        
        if (rcx_62 u<= 0x70)
            r9_28 &= 0x8000
            *(rbx_5 + (rdx_6 << 3) + 0xa) = r9_28
            
            if (0x70 - rcx_62 + 0xe s<= 0x18)
                int32_t r10_68 = (var_128_21 & 0x7fffff) | 0x800000
                uint16_t rax_106 = ((r10_68 u>> (0x70 - rcx_62 + 0xe).b).w & 0x3ff) | r9_28
                *(rbx_5 + (rdx_6 << 3) + 0xa) = rax_106
                
                if (((r10_68 u>> ((0x70 - rcx_62).b + 0xd)).b & 1) != 0)
                    *(rbx_5 + (rdx_6 << 3) + 0xa) = rax_106 + 1
        else if (rcx_62 u< 0x8f)
            r9_28 ^= ((rax_103 - 0x10) << 0xa ^ r9_28) & 0x7c00
            *(rbx_5 + (rdx_6 << 3) + 0xa) = (((var_128_21 u>> 0xd).w ^ r9_28) & 0x3ff) ^ r9_28
        else
            *(rbx_5 + (rdx_6 << 3) + 0xa) = (r9_28 & 0xfbff) | 0x7bff
        
        int32_t var_128_23 = zmm11.d
        uint16_t r9_30 = (var_128_23 u>> 0x1f).w << 0xf | (*(rbx_5 + (rdx_6 << 3) + 0xc) & 0x7fff)
        uint16_t rax_109 = (var_128_23 u>> 0x17).w
        uint32_t rcx_66 = zx.d(rax_109.b)
        
        if (rcx_66 u<= 0x70)
            r9_30 &= 0x8000
            *(rbx_5 + (rdx_6 << 3) + 0xc) = r9_30
            
            if (0x70 - rcx_66 + 0xe s<= 0x18)
                int32_t r10_73 = (var_128_23 & 0x7fffff) | 0x800000
                uint16_t rax_112 = ((r10_73 u>> (0x70 - rcx_66 + 0xe).b).w & 0x3ff) | r9_30
                *(rbx_5 + (rdx_6 << 3) + 0xc) = rax_112
                
                if (((r10_73 u>> ((0x70 - rcx_66).b + 0xd)).b & 1) != 0)
                    *(rbx_5 + (rdx_6 << 3) + 0xc) = rax_112 + 1
        else if (rcx_66 u< 0x8f)
            r9_30 ^= ((rax_109 - 0x10) << 0xa ^ r9_30) & 0x7c00
            *(rbx_5 + (rdx_6 << 3) + 0xc) = (((var_128_23 u>> 0xd).w ^ r9_30) & 0x3ff) ^ r9_30
        else
            *(rbx_5 + (rdx_6 << 3) + 0xc) = (r9_30 & 0xfbff) | 0x7bff
        
        int32_t var_128_25 = zmm12.d
        *(rbx_5 + (rdx_6 << 3) + 0xe) = 0
        uint16_t r9_32 = (var_128_25 u>> 0x1f).w << 0xf | (*(rbx_5 + (rdx_6 << 3) + 0x10) & 0x7fff)
        uint16_t rax_115 = (var_128_25 u>> 0x17).w
        uint32_t rcx_70 = zx.d(rax_115.b)
        
        if (rcx_70 u<= 0x70)
            r9_32 &= 0x8000
            *(rbx_5 + (rdx_6 << 3) + 0x10) = r9_32
            
            if (0x70 - rcx_70 + 0xe s<= 0x18)
                int32_t r10_78 = (var_128_25 & 0x7fffff) | 0x800000
                uint16_t rax_118 = ((r10_78 u>> (0x70 - rcx_70 + 0xe).b).w & 0x3ff) | r9_32
                *(rbx_5 + (rdx_6 << 3) + 0x10) = rax_118
                
                if (((r10_78 u>> ((0x70 - rcx_70).b + 0xd)).b & 1) != 0)
                    *(rbx_5 + (rdx_6 << 3) + 0x10) = rax_118 + 1
        else if (rcx_70 u< 0x8f)
            r9_32 ^= ((rax_115 - 0x10) << 0xa ^ r9_32) & 0x7c00
            *(rbx_5 + (rdx_6 << 3) + 0x10) = (((var_128_25 u>> 0xd).w ^ r9_32) & 0x3ff) ^ r9_32
        else
            *(rbx_5 + (rdx_6 << 3) + 0x10) = (r9_32 & 0xfbff) | 0x7bff
        
        int32_t var_128_27 = zmm13.d
        uint16_t r9_34 = (var_128_27 u>> 0x1f).w << 0xf | (*(rbx_5 + (rdx_6 << 3) + 0x12) & 0x7fff)
        uint16_t rax_121 = (var_128_27 u>> 0x17).w
        uint32_t rcx_74 = zx.d(rax_121.b)
        
        if (rcx_74 u<= 0x70)
            r9_34 &= 0x8000
            *(rbx_5 + (rdx_6 << 3) + 0x12) = r9_34
            
            if (0x70 - rcx_74 + 0xe s<= 0x18)
                int32_t r10_83 = (var_128_27 & 0x7fffff) | 0x800000
                uint16_t rax_124 = ((r10_83 u>> (0x70 - rcx_74 + 0xe).b).w & 0x3ff) | r9_34
                *(rbx_5 + (rdx_6 << 3) + 0x12) = rax_124
                
                if (((r10_83 u>> ((0x70 - rcx_74).b + 0xd)).b & 1) != 0)
                    *(rbx_5 + (rdx_6 << 3) + 0x12) = rax_124 + 1
        else if (rcx_74 u< 0x8f)
            r9_34 ^= ((rax_121 - 0x10) << 0xa ^ r9_34) & 0x7c00
            *(rbx_5 + (rdx_6 << 3) + 0x12) = (((var_128_27 u>> 0xd).w ^ r9_34) & 0x3ff) ^ r9_34
        else
            *(rbx_5 + (rdx_6 << 3) + 0x12) = (r9_34 & 0xfbff) | 0x7bff
        
        int32_t var_128_29 = zmm14.d
        uint16_t r9_36 = (var_128_29 u>> 0x1f).w << 0xf | (*(rbx_5 + (rdx_6 << 3) + 0x14) & 0x7fff)
        uint16_t rax_127 = (var_128_29 u>> 0x17).w
        uint32_t rcx_78 = zx.d(rax_127.b)
        
        if (rcx_78 u<= 0x70)
            r9_36 &= 0x8000
            *(rbx_5 + (rdx_6 << 3) + 0x14) = r9_36
            
            if (0x70 - rcx_78 + 0xe s> 0x18)
                goto label_141a15e80
            
            int32_t r10_88 = (var_128_29 & 0x7fffff) | 0x800000
            uint16_t rax_129 = ((r10_88 u>> (0x70 - rcx_78 + 0xe).b).w & 0x3ff) | r9_36
            *(rbx_5 + (rdx_6 << 3) + 0x14) = rax_129
            
            if (((r10_88 u>> ((0x70 - rcx_78).b + 0xd)).b & 1) == 0)
                goto label_141a15e80
            
            r14 = r15
            *(rbx_5 + (rdx_6 << 3) + 0x14) = rax_129 + 1
            r15 = zx.q(r14.d)
            *(rbx_5 + (rdx_6 << 3) + 0x16) = 0
        else if (rcx_78 u< 0x8f)
            r9_36 ^= ((rax_127 - 0x10) << 0xa ^ r9_36) & 0x7c00
            *(rbx_5 + (rdx_6 << 3) + 0x14) = (((var_128_29 u>> 0xd).w ^ r9_36) & 0x3ff) ^ r9_36
        label_141a15e80:
            r14 = r15
            r15 = zx.q(r14.d)
            *(rbx_5 + (rdx_6 << 3) + 0x16) = 0
        else
            r14 = r15
            r15 = zx.q(r14.d)
            *(rbx_5 + (rdx_6 << 3) + 0x14) = (r9_36 & 0xfbff) | 0x7bff
            *(rbx_5 + (rdx_6 << 3) + 0x16) = 0
    
    int64_t* rcx_82 = *(arg1 + 0x1d8)
    int64_t rbx_6 = *(arg1 + 0x1e0)
    (*(*rcx_82 + 0x28))(rcx_82)
    int64_t* rcx_83 = *(arg1 + 0x1d8)
    (*(*rcx_83 + 0x20))(rcx_83)
    result = -0x8000
    int32_t result_2 = int.d(0f)
    int16_t rdx_7
    
    if (result_2 s>= 0xffff8000)
        rdx_7 = 0x7fff
        
        if (result_2 s< 0x7fff)
            rdx_7 = result_2.w
    else
        rdx_7 = -0x8000
    
    *(rbx_6 + (r14 << 3)) = rdx_7
    int16_t rdx_8
    
    if (result_2 s>= 0xffff8000)
        rdx_8 = 0x7fff
        
        if (result_2 s< 0x7fff)
            rdx_8 = result_2.w
    else
        rdx_8 = -0x8000
    
    *(rbx_6 + (r14 << 3) + 2) = rdx_8
    int16_t rdx_9
    
    if (result_2 s>= 0xffff8000)
        rdx_9 = 0x7fff
        
        if (result_2 s< 0x7fff)
            rdx_9 = result_2.w
    else
        rdx_9 = -0x8000
    
    *(rbx_6 + (r14 << 3) + 4) = rdx_9
    
    if (result_2 s>= 0xffff8000)
        result = 0x7fff
        
        if (result_2 s< 0x7fff)
            result = result_2
    
    *(rbx_6 + (r14 << 3) + 6) = result.w
    int32_t rsi_2 = 0
    int32_t result_3 = *(arg1 + 0x1fc)
    
    if (result_3 s> 0)
        do
            result = result_3
            
            if (rsi_2 s< result_3)
                int64_t* rcx_84 = *(arg1 + 0x1e8)
                int64_t rbx_7 = *(arg1 + 0x1f0)
                (*(*rcx_84 + 0x28))(rcx_84)
                int64_t* rcx_85 = *(arg1 + 0x1e8)
                (*(*rcx_85 + 0x20))(rcx_85)
                *(rbx_7 + (sx.q(*(arg1 + 0x1fc) * r15.d + rsi_2) << 2)) = 0
                result = *(arg1 + 0x1fc)
            
            rsi_2 += 1
            result_3 = result
        while (rsi_2 s< result)
else
    zmm11.d = arg3[3].d.d f- *(arg1 + 0x8c)
    zmm12.d = (*(arg3 + 0x34)).d f- *(arg1 + 0x90)
    zmm11.d = zmm11.d f* *(arg1 + 0x19c)
    zmm12.d = zmm12.d f* *(arg1 + 0x1a0)
    zmm11.d = zmm11.d f+ *(arg1 + 0x194)
    zmm12.d = zmm12.d f+ *(arg1 + 0x198)
    int128_t zmm15 = zmm11
    zmm11.d = zmm11.d f* *(arg1 + 0x18c)
    zmm15.d = zmm15.d f* *(arg1 + 0x17c)
    zmm14.d = zmm12.d f* *(arg1 + 0x180)
    zmm12.d = zmm12.d f* *(arg1 + 0x190)
    zmm15.d = zmm15.d f+ *(arg1 + 0x174)
    zmm14.d = zmm14.d f+ *(arg1 + 0x178)
    zmm11.d = zmm11.d f+ *(arg1 + 0x184)
    zmm12.d = zmm12.d f+ *(arg1 + 0x188)
    *(arg1 + 0xf0) = rax_1
    int64_t rbx = *(arg1 + 0x1c0)
    int64_t* rcx = *(arg1 + 0x1b8)
    zmm9 = arg3[3].d
    zmm6 = *(arg3 + 0x34)
    zmm7 = *(arg3 + 0x38)
    zmm8.d = (rax_1 u>> 9 | 0x3f800000).d f- 1f
    (*(*rcx + 0x28))(rcx)
    int64_t* rcx_1 = *(arg1 + 0x1b8)
    (*(*rcx_1 + 0x20))(rcx_1)
    float temp0[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0xe1)
    temp0[0] = zmm6.d
    float temp0_1[0x4] = _mm_shuffle_ps(temp0, temp0, 0xc6)
    temp0_1[0] = zmm7.d
    float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0x27)
    temp0_2[0] = zmm8.d
    *(rbx + r15 * 0x10) = _mm_shuffle_ps(temp0_2, temp0_2, 0x39)
    zmm6 = *arg3
    zmm7 = *(arg3 + 4)
    zmm8 = *(arg3 + 8)
    zmm9 = arg3[1].d
    zmm10 = *(arg3 + 0x14)
    zmm13 = *(arg3 + 0x18)
    int64_t rdx = *(**(arg1 + 0x1c8) + 0x28)
    int64_t rbx_1 = *(arg1 + 0x1d0)
    int32_t var_118_1 = arg3[2].d
    int32_t var_108_1 = *(arg3 + 0x24)
    int32_t var_120_2 = *(arg3 + 0x28)
    
    if (*(arg1 + 0x200) == 0)
        rdx()
        int64_t* rcx_36 = *(arg1 + 0x1c8)
        (*(*rcx_36 + 0x20))(rcx_36)
        int64_t rax_62 = r15 * 0xc
        *(rbx_1 + (rax_62 << 2)) = zmm6.d
        *(rbx_1 + (rax_62 << 2) + 4) = zmm7.d
        *(rbx_1 + (rax_62 << 2) + 8) = zmm8.d
        *(rbx_1 + (rax_62 << 2) + 0xc) = 0
        *(rbx_1 + (rax_62 << 2) + 0x10) = zmm9[0]
        *(rbx_1 + (rax_62 << 2) + 0x14) = zmm10.d
        *(rbx_1 + (rax_62 << 2) + 0x18) = zmm13.d
        *(rbx_1 + (rax_62 << 2) + 0x1c) = 0
        *(rbx_1 + (rax_62 << 2) + 0x20) = var_118_1
        *(rbx_1 + (rax_62 << 2) + 0x24) = var_108_1
        *(rbx_1 + (rax_62 << 2) + 0x28) = var_120_2
        *(rbx_1 + (rax_62 << 2) + 0x2c) = 0
    else
        rdx()
        int64_t* rcx_3 = *(arg1 + 0x1c8)
        (*(*rcx_3 + 0x20))(rcx_3)
        int64_t rdx_1 = r15 * 3
        int32_t var_128_1 = zmm6.d
        uint16_t r9_2 = (var_128_1 u>> 0x1f).w << 0xf | (*(rbx_1 + (rdx_1 << 3)) & 0x7fff)
        uint16_t rax_12 = (var_128_1 u>> 0x17).w
        uint32_t rcx_4 = zx.d(rax_12.b)
        
        if (rcx_4 u<= 0x70)
            r9_2 &= 0x8000
            *(rbx_1 + (rdx_1 << 3)) = r9_2
            
            if (0x70 - rcx_4 + 0xe s<= 0x18)
                int32_t r10_3 = (var_128_1 & 0x7fffff) | 0x800000
                uint16_t rax_14 = ((r10_3 u>> (0x70 - rcx_4 + 0xe).b).w & 0x3ff) | r9_2
                *(rbx_1 + (rdx_1 << 3)) = rax_14
                
                if (((r10_3 u>> ((0x70 - rcx_4).b + 0xd)).b & 1) != 0)
                    *(rbx_1 + (rdx_1 << 3)) = rax_14 + 1
        else if (rcx_4 u< 0x8f)
            r9_2 ^= ((rax_12 - 0x10) << 0xa ^ r9_2) & 0x7c00
            *(rbx_1 + (rdx_1 << 3)) = (((var_128_1 u>> 0xd).w ^ r9_2) & 0x3ff) ^ r9_2
        else
            *(rbx_1 + (rdx_1 << 3)) = (r9_2 & 0xfbff) | 0x7bff
        
        int32_t var_128_2 = zmm7.d
        uint16_t r9_4 = (var_128_2 u>> 0x1f).w << 0xf | (*(rbx_1 + (rdx_1 << 3) + 2) & 0x7fff)
        uint16_t rax_17 = (var_128_2 u>> 0x17).w
        uint32_t rcx_7 = zx.d(rax_17.b)
        
        if (rcx_7 u<= 0x70)
            r9_4 &= 0x8000
            *(rbx_1 + (rdx_1 << 3) + 2) = r9_4
            
            if (0x70 - rcx_7 + 0xe s<= 0x18)
                int32_t r10_8 = (var_128_2 & 0x7fffff) | 0x800000
                uint16_t rax_19 = ((r10_8 u>> (0x70 - rcx_7 + 0xe).b).w & 0x3ff) | r9_4
                *(rbx_1 + (rdx_1 << 3) + 2) = rax_19
                
                if (((r10_8 u>> ((0x70 - rcx_7).b + 0xd)).b & 1) != 0)
                    *(rbx_1 + (rdx_1 << 3) + 2) = rax_19 + 1
        else if (rcx_7 u< 0x8f)
            r9_4 ^= ((rax_17 - 0x10) << 0xa ^ r9_4) & 0x7c00
            *(rbx_1 + (rdx_1 << 3) + 2) = (((var_128_2 u>> 0xd).w ^ r9_4) & 0x3ff) ^ r9_4
        else
            *(rbx_1 + (rdx_1 << 3) + 2) = (r9_4 & 0xfbff) | 0x7bff
        
        int32_t var_128_3 = zmm8.d
        uint16_t r9_6 = (var_128_3 u>> 0x1f).w << 0xf | (*(rbx_1 + (rdx_1 << 3) + 4) & 0x7fff)
        uint16_t rax_22 = (var_128_3 u>> 0x17).w
        uint32_t rcx_10 = zx.d(rax_22.b)
        
        if (rcx_10 u<= 0x70)
            r9_6 &= 0x8000
            *(rbx_1 + (rdx_1 << 3) + 4) = r9_6
            
            if (0x70 - rcx_10 + 0xe s<= 0x18)
                int32_t r10_13 = (var_128_3 & 0x7fffff) | 0x800000
                uint16_t rax_24 = ((r10_13 u>> (0x70 - rcx_10 + 0xe).b).w & 0x3ff) | r9_6
                *(rbx_1 + (rdx_1 << 3) + 4) = rax_24
                
                if (((r10_13 u>> ((0x70 - rcx_10).b + 0xd)).b & 1) != 0)
                    *(rbx_1 + (rdx_1 << 3) + 4) = rax_24 + 1
        else if (rcx_10 u< 0x8f)
            r9_6 ^= ((rax_22 - 0x10) << 0xa ^ r9_6) & 0x7c00
            *(rbx_1 + (rdx_1 << 3) + 4) = (((var_128_3 u>> 0xd).w ^ r9_6) & 0x3ff) ^ r9_6
        else
            *(rbx_1 + (rdx_1 << 3) + 4) = (r9_6 & 0xfbff) | 0x7bff
        
        float var_128_4 = zmm9[0]
        *(rbx_1 + (rdx_1 << 3) + 6) = 0
        uint16_t r9_8 = (var_128_4 u>> 0x1f).w << 0xf | (*(rbx_1 + (rdx_1 << 3) + 8) & 0x7fff)
        uint16_t rax_27 = (var_128_4 u>> 0x17).w
        uint32_t rcx_13 = zx.d(rax_27.b)
        
        if (rcx_13 u<= 0x70)
            r9_8 &= 0x8000
            *(rbx_1 + (rdx_1 << 3) + 8) = r9_8
            
            if (0x70 - rcx_13 + 0xe s<= 0x18)
                int32_t r10_18 = (var_128_4 & 0x7fffff) | 0x800000
                uint16_t rax_30 = ((r10_18 u>> (0x70 - rcx_13 + 0xe).b).w & 0x3ff) | r9_8
                *(rbx_1 + (rdx_1 << 3) + 8) = rax_30
                
                if (((r10_18 u>> ((0x70 - rcx_13).b + 0xd)).b & 1) != 0)
                    *(rbx_1 + (rdx_1 << 3) + 8) = rax_30 + 1
        else if (rcx_13 u< 0x8f)
            r9_8 ^= ((rax_27 - 0x10) << 0xa ^ r9_8) & 0x7c00
            *(rbx_1 + (rdx_1 << 3) + 8) = (((var_128_4 u>> 0xd).w ^ r9_8) & 0x3ff) ^ r9_8
        else
            *(rbx_1 + (rdx_1 << 3) + 8) = (r9_8 & 0xfbff) | 0x7bff
        
        int32_t var_128_6 = zmm10.d
        uint16_t r9_10 = (var_128_6 u>> 0x1f).w << 0xf | (*(rbx_1 + (rdx_1 << 3) + 0xa) & 0x7fff)
        uint16_t rax_33 = (var_128_6 u>> 0x17).w
        uint32_t rcx_17 = zx.d(rax_33.b)
        
        if (rcx_17 u<= 0x70)
            r9_10 &= 0x8000
            *(rbx_1 + (rdx_1 << 3) + 0xa) = r9_10
            
            if (0x70 - rcx_17 + 0xe s<= 0x18)
                int32_t r10_23 = (var_128_6 & 0x7fffff) | 0x800000
                uint16_t rax_36 = ((r10_23 u>> (0x70 - rcx_17 + 0xe).b).w & 0x3ff) | r9_10
                *(rbx_1 + (rdx_1 << 3) + 0xa) = rax_36
                
                if (((r10_23 u>> ((0x70 - rcx_17).b + 0xd)).b & 1) != 0)
                    *(rbx_1 + (rdx_1 << 3) + 0xa) = rax_36 + 1
        else if (rcx_17 u< 0x8f)
            r9_10 ^= ((rax_33 - 0x10) << 0xa ^ r9_10) & 0x7c00
            *(rbx_1 + (rdx_1 << 3) + 0xa) = (((var_128_6 u>> 0xd).w ^ r9_10) & 0x3ff) ^ r9_10
        else
            *(rbx_1 + (rdx_1 << 3) + 0xa) = (r9_10 & 0xfbff) | 0x7bff
        
        int32_t var_128_8 = zmm13.d
        uint16_t r9_12 = (var_128_8 u>> 0x1f).w << 0xf | (*(rbx_1 + (rdx_1 << 3) + 0xc) & 0x7fff)
        uint16_t rax_39 = (var_128_8 u>> 0x17).w
        uint32_t rcx_21 = zx.d(rax_39.b)
        
        if (rcx_21 u<= 0x70)
            r9_12 &= 0x8000
            *(rbx_1 + (rdx_1 << 3) + 0xc) = r9_12
            
            if (0x70 - rcx_21 + 0xe s<= 0x18)
                int32_t r10_28 = (var_128_8 & 0x7fffff) | 0x800000
                uint16_t rax_42 = ((r10_28 u>> (0x70 - rcx_21 + 0xe).b).w & 0x3ff) | r9_12
                *(rbx_1 + (rdx_1 << 3) + 0xc) = rax_42
                
                if (((r10_28 u>> ((0x70 - rcx_21).b + 0xd)).b & 1) != 0)
                    *(rbx_1 + (rdx_1 << 3) + 0xc) = rax_42 + 1
        else if (rcx_21 u< 0x8f)
            r9_12 ^= ((rax_39 - 0x10) << 0xa ^ r9_12) & 0x7c00
            *(rbx_1 + (rdx_1 << 3) + 0xc) = (((var_128_8 u>> 0xd).w ^ r9_12) & 0x3ff) ^ r9_12
        else
            *(rbx_1 + (rdx_1 << 3) + 0xc) = (r9_12 & 0xfbff) | 0x7bff
        
        *(rbx_1 + (rdx_1 << 3) + 0xe) = 0
        uint16_t r9_14 = (var_118_1 u>> 0x1f).w << 0xf | (*(rbx_1 + (rdx_1 << 3) + 0x10) & 0x7fff)
        uint16_t rax_45 = (var_118_1 u>> 0x17).w
        uint32_t rcx_25 = zx.d(rax_45.b)
        
        if (rcx_25 u<= 0x70)
            r9_14 &= 0x8000
            *(rbx_1 + (rdx_1 << 3) + 0x10) = r9_14
            
            if (0x70 - rcx_25 + 0xe s<= 0x18)
                int32_t r10_33 = (var_118_1 & 0x7fffff) | 0x800000
                uint16_t rax_48 = ((r10_33 u>> (0x70 - rcx_25 + 0xe).b).w & 0x3ff) | r9_14
                *(rbx_1 + (rdx_1 << 3) + 0x10) = rax_48
                
                if (((r10_33 u>> ((0x70 - rcx_25).b + 0xd)).b & 1) != 0)
                    *(rbx_1 + (rdx_1 << 3) + 0x10) = rax_48 + 1
        else if (rcx_25 u< 0x8f)
            r9_14 ^= ((rax_45 - 0x10) << 0xa ^ r9_14) & 0x7c00
            *(rbx_1 + (rdx_1 << 3) + 0x10) = (((var_118_1 u>> 0xd).w ^ r9_14) & 0x3ff) ^ r9_14
        else
            *(rbx_1 + (rdx_1 << 3) + 0x10) = (r9_14 & 0xfbff) | 0x7bff
        
        uint16_t r9_16 = (var_108_1 u>> 0x1f).w << 0xf | (*(rbx_1 + (rdx_1 << 3) + 0x12) & 0x7fff)
        uint16_t rax_51 = (var_108_1 u>> 0x17).w
        uint32_t rcx_29 = zx.d(rax_51.b)
        
        if (rcx_29 u<= 0x70)
            r9_16 &= 0x8000
            *(rbx_1 + (rdx_1 << 3) + 0x12) = r9_16
            
            if (0x70 - rcx_29 + 0xe s<= 0x18)
                int32_t r10_38 = (var_108_1 & 0x7fffff) | 0x800000
                uint16_t rax_54 = ((r10_38 u>> (0x70 - rcx_29 + 0xe).b).w & 0x3ff) | r9_16
                *(rbx_1 + (rdx_1 << 3) + 0x12) = rax_54
                
                if (((r10_38 u>> ((0x70 - rcx_29).b + 0xd)).b & 1) != 0)
                    *(rbx_1 + (rdx_1 << 3) + 0x12) = rax_54 + 1
        else if (rcx_29 u< 0x8f)
            r9_16 ^= ((rax_51 - 0x10) << 0xa ^ r9_16) & 0x7c00
            *(rbx_1 + (rdx_1 << 3) + 0x12) = (((var_108_1 u>> 0xd).w ^ r9_16) & 0x3ff) ^ r9_16
        else
            *(rbx_1 + (rdx_1 << 3) + 0x12) = (r9_16 & 0xfbff) | 0x7bff
        
        uint16_t r9_18 = (var_120_2 u>> 0x1f).w << 0xf | (*(rbx_1 + (rdx_1 << 3) + 0x14) & 0x7fff)
        uint16_t rax_57 = (var_120_2 u>> 0x17).w
        uint32_t rcx_33 = zx.d(rax_57.b)
        
        if (rcx_33 u<= 0x70)
            r9_18 &= 0x8000
            *(rbx_1 + (rdx_1 << 3) + 0x14) = r9_18
            
            if (0x70 - rcx_33 + 0xe s> 0x18)
                goto label_141a154dd
            
            int32_t r10_43 = (var_120_2 & 0x7fffff) | 0x800000
            uint16_t rax_59 = ((r10_43 u>> (0x70 - rcx_33 + 0xe).b).w & 0x3ff) | r9_18
            *(rbx_1 + (rdx_1 << 3) + 0x14) = rax_59
            
            if (((r10_43 u>> ((0x70 - rcx_33).b + 0xd)).b & 1) == 0)
                goto label_141a154dd
            
            r14 = r15
            *(rbx_1 + (rdx_1 << 3) + 0x14) = rax_59 + 1
            r15 = zx.q(r14.d)
            *(rbx_1 + (rdx_1 << 3) + 0x16) = 0
        else if (rcx_33 u< 0x8f)
            r9_18 ^= ((rax_57 - 0x10) << 0xa ^ r9_18) & 0x7c00
            *(rbx_1 + (rdx_1 << 3) + 0x14) = (((var_120_2 u>> 0xd).w ^ r9_18) & 0x3ff) ^ r9_18
        label_141a154dd:
            r14 = r15
            r15 = zx.q(r14.d)
            *(rbx_1 + (rdx_1 << 3) + 0x16) = 0
        else
            r14 = r15
            r15 = zx.q(r14.d)
            *(rbx_1 + (rdx_1 << 3) + 0x14) = (r9_18 & 0xfbff) | 0x7bff
            *(rbx_1 + (rdx_1 << 3) + 0x16) = 0
    
    int64_t* rcx_37 = *(arg1 + 0x1d8)
    int64_t rbx_2 = *(arg1 + 0x1e0)
    (*(*rcx_37 + 0x28))(rcx_37)
    int64_t* rcx_38 = *(arg1 + 0x1d8)
    (*(*rcx_38 + 0x20))(rcx_38)
    int16_t rax_65 = -0x8000
    zmm15.d = zmm15.d f* 32767f
    int32_t rdx_2 = int.d(zmm15.d)
    int16_t rcx_39
    
    if (rdx_2 s>= 0xffff8000)
        rcx_39 = 0x7fff
        
        if (rdx_2 s< 0x7fff)
            rcx_39 = rdx_2.w
    else
        rcx_39 = -0x8000
    
    zmm14.d = zmm14.d f* 32767f
    *(rbx_2 + (r14 << 3)) = rcx_39
    int32_t rdx_3 = int.d(zmm14.d)
    int16_t rcx_40
    
    if (rdx_3 s>= 0xffff8000)
        rcx_40 = 0x7fff
        
        if (rdx_3 s< 0x7fff)
            rcx_40 = rdx_3.w
    else
        rcx_40 = -0x8000
    
    zmm11.d = zmm11.d f* 32767f
    *(rbx_2 + (r14 << 3) + 2) = rcx_40
    int32_t rdx_4 = int.d(zmm11.d)
    int16_t rcx_41
    
    if (rdx_4 s>= 0xffff8000)
        rcx_41 = 0x7fff
        
        if (rdx_4 s< 0x7fff)
            rcx_41 = rdx_4.w
    else
        rcx_41 = -0x8000
    
    zmm12.d = zmm12.d f* 32767f
    *(rbx_2 + (r14 << 3) + 4) = rcx_41
    int32_t rcx_42 = int.d(zmm12.d)
    
    if (rcx_42 s>= 0xffff8000)
        rax_65 = 0x7fff
        
        if (rcx_42 s< 0x7fff)
            rax_65 = rcx_42.w
    
    *(rbx_2 + (r14 << 3) + 6) = rax_65
    int32_t rsi_1 = 0
    result = *(arg1 + 0x1fc)
    
    if (result s> 0)
        int32_t result_1 = result
        
        do
            if (rsi_1 s< result)
                int64_t* rcx_43 = *(arg1 + 0x1e8)
                int64_t rbx_3 = *(arg1 + 0x1f0)
                (*(*rcx_43 + 0x28))(rcx_43)
                int64_t* rcx_44 = *(arg1 + 0x1e8)
                (*(*rcx_44 + 0x20))(rcx_44)
                *(rbx_3 + (sx.q(*(arg1 + 0x1fc) * r15.d + rsi_1) << 2)) = 0
                result_1 = *(arg1 + 0x1fc)
            
            rsi_1 += 1
            result = result_1
        while (rsi_1 s< result_1)
return result
