// 函数: sub_14204de80
// 地址: 0x14204de80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r15 = *(arg1 + 0x38)
int64_t* rax = j_sub_140a82f30(0x50)
int64_t* rbx = rax

if (rax == 0)
    rbx = nullptr
else
    __builtin_memset(rax, 0, 0x48)
    rax[9].b = 1
    sub_141a00740(rax, 0, 0)

void* rsi = arg1 + 0xb8
int64_t var_e8

if (rsi != &var_e8)
    int64_t* rdx_1 = *rsi
    *rsi = rbx
    sub_14204b340(rsi, rdx_1)
else if (rbx != 0)
    int64_t* rcx_2 = *rbx
    
    if (rcx_2 != 0)
        (**rcx_2)(rcx_2, 1)
    
    int64_t* rcx_3 = rbx[4]
    
    if (rcx_3 != 0)
        (**rcx_3)(rcx_3, 1)
    
    int64_t* rcx_4 = rbx[2]
    
    if (rcx_4 != 0)
        (**rcx_4)(rcx_4, 1)
    
    int64_t* rcx_5 = rbx[6]
    
    if (rcx_5 != 0)
        (**rcx_5)(rcx_5, 1)
    
    j_sub_140a74f90(rbx)

uint64_t result = *(arg1 + 0xb0)
int32_t rdx_3 = *(result + 0x18)
int64_t rdi = sx.q(*(result + 0x28))

if (rdx_3 s> 0)
    int64_t* rbx_1 = *rsi
    int64_t* rcx_7 = *rbx_1
    rbx_1[8].d = rdx_3
    *(rbx_1 + 0x44) = *(arg1 + 0x88)
    (*(*rcx_7 + 8))(rcx_7, rdx_3, 0)
    int64_t* rcx_8 = *rbx_1
    int64_t rax_8 = (*(*rcx_8 + 0x30))(rcx_8)
    int64_t* rcx_9 = rbx_1[4]
    uint64_t rdx_4 = zx.q(rbx_1[8].d)
    rbx_1[1] = rax_8
    (*(*rcx_9 + 8))(rcx_9, rdx_4, 0)
    int64_t* rcx_10 = rbx_1[4]
    int64_t rax_11 = (*(*rcx_10 + 0x30))(rcx_10)
    int64_t* rcx_11 = rbx_1[2]
    uint64_t rdx_5 = zx.q(rbx_1[8].d)
    rbx_1[5] = rax_11
    (*(*rcx_11 + 8))(rcx_11, rdx_5, 0)
    int64_t* rcx_12 = rbx_1[2]
    int64_t rax_14 = (*(*rcx_12 + 0x30))(rcx_12)
    int64_t* rcx_13 = rbx_1[6]
    uint64_t rdx_7 = zx.q(rbx_1[8].d * *(rbx_1 + 0x44))
    rbx_1[3] = rax_14
    (*(*rcx_13 + 8))(rcx_13, rdx_7, 0)
    int64_t* rcx_14 = rbx_1[6]
    result = (*(*rcx_14 + 0x30))(rcx_14)
    var_e8 = rdi
    int32_t r13_1 = 0
    rbx_1[7] = result
    
    if (rdi.d s> 0)
        int64_t rdx_8 = 0
        int128_t zmm6
        int128_t var_38_1 = zmm6
        int128_t zmm7
        int128_t var_48_1 = zmm7
        int128_t zmm8
        int128_t var_58_1 = zmm8
        float zmm9[0x4]
        float var_68_1[0x4] = zmm9
        int128_t zmm10
        int128_t var_78_1 = zmm10
        int128_t zmm11
        int128_t var_88_1 = zmm11
        int128_t zmm12
        int128_t var_98_1 = zmm12
        int128_t zmm13
        int128_t var_a8_1 = zmm13
        int128_t zmm14
        int128_t var_b8_1 = zmm14
        int64_t var_f0_1 = 0
        
        do
            r15 = r15 * 0xbb38435 + 0x3619636b
            int64_t r12_1 = sx.q(*(*(*(arg1 + 0xb0) + 0x20) + (rdx_8 << 2)))
            result = zx.q(r15 u>> 9) | 0x3f800000
            
            if (r12_1.d s>= 0)
                int64_t* rsi_1 = *rsi
                zmm8.d = result.d.d f- 1f
                int128_t* rdi_3 = (rdx_8 << 6) + *(arg1 + 0x68)
                int64_t* rcx_16 = *rsi_1
                int64_t rbx_2 = rsi_1[1]
                zmm9 = rdi_3[3].d
                zmm6 = *(rdi_3 + 0x34)
                zmm7 = *(rdi_3 + 0x38)
                (*(*rcx_16 + 0x28))(rcx_16)
                int64_t* rcx_17 = *rsi_1
                (*(*rcx_17 + 0x20))(rcx_17)
                float temp0_1[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0xe1)
                temp0_1[0] = zmm6.d
                float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xc6)
                temp0_2[0] = zmm7.d
                float temp0_3[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0x27)
                temp0_3[0] = zmm8.d
                *(rbx_2 + r12_1 * 0x10) = _mm_shuffle_ps(temp0_3, temp0_3, 0x39)
                zmm6 = *rdi_3
                zmm7 = *(rdi_3 + 4)
                zmm8 = *(rdi_3 + 8)
                zmm9 = rdi_3[1].d
                zmm10 = *(rdi_3 + 0x14)
                zmm11 = *(rdi_3 + 0x18)
                int64_t rdx_9 = *(*rsi_1[2] + 0x28)
                zmm12 = rdi_3[2].d
                zmm13 = *(rdi_3 + 0x24)
                zmm14 = *(rdi_3 + 0x28)
                int64_t rbx_3 = rsi_1[3]
                
                if (rsi_1[9].b == 0)
                    rdx_9()
                    int64_t* rcx_47 = rsi_1[2]
                    (*(*rcx_47 + 0x20))(rcx_47)
                    int64_t rax_73 = r12_1 * 0xc
                    *(rbx_3 + (rax_73 << 2)) = zmm6.d
                    *(rbx_3 + (rax_73 << 2) + 4) = zmm7.d
                    *(rbx_3 + (rax_73 << 2) + 8) = zmm8.d
                    *(rbx_3 + (rax_73 << 2) + 0xc) = 0
                    *(rbx_3 + (rax_73 << 2) + 0x10) = zmm9[0]
                    *(rbx_3 + (rax_73 << 2) + 0x14) = zmm10.d
                    *(rbx_3 + (rax_73 << 2) + 0x18) = zmm11.d
                    *(rbx_3 + (rax_73 << 2) + 0x1c) = 0
                    *(rbx_3 + (rax_73 << 2) + 0x20) = zmm12.d
                    *(rbx_3 + (rax_73 << 2) + 0x24) = zmm13.d
                    *(rbx_3 + (rax_73 << 2) + 0x28) = zmm14.d
                    *(rbx_3 + (rax_73 << 2) + 0x2c) = 0
                else
                    rdx_9()
                    int64_t* rcx_19 = rsi_1[2]
                    (*(*rcx_19 + 0x20))(rcx_19)
                    int32_t var_f8_2 = zmm6.d
                    int64_t rdx_10 = r12_1 * 3
                    uint16_t r8_2 =
                        (var_f8_2 u>> 0x1f).w << 0xf | (*(rbx_3 + (rdx_10 << 3)) & 0x7fff)
                    uint16_t rax_28 = (var_f8_2 u>> 0x17).w
                    uint32_t rcx_20 = zx.d(rax_28.b)
                    
                    if (rcx_20 u<= 0x70)
                        r8_2 &= 0x8000
                        *(rbx_3 + (rdx_10 << 3)) = r8_2
                        
                        if (0x70 - rcx_20 + 0xe s<= 0x18)
                            int32_t r9_3 = (var_f8_2 & 0x7fffff) | 0x800000
                            uint16_t rax_30 = ((r9_3 u>> (0x70 - rcx_20 + 0xe).b).w & 0x3ff) | r8_2
                            *(rbx_3 + (rdx_10 << 3)) = rax_30
                            
                            if (((r9_3 u>> ((0x70 - rcx_20).b + 0xd)).b & 1) != 0)
                                *(rbx_3 + (rdx_10 << 3)) = rax_30 + 1
                    else if (rcx_20 u< 0x8f)
                        *(rbx_3 + (rdx_10 << 3)) = ((rax_28 - 0x10) & 0x1f) << 0xa
                            | ((var_f8_2 u>> 0xd).w & 0x3ff) | (r8_2 & 0x8000)
                    else
                        *(rbx_3 + (rdx_10 << 3)) = (r8_2 & 0xfbff) | 0x7bff
                    
                    int32_t var_f8_3 = zmm7.d
                    uint16_t r8_4 =
                        (var_f8_3 u>> 0x1f).w << 0xf | (*(rbx_3 + (rdx_10 << 3) + 2) & 0x7fff)
                    uint16_t rax_33 = (var_f8_3 u>> 0x17).w
                    uint32_t rcx_23 = zx.d(rax_33.b)
                    
                    if (rcx_23 u<= 0x70)
                        r8_4 &= 0x8000
                        *(rbx_3 + (rdx_10 << 3) + 2) = r8_4
                        
                        if (0x70 - rcx_23 + 0xe s<= 0x18)
                            int32_t r9_8 = (var_f8_3 & 0x7fffff) | 0x800000
                            uint16_t rax_35 = ((r9_8 u>> (0x70 - rcx_23 + 0xe).b).w & 0x3ff) | r8_4
                            *(rbx_3 + (rdx_10 << 3) + 2) = rax_35
                            
                            if (((r9_8 u>> ((0x70 - rcx_23).b + 0xd)).b & 1) != 0)
                                *(rbx_3 + (rdx_10 << 3) + 2) = rax_35 + 1
                    else if (rcx_23 u< 0x8f)
                        *(rbx_3 + (rdx_10 << 3) + 2) = ((rax_33 - 0x10) & 0x1f) << 0xa
                            | ((var_f8_3 u>> 0xd).w & 0x3ff) | (r8_4 & 0x8000)
                    else
                        *(rbx_3 + (rdx_10 << 3) + 2) = (r8_4 & 0xfbff) | 0x7bff
                    
                    int32_t var_f8_4 = zmm8.d
                    uint16_t r8_6 =
                        (var_f8_4 u>> 0x1f).w << 0xf | (*(rbx_3 + (rdx_10 << 3) + 4) & 0x7fff)
                    uint16_t rax_38 = (var_f8_4 u>> 0x17).w
                    uint32_t rcx_26 = zx.d(rax_38.b)
                    
                    if (rcx_26 u<= 0x70)
                        r8_6 &= 0x8000
                        *(rbx_3 + (rdx_10 << 3) + 4) = r8_6
                        
                        if (0x70 - rcx_26 + 0xe s<= 0x18)
                            int32_t r9_13 = (var_f8_4 & 0x7fffff) | 0x800000
                            uint16_t rax_40 = ((r9_13 u>> (0x70 - rcx_26 + 0xe).b).w & 0x3ff) | r8_6
                            *(rbx_3 + (rdx_10 << 3) + 4) = rax_40
                            
                            if (((r9_13 u>> ((0x70 - rcx_26).b + 0xd)).b & 1) != 0)
                                *(rbx_3 + (rdx_10 << 3) + 4) = rax_40 + 1
                    else if (rcx_26 u< 0x8f)
                        *(rbx_3 + (rdx_10 << 3) + 4) = ((var_f8_4 u>> 0xd).w & 0x3ff)
                            | ((rax_38 - 0x10) & 0x1f) << 0xa | (r8_6 & 0x8000)
                    else
                        *(rbx_3 + (rdx_10 << 3) + 4) = (r8_6 & 0xfbff) | 0x7bff
                    
                    float var_f8_5 = zmm9[0]
                    *(rbx_3 + (rdx_10 << 3) + 6) = 0
                    uint16_t r8_8 =
                        (var_f8_5 u>> 0x1f).w << 0xf | (*(rbx_3 + (rdx_10 << 3) + 8) & 0x7fff)
                    uint16_t rax_43 = (var_f8_5 u>> 0x17).w
                    uint32_t rcx_29 = zx.d(rax_43.b)
                    
                    if (rcx_29 u<= 0x70)
                        r8_8 &= 0x8000
                        *(rbx_3 + (rdx_10 << 3) + 8) = r8_8
                        
                        if (0x70 - rcx_29 + 0xe s<= 0x18)
                            int32_t r9_17 = (var_f8_5 & 0x7fffff) | 0x800000
                            uint16_t rax_45 = ((r9_17 u>> (0x70 - rcx_29 + 0xe).b).w & 0x3ff) | r8_8
                            *(rbx_3 + (rdx_10 << 3) + 8) = rax_45
                            
                            if (((r9_17 u>> ((0x70 - rcx_29).b + 0xd)).b & 1) != 0)
                                *(rbx_3 + (rdx_10 << 3) + 8) = rax_45 + 1
                    else if (rcx_29 u< 0x8f)
                        *(rbx_3 + (rdx_10 << 3) + 8) = ((rax_43 - 0x10) & 0x1f) << 0xa
                            | ((var_f8_5 u>> 0xd).w & 0x3ff) | (r8_8 & 0x8000)
                    else
                        *(rbx_3 + (rdx_10 << 3) + 8) = (r8_8 & 0xfbff) | 0x7bff
                    
                    int32_t var_f8_6 = zmm10.d
                    uint16_t r8_10 =
                        (var_f8_6 u>> 0x1f).w << 0xf | (*(rbx_3 + (rdx_10 << 3) + 0xa) & 0x7fff)
                    uint16_t rax_48 = (var_f8_6 u>> 0x17).w
                    uint32_t rcx_32 = zx.d(rax_48.b)
                    
                    if (rcx_32 u<= 0x70)
                        r8_10 &= 0x8000
                        *(rbx_3 + (rdx_10 << 3) + 0xa) = r8_10
                        
                        if (0x70 - rcx_32 + 0xe s<= 0x18)
                            int32_t r9_23 = (var_f8_6 & 0x7fffff) | 0x800000
                            uint16_t rax_50 =
                                ((r9_23 u>> (0x70 - rcx_32 + 0xe).b).w & 0x3ff) | r8_10
                            *(rbx_3 + (rdx_10 << 3) + 0xa) = rax_50
                            
                            if (((r9_23 u>> ((0x70 - rcx_32).b + 0xd)).b & 1) != 0)
                                *(rbx_3 + (rdx_10 << 3) + 0xa) = rax_50 + 1
                    else if (rcx_32 u< 0x8f)
                        *(rbx_3 + (rdx_10 << 3) + 0xa) = ((rax_48 - 0x10) & 0x1f) << 0xa
                            | ((var_f8_6 u>> 0xd).w & 0x3ff) | (r8_10 & 0x8000)
                    else
                        *(rbx_3 + (rdx_10 << 3) + 0xa) = (r8_10 & 0xfbff) | 0x7bff
                    
                    int32_t var_f8_7 = zmm11.d
                    uint16_t r8_12 =
                        (var_f8_7 u>> 0x1f).w << 0xf | (*(rbx_3 + (rdx_10 << 3) + 0xc) & 0x7fff)
                    uint16_t rax_53 = (var_f8_7 u>> 0x17).w
                    uint32_t rcx_35 = zx.d(rax_53.b)
                    
                    if (rcx_35 u<= 0x70)
                        r8_12 &= 0x8000
                        *(rbx_3 + (rdx_10 << 3) + 0xc) = r8_12
                        
                        if (0x70 - rcx_35 + 0xe s<= 0x18)
                            int32_t r9_27 = (var_f8_7 & 0x7fffff) | 0x800000
                            uint16_t rax_55 =
                                ((r9_27 u>> (0x70 - rcx_35 + 0xe).b).w & 0x3ff) | r8_12
                            *(rbx_3 + (rdx_10 << 3) + 0xc) = rax_55
                            
                            if (((r9_27 u>> ((0x70 - rcx_35).b + 0xd)).b & 1) != 0)
                                *(rbx_3 + (rdx_10 << 3) + 0xc) = rax_55 + 1
                    else if (rcx_35 u< 0x8f)
                        *(rbx_3 + (rdx_10 << 3) + 0xc) = ((rax_53 - 0x10) & 0x1f) << 0xa
                            | ((var_f8_7 u>> 0xd).w & 0x3ff) | (r8_12 & 0x8000)
                    else
                        *(rbx_3 + (rdx_10 << 3) + 0xc) = (r8_12 & 0xfbff) | 0x7bff
                    
                    int32_t var_f8_8 = zmm12.d
                    *(rbx_3 + (rdx_10 << 3) + 0xe) = 0
                    uint16_t r8_14 =
                        (var_f8_8 u>> 0x1f).w << 0xf | (*(rbx_3 + (rdx_10 << 3) + 0x10) & 0x7fff)
                    uint16_t rax_58 = (var_f8_8 u>> 0x17).w
                    uint32_t rcx_38 = zx.d(rax_58.b)
                    
                    if (rcx_38 u<= 0x70)
                        r8_14 &= 0x8000
                        *(rbx_3 + (rdx_10 << 3) + 0x10) = r8_14
                        
                        if (0x70 - rcx_38 + 0xe s<= 0x18)
                            int32_t r9_33 = (var_f8_8 & 0x7fffff) | 0x800000
                            uint16_t rax_60 =
                                ((r9_33 u>> (0x70 - rcx_38 + 0xe).b).w & 0x3ff) | r8_14
                            *(rbx_3 + (rdx_10 << 3) + 0x10) = rax_60
                            
                            if (((r9_33 u>> ((0x70 - rcx_38).b + 0xd)).b & 1) != 0)
                                *(rbx_3 + (rdx_10 << 3) + 0x10) = rax_60 + 1
                    else if (rcx_38 u< 0x8f)
                        *(rbx_3 + (rdx_10 << 3) + 0x10) = ((var_f8_8 u>> 0xd).w & 0x3ff)
                            | ((rax_58 - 0x10) & 0x1f) << 0xa | (r8_14 & 0x8000)
                    else
                        *(rbx_3 + (rdx_10 << 3) + 0x10) = (r8_14 & 0xfbff) | 0x7bff
                    
                    int32_t var_f8_9 = zmm13.d
                    uint16_t r8_16 =
                        (var_f8_9 u>> 0x1f).w << 0xf | (*(rbx_3 + (rdx_10 << 3) + 0x12) & 0x7fff)
                    uint16_t rax_63 = (var_f8_9 u>> 0x17).w
                    uint32_t rcx_41 = zx.d(rax_63.b)
                    
                    if (rcx_41 u<= 0x70)
                        r8_16 &= 0x8000
                        *(rbx_3 + (rdx_10 << 3) + 0x12) = r8_16
                        
                        if (0x70 - rcx_41 + 0xe s<= 0x18)
                            int32_t r9_37 = (var_f8_9 & 0x7fffff) | 0x800000
                            uint16_t rax_65 =
                                ((r9_37 u>> (0x70 - rcx_41 + 0xe).b).w & 0x3ff) | r8_16
                            *(rbx_3 + (rdx_10 << 3) + 0x12) = rax_65
                            
                            if (((r9_37 u>> ((0x70 - rcx_41).b + 0xd)).b & 1) != 0)
                                *(rbx_3 + (rdx_10 << 3) + 0x12) = rax_65 + 1
                    else if (rcx_41 u< 0x8f)
                        *(rbx_3 + (rdx_10 << 3) + 0x12) = ((var_f8_9 u>> 0xd).w & 0x3ff)
                            | ((rax_63 - 0x10) & 0x1f) << 0xa | (r8_16 & 0x8000)
                    else
                        *(rbx_3 + (rdx_10 << 3) + 0x12) = (r8_16 & 0xfbff) | 0x7bff
                    
                    int32_t var_f8_10 = zmm14.d
                    uint16_t r8_18 =
                        (var_f8_10 u>> 0x1f).w << 0xf | (*(rbx_3 + (rdx_10 << 3) + 0x14) & 0x7fff)
                    uint16_t rax_68 = (var_f8_10 u>> 0x17).w
                    uint32_t rcx_44 = zx.d(rax_68.b)
                    
                    if (rcx_44 u<= 0x70)
                        r8_18 &= 0x8000
                        *(rbx_3 + (rdx_10 << 3) + 0x14) = r8_18
                        
                        if (0x70 - rcx_44 + 0xe s> 0x18)
                            *(rbx_3 + (rdx_10 << 3) + 0x16) = 0
                        else
                            int32_t r9_43 = (var_f8_10 & 0x7fffff) | 0x800000
                            uint16_t rax_70 =
                                ((r9_43 u>> (0x70 - rcx_44 + 0xe).b).w & 0x3ff) | r8_18
                            *(rbx_3 + (rdx_10 << 3) + 0x14) = rax_70
                            
                            if (((r9_43 u>> ((0x70 - rcx_44).b + 0xd)).b & 1) == 0)
                                *(rbx_3 + (rdx_10 << 3) + 0x16) = 0
                            else
                                *(rbx_3 + (rdx_10 << 3) + 0x14) = rax_70 + 1
                                *(rbx_3 + (rdx_10 << 3) + 0x16) = 0
                    else if (rcx_44 u< 0x8f)
                        *(rbx_3 + (rdx_10 << 3) + 0x14) = ((var_f8_10 u>> 0xd).w & 0x3ff)
                            | ((rax_68 - 0x10) & 0x1f) << 0xa | (r8_18 & 0x8000)
                        *(rbx_3 + (rdx_10 << 3) + 0x16) = 0
                    else
                        *(rbx_3 + (rdx_10 << 3) + 0x14) = (r8_18 & 0xfbff) | 0x7bff
                        *(rbx_3 + (rdx_10 << 3) + 0x16) = 0
                
                int64_t* rcx_48 = rsi_1[4]
                int64_t rbx_4 = rsi_1[5]
                (*(*rcx_48 + 0x28))(rcx_48)
                int64_t* rcx_49 = rsi_1[4]
                (*(*rcx_49 + 0x20))(rcx_49)
                result = zx.q(int.d(-32767f))
                int16_t rcx_50
                
                if (result.d s>= 0xffff8000)
                    rcx_50 = 0x7fff
                    
                    if (result.d s< 0x7fff)
                        rcx_50 = result.w
                else
                    rcx_50 = -0x8000
                
                *(rbx_4 + (r12_1 << 3)) = rcx_50
                int16_t rcx_51
                
                if (result.d s>= 0xffff8000)
                    rcx_51 = 0x7fff
                    
                    if (result.d s< 0x7fff)
                        rcx_51 = result.w
                else
                    rcx_51 = -0x8000
                
                *(rbx_4 + (r12_1 << 3) + 2) = rcx_51
                int16_t rcx_52
                
                if (result.d s>= 0xffff8000)
                    rcx_52 = 0x7fff
                    
                    if (result.d s< 0x7fff)
                        rcx_52 = result.w
                else
                    rcx_52 = -0x8000
                
                *(rbx_4 + (r12_1 << 3) + 4) = rcx_52
                int16_t rcx_53
                
                if (result.d s>= 0xffff8000)
                    rcx_53 = 0x7fff
                    
                    if (result.d s< 0x7fff)
                        rcx_53 = result.w
                else
                    rcx_53 = -0x8000
                
                *(rbx_4 + (r12_1 << 3) + 6) = rcx_53
                int32_t i = 0
                int32_t result_1 = *(rsi_1 + 0x44)
                
                if (result_1 s> 0)
                    do
                        result = zx.q(result_1)
                        
                        if (i s< result_1)
                            int64_t* rcx_54 = rsi_1[6]
                            int64_t rbx_5 = rsi_1[7]
                            (*(*rcx_54 + 0x28))(rcx_54)
                            int64_t* rcx_55 = rsi_1[6]
                            (*(*rcx_55 + 0x20))(rcx_55)
                            *(rbx_5 + (sx.q(*(rsi_1 + 0x44) * r12_1.d + i) << 2)) = 0
                            result = zx.q(*(rsi_1 + 0x44))
                        
                        i += 1
                        result_1 = result.d
                    while (i s< result.d)
                
                int32_t rdx_11 = *(arg1 + 0x88)
                int32_t rdi_4 = 0
                
                if (rdx_11 s> 0)
                    do
                        void* rsi_2 = *(arg1 + 0xb8)
                        result = *(arg1 + 0x78)
                        zmm6 = *(result + (sx.q(rdx_11 * r13_1 + rdi_4) << 2))
                        
                        if (rdi_4 s< *(rsi_2 + 0x44))
                            int64_t* rcx_57 = *(rsi_2 + 0x30)
                            int64_t rbx_6 = *(rsi_2 + 0x38)
                            (*(*rcx_57 + 0x28))(rcx_57)
                            int64_t* rcx_58 = *(rsi_2 + 0x30)
                            (*(*rcx_58 + 0x20))(rcx_58)
                            result = sx.q(*(rsi_2 + 0x44) * r12_1.d + rdi_4)
                            *(rbx_6 + (result << 2)) = zmm6.d
                            rdx_11 = *(arg1 + 0x88)
                        
                        rdi_4 += 1
                    while (rdi_4 s< rdx_11)
                
                rdx_8 = var_f0_1
                rsi = arg1 + 0xb8
            
            rdx_8 += 1
            r13_1 += 1
            var_f0_1 = rdx_8
        while (rdx_8 s< var_e8)

return result
