// 函数: sub_1423c44a0
// 地址: 0x1423c44a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rax = zx.q(*(arg1 + 0x470))
void* r12 = arg1 + 0x110
char rsi = arg3
uint32_t rbx = (rax << 2).d
uint32_t rdi_1 = (rax * 3).d * 2
sub_1422a3c90(r12, rbx, 1)
void* r13 = arg1 + 0x88
sub_1422c8fe0(r13, rbx, 1, 1)
sub_1422a3a50(arg1 + 0x150, rbx, 1)
void* r14 = arg1 + 0x78
int64_t rbx_1 = sx.q(*(r14 + 8))

if (rdi_1 s> rbx_1.d)
    *(r14 + 8) = rdi_1
    
    if (rdi_1 s> *(r14 + 0xc))
        sub_140594770(r14)
    
    memset(*r14 + (rbx_1 << 1), 0, sx.q(rdi_1 - rbx_1.d) * 2)
    rsi = arg3
else if (rdi_1 s< rbx_1.d && rdi_1 != rbx_1.d)
    *(r14 + 8) = rdi_1
    sub_1405a50a0(r14)

uint64_t rcx_6 = 0
int32_t arg_20 = 0

if (*(arg1 + 0x470) s> 0)
    int64_t r9_1 = 0
    int64_t var_188_1 = 0
    int128_t zmm6
    int128_t var_58_1 = zmm6
    float zmm7[0x4]
    float var_68_1[0x4] = zmm7
    int128_t zmm8
    int128_t var_78_1 = zmm8
    int128_t zmm9
    int128_t var_88_1 = zmm9
    float zmm10[0x4] = 0x437e8000
    float zmm11[0x4] = 0x477ffe80
    int32_t rbx_3 = int.d(fconvert.t(0.5f)) s>> 1
    
    do
        int64_t r10_1 = *(arg1 + 0x468)
        int64_t r9_2 = r9_1 * 5
        uint64_t r13_1 = zx.q((rcx_6 << 2).d)
        int16_t rcx_7 = (r13_1 + 2).w
        int64_t r8_3 = sx.q((rcx_6 * 3).d * 2)
        int16_t rdx_4 = (r13_1 + 1).w
        int32_t rdi_2 = (r13_1 + 1).d
        *(*r14 + (r8_3 << 1)) = r13_1.w
        *(*r14 + (r8_3 << 1) + 2) = rdx_4
        *(*r14 + (r8_3 << 1) + 4) = rcx_7
        *(*r14 + (r8_3 << 1) + 6) = rcx_7
        *(*r14 + (r8_3 << 1) + 8) = rdx_4
        *(*r14 + (r8_3 << 1) + 0xa) = (r13_1 + 3).w
        zmm7 = *(r10_1 + (r9_2 << 3))
        zmm6 = *(r10_1 + (r9_2 << 3) + 4)
        zmm9 = *(r10_1 + (r9_2 << 3) + 0x10)
        zmm8 = *(r10_1 + (r9_2 << 3) + 0x14)
        float zmm3 = *(r10_1 + (r9_2 << 3) + 0x18)
        float zmm2 = *(r10_1 + (r9_2 << 3) + 0x1c)
        int64_t rcx_9 = *(arg1 + 0x138)
        zmm7[0] = zmm7[0] f+ *(r10_1 + (r9_2 << 3) + 8)
        int64_t zmm5_1
        zmm5_1.d = zmm6.q.d f+ *(r10_1 + (r9_2 << 3) + 0xc)
        float arg_8
        
        if (rsi == 0)
            int32_t rsi_4 = (r13_1 + 2).d
            int64_t* rax_71 = zx.q(*(arg1 + 0x140) * r13_1.d)
            int32_t r14_2 = (r13_1 + 3).d
            zmm3 = zmm3 f+ zmm9.d
            int32_t var_140_1 = 0
            int32_t var_134_1 = 0
            int32_t var_128_1 = 0
            int32_t var_11c_1 = 0
            *(rax_71 + rcx_9) = (_mm_unpacklo_ps(zmm7, zmm6.q)).q
            *(zx.q(rax_71.d) + rcx_9 + 8) = 0
            uint64_t rax_73 = zx.q(rdi_2 * *(arg1 + 0x140))
            int64_t rcx_45 = *(arg1 + 0x138)
            *(rax_73 + rcx_45) = (_mm_unpacklo_ps(zmm7, zmm6.q)).q
            *(zx.q(rax_73.d) + rcx_45 + 8) = 0
            int64_t* rax_75 = zx.q(rsi_4 * *(arg1 + 0x140))
            int64_t rcx_46 = *(arg1 + 0x138)
            *(rax_75 + rcx_46) = (_mm_unpacklo_ps(zmm7, zmm5_1)).q
            *(zx.q(rax_75.d) + rcx_46 + 8) = 0
            int64_t* rax_77 = zx.q(r14_2 * *(arg1 + 0x140))
            int64_t rcx_47 = *(arg1 + 0x138)
            *(rax_77 + rcx_47) = (_mm_unpacklo_ps(zmm7, zmm5_1)).q
            *(zx.q(rax_77.d) + rcx_47 + 8) = 0
            int64_t r11_5 = *(arg1 + 0xf0)
            int64_t r10_11 = zx.q(r13_1.d) * zx.q(*(arg1 + 0x100))
            
            if (*(arg1 + 0x108) == 0)
                uint16_t rcx_49 = (zmm3 u>> 0x17).w
                uint16_t rdx_31 = (zmm3 u>> 0x1f).w << 0xf
                uint32_t r8_29 = zx.d(rcx_49.b)
                
                if (r8_29 u> 0x70)
                    if (r8_29 u< 0x8f)
                        rdx_31 |= ((zmm3 u>> 0xd).w & 0x3ff) | ((rcx_49 - 0x10) & 0x1f) << 0xa
                    else
                        rdx_31 |= 0x7bff
                else if (0x70 - r8_29 + 0xe s<= 0x18)
                    int32_t rax_81 = (zmm3 & 0x7fffff) | 0x800000
                    uint16_t r8_31 = ((rax_81 u>> (0x70 - r8_29 + 0xe).b).w & 0x3ff) | rdx_31
                    rdx_31 = r8_31
                    
                    if (((rax_81 u>> ((0x70 - r8_29).b + 0xd)).b & 1) != 0)
                        rdx_31 = r8_31 + 1
                
                *(r11_5 + (r10_11 << 2)) = rdx_31
                arg_8 = zmm8.d
                uint16_t rcx_53 = (arg_8 u>> 0x17).w
                uint16_t rdx_33 = (arg_8 u>> 0x1f).w << 0xf
                uint32_t r8_32 = zx.d(rcx_53.b)
                
                if (r8_32 u> 0x70)
                    if (r8_32 u< 0x8f)
                        rdx_33 |= ((arg_8 u>> 0xd).w & 0x3ff) | ((rcx_53 - 0x10) & 0x1f) << 0xa
                    else
                        rdx_33 |= 0x7bff
                else if (0x70 - r8_32 + 0xe s<= 0x18)
                    int32_t rax_86 = (arg_8 & 0x7fffff) | 0x800000
                    uint16_t r8_34 = ((rax_86 u>> (0x70 - r8_32 + 0xe).b).w & 0x3ff) | rdx_33
                    rdx_33 = r8_34
                    
                    if (((rax_86 u>> ((0x70 - r8_32).b + 0xd)).b & 1) != 0)
                        rdx_33 = r8_34 + 1
                
                *(r11_5 + (r10_11 << 2) + 2) = rdx_33
            else
                *(r11_5 + (r10_11 << 3)) = zmm3
                *(r11_5 + (r10_11 << 3) + 4) = zmm8.d
            
            int64_t r11_6 = *(arg1 + 0xf0)
            int64_t r9_14 = zx.q(*(arg1 + 0x100)) * zx.q(rdi_2)
            
            if (*(arg1 + 0x108) == 0)
                arg_8 = zmm9.d
                uint16_t rcx_57 = (arg_8 u>> 0x17).w
                uint16_t rdx_35 = (arg_8 u>> 0x1f).w << 0xf
                uint32_t r8_35 = zx.d(rcx_57.b)
                
                if (r8_35 u> 0x70)
                    if (r8_35 u< 0x8f)
                        rdx_35 |= ((arg_8 u>> 0xd).w & 0x3ff) | ((rcx_57 - 0x10) & 0x1f) << 0xa
                    else
                        rdx_35 |= 0x7bff
                else if (0x70 - r8_35 + 0xe s<= 0x18)
                    int32_t rax_92 = (arg_8 & 0x7fffff) | 0x800000
                    uint16_t r8_37 = ((rax_92 u>> (0x70 - r8_35 + 0xe).b).w & 0x3ff) | rdx_35
                    rdx_35 = r8_37
                    
                    if (((rax_92 u>> ((0x70 - r8_35).b + 0xd)).b & 1) != 0)
                        rdx_35 = r8_37 + 1
                
                arg_8 = zmm8.d
                *(r11_6 + (r9_14 << 2)) = rdx_35
                uint16_t rcx_61 = (arg_8 u>> 0x17).w
                uint16_t rax_96 = (arg_8 u>> 0x1f).w << 0xf
                uint32_t r8_38 = zx.d(rcx_61.b)
                
                if (r8_38 u> 0x70)
                    if (r8_38 u< 0x8f)
                        rax_96 |= ((rcx_61 - 0x10) & 0x1f) << 0xa | ((arg_8 u>> 0xd).w & 0x3ff)
                    else
                        rax_96 |= 0x7bff
                else if (0x70 - r8_38 + 0xe s<= 0x18)
                    int32_t rdx_38 = (arg_8 & 0x7fffff) | 0x800000
                    uint16_t r8_40 = ((rdx_38 u>> (0x70 - r8_38 + 0xe).b).w & 0x3ff) | rax_96
                    rax_96 = r8_40
                    
                    if (((rdx_38 u>> ((0x70 - r8_38).b + 0xd)).b & 1) != 0)
                        rax_96 = r8_40 + 1
                
                *(r11_6 + (r9_14 << 2) + 2) = rax_96
            else
                *(r11_6 + (r9_14 << 3)) = zmm9.d
                *(r11_6 + (r9_14 << 3) + 4) = zmm8.d
            
            zmm2 = zmm2 f+ zmm8.d
            int64_t r11_7 = *(arg1 + 0xf0)
            int64_t r9_16 = zx.q(rsi_4) * zx.q(*(arg1 + 0x100))
            
            if (*(arg1 + 0x108) == 0)
                uint16_t rcx_65 = (zmm3 u>> 0x17).w
                uint16_t rdx_42 = (zmm3 u>> 0x1f).w << 0xf
                uint32_t r8_41 = zx.d(rcx_65.b)
                
                if (r8_41 u> 0x70)
                    if (r8_41 u< 0x8f)
                        rdx_42 |= ((zmm3 u>> 0xd).w & 0x3ff) | ((rcx_65 - 0x10) & 0x1f) << 0xa
                    else
                        rdx_42 |= 0x7bff
                else if (0x70 - r8_41 + 0xe s<= 0x18)
                    int32_t rax_100 = (zmm3 & 0x7fffff) | 0x800000
                    uint16_t r8_43 = ((rax_100 u>> (0x70 - r8_41 + 0xe).b).w & 0x3ff) | rdx_42
                    rdx_42 = r8_43
                    
                    if (((rax_100 u>> ((0x70 - r8_41).b + 0xd)).b & 1) != 0)
                        rdx_42 = r8_43 + 1
                
                *(r11_7 + (r9_16 << 2)) = rdx_42
                uint16_t rcx_69 = (zmm2 u>> 0x17).w
                uint16_t rax_104 = (zmm2 u>> 0x1f).w << 0xf
                uint32_t r8_44 = zx.d(rcx_69.b)
                
                if (r8_44 u> 0x70)
                    if (r8_44 u< 0x8f)
                        rax_104 |= ((rcx_69 - 0x10) & 0x1f) << 0xa | ((zmm2 u>> 0xd).w & 0x3ff)
                    else
                        rax_104 |= 0x7bff
                else if (0x70 - r8_44 + 0xe s<= 0x18)
                    int32_t rdx_45 = (zmm2 & 0x7fffff) | 0x800000
                    uint16_t r8_46 = ((rdx_45 u>> (0x70 - r8_44 + 0xe).b).w & 0x3ff) | rax_104
                    rax_104 = r8_46
                    
                    if (((rdx_45 u>> ((0x70 - r8_44).b + 0xd)).b & 1) != 0)
                        rax_104 = r8_46 + 1
                
                *(r11_7 + (r9_16 << 2) + 2) = rax_104
            else
                *(r11_7 + (r9_16 << 3)) = zmm3
                *(r11_7 + (r9_16 << 3) + 4) = zmm2
            
            int64_t r11_8 = *(arg1 + 0xf0)
            int64_t r9_18 = zx.q(r14_2) * zx.q(*(arg1 + 0x100))
            
            if (*(arg1 + 0x108) == 0)
                arg_8 = zmm9.d
                uint16_t rcx_73 = (arg_8 u>> 0x17).w
                uint16_t rax_107 = (arg_8 u>> 0x1f).w << 0xf
                uint32_t r8_47 = zx.d(rcx_73.b)
                
                if (r8_47 u> 0x70)
                    if (r8_47 u< 0x8f)
                        rax_107 |= ((rcx_73 - 0x10) & 0x1f) << 0xa | ((arg_8 u>> 0xd).w & 0x3ff)
                    else
                        rax_107 |= 0x7bff
                else if (0x70 - r8_47 + 0xe s<= 0x18)
                    int32_t rdx_50 = (arg_8 & 0x7fffff) | 0x800000
                    uint16_t r8_49 = ((rdx_50 u>> (0x70 - r8_47 + 0xe).b).w & 0x3ff) | rax_107
                    rax_107 = r8_49
                    
                    if (((rdx_50 u>> ((0x70 - r8_47).b + 0xd)).b & 1) != 0)
                        rax_107 = r8_49 + 1
                
                *(r11_8 + (r9_18 << 2)) = rax_107
                uint16_t rcx_77 = (zmm2 u>> 0x17).w
                uint16_t rax_109 = (zmm2 u>> 0x1f).w << 0xf
                uint32_t r8_50 = zx.d(rcx_77.b)
                
                if (r8_50 u> 0x70)
                    if (r8_50 u< 0x8f)
                        rax_109 |= ((rcx_77 - 0x10) & 0x1f) << 0xa | ((zmm2 u>> 0xd).w & 0x3ff)
                    else
                        rax_109 |= 0x7bff
                else if (0x70 - r8_50 + 0xe s<= 0x18)
                    int32_t rdx_55 = (zmm2 & 0x7fffff) | 0x800000
                    uint16_t r8_52 = ((rdx_55 u>> (0x70 - r8_50 + 0xe).b).w & 0x3ff) | rax_109
                    rax_109 = r8_52
                    
                    if (((rdx_55 u>> ((0x70 - r8_50).b + 0xd)).b & 1) != 0)
                        rax_109 = r8_52 + 1
                
                *(r11_8 + (r9_18 << 2) + 2) = rax_109
            else
                *(r11_8 + (r9_18 << 3)) = zmm9.d
                *(r11_8 + (r9_18 << 3) + 4) = zmm2
        else
            int32_t rsi_3 = (r13_1 + 2).d
            int32_t var_170_1 = 0
            int32_t r14_1 = (r13_1 + 3).d
            int32_t var_164_1 = 0
            zmm3 = zmm3 f+ zmm9.d
            int32_t var_158_1 = 0
            zmm2 = zmm2 f+ zmm8.d
            int32_t var_14c_1 = 0
            uint64_t rax_13 = zx.q(*(arg1 + 0x140) * r13_1.d)
            uint128_t zmm1
            zmm1.d = _mm_cvtepi32_ps(zx.o(*(arg2 + 0x264) - *(arg2 + 0x25c))).d f- zmm5_1.d
            *(rax_13 + rcx_9) = (_mm_unpacklo_ps(zmm7, zmm1.q)).q
            *(zx.q(rax_13.d) + rcx_9 + 8) = 0
            int64_t rcx_10 = *(arg1 + 0x138)
            uint64_t rax_17 = zx.q(rdi_2 * *(arg1 + 0x140))
            zmm1.d = _mm_cvtepi32_ps(zx.o(*(arg2 + 0x264) - *(arg2 + 0x25c))).d f- zmm5_1.d
            *(rax_17 + rcx_10) = (_mm_unpacklo_ps(zmm7, zmm1.q)).q
            *(zx.q(rax_17.d) + rcx_10 + 8) = 0
            int64_t rcx_11 = *(arg1 + 0x138)
            uint64_t rax_21 = zx.q(rsi_3 * *(arg1 + 0x140))
            zmm1.d = _mm_cvtepi32_ps(zx.o(*(arg2 + 0x264) - *(arg2 + 0x25c))).d f- zmm6.d
            *(rax_21 + rcx_11) = (_mm_unpacklo_ps(zmm7, zmm1.q)).q
            *(zx.q(rax_21.d) + rcx_11 + 8) = 0
            int64_t rcx_12 = *(arg1 + 0x138)
            uint64_t rax_25 = zx.q(r14_1 * *(arg1 + 0x140))
            zmm1.d = _mm_cvtepi32_ps(zx.o(*(arg2 + 0x264) - *(arg2 + 0x25c))).d f- zmm6.d
            *(rax_25 + rcx_12) = (_mm_unpacklo_ps(zmm7, zmm1.q)).q
            *(zx.q(rax_25.d) + rcx_12 + 8) = 0
            int64_t r11_1 = *(arg1 + 0xf0)
            int64_t r10_3 = zx.q(r13_1.d) * zx.q(*(arg1 + 0x100))
            
            if (*(arg1 + 0x108) == 0)
                uint16_t rcx_14 = (zmm3 u>> 0x17).w
                uint16_t rdx_10 = (zmm3 u>> 0x1f).w << 0xf
                uint32_t r8_5 = zx.d(rcx_14.b)
                
                if (r8_5 u> 0x70)
                    if (r8_5 u< 0x8f)
                        rdx_10 |= ((zmm3 u>> 0xd).w & 0x3ff) | ((rcx_14 - 0x10) & 0x1f) << 0xa
                    else
                        rdx_10 |= 0x7bff
                else if (0x70 - r8_5 + 0xe s<= 0x18)
                    int32_t rax_29 = (zmm3 & 0x7fffff) | 0x800000
                    uint16_t r8_7 = ((rax_29 u>> (0x70 - r8_5 + 0xe).b).w & 0x3ff) | rdx_10
                    rdx_10 = r8_7
                    
                    if (((rax_29 u>> ((0x70 - r8_5).b + 0xd)).b & 1) != 0)
                        rdx_10 = r8_7 + 1
                
                *(r11_1 + (r10_3 << 2)) = rdx_10
                uint16_t rcx_18 = (zmm2 u>> 0x17).w
                uint16_t rdx_12 = (zmm2 u>> 0x1f).w << 0xf
                uint32_t r8_8 = zx.d(rcx_18.b)
                
                if (r8_8 u> 0x70)
                    if (r8_8 u< 0x8f)
                        rdx_12 |= ((zmm2 u>> 0xd).w & 0x3ff) | ((rcx_18 - 0x10) & 0x1f) << 0xa
                    else
                        rdx_12 |= 0x7bff
                else if (0x70 - r8_8 + 0xe s<= 0x18)
                    int32_t rax_34 = (zmm2 & 0x7fffff) | 0x800000
                    uint16_t r8_10 = ((rax_34 u>> (0x70 - r8_8 + 0xe).b).w & 0x3ff) | rdx_12
                    rdx_12 = r8_10
                    
                    if (((rax_34 u>> ((0x70 - r8_8).b + 0xd)).b & 1) != 0)
                        rdx_12 = r8_10 + 1
                
                *(r11_1 + (r10_3 << 2) + 2) = rdx_12
            else
                *(r11_1 + (r10_3 << 3)) = zmm3
                *(r11_1 + (r10_3 << 3) + 4) = zmm2
            
            int64_t r11_2 = *(arg1 + 0xf0)
            int64_t r9_6 = zx.q(*(arg1 + 0x100)) * zx.q(rdi_2)
            
            if (*(arg1 + 0x108) == 0)
                arg_8 = zmm9.d
                uint16_t rcx_22 = (arg_8 u>> 0x17).w
                uint16_t rdx_14 = (arg_8 u>> 0x1f).w << 0xf
                uint32_t r8_11 = zx.d(rcx_22.b)
                
                if (r8_11 u> 0x70)
                    if (r8_11 u< 0x8f)
                        rdx_14 |= ((arg_8 u>> 0xd).w & 0x3ff) | ((rcx_22 - 0x10) & 0x1f) << 0xa
                    else
                        rdx_14 |= 0x7bff
                else if (0x70 - r8_11 + 0xe s<= 0x18)
                    int32_t rax_40 = (arg_8 & 0x7fffff) | 0x800000
                    uint16_t r8_13 = ((rax_40 u>> (0x70 - r8_11 + 0xe).b).w & 0x3ff) | rdx_14
                    rdx_14 = r8_13
                    
                    if (((rax_40 u>> ((0x70 - r8_11).b + 0xd)).b & 1) != 0)
                        rdx_14 = r8_13 + 1
                
                *(r11_2 + (r9_6 << 2)) = rdx_14
                uint16_t rcx_26 = (zmm2 u>> 0x17).w
                uint16_t rdx_16 = (zmm2 u>> 0x1f).w << 0xf
                uint32_t r8_14 = zx.d(rcx_26.b)
                
                if (r8_14 u> 0x70)
                    if (r8_14 u< 0x8f)
                        rdx_16 |= ((zmm2 u>> 0xd).w & 0x3ff) | ((rcx_26 - 0x10) & 0x1f) << 0xa
                    else
                        rdx_16 |= 0x7bff
                else if (0x70 - r8_14 + 0xe s<= 0x18)
                    int32_t rax_45 = (zmm2 & 0x7fffff) | 0x800000
                    uint16_t r8_16 = ((rax_45 u>> (0x70 - r8_14 + 0xe).b).w & 0x3ff) | rdx_16
                    rdx_16 = r8_16
                    
                    if (((rax_45 u>> ((0x70 - r8_14).b + 0xd)).b & 1) != 0)
                        rdx_16 = r8_16 + 1
                
                *(r11_2 + (r9_6 << 2) + 2) = rdx_16
            else
                *(r11_2 + (r9_6 << 3)) = zmm9.d
                *(r11_2 + (r9_6 << 3) + 4) = zmm2
            
            int64_t r11_3 = *(arg1 + 0xf0)
            int64_t r9_8 = zx.q(rsi_3) * zx.q(*(arg1 + 0x100))
            
            if (*(arg1 + 0x108) == 0)
                uint16_t rcx_30 = (zmm3 u>> 0x17).w
                uint16_t rdx_18 = (zmm3 u>> 0x1f).w << 0xf
                uint32_t r8_17 = zx.d(rcx_30.b)
                
                if (r8_17 u> 0x70)
                    if (r8_17 u< 0x8f)
                        rdx_18 |= ((zmm3 u>> 0xd).w & 0x3ff) | ((rcx_30 - 0x10) & 0x1f) << 0xa
                    else
                        rdx_18 |= 0x7bff
                else if (0x70 - r8_17 + 0xe s<= 0x18)
                    int32_t rax_51 = (zmm3 & 0x7fffff) | 0x800000
                    uint16_t r8_19 = ((rax_51 u>> (0x70 - r8_17 + 0xe).b).w & 0x3ff) | rdx_18
                    rdx_18 = r8_19
                    
                    if (((rax_51 u>> ((0x70 - r8_17).b + 0xd)).b & 1) != 0)
                        rdx_18 = r8_19 + 1
                
                *(r11_3 + (r9_8 << 2)) = rdx_18
                arg_8 = zmm8.d
                uint16_t rcx_34 = (arg_8 u>> 0x17).w
                uint16_t rdx_20 = (arg_8 u>> 0x1f).w << 0xf
                uint32_t r8_20 = zx.d(rcx_34.b)
                
                if (r8_20 u> 0x70)
                    if (r8_20 u< 0x8f)
                        rdx_20 |= ((arg_8 u>> 0xd).w & 0x3ff) | ((rcx_34 - 0x10) & 0x1f) << 0xa
                    else
                        rdx_20 |= 0x7bff
                else if (0x70 - r8_20 + 0xe s<= 0x18)
                    int32_t rax_56 = (arg_8 & 0x7fffff) | 0x800000
                    uint16_t r8_22 = ((rax_56 u>> (0x70 - r8_20 + 0xe).b).w & 0x3ff) | rdx_20
                    rdx_20 = r8_22
                    
                    if (((rax_56 u>> ((0x70 - r8_20).b + 0xd)).b & 1) != 0)
                        rdx_20 = r8_22 + 1
                
                *(r11_3 + (r9_8 << 2) + 2) = rdx_20
            else
                *(r11_3 + (r9_8 << 3)) = zmm3
                *(r11_3 + (r9_8 << 3) + 4) = zmm8.d
            
            int64_t r11_4 = *(arg1 + 0xf0)
            int64_t r9_10 = zx.q(r14_1) * zx.q(*(arg1 + 0x100))
            
            if (*(arg1 + 0x108) == 0)
                arg_8 = zmm9.d
                uint16_t rcx_38 = (arg_8 u>> 0x17).w
                uint16_t rdx_22 = (arg_8 u>> 0x1f).w << 0xf
                uint32_t r8_23 = zx.d(rcx_38.b)
                
                if (r8_23 u> 0x70)
                    if (r8_23 u< 0x8f)
                        rdx_22 |= ((arg_8 u>> 0xd).w & 0x3ff) | ((rcx_38 - 0x10) & 0x1f) << 0xa
                    else
                        rdx_22 |= 0x7bff
                else if (0x70 - r8_23 + 0xe s<= 0x18)
                    int32_t rax_62 = (arg_8 & 0x7fffff) | 0x800000
                    uint16_t r8_25 = ((rax_62 u>> (0x70 - r8_23 + 0xe).b).w & 0x3ff) | rdx_22
                    rdx_22 = r8_25
                    
                    if (((rax_62 u>> ((0x70 - r8_23).b + 0xd)).b & 1) != 0)
                        rdx_22 = r8_25 + 1
                
                *(r11_4 + (r9_10 << 2)) = rdx_22
                arg_8 = zmm8.d
                uint16_t rcx_42 = (arg_8 u>> 0x17).w
                uint16_t rdx_24 = (arg_8 u>> 0x1f).w << 0xf
                uint32_t r8_26 = zx.d(rcx_42.b)
                
                if (r8_26 u> 0x70)
                    if (r8_26 u< 0x8f)
                        *(r11_4 + (r9_10 << 2) + 2) =
                            rdx_24 | ((arg_8 u>> 0xd).w & 0x3ff) | ((rcx_42 - 0x10) & 0x1f) << 0xa
                    else
                        *(r11_4 + (r9_10 << 2) + 2) = rdx_24 | 0x7bff
                else if (0x70 - r8_26 + 0xe s> 0x18)
                    *(r11_4 + (r9_10 << 2) + 2) = rdx_24
                else
                    int32_t rax_67 = (arg_8 & 0x7fffff) | 0x800000
                    uint16_t r8_28 = ((rax_67 u>> (0x70 - r8_26 + 0xe).b).w & 0x3ff) | rdx_24
                    
                    if (((rax_67 u>> ((0x70 - r8_26).b + 0xd)).b & 1) == 0)
                        *(r11_4 + (r9_10 << 2) + 2) = r8_28
                    else
                        *(r11_4 + (r9_10 << 2) + 2) = r8_28 + 1
            else
                *(r11_4 + (r9_10 << 3)) = zmm9.d
                *(r11_4 + (r9_10 << 3) + 4) = zmm8.d
        int64_t i_1 = 4
        int64_t i
        
        do
            int64_t rsi_5 = *(arg1 + 0xe8)
            int128_t var_118
            float zmm0_1[0x4]
            
            if (*(arg1 + 0x109) == 0)
                int32_t r14_4 = int.d(zmm10[0]) s>> 1
                char rax_118
                
                if (r14_4 s>= 0xffffff80)
                    rax_118 = 0x7f
                    
                    if (r14_4 s< 0x7f)
                        rax_118 = r14_4.b
                else
                    rax_118 = -0x80
                
                *(rsi_5 + (r13_1 << 3)) = rax_118
                char rax_119
                
                if (rbx_3 s>= 0xffffff80)
                    rax_119 = 0x7f
                    
                    if (rbx_3 s< 0x7f)
                        rax_119 = rbx_3.b
                else
                    rax_119 = -0x80
                
                *(rsi_5 + (r13_1 << 3) + 1) = rax_119
                char rax_120
                
                if (rbx_3 s>= 0xffffff80)
                    rax_120 = 0x7f
                    
                    if (rbx_3 s< 0x7f)
                        rax_120 = rbx_3.b
                else
                    rax_120 = -0x80
                
                __builtin_memcpy(&var_118, 
                    "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x"
                "00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
                "00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
                "80\x3f", 
                    0x40)
                *(rsi_5 + (r13_1 << 3) + 2) = rax_120
                *(rsi_5 + (r13_1 << 3) + 3) = 0x7f
                int32_t zmm12_2
                float zmm14_1[0x4]
                zmm0_1, zmm10, zmm11, zmm12_2, zmm14_1 = sub_14062b8d0(&var_118)
                
                if (zmm0_1[0] f>= zmm12_2)
                    zmm0_1 = zmm10
                else
                    zmm0_1 = zmm14_1
                
                char rax_121
                
                if (rbx_3 s>= 0xffffff80)
                    rax_121 = 0x7f
                    
                    if (rbx_3 s< 0x7f)
                        rax_121 = rbx_3.b
                else
                    rax_121 = -0x80
                
                *(rsi_5 + (r13_1 << 3) + 4) = rax_121
                char rax_122
                
                if (rbx_3 s>= 0xffffff80)
                    rax_122 = 0x7f
                    
                    if (rbx_3 s< 0x7f)
                        rax_122 = rbx_3.b
                else
                    rax_122 = -0x80
                
                *(rsi_5 + (r13_1 << 3) + 5) = rax_122
                char rax_123
                
                if (r14_4 s>= 0xffffff80)
                    rax_123 = 0x7f
                    
                    if (r14_4 s< 0x7f)
                        rax_123 = r14_4.b
                else
                    rax_123 = -0x80
                
                *(rsi_5 + (r13_1 << 3) + 6) = rax_123
                int32_t rax_125 = int.d(zmm0_1[0]) s>> 1
                char rcx_83
                
                if (rax_125 s>= 0xffffff80)
                    rcx_83 = 0x7f
                    
                    if (rax_125 s< 0x7f)
                        rcx_83 = rax_125.b
                else
                    rcx_83 = -0x80
                
                *(rsi_5 + (r13_1 << 3) + 7) = rcx_83
            else
                int16_t* rdi_5 = (zx.q(r13_1.d) << 4) + rsi_5
                int32_t rsi_7 = int.d(zmm11[0]) s>> 1
                int16_t rax_110
                
                if (rsi_7 s>= 0xffff8000)
                    rax_110 = 0x7fff
                    
                    if (rsi_7 s< 0x7fff)
                        rax_110 = rsi_7.w
                else
                    rax_110 = -0x8000
                
                *rdi_5 = rax_110
                int16_t rax_111
                
                if (rbx_3 s>= 0xffff8000)
                    rax_111 = 0x7fff
                    
                    if (rbx_3 s< 0x7fff)
                        rax_111 = rbx_3.w
                else
                    rax_111 = -0x8000
                
                rdi_5[1] = rax_111
                int16_t rax_112
                
                if (rbx_3 s>= 0xffff8000)
                    rax_112 = 0x7fff
                    
                    if (rbx_3 s< 0x7fff)
                        rax_112 = rbx_3.w
                else
                    rax_112 = -0x8000
                
                __builtin_memcpy(&var_118, 
                    "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x"
                "00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
                "00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
                "80\x3f", 
                    0x40)
                rdi_5[2] = rax_112
                rdi_5[3] = 0x7fff
                int32_t zmm12_1
                float zmm13_1[0x4]
                zmm0_1, zmm10, zmm11, zmm12_1, zmm13_1 = sub_14062b8d0(&var_118)
                
                if (zmm0_1[0] f>= zmm12_1)
                    zmm0_1 = zmm11
                else
                    zmm0_1 = zmm13_1
                
                int16_t rax_113
                
                if (rbx_3 s>= 0xffff8000)
                    rax_113 = 0x7fff
                    
                    if (rbx_3 s< 0x7fff)
                        rax_113 = rbx_3.w
                else
                    rax_113 = -0x8000
                
                rdi_5[4] = rax_113
                int16_t rax_114
                
                if (rbx_3 s>= 0xffff8000)
                    rax_114 = 0x7fff
                    
                    if (rbx_3 s< 0x7fff)
                        rax_114 = rbx_3.w
                else
                    rax_114 = -0x8000
                
                rdi_5[5] = rax_114
                int16_t rax_115
                
                if (rsi_7 s>= 0xffff8000)
                    rax_115 = 0x7fff
                    
                    if (rsi_7 s< 0x7fff)
                        rax_115 = rsi_7.w
                else
                    rax_115 = -0x8000
                
                rdi_5[6] = rax_115
                int32_t rax_117 = int.d(zmm0_1[0]) s>> 1
                
                if (rax_117 s>= 0xffff8000)
                    int16_t rcx_81 = 0x7fff
                    
                    if (rax_117 s< 0x7fff)
                        rcx_81 = rax_117.w
                    
                    rdi_5[7] = rcx_81
                else
                    rdi_5[7] = 0x8000
            uint64_t r8_54 = zx.q(*(arg1 + 0x180) * r13_1.d)
            r13_1 = zx.q(r13_1.d + 1)
            *(r8_54 + *(arg1 + 0x178)) = *(r10_1 + var_188_1 * 0x28 + 0x24)
            i = i_1
            i_1 -= 1
        while (i != 1)
        r14 = arg1 + 0x78
        rsi = arg3
        rcx_6 = zx.q(arg_20 + 1)
        r9_1 = var_188_1 + 1
        arg_20 = rcx_6.d
        var_188_1 = r9_1
    while (rcx_6.d s< *(arg1 + 0x470))
    
    r12 = arg1 + 0x110
    r13 = arg1 + 0x88

(*(*r12 + 0x28))(r12)
(*(*r13 + 0x28))(r13)
(*(*(arg1 + 0x150) + 0x28))(arg1 + 0x150)
(*(*(arg1 + 0x60) + 0x28))(arg1 + 0x60)
(*(*(arg1 + 0x190) + 0x28))(arg1 + 0x190)
jump(*(*(arg1 + 0x3a8) + 0x28))
