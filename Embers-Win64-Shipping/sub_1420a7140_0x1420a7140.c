// 函数: sub_1420a7140
// 地址: 0x1420a7140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg2 + 0x10)
int64_t* r13 = arg1
int64_t rdi = sx.q(*(arg2 + 8))
int32_t rsi = -1
void* var_110 = arg2

if (rax s> 0)
    int64_t* rbx_1 = arg1[2]
    rsi = rbx_1[8].d
    int64_t* rcx = *rbx_1
    rbx_1[8].d = rsi + rax
    *(rbx_1 + 0x44) = *(rbx_1 + 0x44)
    (*(*rcx + 8))(rcx, arg3, 0)
    int64_t* rcx_1 = *rbx_1
    int64_t rax_4 = (*(*rcx_1 + 0x30))(rcx_1)
    int64_t* rcx_2 = rbx_1[4]
    uint64_t rdx_1 = zx.q(rbx_1[8].d)
    rbx_1[1] = rax_4
    (*(*rcx_2 + 8))(rcx_2, rdx_1, 0)
    int64_t* rcx_3 = rbx_1[4]
    int64_t rax_7 = (*(*rcx_3 + 0x30))(rcx_3)
    int64_t* rcx_4 = rbx_1[2]
    uint64_t rdx_2 = zx.q(rbx_1[8].d)
    rbx_1[5] = rax_7
    (*(*rcx_4 + 8))(rcx_4, rdx_2, 0)
    int64_t* rcx_5 = rbx_1[2]
    int64_t rax_10 = (*(*rcx_5 + 0x30))(rcx_5)
    int64_t* rcx_6 = rbx_1[6]
    uint64_t rdx_4 = zx.q(rbx_1[8].d * *(rbx_1 + 0x44))
    rbx_1[3] = rax_10
    (*(*rcx_6 + 8))(rcx_6, rdx_4, 0)
    int64_t* rcx_7 = rbx_1[6]
    arg2 = var_110
    rbx_1[7] = (*(*rcx_7 + 0x30))(rcx_7)

if (rdi.d s> 0)
    int128_t* r12_1 = nullptr
    int64_t rax_14 = 0
    uint128_t zmm6 = 0x43800000
    int128_t zmm10 = 0x46fffe00
    uint128_t zmm7
    uint128_t var_58_1 = zmm7
    uint128_t zmm8
    uint128_t var_68_1 = zmm8
    int128_t zmm9
    int128_t var_78_1 = zmm9
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
    int64_t var_118_1 = 0
    
    do
        int32_t* r15_3 = (rax_14 << 7) + *arg2
        int32_t rcx_8 = r15_3[1]
        int32_t r14_1
        
        if (rcx_8 == 0)
            r14_1 = rsi
        else
            r14_1 = *r15_3
        
        if (rcx_8 == 0)
            rsi += 1
        
        int64_t* rcx_9 = *r13[2]
        
        if ((*(*rcx_9 + 0x18))(rcx_9, zx.q(r14_1)) != 0)
            int64_t rax_19 = sx.q(r15_3[1])
            
            if (rax_19.d u<= 5)
                int64_t r13_1 = sx.q(r14_1)
                uint128_t zmm0
                
                switch (rax_19)
                    case 0
                        zmm6 = r15_3[0x10]
                        zmm7 = r15_3[0x11]
                        zmm8 = r15_3[0x12]
                        int64_t* rsi_1 = arg1[2]
                        int32_t var_fc_1 = 0
                        int64_t* rcx_12 = *rsi_1
                        int64_t rbx_3 = rsi_1[1]
                        (*(*rcx_12 + 0x28))(rcx_12)
                        int64_t* rcx_13 = *rsi_1
                        (*(*rcx_13 + 0x20))(rcx_13)
                        zmm0.d = zmm6.d
                        _mm_shuffle_ps(zmm0, zmm0, 0xe1)
                        zmm0.d = zmm7.d
                        _mm_shuffle_ps(zmm0, zmm0, 0xc6)
                        zmm0.d = zmm8.d
                        zmm0 = _mm_shuffle_ps(zmm0, zmm0, 0xc9)
                        *(rbx_3 + r13_1 * 0x10) = zmm0
                        int64_t* rcx_14 = rsi_1[2]
                        zmm6 = r15_3[4]
                        zmm7 = r15_3[5]
                        zmm8 = r15_3[6]
                        int64_t rax_24 = *rcx_14
                        zmm9 = r15_3[8]
                        zmm10 = r15_3[9]
                        zmm11 = r15_3[0xa]
                        zmm12 = r15_3[0xc]
                        zmm13 = r15_3[0xd]
                        zmm14 = r15_3[0xe]
                        int64_t rbx_4 = rsi_1[3]
                        uint128_t var_108 = zmm0
                        
                        if (rsi_1[9].b == 0)
                            (*(rax_24 + 0x28))(rcx_14)
                            int64_t* rcx_43 = rsi_1[2]
                            (*(*rcx_43 + 0x20))(rcx_43)
                            int64_t rax_73 = r13_1 * 0xc
                            *(rbx_4 + (rax_73 << 2)) = zmm6.d
                            *(rbx_4 + (rax_73 << 2) + 4) = zmm7.d
                            *(rbx_4 + (rax_73 << 2) + 8) = zmm8.d
                            *(rbx_4 + (rax_73 << 2) + 0xc) = 0
                            *(rbx_4 + (rax_73 << 2) + 0x10) = zmm9.d
                            *(rbx_4 + (rax_73 << 2) + 0x14) = zmm10.d
                            *(rbx_4 + (rax_73 << 2) + 0x18) = zmm11.d
                            *(rbx_4 + (rax_73 << 2) + 0x1c) = 0
                            *(rbx_4 + (rax_73 << 2) + 0x20) = zmm12.d
                            *(rbx_4 + (rax_73 << 2) + 0x24) = zmm13.d
                            *(rbx_4 + (rax_73 << 2) + 0x28) = zmm14.d
                            *(rbx_4 + (rax_73 << 2) + 0x2c) = 0
                        else
                            (*(rax_24 + 0x28))(rcx_14)
                            int64_t* rcx_15 = rsi_1[2]
                            (*(*rcx_15 + 0x20))(rcx_15)
                            int32_t var_168_1 = zmm6.d
                            int64_t rdx_7 = r13_1 * 3
                            uint16_t r8_2 =
                                (var_168_1 u>> 0x1f).w << 0xf | (*(rbx_4 + (rdx_7 << 3)) & 0x7fff)
                            uint16_t rax_28 = (var_168_1 u>> 0x17).w
                            uint32_t rcx_16 = zx.d(rax_28.b)
                            
                            if (rcx_16 u<= 0x70)
                                r8_2 &= 0x8000
                                *(rbx_4 + (rdx_7 << 3)) = r8_2
                                
                                if (0x70 - rcx_16 + 0xe s<= 0x18)
                                    int32_t r9_3 = (var_168_1 & 0x7fffff) | 0x800000
                                    uint16_t rax_30 =
                                        ((r9_3 u>> (0x70 - rcx_16 + 0xe).b).w & 0x3ff) | r8_2
                                    *(rbx_4 + (rdx_7 << 3)) = rax_30
                                    
                                    if (((r9_3 u>> ((0x70 - rcx_16).b + 0xd)).b & 1) != 0)
                                        *(rbx_4 + (rdx_7 << 3)) = rax_30 + 1
                            else if (rcx_16 u< 0x8f)
                                *(rbx_4 + (rdx_7 << 3)) = ((rax_28 - 0x10) & 0x1f) << 0xa
                                    | ((var_168_1 u>> 0xd).w & 0x3ff) | (r8_2 & 0x8000)
                            else
                                *(rbx_4 + (rdx_7 << 3)) = (r8_2 & 0xfbff) | 0x7bff
                            
                            int32_t var_168_2 = zmm7.d
                            uint16_t r8_4 = (var_168_2 u>> 0x1f).w << 0xf
                                | (*(rbx_4 + (rdx_7 << 3) + 2) & 0x7fff)
                            uint16_t rax_33 = (var_168_2 u>> 0x17).w
                            uint32_t rcx_19 = zx.d(rax_33.b)
                            
                            if (rcx_19 u<= 0x70)
                                r8_4 &= 0x8000
                                *(rbx_4 + (rdx_7 << 3) + 2) = r8_4
                                
                                if (0x70 - rcx_19 + 0xe s<= 0x18)
                                    int32_t r9_8 = (var_168_2 & 0x7fffff) | 0x800000
                                    rax_33 = ((r9_8 u>> (0x70 - rcx_19 + 0xe).b).w & 0x3ff) | r8_4
                                    *(rbx_4 + (rdx_7 << 3) + 2) = rax_33
                                    
                                    if (((r9_8 u>> ((0x70 - rcx_19).b + 0xd)).b & 1) != 0)
                                        *(rbx_4 + (rdx_7 << 3) + 2) = rax_33 + 1
                            else if (rcx_19 u< 0x8f)
                                *(rbx_4 + (rdx_7 << 3) + 2) = ((rax_33 - 0x10) & 0x1f) << 0xa
                                    | ((var_168_2 u>> 0xd).w & 0x3ff) | (r8_4 & 0x8000)
                            else
                                *(rbx_4 + (rdx_7 << 3) + 2) = (r8_4 & 0xfbff) | 0x7bff
                            
                            int32_t var_168_3 = zmm8.d
                            uint16_t r8_6 = (var_168_3 u>> 0x1f).w << 0xf
                                | (*(rbx_4 + (rdx_7 << 3) + 4) & 0x7fff)
                            uint16_t rax_37 = (var_168_3 u>> 0x17).w
                            uint32_t rcx_22 = zx.d(rax_37.b)
                            
                            if (rcx_22 u<= 0x70)
                                r8_6 &= 0x8000
                                *(rbx_4 + (rdx_7 << 3) + 4) = r8_6
                                
                                if (0x70 - rcx_22 + 0xe s<= 0x18)
                                    int32_t r9_13 = (var_168_3 & 0x7fffff) | 0x800000
                                    uint16_t rax_39 =
                                        ((r9_13 u>> (0x70 - rcx_22 + 0xe).b).w & 0x3ff) | r8_6
                                    *(rbx_4 + (rdx_7 << 3) + 4) = rax_39
                                    
                                    if (((r9_13 u>> ((0x70 - rcx_22).b + 0xd)).b & 1) != 0)
                                        *(rbx_4 + (rdx_7 << 3) + 4) = rax_39 + 1
                            else if (rcx_22 u< 0x8f)
                                *(rbx_4 + (rdx_7 << 3) + 4) = ((var_168_3 u>> 0xd).w & 0x3ff)
                                    | ((rax_37 - 0x10) & 0x1f) << 0xa | (r8_6 & 0x8000)
                            else
                                *(rbx_4 + (rdx_7 << 3) + 4) = (r8_6 & 0xfbff) | 0x7bff
                            
                            int32_t var_168_4 = zmm9.d
                            *(rbx_4 + (rdx_7 << 3) + 6) = 0
                            uint16_t r8_8 = (var_168_4 u>> 0x1f).w << 0xf
                                | (*(rbx_4 + (rdx_7 << 3) + 8) & 0x7fff)
                            uint16_t rax_42 = (var_168_4 u>> 0x17).w
                            uint32_t rcx_25 = zx.d(rax_42.b)
                            
                            if (rcx_25 u<= 0x70)
                                r8_8 &= 0x8000
                                *(rbx_4 + (rdx_7 << 3) + 8) = r8_8
                                
                                if (0x70 - rcx_25 + 0xe s<= 0x18)
                                    int32_t r9_18 = (var_168_4 & 0x7fffff) | 0x800000
                                    uint16_t rax_44 =
                                        ((r9_18 u>> (0x70 - rcx_25 + 0xe).b).w & 0x3ff) | r8_8
                                    *(rbx_4 + (rdx_7 << 3) + 8) = rax_44
                                    
                                    if (((r9_18 u>> ((0x70 - rcx_25).b + 0xd)).b & 1) != 0)
                                        *(rbx_4 + (rdx_7 << 3) + 8) = rax_44 + 1
                            else if (rcx_25 u< 0x8f)
                                *(rbx_4 + (rdx_7 << 3) + 8) = ((var_168_4 u>> 0xd).w & 0x3ff)
                                    | ((rax_42 - 0x10) & 0x1f) << 0xa | (r8_8 & 0x8000)
                            else
                                *(rbx_4 + (rdx_7 << 3) + 8) = (r8_8 & 0xfbff) | 0x7bff
                            
                            int32_t var_168_5 = zmm10.d
                            uint16_t r8_10 = (var_168_5 u>> 0x1f).w << 0xf
                                | (*(rbx_4 + (rdx_7 << 3) + 0xa) & 0x7fff)
                            uint16_t rax_47 = (var_168_5 u>> 0x17).w
                            uint32_t rcx_28 = zx.d(rax_47.b)
                            
                            if (rcx_28 u<= 0x70)
                                r8_10 &= 0x8000
                                *(rbx_4 + (rdx_7 << 3) + 0xa) = r8_10
                                
                                if (0x70 - rcx_28 + 0xe s<= 0x18)
                                    int32_t r9_23 = (var_168_5 & 0x7fffff) | 0x800000
                                    uint16_t rax_49 =
                                        ((r9_23 u>> (0x70 - rcx_28 + 0xe).b).w & 0x3ff) | r8_10
                                    *(rbx_4 + (rdx_7 << 3) + 0xa) = rax_49
                                    
                                    if (((r9_23 u>> ((0x70 - rcx_28).b + 0xd)).b & 1) != 0)
                                        *(rbx_4 + (rdx_7 << 3) + 0xa) = rax_49 + 1
                            else if (rcx_28 u< 0x8f)
                                *(rbx_4 + (rdx_7 << 3) + 0xa) = ((var_168_5 u>> 0xd).w & 0x3ff)
                                    | ((rax_47 - 0x10) & 0x1f) << 0xa | (r8_10 & 0x8000)
                            else
                                *(rbx_4 + (rdx_7 << 3) + 0xa) = (r8_10 & 0xfbff) | 0x7bff
                            
                            int32_t var_168_6 = zmm11.d
                            uint16_t r8_12 = (var_168_6 u>> 0x1f).w << 0xf
                                | (*(rbx_4 + (rdx_7 << 3) + 0xc) & 0x7fff)
                            uint16_t rax_52 = (var_168_6 u>> 0x17).w
                            uint32_t rcx_31 = zx.d(rax_52.b)
                            
                            if (rcx_31 u<= 0x70)
                                r8_12 &= 0x8000
                                *(rbx_4 + (rdx_7 << 3) + 0xc) = r8_12
                                
                                if (0x70 - rcx_31 + 0xe s<= 0x18)
                                    int32_t r9_28 = (var_168_6 & 0x7fffff) | 0x800000
                                    uint16_t rax_54 =
                                        ((r9_28 u>> (0x70 - rcx_31 + 0xe).b).w & 0x3ff) | r8_12
                                    *(rbx_4 + (rdx_7 << 3) + 0xc) = rax_54
                                    
                                    if (((r9_28 u>> ((0x70 - rcx_31).b + 0xd)).b & 1) != 0)
                                        *(rbx_4 + (rdx_7 << 3) + 0xc) = rax_54 + 1
                            else if (rcx_31 u< 0x8f)
                                *(rbx_4 + (rdx_7 << 3) + 0xc) = ((var_168_6 u>> 0xd).w & 0x3ff)
                                    | ((rax_52 - 0x10) & 0x1f) << 0xa | (r8_12 & 0x8000)
                            else
                                *(rbx_4 + (rdx_7 << 3) + 0xc) = (r8_12 & 0xfbff) | 0x7bff
                            
                            int32_t var_168_7 = zmm12.d
                            *(rbx_4 + (rdx_7 << 3) + 0xe) = 0
                            uint16_t r8_14 = (var_168_7 u>> 0x1f).w << 0xf
                                | (*(rbx_4 + (rdx_7 << 3) + 0x10) & 0x7fff)
                            uint16_t rax_57 = (var_168_7 u>> 0x17).w
                            uint32_t rcx_34 = zx.d(rax_57.b)
                            
                            if (rcx_34 u<= 0x70)
                                r8_14 &= 0x8000
                                *(rbx_4 + (rdx_7 << 3) + 0x10) = r8_14
                                
                                if (0x70 - rcx_34 + 0xe s<= 0x18)
                                    int32_t r9_33 = (var_168_7 & 0x7fffff) | 0x800000
                                    uint16_t rax_59 =
                                        ((r9_33 u>> (0x70 - rcx_34 + 0xe).b).w & 0x3ff) | r8_14
                                    *(rbx_4 + (rdx_7 << 3) + 0x10) = rax_59
                                    
                                    if (((r9_33 u>> ((0x70 - rcx_34).b + 0xd)).b & 1) != 0)
                                        *(rbx_4 + (rdx_7 << 3) + 0x10) = rax_59 + 1
                            else if (rcx_34 u< 0x8f)
                                *(rbx_4 + (rdx_7 << 3) + 0x10) = ((var_168_7 u>> 0xd).w & 0x3ff)
                                    | ((rax_57 - 0x10) & 0x1f) << 0xa | (r8_14 & 0x8000)
                            else
                                *(rbx_4 + (rdx_7 << 3) + 0x10) = (r8_14 & 0xfbff) | 0x7bff
                            
                            int32_t var_168_8 = zmm13.d
                            uint16_t r8_16 = (var_168_8 u>> 0x1f).w << 0xf
                                | (*(rbx_4 + (rdx_7 << 3) + 0x12) & 0x7fff)
                            uint16_t rax_62 = (var_168_8 u>> 0x17).w
                            uint32_t rcx_37 = zx.d(rax_62.b)
                            
                            if (rcx_37 u<= 0x70)
                                r8_16 &= 0x8000
                                *(rbx_4 + (rdx_7 << 3) + 0x12) = r8_16
                                
                                if (0x70 - rcx_37 + 0xe s<= 0x18)
                                    int32_t r9_38 = (var_168_8 & 0x7fffff) | 0x800000
                                    uint16_t rax_64 =
                                        ((r9_38 u>> (0x70 - rcx_37 + 0xe).b).w & 0x3ff) | r8_16
                                    *(rbx_4 + (rdx_7 << 3) + 0x12) = rax_64
                                    
                                    if (((r9_38 u>> ((0x70 - rcx_37).b + 0xd)).b & 1) != 0)
                                        *(rbx_4 + (rdx_7 << 3) + 0x12) = rax_64 + 1
                            else if (rcx_37 u< 0x8f)
                                *(rbx_4 + (rdx_7 << 3) + 0x12) = ((var_168_8 u>> 0xd).w & 0x3ff)
                                    | ((rax_62 - 0x10) & 0x1f) << 0xa | (r8_16 & 0x8000)
                            else
                                *(rbx_4 + (rdx_7 << 3) + 0x12) = (r8_16 & 0xfbff) | 0x7bff
                            
                            int32_t var_168_9 = zmm14.d
                            uint16_t r8_18 = (var_168_9 u>> 0x1f).w << 0xf
                                | (*(rbx_4 + (rdx_7 << 3) + 0x14) & 0x7fff)
                            uint16_t rax_67 = (var_168_9 u>> 0x17).w
                            uint32_t rcx_40 = zx.d(rax_67.b)
                            
                            if (rcx_40 u<= 0x70)
                                r8_18 &= 0x8000
                                *(rbx_4 + (rdx_7 << 3) + 0x14) = r8_18
                                
                                if (0x70 - rcx_40 + 0xe s> 0x18)
                                    *(rbx_4 + (rdx_7 << 3) + 0x16) = 0
                                else
                                    int32_t r9_43 = (var_168_9 & 0x7fffff) | 0x800000
                                    uint16_t rax_69 =
                                        ((r9_43 u>> (0x70 - rcx_40 + 0xe).b).w & 0x3ff) | r8_18
                                    *(rbx_4 + (rdx_7 << 3) + 0x14) = rax_69
                                    
                                    if (((r9_43 u>> ((0x70 - rcx_40).b + 0xd)).b & 1) == 0)
                                        *(rbx_4 + (rdx_7 << 3) + 0x16) = 0
                                    else
                                        *(rbx_4 + (rdx_7 << 3) + 0x14) = rax_69 + 1
                                        *(rbx_4 + (rdx_7 << 3) + 0x16) = 0
                            else if (rcx_40 u< 0x8f)
                                *(rbx_4 + (rdx_7 << 3) + 0x14) = ((var_168_9 u>> 0xd).w & 0x3ff)
                                    | ((rax_67 - 0x10) & 0x1f) << 0xa | (r8_18 & 0x8000)
                                *(rbx_4 + (rdx_7 << 3) + 0x16) = 0
                            else
                                *(rbx_4 + (rdx_7 << 3) + 0x14) = (r8_18 & 0xfbff) | 0x7bff
                                *(rbx_4 + (rdx_7 << 3) + 0x16) = 0
                        
                        int64_t* rcx_44 = rsi_1[4]
                        int64_t rbx_5 = rsi_1[5]
                        (*(*rcx_44 + 0x28))(rcx_44)
                        int64_t* rcx_45 = rsi_1[4]
                        (*(*rcx_45 + 0x20))(rcx_45)
                        int32_t rax_76 = int.d(0f)
                        int16_t rcx_46
                        
                        if (rax_76 s>= 0xffff8000)
                            rcx_46 = 0x7fff
                            
                            if (rax_76 s< 0x7fff)
                                rcx_46 = rax_76.w
                        else
                            rcx_46 = -0x8000
                        
                        *(rbx_5 + (r13_1 << 3)) = rcx_46
                        int16_t rcx_47
                        
                        if (rax_76 s>= 0xffff8000)
                            rcx_47 = 0x7fff
                            
                            if (rax_76 s< 0x7fff)
                                rcx_47 = rax_76.w
                        else
                            rcx_47 = -0x8000
                        
                        *(rbx_5 + (r13_1 << 3) + 2) = rcx_47
                        int16_t rcx_48
                        
                        if (rax_76 s>= 0xffff8000)
                            rcx_48 = 0x7fff
                            
                            if (rax_76 s< 0x7fff)
                                rcx_48 = rax_76.w
                        else
                            rcx_48 = -0x8000
                        
                        *(rbx_5 + (r13_1 << 3) + 4) = rcx_48
                        int16_t rcx_49
                        
                        if (rax_76 s>= 0xffff8000)
                            rcx_49 = 0x7fff
                            
                            if (rax_76 s< 0x7fff)
                                rcx_49 = rax_76.w
                        else
                            rcx_49 = -0x8000
                        
                        *(rbx_5 + (r13_1 << 3) + 6) = rcx_49
                        int32_t rdi_1 = 0
                        int32_t rcx_50 = *(rsi_1 + 0x44)
                        
                        if (rcx_50 s> 0)
                            int32_t rax_83
                            
                            do
                                rax_83 = rcx_50
                                
                                if (rdi_1 s< rcx_50)
                                    int64_t* rcx_51 = rsi_1[6]
                                    int64_t rbx_6 = rsi_1[7]
                                    (*(*rcx_51 + 0x28))(rcx_51)
                                    int64_t* rcx_52 = rsi_1[6]
                                    (*(*rcx_52 + 0x20))(rcx_52)
                                    *(rbx_6 + (sx.q(*(rsi_1 + 0x44) * r14_1 + rdi_1) << 2)) = 0
                                    rax_83 = *(rsi_1 + 0x44)
                                
                                rdi_1 += 1
                                rcx_50 = rax_83
                            while (rdi_1 s< rax_83)
                        
                    label_1420a7c9d:
                        zmm10 = 0x46fffe00
                        r13 = arg1
                        zmm6 = 0x43800000
                    case 1
                        zmm6 = r15_3[0x10]
                        zmm7 = r15_3[0x11]
                        zmm8 = r15_3[0x12]
                        int64_t* rsi_3 = arg1[2]
                        int32_t var_ec_1 = 0
                        int64_t* rcx_69 = *rsi_3
                        int64_t rbx_13 = rsi_3[1]
                        (*(*rcx_69 + 0x28))(rcx_69)
                        int64_t* rcx_70 = *rsi_3
                        (*(*rcx_70 + 0x20))(rcx_70)
                        zmm0.d = zmm6.d
                        _mm_shuffle_ps(zmm0, zmm0, 0xe1)
                        zmm0.d = zmm7.d
                        _mm_shuffle_ps(zmm0, zmm0, 0xc6)
                        zmm0.d = zmm8.d
                        zmm0 = _mm_shuffle_ps(zmm0, zmm0, 0xc9)
                        *(rbx_13 + r13_1 * 0x10) = zmm0
                        int64_t* rcx_71 = rsi_3[2]
                        zmm6 = r15_3[4]
                        zmm7 = r15_3[5]
                        zmm8 = r15_3[6]
                        int64_t rax_112 = *rcx_71
                        zmm9 = r15_3[8]
                        zmm10 = r15_3[9]
                        zmm11 = r15_3[0xa]
                        zmm12 = r15_3[0xc]
                        zmm13 = r15_3[0xd]
                        zmm14 = r15_3[0xe]
                        int64_t rbx_14 = rsi_3[3]
                        uint128_t var_f8 = zmm0
                        
                        if (rsi_3[9].b == 0)
                            (*(rax_112 + 0x28))(rcx_71)
                            int64_t* rcx_100 = rsi_3[2]
                            (*(*rcx_100 + 0x20))(rcx_100)
                            int64_t rax_159 = r13_1 * 0xc
                            *(rbx_14 + (rax_159 << 2)) = zmm6.d
                            *(rbx_14 + (rax_159 << 2) + 4) = zmm7.d
                            *(rbx_14 + (rax_159 << 2) + 8) = zmm8.d
                            *(rbx_14 + (rax_159 << 2) + 0xc) = 0
                            *(rbx_14 + (rax_159 << 2) + 0x10) = zmm9.d
                            *(rbx_14 + (rax_159 << 2) + 0x14) = zmm10.d
                            *(rbx_14 + (rax_159 << 2) + 0x18) = zmm11.d
                            *(rbx_14 + (rax_159 << 2) + 0x1c) = 0
                            *(rbx_14 + (rax_159 << 2) + 0x20) = zmm12.d
                            *(rbx_14 + (rax_159 << 2) + 0x24) = zmm13.d
                            *(rbx_14 + (rax_159 << 2) + 0x28) = zmm14.d
                            *(rbx_14 + (rax_159 << 2) + 0x2c) = 0
                        else
                            (*(rax_112 + 0x28))(rcx_71)
                            int64_t* rcx_72 = rsi_3[2]
                            (*(*rcx_72 + 0x20))(rcx_72)
                            int32_t var_168_10 = zmm6.d
                            int64_t rdx_10 = r13_1 * 3
                            uint16_t r8_21 = (var_168_10 u>> 0x1f).w << 0xf
                                | (*(rbx_14 + (rdx_10 << 3)) & 0x7fff)
                            uint16_t rax_116 = (var_168_10 u>> 0x17).w
                            uint32_t rcx_73 = zx.d(rax_116.b)
                            
                            if (rcx_73 u<= 0x70)
                                r8_21 &= 0x8000
                                *(rbx_14 + (rdx_10 << 3)) = r8_21
                                
                                if (0x70 - rcx_73 + 0xe s<= 0x18)
                                    int32_t r9_49 = (var_168_10 & 0x7fffff) | 0x800000
                                    uint16_t rax_118 =
                                        ((r9_49 u>> (0x70 - rcx_73 + 0xe).b).w & 0x3ff) | r8_21
                                    *(rbx_14 + (rdx_10 << 3)) = rax_118
                                    
                                    if (((r9_49 u>> ((0x70 - rcx_73).b + 0xd)).b & 1) != 0)
                                        *(rbx_14 + (rdx_10 << 3)) = rax_118 + 1
                            else if (rcx_73 u< 0x8f)
                                *(rbx_14 + (rdx_10 << 3)) = ((rax_116 - 0x10) & 0x1f) << 0xa
                                    | ((var_168_10 u>> 0xd).w & 0x3ff) | (r8_21 & 0x8000)
                            else
                                *(rbx_14 + (rdx_10 << 3)) = (r8_21 & 0xfbff) | 0x7bff
                            
                            int32_t var_168_11 = zmm7.d
                            uint16_t r8_23 = (var_168_11 u>> 0x1f).w << 0xf
                                | (*(rbx_14 + (rdx_10 << 3) + 2) & 0x7fff)
                            uint16_t rax_121 = (var_168_11 u>> 0x17).w
                            uint32_t rcx_76 = zx.d(rax_121.b)
                            
                            if (rcx_76 u<= 0x70)
                                r8_23 &= 0x8000
                                *(rbx_14 + (rdx_10 << 3) + 2) = r8_23
                                
                                if (0x70 - rcx_76 + 0xe s<= 0x18)
                                    int32_t r9_54 = (var_168_11 & 0x7fffff) | 0x800000
                                    rax_121 =
                                        ((r9_54 u>> (0x70 - rcx_76 + 0xe).b).w & 0x3ff) | r8_23
                                    *(rbx_14 + (rdx_10 << 3) + 2) = rax_121
                                    
                                    if (((r9_54 u>> ((0x70 - rcx_76).b + 0xd)).b & 1) != 0)
                                        *(rbx_14 + (rdx_10 << 3) + 2) = rax_121 + 1
                            else if (rcx_76 u< 0x8f)
                                *(rbx_14 + (rdx_10 << 3) + 2) = ((rax_121 - 0x10) & 0x1f) << 0xa
                                    | ((var_168_11 u>> 0xd).w & 0x3ff) | (r8_23 & 0x8000)
                            else
                                *(rbx_14 + (rdx_10 << 3) + 2) = (r8_23 & 0xfbff) | 0x7bff
                            
                            int32_t var_168_12 = zmm8.d
                            uint16_t r8_25 = (var_168_12 u>> 0x1f).w << 0xf
                                | (*(rbx_14 + (rdx_10 << 3) + 4) & 0x7fff)
                            uint16_t rax_125 = (var_168_12 u>> 0x17).w
                            uint32_t rcx_79 = zx.d(rax_125.b)
                            
                            if (rcx_79 u<= 0x70)
                                r8_25 &= 0x8000
                                *(rbx_14 + (rdx_10 << 3) + 4) = r8_25
                                
                                if (0x70 - rcx_79 + 0xe s<= 0x18)
                                    int32_t r9_59 = (var_168_12 & 0x7fffff) | 0x800000
                                    uint16_t rax_127 =
                                        ((r9_59 u>> (0x70 - rcx_79 + 0xe).b).w & 0x3ff) | r8_25
                                    *(rbx_14 + (rdx_10 << 3) + 4) = rax_127
                                    
                                    if (((r9_59 u>> ((0x70 - rcx_79).b + 0xd)).b & 1) != 0)
                                        *(rbx_14 + (rdx_10 << 3) + 4) = rax_127 + 1
                            else if (rcx_79 u< 0x8f)
                                *(rbx_14 + (rdx_10 << 3) + 4) = ((rax_125 - 0x10) & 0x1f) << 0xa
                                    | ((var_168_12 u>> 0xd).w & 0x3ff) | (r8_25 & 0x8000)
                            else
                                *(rbx_14 + (rdx_10 << 3) + 4) = (r8_25 & 0xfbff) | 0x7bff
                            
                            int32_t var_168_13 = zmm9.d
                            *(rbx_14 + (rdx_10 << 3) + 6) = 0
                            uint16_t r8_27 = (var_168_13 u>> 0x1f).w << 0xf
                                | (*(rbx_14 + (rdx_10 << 3) + 8) & 0x7fff)
                            uint16_t rax_130 = (var_168_13 u>> 0x17).w
                            uint32_t rcx_82 = zx.d(rax_130.b)
                            
                            if (rcx_82 u<= 0x70)
                                r8_27 &= 0x8000
                                *(rbx_14 + (rdx_10 << 3) + 8) = r8_27
                                
                                if (0x70 - rcx_82 + 0xe s<= 0x18)
                                    int32_t r9_64 = (var_168_13 & 0x7fffff) | 0x800000
                                    rax_130 =
                                        ((r9_64 u>> (0x70 - rcx_82 + 0xe).b).w & 0x3ff) | r8_27
                                    *(rbx_14 + (rdx_10 << 3) + 8) = rax_130
                                    
                                    if (((r9_64 u>> ((0x70 - rcx_82).b + 0xd)).b & 1) != 0)
                                        *(rbx_14 + (rdx_10 << 3) + 8) = rax_130 + 1
                            else if (rcx_82 u< 0x8f)
                                *(rbx_14 + (rdx_10 << 3) + 8) = ((rax_130 - 0x10) & 0x1f) << 0xa
                                    | ((var_168_13 u>> 0xd).w & 0x3ff) | (r8_27 & 0x8000)
                            else
                                *(rbx_14 + (rdx_10 << 3) + 8) = (r8_27 & 0xfbff) | 0x7bff
                            
                            int32_t var_168_14 = zmm10.d
                            uint16_t r8_29 = (var_168_14 u>> 0x1f).w << 0xf
                                | (*(rbx_14 + (rdx_10 << 3) + 0xa) & 0x7fff)
                            uint16_t rax_134 = (var_168_14 u>> 0x17).w
                            uint32_t rcx_85 = zx.d(rax_134.b)
                            
                            if (rcx_85 u<= 0x70)
                                r8_29 &= 0x8000
                                *(rbx_14 + (rdx_10 << 3) + 0xa) = r8_29
                                
                                if (0x70 - rcx_85 + 0xe s<= 0x18)
                                    int32_t r9_69 = (var_168_14 & 0x7fffff) | 0x800000
                                    uint16_t rax_136 =
                                        ((r9_69 u>> (0x70 - rcx_85 + 0xe).b).w & 0x3ff) | r8_29
                                    *(rbx_14 + (rdx_10 << 3) + 0xa) = rax_136
                                    
                                    if (((r9_69 u>> ((0x70 - rcx_85).b + 0xd)).b & 1) != 0)
                                        *(rbx_14 + (rdx_10 << 3) + 0xa) = rax_136 + 1
                            else if (rcx_85 u< 0x8f)
                                *(rbx_14 + (rdx_10 << 3) + 0xa) = ((rax_134 - 0x10) & 0x1f) << 0xa
                                    | ((var_168_14 u>> 0xd).w & 0x3ff) | (r8_29 & 0x8000)
                            else
                                *(rbx_14 + (rdx_10 << 3) + 0xa) = (r8_29 & 0xfbff) | 0x7bff
                            
                            int32_t var_168_15 = zmm11.d
                            uint16_t r8_31 = (var_168_15 u>> 0x1f).w << 0xf
                                | (*(rbx_14 + (rdx_10 << 3) + 0xc) & 0x7fff)
                            uint16_t rax_139 = (var_168_15 u>> 0x17).w
                            uint32_t rcx_88 = zx.d(rax_139.b)
                            
                            if (rcx_88 u<= 0x70)
                                r8_31 &= 0x8000
                                *(rbx_14 + (rdx_10 << 3) + 0xc) = r8_31
                                
                                if (0x70 - rcx_88 + 0xe s<= 0x18)
                                    int32_t r9_74 = (var_168_15 & 0x7fffff) | 0x800000
                                    rax_139 =
                                        ((r9_74 u>> (0x70 - rcx_88 + 0xe).b).w & 0x3ff) | r8_31
                                    *(rbx_14 + (rdx_10 << 3) + 0xc) = rax_139
                                    
                                    if (((r9_74 u>> ((0x70 - rcx_88).b + 0xd)).b & 1) != 0)
                                        *(rbx_14 + (rdx_10 << 3) + 0xc) = rax_139 + 1
                            else if (rcx_88 u< 0x8f)
                                *(rbx_14 + (rdx_10 << 3) + 0xc) = ((rax_139 - 0x10) & 0x1f) << 0xa
                                    | ((var_168_15 u>> 0xd).w & 0x3ff) | (r8_31 & 0x8000)
                            else
                                *(rbx_14 + (rdx_10 << 3) + 0xc) = (r8_31 & 0xfbff) | 0x7bff
                            
                            int32_t var_168_16 = zmm12.d
                            *(rbx_14 + (rdx_10 << 3) + 0xe) = 0
                            uint16_t r8_33 = (var_168_16 u>> 0x1f).w << 0xf
                                | (*(rbx_14 + (rdx_10 << 3) + 0x10) & 0x7fff)
                            uint16_t rax_143 = (var_168_16 u>> 0x17).w
                            uint32_t rcx_91 = zx.d(rax_143.b)
                            
                            if (rcx_91 u<= 0x70)
                                r8_33 &= 0x8000
                                *(rbx_14 + (rdx_10 << 3) + 0x10) = r8_33
                                
                                if (0x70 - rcx_91 + 0xe s<= 0x18)
                                    int32_t r9_79 = (var_168_16 & 0x7fffff) | 0x800000
                                    uint16_t rax_145 =
                                        ((r9_79 u>> (0x70 - rcx_91 + 0xe).b).w & 0x3ff) | r8_33
                                    *(rbx_14 + (rdx_10 << 3) + 0x10) = rax_145
                                    
                                    if (((r9_79 u>> ((0x70 - rcx_91).b + 0xd)).b & 1) != 0)
                                        *(rbx_14 + (rdx_10 << 3) + 0x10) = rax_145 + 1
                            else if (rcx_91 u< 0x8f)
                                *(rbx_14 + (rdx_10 << 3) + 0x10) = ((rax_143 - 0x10) & 0x1f) << 0xa
                                    | ((var_168_16 u>> 0xd).w & 0x3ff) | (r8_33 & 0x8000)
                            else
                                *(rbx_14 + (rdx_10 << 3) + 0x10) = (r8_33 & 0xfbff) | 0x7bff
                            
                            int32_t var_168_17 = zmm13.d
                            uint16_t r8_35 = (var_168_17 u>> 0x1f).w << 0xf
                                | (*(rbx_14 + (rdx_10 << 3) + 0x12) & 0x7fff)
                            uint16_t rax_148 = (var_168_17 u>> 0x17).w
                            uint32_t rcx_94 = zx.d(rax_148.b)
                            
                            if (rcx_94 u<= 0x70)
                                r8_35 &= 0x8000
                                *(rbx_14 + (rdx_10 << 3) + 0x12) = r8_35
                                
                                if (0x70 - rcx_94 + 0xe s<= 0x18)
                                    int32_t r9_84 = (var_168_17 & 0x7fffff) | 0x800000
                                    uint16_t rax_150 =
                                        ((r9_84 u>> (0x70 - rcx_94 + 0xe).b).w & 0x3ff) | r8_35
                                    *(rbx_14 + (rdx_10 << 3) + 0x12) = rax_150
                                    
                                    if (((r9_84 u>> ((0x70 - rcx_94).b + 0xd)).b & 1) != 0)
                                        *(rbx_14 + (rdx_10 << 3) + 0x12) = rax_150 + 1
                            else if (rcx_94 u< 0x8f)
                                *(rbx_14 + (rdx_10 << 3) + 0x12) = ((rax_148 - 0x10) & 0x1f) << 0xa
                                    | ((var_168_17 u>> 0xd).w & 0x3ff) | (r8_35 & 0x8000)
                            else
                                *(rbx_14 + (rdx_10 << 3) + 0x12) = (r8_35 & 0xfbff) | 0x7bff
                            
                            int32_t var_168_18 = zmm14.d
                            uint16_t r8_37 = (var_168_18 u>> 0x1f).w << 0xf
                                | (*(rbx_14 + (rdx_10 << 3) + 0x14) & 0x7fff)
                            uint16_t rax_153 = (var_168_18 u>> 0x17).w
                            uint32_t rcx_97 = zx.d(rax_153.b)
                            
                            if (rcx_97 u<= 0x70)
                                r8_37 &= 0x8000
                                *(rbx_14 + (rdx_10 << 3) + 0x14) = r8_37
                                
                                if (0x70 - rcx_97 + 0xe s> 0x18)
                                    *(rbx_14 + (rdx_10 << 3) + 0x16) = 0
                                else
                                    int32_t r9_89 = (var_168_18 & 0x7fffff) | 0x800000
                                    uint16_t rax_155 =
                                        ((r9_89 u>> (0x70 - rcx_97 + 0xe).b).w & 0x3ff) | r8_37
                                    *(rbx_14 + (rdx_10 << 3) + 0x14) = rax_155
                                    
                                    if (((r9_89 u>> ((0x70 - rcx_97).b + 0xd)).b & 1) == 0)
                                        *(rbx_14 + (rdx_10 << 3) + 0x16) = 0
                                    else
                                        *(rbx_14 + (rdx_10 << 3) + 0x14) = rax_155 + 1
                                        *(rbx_14 + (rdx_10 << 3) + 0x16) = 0
                            else if (rcx_97 u< 0x8f)
                                *(rbx_14 + (rdx_10 << 3) + 0x14) = ((rax_153 - 0x10) & 0x1f) << 0xa
                                    | ((var_168_18 u>> 0xd).w & 0x3ff) | (r8_37 & 0x8000)
                                *(rbx_14 + (rdx_10 << 3) + 0x16) = 0
                            else
                                *(rbx_14 + (rdx_10 << 3) + 0x14) = (r8_37 & 0xfbff) | 0x7bff
                                *(rbx_14 + (rdx_10 << 3) + 0x16) = 0
                        
                        int64_t* rcx_101 = rsi_3[4]
                        int64_t rbx_15 = rsi_3[5]
                        (*(*rcx_101 + 0x28))(rcx_101)
                        int64_t* rcx_102 = rsi_3[4]
                        (*(*rcx_102 + 0x20))(rcx_102)
                        int32_t rax_162 = int.d(0f)
                        int16_t rcx_103
                        
                        if (rax_162 s>= 0xffff8000)
                            rcx_103 = 0x7fff
                            
                            if (rax_162 s< 0x7fff)
                                rcx_103 = rax_162.w
                        else
                            rcx_103 = -0x8000
                        
                        *(rbx_15 + (r13_1 << 3)) = rcx_103
                        int16_t rcx_104
                        
                        if (rax_162 s>= 0xffff8000)
                            rcx_104 = 0x7fff
                            
                            if (rax_162 s< 0x7fff)
                                rcx_104 = rax_162.w
                        else
                            rcx_104 = -0x8000
                        
                        *(rbx_15 + (r13_1 << 3) + 2) = rcx_104
                        int16_t rcx_105
                        
                        if (rax_162 s>= 0xffff8000)
                            rcx_105 = 0x7fff
                            
                            if (rax_162 s< 0x7fff)
                                rcx_105 = rax_162.w
                        else
                            rcx_105 = -0x8000
                        
                        *(rbx_15 + (r13_1 << 3) + 4) = rcx_105
                        int16_t rcx_106
                        
                        if (rax_162 s>= 0xffff8000)
                            rcx_106 = 0x7fff
                            
                            if (rax_162 s< 0x7fff)
                                rcx_106 = rax_162.w
                        else
                            rcx_106 = -0x8000
                        
                        *(rbx_15 + (r13_1 << 3) + 6) = rcx_106
                        int32_t rdi_3 = 0
                        int32_t rcx_107 = *(rsi_3 + 0x44)
                        
                        if (rcx_107 s> 0)
                            int32_t rax_169
                            
                            do
                                rax_169 = rcx_107
                                
                                if (rdi_3 s< rcx_107)
                                    int64_t* rcx_108 = rsi_3[6]
                                    int64_t rbx_16 = rsi_3[7]
                                    (*(*rcx_108 + 0x28))(rcx_108)
                                    int64_t* rcx_109 = rsi_3[6]
                                    (*(*rcx_109 + 0x20))(rcx_109)
                                    *(rbx_16 + (sx.q(*(rsi_3 + 0x44) * r14_1 + rdi_3) << 2)) = 0
                                    rax_169 = *(rsi_3 + 0x44)
                                
                                rdi_3 += 1
                                rcx_107 = rax_169
                            while (rdi_3 s< rax_169)
                        
                        goto label_1420a7c9d
                    case 2
                        int64_t* rsi_2 = arg1[2]
                        int64_t* rcx_55 = *rsi_2
                        int64_t rbx_8 = rsi_2[1]
                        (*(*rcx_55 + 0x28))(rcx_55)
                        int64_t* rcx_56 = *rsi_2
                        (*(*rcx_56 + 0x20))(rcx_56)
                        *(rbx_8 + r13_1 * 0x10) = zx.o(0)
                        int64_t* rcx_57 = rsi_2[2]
                        int64_t rbx_9 = rsi_2[3]
                        int64_t rax_90 = *rcx_57
                        
                        if (rsi_2[9].b == 0)
                            (*(rax_90 + 0x28))(rcx_57)
                            int64_t* rcx_59 = rsi_2[2]
                            (*(*rcx_59 + 0x20))(rcx_59)
                            int64_t rax_97 = r13_1 * 0xc
                            *(rbx_9 + (rax_97 << 2)) = 0
                            *(rbx_9 + (rax_97 << 2) + 8) = 0
                            *(rbx_9 + (rax_97 << 2) + 0x10) = 0
                            *(rbx_9 + (rax_97 << 2) + 0x18) = 0
                            *(rbx_9 + (rax_97 << 2) + 0x20) = 0
                            *(rbx_9 + (rax_97 << 2) + 0x28) = 0
                        else
                            (*(rax_90 + 0x28))(rcx_57)
                            int64_t* rcx_58 = rsi_2[2]
                            (*(*rcx_58 + 0x20))(rcx_58)
                            int64_t rax_93 = r13_1 * 3
                            *(rbx_9 + (rax_93 << 3)) = 0
                            *(rbx_9 + (rax_93 << 3) + 8) = 0
                            *(rbx_9 + (rax_93 << 3) + 0x10) = 0
                        
                        int64_t* rcx_60 = rsi_2[4]
                        int64_t rbx_10 = rsi_2[5]
                        (*(*rcx_60 + 0x28))(rcx_60)
                        int64_t* rcx_61 = rsi_2[4]
                        (*(*rcx_61 + 0x20))(rcx_61)
                        int32_t rax_100 = int.d(zx.o(0).d)
                        int16_t rcx_62
                        
                        if (rax_100 s>= 0xffff8000)
                            rcx_62 = 0x7fff
                            
                            if (rax_100 s< 0x7fff)
                                rcx_62 = rax_100.w
                        else
                            rcx_62 = -0x8000
                        
                        *(rbx_10 + (r13_1 << 3)) = rcx_62
                        int16_t rcx_63
                        
                        if (rax_100 s>= 0xffff8000)
                            rcx_63 = 0x7fff
                            
                            if (rax_100 s< 0x7fff)
                                rcx_63 = rax_100.w
                        else
                            rcx_63 = -0x8000
                        
                        *(rbx_10 + (r13_1 << 3) + 2) = rcx_63
                        int16_t rcx_64
                        
                        if (rax_100 s>= 0xffff8000)
                            rcx_64 = 0x7fff
                            
                            if (rax_100 s< 0x7fff)
                                rcx_64 = rax_100.w
                        else
                            rcx_64 = -0x8000
                        
                        *(rbx_10 + (r13_1 << 3) + 4) = rcx_64
                        int16_t rcx_65
                        
                        if (rax_100 s>= 0xffff8000)
                            rcx_65 = 0x7fff
                            
                            if (rax_100 s< 0x7fff)
                                rcx_65 = rax_100.w
                        else
                            rcx_65 = -0x8000
                        
                        *(rbx_10 + (r13_1 << 3) + 6) = rcx_65
                        int32_t rdi_2 = 0
                        int32_t rcx_66 = *(rsi_2 + 0x44)
                        
                        if (rcx_66 s> 0)
                            int32_t rax_107
                            
                            do
                                rax_107 = rcx_66
                                
                                if (rdi_2 s< rcx_66)
                                    int64_t* rcx_67 = rsi_2[6]
                                    int64_t rbx_11 = rsi_2[7]
                                    (*(*rcx_67 + 0x28))(rcx_67)
                                    int64_t* rcx_68 = rsi_2[6]
                                    (*(*rcx_68 + 0x20))(rcx_68)
                                    *(rbx_11 + (sx.q(*(rsi_2 + 0x44) * r14_1 + rdi_2) << 2)) = 0
                                    rax_107 = *(rsi_2 + 0x44)
                                
                                rdi_2 += 1
                                rcx_66 = rax_107
                            while (rdi_2 s< rax_107)
                        
                        r13 = arg1
                        zmm6 = 0x43800000
                    case 3
                        char rax_170 = r15_3[0x15].b
                        void* rdi_4 = arg1[2]
                        int32_t rbx_18 = r15_3[0x14]
                        uint8_t r14_3 = (rbx_18 u>> 8).b
                        int64_t rax_171 = *(rdi_4 + 0x18)
                        int64_t* rcx_110 = *(rdi_4 + 0x10)
                        uint8_t rsi_5 = (rbx_18 u>> 0x10).b
                        int64_t rax_172 = *rcx_110
                        int24_t var_168_19 = rbx_18.3
                        
                        if (*(rdi_4 + 0x48) == 0)
                            (*(rax_172 + 0x28))(rcx_110)
                            int64_t* rcx_171 = *(rdi_4 + 0x10)
                            (*(*rcx_171 + 0x20))(rcx_171)
                            int64_t rdi_7 = r13_1 * 0xc
                            zmm9 = *(rax_171 + (rdi_7 << 2))
                            zmm10 = *(rax_171 + (rdi_7 << 2) + 4)
                            zmm11 = *(rax_171 + (rdi_7 << 2) + 8)
                            zmm12 = *(rax_171 + (rdi_7 << 2) + 0x10)
                            zmm13 = *(rax_171 + (rdi_7 << 2) + 0x14)
                            zmm14 = *(rax_171 + (rdi_7 << 2) + 0x18)
                            zmm15 = *(rax_171 + (rdi_7 << 2) + 0x20)
                            int32_t var_168_32 = (*(rax_171 + (rdi_7 << 2) + 0x24)).d
                            int32_t var_150_2 = (*(rax_171 + (rdi_7 << 2) + 0x28)).d
                            
                            if (rax_170 == 0)
                                zmm0 = zx.o(0)
                            else
                                zmm0 = zmm6
                            
                            if (rax_170 == 0)
                                rsi_5 = (rbx_18 u>> 0x10).b
                            
                            if (rax_170 == 0)
                                r14_3 = (rbx_18 u>> 8).b
                            
                            int64_t* rcx_173 = *(rdi_4 + 0x10)
                            zmm8.d = _mm_cvtepi32_ps(zx.o(rsi_5)).d f+ zmm0.d
                            int64_t rbx_20 = *(rdi_4 + 0x18)
                            zmm6 = _mm_cvtepi32_ps(zx.o(r14_3))
                            int64_t rax_379 = *rcx_173
                            zmm7 = _mm_cvtepi32_ps(zx.o(rbx_18.b))
                            (*(rax_379 + 0x28))(rcx_173)
                            int64_t* rcx_174 = *(rdi_4 + 0x10)
                            (*(*rcx_174 + 0x20))(rcx_174)
                            *(rbx_20 + (rdi_7 << 2)) = zmm9.d
                            *(rbx_20 + (rdi_7 << 2) + 4) = zmm10.d
                            zmm10 = 0x46fffe00
                            *(rbx_20 + (rdi_7 << 2) + 8) = zmm11.d
                            *(rbx_20 + (rdi_7 << 2) + 0xc) = zmm8.d
                            *(rbx_20 + (rdi_7 << 2) + 0x10) = zmm12.d
                            *(rbx_20 + (rdi_7 << 2) + 0x14) = zmm13.d
                            *(rbx_20 + (rdi_7 << 2) + 0x18) = zmm14.d
                            *(rbx_20 + (rdi_7 << 2) + 0x1c) = zmm6.d
                            *(rbx_20 + (rdi_7 << 2) + 0x20) = zmm15.d
                            *(rbx_20 + (rdi_7 << 2) + 0x24) = var_168_32.d
                            *(rbx_20 + (rdi_7 << 2) + 0x28) = var_150_2
                            *(rbx_20 + (rdi_7 << 2) + 0x2c) = zmm7.d
                            goto label_1420a9b5e
                        
                        (*(rax_172 + 0x28))(rcx_110)
                        int64_t* rcx_111 = *(rdi_4 + 0x10)
                        (*(*rcx_111 + 0x20))(rcx_111)
                        uint64_t r12_4 = zx.q(data_14401b1a0)
                        int64_t rdi_6 = r13_1 * 3
                        TEB* gsbase
                        void* ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
                        uint32_t rsi_6 = zx.d(*(rax_171 + (rdi_6 << 3)))
                        int32_t r14_6 = (rsi_6 & 0xffff8000) << 0x10
                        int16_t rax_174 = rsi_6.w & 0x7c00
                        int32_t var_148_1
                        
                        if (rax_174 == 0)
                            int32_t rsi_7 = rsi_6 & 0x3ff
                            
                            if (rsi_7 != 0)
                                if (data_143cda914
                                        s> *(0x14 + *(ThreadLocalStoragePointer + (r12_4 << 3))))
                                    _Init_thread_header(&data_143cda914)
                                    
                                    if (data_143cda914 == 0xffffffff)
                                        data_143cda910 = 0x3fb8aa3b
                                        _Init_thread_footer(&data_143cda914)
                                
                                zmm0.d = float.s(zx.q(rsi_7))
                                zmm0 = logf(zmm0.d)
                                int32_t rdx_11 = 0xa - int.d(data_143cda910 f* zmm0.d)
                                var_148_1 = (rsi_7 << (rdx_11.b + 0xd) & 0x7fffff)
                                    | ((0x71 - rdx_11) << 0x17 & 0x7f800000) | r14_6
                            else
                                var_148_1 = r14_6
                        else if (rax_174 != 0x7c00)
                            var_148_1 = ((rsi_6 u>> 0xa & 0x1f) + 0x70) << 0x17
                                | (rsi_6 & 0x3ff) << 0xd | r14_6
                        else
                            var_148_1 = r14_6 | 0x477fe000
                        
                        uint32_t rsi_14 = zx.d(*(rax_171 + (rdi_6 << 3) + 2))
                        int32_t r14_10 = (rsi_14 & 0xffff8000) << 0x10
                        int16_t rax_188 = rsi_14.w & 0x7c00
                        int32_t var_144_1
                        
                        if (rax_188 == 0)
                            int32_t rsi_15 = rsi_14 & 0x3ff
                            
                            if (rsi_15 != 0)
                                if (data_143cda914
                                        s> *(0x14 + *(ThreadLocalStoragePointer + (r12_4 << 3))))
                                    _Init_thread_header(&data_143cda914)
                                    
                                    if (data_143cda914 == 0xffffffff)
                                        data_143cda910 = 0x3fb8aa3b
                                        _Init_thread_footer(&data_143cda914)
                                
                                zmm0.d = float.s(zx.q(rsi_15))
                                zmm0.d = logf(zmm0.d).d f* data_143cda910
                                var_144_1 = (rsi_15 << ((0xa - int.d(zmm0.d)).b + 0xd) & 0x7fffff)
                                    | ((0x71 - (0xa - int.d(zmm0.d))) << 0x17 & 0x7f800000)
                                    | r14_10
                            else
                                var_144_1 = r14_10
                        else if (rax_188 != 0x7c00)
                            var_144_1 = ((rsi_14 u>> 0xa & 0x1f) + 0x70) << 0x17
                                | (rsi_14 & 0x3ff) << 0xd | r14_10
                        else
                            var_144_1 = r14_10 | 0x477fe000
                        
                        uint32_t rsi_22 = zx.d(*(rax_171 + (rdi_6 << 3) + 4))
                        int32_t r14_14 = (rsi_22 & 0xffff8000) << 0x10
                        int16_t rax_202 = rsi_22.w & 0x7c00
                        int32_t var_140_1
                        
                        if (rax_202 == 0)
                            int32_t rsi_23 = rsi_22 & 0x3ff
                            
                            if (rsi_23 != 0)
                                if (data_143cda914
                                        s> *(0x14 + *(ThreadLocalStoragePointer + (r12_4 << 3))))
                                    _Init_thread_header(&data_143cda914)
                                    
                                    if (data_143cda914 == 0xffffffff)
                                        data_143cda910 = 0x3fb8aa3b
                                        _Init_thread_footer(&data_143cda914)
                                
                                zmm0.d = float.s(zx.q(rsi_23))
                                zmm0.d = logf(zmm0.d).d f* data_143cda910
                                var_140_1 = (rsi_23 << ((0xa - int.d(zmm0.d)).b + 0xd) & 0x7fffff)
                                    | ((0x71 - (0xa - int.d(zmm0.d))) << 0x17 & 0x7f800000)
                                    | r14_14
                            else
                                var_140_1 = r14_14
                        else if (rax_202 != 0x7c00)
                            var_140_1 = ((rsi_22 u>> 0xa & 0x1f) + 0x70) << 0x17
                                | (rsi_22 & 0x3ff) << 0xd | r14_14
                        else
                            var_140_1 = r14_14 | 0x477fe000
                        
                        uint32_t rax_216 = zx.d(*(rax_171 + (rdi_6 << 3) + 6))
                        
                        if ((0x7c00 & rax_216.w) == 0 && (rax_216 & 0x3ff) != 0 && data_143cda914
                                s> *(0x14 + *(ThreadLocalStoragePointer + (r12_4 << 3))))
                            _Init_thread_header(&data_143cda914)
                            
                            if (data_143cda914 == 0xffffffff)
                                data_143cda910 = 0x3fb8aa3b
                                _Init_thread_footer(&data_143cda914)
                        
                        uint32_t rsi_30 = zx.d(*(rax_171 + (rdi_6 << 3) + 8))
                        int32_t r14_18 = (rsi_30 & 0xffff8000) << 0x10
                        int16_t rax_219 = rsi_30.w & 0x7c00
                        int32_t var_13c_1
                        
                        if (rax_219 == 0)
                            int32_t rsi_31 = rsi_30 & 0x3ff
                            
                            if (rsi_31 != 0)
                                if (data_143cda914
                                        s> *(0x14 + *(ThreadLocalStoragePointer + (r12_4 << 3))))
                                    _Init_thread_header(&data_143cda914)
                                    
                                    if (data_143cda914 == 0xffffffff)
                                        data_143cda910 = 0x3fb8aa3b
                                        _Init_thread_footer(&data_143cda914)
                                
                                zmm0.d = float.s(zx.q(rsi_31))
                                zmm0.d = logf(zmm0.d).d f* data_143cda910
                                var_13c_1 = (rsi_31 << ((0xa - int.d(zmm0.d)).b + 0xd) & 0x7fffff)
                                    | ((0x71 - (0xa - int.d(zmm0.d))) << 0x17 & 0x7f800000)
                                    | r14_18
                            else
                                var_13c_1 = r14_18
                        else if (rax_219 != 0x7c00)
                            var_13c_1 = ((rsi_30 u>> 0xa & 0x1f) + 0x70) << 0x17
                                | (rsi_30 & 0x3ff) << 0xd | r14_18
                        else
                            var_13c_1 = r14_18 | 0x477fe000
                        
                        uint32_t rsi_38 = zx.d(*(rax_171 + (rdi_6 << 3) + 0xa))
                        int32_t r14_22 = (rsi_38 & 0xffff8000) << 0x10
                        int16_t rax_233 = rsi_38.w & 0x7c00
                        int32_t var_138_1
                        
                        if (rax_233 == 0)
                            int32_t rsi_39 = rsi_38 & 0x3ff
                            
                            if (rsi_39 != 0)
                                if (data_143cda914
                                        s> *(0x14 + *(ThreadLocalStoragePointer + (r12_4 << 3))))
                                    _Init_thread_header(&data_143cda914)
                                    
                                    if (data_143cda914 == 0xffffffff)
                                        data_143cda910 = 0x3fb8aa3b
                                        _Init_thread_footer(&data_143cda914)
                                
                                zmm0.d = float.s(zx.q(rsi_39))
                                zmm0.d = logf(zmm0.d).d f* data_143cda910
                                var_138_1 = (rsi_39 << ((0xa - int.d(zmm0.d)).b + 0xd) & 0x7fffff)
                                    | ((0x71 - (0xa - int.d(zmm0.d))) << 0x17 & 0x7f800000)
                                    | r14_22
                            else
                                var_138_1 = r14_22
                        else if (rax_233 != 0x7c00)
                            var_138_1 = ((rsi_38 u>> 0xa & 0x1f) + 0x70) << 0x17
                                | (rsi_38 & 0x3ff) << 0xd | r14_22
                        else
                            var_138_1 = r14_22 | 0x477fe000
                        
                        uint32_t rsi_46 = zx.d(*(rax_171 + (rdi_6 << 3) + 0xc))
                        int32_t r14_26 = (rsi_46 & 0xffff8000) << 0x10
                        int16_t rax_247 = rsi_46.w & 0x7c00
                        int32_t var_134_1
                        
                        if (rax_247 == 0)
                            int32_t rsi_47 = rsi_46 & 0x3ff
                            
                            if (rsi_47 != 0)
                                if (data_143cda914
                                        s> *(0x14 + *(ThreadLocalStoragePointer + (r12_4 << 3))))
                                    _Init_thread_header(&data_143cda914)
                                    
                                    if (data_143cda914 == 0xffffffff)
                                        data_143cda910 = 0x3fb8aa3b
                                        _Init_thread_footer(&data_143cda914)
                                
                                zmm0.d = float.s(zx.q(rsi_47))
                                zmm0.d = logf(zmm0.d).d f* data_143cda910
                                var_134_1 = (rsi_47 << ((0xa - int.d(zmm0.d)).b + 0xd) & 0x7fffff)
                                    | ((0x71 - (0xa - int.d(zmm0.d))) << 0x17 & 0x7f800000)
                                    | r14_26
                            else
                                var_134_1 = r14_26
                        else if (rax_247 != 0x7c00)
                            var_134_1 = ((rsi_46 u>> 0xa & 0x1f) + 0x70) << 0x17
                                | (rsi_46 & 0x3ff) << 0xd | r14_26
                        else
                            var_134_1 = r14_26 | 0x477fe000
                        
                        uint32_t rax_261 = zx.d(*(rax_171 + (rdi_6 << 3) + 0xe))
                        
                        if ((0x7c00 & rax_261.w) == 0 && (rax_261 & 0x3ff) != 0 && data_143cda914
                                s> *(0x14 + *(ThreadLocalStoragePointer + (r12_4 << 3))))
                            _Init_thread_header(&data_143cda914)
                            
                            if (data_143cda914 == 0xffffffff)
                                data_143cda910 = 0x3fb8aa3b
                                _Init_thread_footer(&data_143cda914)
                        
                        uint32_t rsi_54 = zx.d(*(rax_171 + (rdi_6 << 3) + 0x10))
                        int32_t r14_30 = (rsi_54 & 0xffff8000) << 0x10
                        int16_t rax_264 = rsi_54.w & 0x7c00
                        int32_t var_130_1
                        
                        if (rax_264 == 0)
                            int32_t rsi_55 = rsi_54 & 0x3ff
                            
                            if (rsi_55 != 0)
                                if (data_143cda914
                                        s> *(0x14 + *(ThreadLocalStoragePointer + (r12_4 << 3))))
                                    _Init_thread_header(&data_143cda914)
                                    
                                    if (data_143cda914 == 0xffffffff)
                                        data_143cda910 = 0x3fb8aa3b
                                        _Init_thread_footer(&data_143cda914)
                                
                                zmm0.d = float.s(zx.q(rsi_55))
                                zmm0.d = logf(zmm0.d).d f* data_143cda910
                                var_130_1 = (rsi_55 << ((0xa - int.d(zmm0.d)).b + 0xd) & 0x7fffff)
                                    | ((0x71 - (0xa - int.d(zmm0.d))) << 0x17 & 0x7f800000)
                                    | r14_30
                            else
                                var_130_1 = r14_30
                        else if (rax_264 != 0x7c00)
                            var_130_1 = ((rsi_54 u>> 0xa & 0x1f) + 0x70) << 0x17
                                | (rsi_54 & 0x3ff) << 0xd | r14_30
                        else
                            var_130_1 = r14_30 | 0x477fe000
                        
                        uint32_t rsi_62 = zx.d(*(rax_171 + (rdi_6 << 3) + 0x12))
                        int32_t r14_34 = (rsi_62 & 0xffff8000) << 0x10
                        int16_t rax_278 = rsi_62.w & 0x7c00
                        int32_t var_12c_1
                        
                        if (rax_278 == 0)
                            int32_t rsi_63 = rsi_62 & 0x3ff
                            
                            if (rsi_63 != 0)
                                if (data_143cda914
                                        s> *(0x14 + *(ThreadLocalStoragePointer + (r12_4 << 3))))
                                    _Init_thread_header(&data_143cda914)
                                    
                                    if (data_143cda914 == 0xffffffff)
                                        data_143cda910 = 0x3fb8aa3b
                                        _Init_thread_footer(&data_143cda914)
                                
                                zmm0.d = float.s(zx.q(rsi_63))
                                zmm0.d = logf(zmm0.d).d f* data_143cda910
                                var_12c_1 = (rsi_63 << ((0xa - int.d(zmm0.d)).b + 0xd) & 0x7fffff)
                                    | ((0x71 - (0xa - int.d(zmm0.d))) << 0x17 & 0x7f800000)
                                    | r14_34
                            else
                                var_12c_1 = r14_34
                        else if (rax_278 != 0x7c00)
                            var_12c_1 = ((rsi_62 u>> 0xa & 0x1f) + 0x70) << 0x17
                                | (rsi_62 & 0x3ff) << 0xd | r14_34
                        else
                            var_12c_1 = r14_34 | 0x477fe000
                        
                        uint32_t rsi_70 = zx.d(*(rax_171 + (rdi_6 << 3) + 0x14))
                        int32_t r14_38 = (rsi_70 & 0xffff8000) << 0x10
                        int16_t rax_292 = rsi_70.w & 0x7c00
                        int32_t var_150_1
                        
                        if (rax_292 == 0)
                            int32_t rsi_71 = rsi_70 & 0x3ff
                            
                            if (rsi_71 != 0)
                                if (data_143cda914
                                        s> *(0x14 + *(ThreadLocalStoragePointer + (r12_4 << 3))))
                                    _Init_thread_header(&data_143cda914)
                                    
                                    if (data_143cda914 == 0xffffffff)
                                        data_143cda910 = 0x3fb8aa3b
                                        _Init_thread_footer(&data_143cda914)
                                
                                zmm0.d = float.s(zx.q(rsi_71))
                                zmm0.d = logf(zmm0.d).d f* data_143cda910
                                var_150_1 = (rsi_71 << ((0xa - int.d(zmm0.d)).b + 0xd) & 0x7fffff)
                                    | ((0x71 - (0xa - int.d(zmm0.d))) << 0x17 & 0x7f800000)
                                    | r14_38
                            else
                                var_150_1 = r14_38
                        else if (rax_292 != 0x7c00)
                            var_150_1 = ((rsi_70 u>> 0xa & 0x1f) + 0x70) << 0x17
                                | (rsi_70 & 0x3ff) << 0xd | r14_38
                        else
                            var_150_1 = r14_38 | 0x477fe000
                        
                        uint32_t rax_306 = zx.d(*(rax_171 + (rdi_6 << 3) + 0x16))
                        
                        if ((0x7c00 & rax_306.w) == 0 && (rax_306 & 0x3ff) != 0 && data_143cda914
                                s> *(0x14 + *(ThreadLocalStoragePointer + (r12_4 << 3))))
                            _Init_thread_header(&data_143cda914)
                            
                            if (data_143cda914 == 0xffffffff)
                                data_143cda910 = 0x3fb8aa3b
                                _Init_thread_footer(&data_143cda914)
                        
                        if (rax_170 == 0)
                            zmm0 = zx.o(0)
                        else
                            zmm0 = zmm6
                        
                        int64_t* rcx_133 = *(rdi_4 + 0x10)
                        zmm6.d = _mm_cvtepi32_ps(zx.o(var_168_19:2.b)).d f+ zmm0.d
                        int64_t rbx_19 = *(rdi_4 + 0x18)
                        zmm7 = _mm_cvtepi32_ps(zx.o(var_168_19:1.b))
                        int64_t rax_312 = *rcx_133
                        zmm8 = _mm_cvtepi32_ps(zx.o(rbx_18.b))
                        (*(rax_312 + 0x28))(rcx_133)
                        int64_t* rcx_134 = *(rdi_4 + 0x10)
                        (*(*rcx_134 + 0x20))(rcx_134)
                        int32_t var_168_20 = var_148_1.d
                        uint16_t r8_39 =
                            (var_168_20 u>> 0x1f).w << 0xf | (*(rbx_19 + (rdi_6 << 3)) & 0x7fff)
                        uint16_t rax_316 = (var_168_20 u>> 0x17).w
                        uint32_t rcx_135 = zx.d(rax_316.b)
                        
                        if (rcx_135 u<= 0x70)
                            r8_39 &= 0x8000
                            *(rbx_19 + (rdi_6 << 3)) = r8_39
                            
                            if (0x70 - rcx_135 + 0xe s<= 0x18)
                                int32_t rdx_22 = (var_168_20 & 0x7fffff) | 0x800000
                                uint16_t rax_318 =
                                    ((rdx_22 u>> (0x70 - rcx_135 + 0xe).b).w & 0x3ff) | r8_39
                                *(rbx_19 + (rdi_6 << 3)) = rax_318
                                
                                if (((rdx_22 u>> ((0x70 - rcx_135).b + 0xd)).b & 1) != 0)
                                    *(rbx_19 + (rdi_6 << 3)) = rax_318 + 1
                        else if (rcx_135 u< 0x8f)
                            *(rbx_19 + (rdi_6 << 3)) = ((var_168_20 u>> 0xd).w & 0x3ff)
                                | ((rax_316 - 0x10) & 0x1f) << 0xa | (r8_39 & 0x8000)
                        else
                            *(rbx_19 + (rdi_6 << 3)) = (r8_39 & 0xfbff) | 0x7bff
                        
                        int32_t var_168_21 = var_144_1.d
                        uint16_t rdx_26 =
                            (var_168_21 u>> 0x1f).w << 0xf | (*(rbx_19 + (rdi_6 << 3) + 2) & 0x7fff)
                        uint16_t rax_321 = (var_168_21 u>> 0x17).w
                        uint32_t rcx_138 = zx.d(rax_321.b)
                        
                        if (rcx_138 u<= 0x70)
                            rdx_26 &= 0x8000
                            *(rbx_19 + (rdi_6 << 3) + 2) = rdx_26
                            
                            if (0x70 - rcx_138 + 0xe s<= 0x18)
                                int32_t r8_42 = (var_168_21 & 0x7fffff) | 0x800000
                                rax_321 = ((r8_42 u>> (0x70 - rcx_138 + 0xe).b).w & 0x3ff) | rdx_26
                                *(rbx_19 + (rdi_6 << 3) + 2) = rax_321
                                
                                if (((r8_42 u>> ((0x70 - rcx_138).b + 0xd)).b & 1) != 0)
                                    *(rbx_19 + (rdi_6 << 3) + 2) = rax_321 + 1
                        else if (rcx_138 u< 0x8f)
                            *(rbx_19 + (rdi_6 << 3) + 2) = ((rax_321 - 0x10) & 0x1f) << 0xa
                                | ((var_168_21 u>> 0xd).w & 0x3ff) | (rdx_26 & 0x8000)
                        else
                            *(rbx_19 + (rdi_6 << 3) + 2) = (rdx_26 & 0xfbff) | 0x7bff
                        
                        int32_t var_168_22 = var_140_1.d
                        uint16_t rdx_28 =
                            (var_168_22 u>> 0x1f).w << 0xf | (*(rbx_19 + (rdi_6 << 3) + 4) & 0x7fff)
                        uint16_t rax_325 = (var_168_22 u>> 0x17).w
                        uint32_t rcx_141 = zx.d(rax_325.b)
                        
                        if (rcx_141 u<= 0x70)
                            rdx_28 &= 0x8000
                            *(rbx_19 + (rdi_6 << 3) + 4) = rdx_28
                            
                            if (0x70 - rcx_141 + 0xe s<= 0x18)
                                int32_t r8_47 = (var_168_22 & 0x7fffff) | 0x800000
                                rax_325 = ((r8_47 u>> (0x70 - rcx_141 + 0xe).b).w & 0x3ff) | rdx_28
                                *(rbx_19 + (rdi_6 << 3) + 4) = rax_325
                                
                                if (((r8_47 u>> ((0x70 - rcx_141).b + 0xd)).b & 1) != 0)
                                    *(rbx_19 + (rdi_6 << 3) + 4) = rax_325 + 1
                        else if (rcx_141 u< 0x8f)
                            *(rbx_19 + (rdi_6 << 3) + 4) = ((rax_325 - 0x10) & 0x1f) << 0xa
                                | ((var_168_22 u>> 0xd).w & 0x3ff) | (rdx_28 & 0x8000)
                        else
                            *(rbx_19 + (rdi_6 << 3) + 4) = (rdx_28 & 0xfbff) | 0x7bff
                        
                        int32_t var_168_23 = zmm6.d
                        uint16_t rdx_30 =
                            (var_168_23 u>> 0x1f).w << 0xf | (*(rbx_19 + (rdi_6 << 3) + 6) & 0x7fff)
                        uint16_t rax_329 = (var_168_23 u>> 0x17).w
                        uint32_t rcx_144 = zx.d(rax_329.b)
                        
                        if (rcx_144 u<= 0x70)
                            rdx_30 &= 0x8000
                            *(rbx_19 + (rdi_6 << 3) + 6) = rdx_30
                            
                            if (0x70 - rcx_144 + 0xe s<= 0x18)
                                int32_t r8_52 = (var_168_23 & 0x7fffff) | 0x800000
                                uint16_t rax_331 =
                                    ((r8_52 u>> (0x70 - rcx_144 + 0xe).b).w & 0x3ff) | rdx_30
                                *(rbx_19 + (rdi_6 << 3) + 6) = rax_331
                                
                                if (((r8_52 u>> ((0x70 - rcx_144).b + 0xd)).b & 1) != 0)
                                    *(rbx_19 + (rdi_6 << 3) + 6) = rax_331 + 1
                        else if (rcx_144 u< 0x8f)
                            *(rbx_19 + (rdi_6 << 3) + 6) = ((var_168_23 u>> 0xd).w & 0x3ff)
                                | ((rax_329 - 0x10) & 0x1f) << 0xa | (rdx_30 & 0x8000)
                        else
                            *(rbx_19 + (rdi_6 << 3) + 6) = (rdx_30 & 0xfbff) | 0x7bff
                        
                        int32_t var_168_24 = var_13c_1.d
                        uint16_t rdx_32 =
                            (var_168_24 u>> 0x1f).w << 0xf | (*(rbx_19 + (rdi_6 << 3) + 8) & 0x7fff)
                        uint16_t rax_334 = (var_168_24 u>> 0x17).w
                        uint32_t rcx_147 = zx.d(rax_334.b)
                        
                        if (rcx_147 u<= 0x70)
                            rdx_32 &= 0x8000
                            *(rbx_19 + (rdi_6 << 3) + 8) = rdx_32
                            
                            if (0x70 - rcx_147 + 0xe s<= 0x18)
                                int32_t r8_57 = (var_168_24 & 0x7fffff) | 0x800000
                                uint16_t rax_336 =
                                    ((r8_57 u>> (0x70 - rcx_147 + 0xe).b).w & 0x3ff) | rdx_32
                                *(rbx_19 + (rdi_6 << 3) + 8) = rax_336
                                
                                if (((r8_57 u>> ((0x70 - rcx_147).b + 0xd)).b & 1) != 0)
                                    *(rbx_19 + (rdi_6 << 3) + 8) = rax_336 + 1
                        else if (rcx_147 u< 0x8f)
                            *(rbx_19 + (rdi_6 << 3) + 8) = ((var_168_24 u>> 0xd).w & 0x3ff)
                                | ((rax_334 - 0x10) & 0x1f) << 0xa | (rdx_32 & 0x8000)
                        else
                            *(rbx_19 + (rdi_6 << 3) + 8) = (rdx_32 & 0xfbff) | 0x7bff
                        
                        int32_t var_168_25 = var_138_1.d
                        uint16_t rdx_34 = (var_168_25 u>> 0x1f).w << 0xf
                            | (*(rbx_19 + (rdi_6 << 3) + 0xa) & 0x7fff)
                        uint16_t rax_339 = (var_168_25 u>> 0x17).w
                        uint32_t rcx_150 = zx.d(rax_339.b)
                        
                        if (rcx_150 u<= 0x70)
                            rdx_34 &= 0x8000
                            *(rbx_19 + (rdi_6 << 3) + 0xa) = rdx_34
                            
                            if (0x70 - rcx_150 + 0xe s<= 0x18)
                                int32_t r8_62 = (var_168_25 & 0x7fffff) | 0x800000
                                uint16_t rax_341 =
                                    ((r8_62 u>> (0x70 - rcx_150 + 0xe).b).w & 0x3ff) | rdx_34
                                *(rbx_19 + (rdi_6 << 3) + 0xa) = rax_341
                                
                                if (((r8_62 u>> ((0x70 - rcx_150).b + 0xd)).b & 1) != 0)
                                    *(rbx_19 + (rdi_6 << 3) + 0xa) = rax_341 + 1
                        else if (rcx_150 u< 0x8f)
                            *(rbx_19 + (rdi_6 << 3) + 0xa) = ((var_168_25 u>> 0xd).w & 0x3ff)
                                | ((rax_339 - 0x10) & 0x1f) << 0xa | (rdx_34 & 0x8000)
                        else
                            *(rbx_19 + (rdi_6 << 3) + 0xa) = (rdx_34 & 0xfbff) | 0x7bff
                        
                        int32_t var_168_26 = var_134_1.d
                        uint16_t rdx_36 = (var_168_26 u>> 0x1f).w << 0xf
                            | (*(rbx_19 + (rdi_6 << 3) + 0xc) & 0x7fff)
                        uint16_t rax_344 = (var_168_26 u>> 0x17).w
                        uint32_t rcx_153 = zx.d(rax_344.b)
                        
                        if (rcx_153 u<= 0x70)
                            rdx_36 &= 0x8000
                            *(rbx_19 + (rdi_6 << 3) + 0xc) = rdx_36
                            
                            if (0x70 - rcx_153 + 0xe s<= 0x18)
                                int32_t r8_67 = (var_168_26 & 0x7fffff) | 0x800000
                                uint16_t rax_346 =
                                    ((r8_67 u>> (0x70 - rcx_153 + 0xe).b).w & 0x3ff) | rdx_36
                                *(rbx_19 + (rdi_6 << 3) + 0xc) = rax_346
                                
                                if (((r8_67 u>> ((0x70 - rcx_153).b + 0xd)).b & 1) != 0)
                                    *(rbx_19 + (rdi_6 << 3) + 0xc) = rax_346 + 1
                        else if (rcx_153 u< 0x8f)
                            *(rbx_19 + (rdi_6 << 3) + 0xc) = ((var_168_26 u>> 0xd).w & 0x3ff)
                                | ((rax_344 - 0x10) & 0x1f) << 0xa | (rdx_36 & 0x8000)
                        else
                            *(rbx_19 + (rdi_6 << 3) + 0xc) = (rdx_36 & 0xfbff) | 0x7bff
                        
                        int32_t var_168_27 = zmm7.d
                        uint16_t rdx_38 = (var_168_27 u>> 0x1f).w << 0xf
                            | (*(rbx_19 + (rdi_6 << 3) + 0xe) & 0x7fff)
                        uint16_t rax_349 = (var_168_27 u>> 0x17).w
                        uint32_t rcx_156 = zx.d(rax_349.b)
                        
                        if (rcx_156 u<= 0x70)
                            rdx_38 &= 0x8000
                            *(rbx_19 + (rdi_6 << 3) + 0xe) = rdx_38
                            
                            if (0x70 - rcx_156 + 0xe s<= 0x18)
                                int32_t r8_72 = (var_168_27 & 0x7fffff) | 0x800000
                                uint16_t rax_351 =
                                    ((r8_72 u>> (0x70 - rcx_156 + 0xe).b).w & 0x3ff) | rdx_38
                                *(rbx_19 + (rdi_6 << 3) + 0xe) = rax_351
                                
                                if (((r8_72 u>> ((0x70 - rcx_156).b + 0xd)).b & 1) != 0)
                                    *(rbx_19 + (rdi_6 << 3) + 0xe) = rax_351 + 1
                        else if (rcx_156 u< 0x8f)
                            *(rbx_19 + (rdi_6 << 3) + 0xe) = ((var_168_27 u>> 0xd).w & 0x3ff)
                                | ((rax_349 - 0x10) & 0x1f) << 0xa | (rdx_38 & 0x8000)
                        else
                            *(rbx_19 + (rdi_6 << 3) + 0xe) = (rdx_38 & 0xfbff) | 0x7bff
                        
                        int32_t var_168_28 = var_130_1.d
                        uint16_t rdx_40 = (var_168_28 u>> 0x1f).w << 0xf
                            | (*(rbx_19 + (rdi_6 << 3) + 0x10) & 0x7fff)
                        uint16_t rax_354 = (var_168_28 u>> 0x17).w
                        uint32_t rcx_159 = zx.d(rax_354.b)
                        
                        if (rcx_159 u<= 0x70)
                            rdx_40 &= 0x8000
                            *(rbx_19 + (rdi_6 << 3) + 0x10) = rdx_40
                            
                            if (0x70 - rcx_159 + 0xe s<= 0x18)
                                int32_t r8_77 = (var_168_28 & 0x7fffff) | 0x800000
                                uint16_t rax_356 =
                                    ((r8_77 u>> (0x70 - rcx_159 + 0xe).b).w & 0x3ff) | rdx_40
                                *(rbx_19 + (rdi_6 << 3) + 0x10) = rax_356
                                
                                if (((r8_77 u>> ((0x70 - rcx_159).b + 0xd)).b & 1) != 0)
                                    *(rbx_19 + (rdi_6 << 3) + 0x10) = rax_356 + 1
                        else if (rcx_159 u< 0x8f)
                            *(rbx_19 + (rdi_6 << 3) + 0x10) = ((var_168_28 u>> 0xd).w & 0x3ff)
                                | ((rax_354 - 0x10) & 0x1f) << 0xa | (rdx_40 & 0x8000)
                        else
                            *(rbx_19 + (rdi_6 << 3) + 0x10) = (rdx_40 & 0xfbff) | 0x7bff
                        
                        int32_t var_168_29 = var_12c_1.d
                        uint16_t rdx_42 = (var_168_29 u>> 0x1f).w << 0xf
                            | (*(rbx_19 + (rdi_6 << 3) + 0x12) & 0x7fff)
                        uint16_t rax_359 = (var_168_29 u>> 0x17).w
                        uint32_t rcx_162 = zx.d(rax_359.b)
                        
                        if (rcx_162 u<= 0x70)
                            rdx_42 &= 0x8000
                            *(rbx_19 + (rdi_6 << 3) + 0x12) = rdx_42
                            
                            if (0x70 - rcx_162 + 0xe s<= 0x18)
                                int32_t r8_82 = (var_168_29 & 0x7fffff) | 0x800000
                                uint16_t rax_361 =
                                    ((r8_82 u>> (0x70 - rcx_162 + 0xe).b).w & 0x3ff) | rdx_42
                                *(rbx_19 + (rdi_6 << 3) + 0x12) = rax_361
                                
                                if (((r8_82 u>> ((0x70 - rcx_162).b + 0xd)).b & 1) != 0)
                                    *(rbx_19 + (rdi_6 << 3) + 0x12) = rax_361 + 1
                        else if (rcx_162 u< 0x8f)
                            *(rbx_19 + (rdi_6 << 3) + 0x12) = ((var_168_29 u>> 0xd).w & 0x3ff)
                                | ((rax_359 - 0x10) & 0x1f) << 0xa | (rdx_42 & 0x8000)
                        else
                            *(rbx_19 + (rdi_6 << 3) + 0x12) = (rdx_42 & 0xfbff) | 0x7bff
                        
                        int32_t var_168_30 = var_150_1.d
                        uint16_t rdx_44 = (var_168_30 u>> 0x1f).w << 0xf
                            | (*(rbx_19 + (rdi_6 << 3) + 0x14) & 0x7fff)
                        uint16_t rax_364 = (var_168_30 u>> 0x17).w
                        uint32_t rcx_165 = zx.d(rax_364.b)
                        
                        if (rcx_165 u<= 0x70)
                            rdx_44 &= 0x8000
                            *(rbx_19 + (rdi_6 << 3) + 0x14) = rdx_44
                            
                            if (0x70 - rcx_165 + 0xe s<= 0x18)
                                int32_t r8_87 = (var_168_30 & 0x7fffff) | 0x800000
                                uint16_t rax_366 =
                                    ((r8_87 u>> (0x70 - rcx_165 + 0xe).b).w & 0x3ff) | rdx_44
                                *(rbx_19 + (rdi_6 << 3) + 0x14) = rax_366
                                
                                if (((r8_87 u>> ((0x70 - rcx_165).b + 0xd)).b & 1) != 0)
                                    *(rbx_19 + (rdi_6 << 3) + 0x14) = rax_366 + 1
                        else if (rcx_165 u< 0x8f)
                            *(rbx_19 + (rdi_6 << 3) + 0x14) = ((var_168_30 u>> 0xd).w & 0x3ff)
                                | ((rax_364 - 0x10) & 0x1f) << 0xa | (rdx_44 & 0x8000)
                        else
                            *(rbx_19 + (rdi_6 << 3) + 0x14) = (rdx_44 & 0xfbff) | 0x7bff
                        
                        int32_t var_168_31 = zmm8.d
                        uint16_t rdx_46 = (var_168_31 u>> 0x1f).w << 0xf
                            | (*(rbx_19 + (rdi_6 << 3) + 0x16) & 0x7fff)
                        uint16_t rax_369 = (var_168_31 u>> 0x17).w
                        uint32_t rcx_168 = zx.d(rax_369.b)
                        
                        if (rcx_168 u> 0x70)
                            zmm6 = 0x43800000
                            r13 = arg1
                            
                            if (rcx_168 u< 0x8f)
                                *(rbx_19 + (rdi_6 << 3) + 0x16) = ((var_168_31 u>> 0xd).w & 0x3ff)
                                    | ((rax_369 - 0x10) & 0x1f) << 0xa | (rdx_46 & 0x8000)
                                r12_1 = nullptr
                            else
                                *(rbx_19 + (rdi_6 << 3) + 0x16) = (rdx_46 & 0xfbff) | 0x7bff
                                r12_1 = nullptr
                        else
                            rdx_46 &= 0x8000
                            *(rbx_19 + (rdi_6 << 3) + 0x16) = rdx_46
                            
                            if (0x70 - rcx_168 + 0xe s> 0x18)
                            label_1420a9b5e:
                                r12_1 = nullptr
                                r13 = arg1
                                zmm6 = 0x43800000
                            else
                                zmm6 = 0x43800000
                                r13 = arg1
                                int32_t r8_92 = (var_168_31 & 0x7fffff) | 0x800000
                                uint16_t rax_371 =
                                    ((r8_92 u>> (0x70 - rcx_168 + 0xe).b).w & 0x3ff) | rdx_46
                                *(rbx_19 + (rdi_6 << 3) + 0x16) = rax_371
                                
                                if (((r8_92 u>> ((0x70 - rcx_168).b + 0xd)).b & 1) != 0)
                                    *(rbx_19 + (rdi_6 << 3) + 0x16) = rax_371 + 1
                                
                                r12_1 = nullptr
                    case 4
                        zmm6 = r15_3[0x16]
                        zmm7 = r15_3[0x17]
                        zmm8 = r15_3[0x18]
                        void* rbx_22 = arg1[2]
                        zmm9 = r15_3[0x19]
                        int64_t* rcx_175 = *(rbx_22 + 0x20)
                        int64_t rdi_8 = *(rbx_22 + 0x28)
                        (*(*rcx_175 + 0x28))(rcx_175)
                        int64_t* rcx_176 = *(rbx_22 + 0x20)
                        (*(*rcx_176 + 0x20))(rcx_176)
                        zmm6.d = zmm6.d f* zmm10.d
                        int32_t rcx_177 = int.d(zmm6.d)
                        int16_t rax_383
                        
                        if (rcx_177 s>= 0xffff8000)
                            rax_383 = 0x7fff
                            
                            if (rcx_177 s< 0x7fff)
                                rax_383 = rcx_177.w
                        else
                            rax_383 = -0x8000
                        
                        zmm7.d = zmm7.d f* zmm10.d
                        *(rdi_8 + (r13_1 << 3)) = rax_383
                        int32_t rcx_178 = int.d(zmm7.d)
                        int16_t rax_384
                        
                        if (rcx_178 s>= 0xffff8000)
                            rax_384 = 0x7fff
                            
                            if (rcx_178 s< 0x7fff)
                                rax_384 = rcx_178.w
                        else
                            rax_384 = -0x8000
                        
                        zmm8.d = zmm8.d f* zmm10.d
                        *(rdi_8 + (r13_1 << 3) + 2) = rax_384
                        int32_t rcx_179 = int.d(zmm8.d)
                        int16_t rax_385
                        
                        if (rcx_179 s>= 0xffff8000)
                            rax_385 = 0x7fff
                            
                            if (rcx_179 s< 0x7fff)
                                rax_385 = rcx_179.w
                        else
                            rax_385 = -0x8000
                        
                        zmm9.d = zmm9.d f* zmm10.d
                        *(rdi_8 + (r13_1 << 3) + 4) = rax_385
                        int32_t rcx_180 = int.d(zmm9.d)
                        int16_t rax_386
                        
                        if (rcx_180 s>= 0xffff8000)
                            rax_386 = 0x7fff
                            
                            if (rcx_180 s< 0x7fff)
                                rax_386 = rcx_180.w
                        else
                            rax_386 = -0x8000
                        
                        zmm6 = 0x43800000
                        *(rdi_8 + (r13_1 << 3) + 6) = rax_386
                        r13 = arg1
                    case 5
                        r13 = arg1
                        int32_t i = 0
                        void* rdi_9 = r13[2]
                        
                        if (*(rdi_9 + 0x44) s> 0)
                            void* rax_388
                            
                            do
                                int32_t r14_40 = *r15_3
                                zmm6 = *(r12_1 + *(r15_3 + 0x68))
                                rax_388 = rdi_9
                                
                                if (i s< *(rdi_9 + 0x44))
                                    int64_t* rcx_181 = *(rdi_9 + 0x30)
                                    int64_t rbx_23 = *(rdi_9 + 0x38)
                                    (*(*rcx_181 + 0x28))(rcx_181)
                                    int64_t* rcx_182 = *(rdi_9 + 0x30)
                                    (*(*rcx_182 + 0x20))(rcx_182)
                                    *(rbx_23 + (sx.q(i + r14_40 * *(rdi_9 + 0x44)) << 2)) = zmm6.d
                                    rax_388 = r13[2]
                                
                                i += 1
                                r12_1 += 4
                                rdi_9 = rax_388
                            while (i s< *(rax_388 + 0x44))
                            r12_1 = nullptr
                            zmm6 = 0x43800000
        
        arg2 = var_110
        rax_14 = var_118_1 + 1
        var_118_1 = rax_14
    while (rax_14 s< rdi)

return sub_1419ba620(r13, arg2) __tailcall
