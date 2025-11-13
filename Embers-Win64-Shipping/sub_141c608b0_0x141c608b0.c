// 函数: sub_141c608b0
// 地址: 0x141c608b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
uint64_t result = __security_cookie ^ &var_f8
uint64_t result_1 = result

if ((*(arg1 + 0x1c0) & 1) == 0)
    result = *(arg1 + 0x28)
    
    if (result != 0)
        uint64_t i_8 = zx.q(*arg2)
        *(arg1 + 0x1ac) = i_8.d
        int32_t rcx = *(result + 0x14)
        *(arg1 + 0x1b0) = rcx
        *(arg1 + 0x1b4) = *(result + 0x958) * rcx
        *(arg1 + 0x48) = 0
        
        if (*(arg1 + 0x4c) != i_8.d)
            sub_1405c5570(arg1 + 0x40, i_8.d)
        
        if (i_8.d s> 0)
            uint64_t i_7 = i_8
            uint64_t i
            
            do
                int64_t rsi_1 = sx.q(*(arg1 + 0x48))
                int32_t rax_3 = (rsi_1 + 1).d
                *(arg1 + 0x48) = rax_3
                
                if (rax_3 s> *(arg1 + 0x4c))
                    sub_1405a4d70(arg1 + 0x40)
                
                int64_t* rdx_2 = *(arg1 + 0x40) + (rsi_1 << 3)
                
                if (rdx_2 != 0)
                    *rdx_2 = 0
                
                i = i_7
                i_7 -= 1
            while (i != 1)
        
        sub_141c6c8c0(arg1 + 0xd8, 0)
        int32_t i_6 = *(arg1 + 0x1ac)
        int32_t r15_1 = 0
        
        if (i_6 s> 0)
            do
                int64_t rsi_2 = sx.q(*(arg1 + 0xe0))
                int32_t r12_1 = *(*(arg1 + 0x28) + 0x958)
                int32_t rax_6 = (rsi_2 + 1).d
                *(arg1 + 0xe0) = rax_6
                
                if (rax_6 s> *(arg1 + 0xe4))
                    sub_141c6d1f0(arg1 + 0xd8)
                
                sub_141c4e9a0(rsi_2 * 0x2f0 + *(arg1 + 0xd8), 2, r12_1, *(arg1 + 0x1b0))
                i_6 = *(arg1 + 0x1ac)
                r15_1 += 1
            while (r15_1 s< i_6)
        
        void* r12_2 = arg1 + 0xc8
        int64_t rbx_2 = sx.q(*(r12_2 + 8))
        int32_t rax_7 = i_6 + rbx_2.d
        *(r12_2 + 8) = rax_7
        
        if (rax_7 s> *(r12_2 + 0xc))
            sub_141c6d290(r12_2)
        
        int64_t* rbx_4 = rbx_2 * 0x3f0 + *r12_2
        
        if (i_6 != 0)
            int32_t i_1
            
            do
                sub_141c4eae0(rbx_4)
                rbx_4 = &rbx_4[0x7e]
                i_1 = i_6
                i_6 -= 1
            while (i_1 != 1)
        
        int32_t rsi_5 = *(arg1 + 0x1ac)
        int32_t var_c8_1 = 0
        
        if (rsi_5 s> 0)
            int64_t rcx_9 = 0
            int128_t zmm6 = 0x42c80000
            int128_t zmm7 = 0x41200000
            int64_t var_b0_1
            __builtin_memset(&var_b0_1, 0, 0x18)
            int32_t rdx_8
            
            do
                int64_t* rsi_4 = *r12_2 + rcx_9
                int128_t var_a8
                
                if (rsi_4 != &var_a8)
                    *rsi_4 = 0
                    sub_1405aeff0(&rsi_4[1], &var_a8:8)
                    void* rcx_11 = var_a8:8.q
                    
                    if (rcx_11 != 0)
                        int32_t rax_8 = *(rcx_11 + 8)
                        *(rcx_11 + 8) -= 1
                        
                        if (rax_8 == 1)
                            int64_t* rbx_5 = var_a8:8.q
                            (**rbx_5)(rbx_5)
                            int32_t rax_10 = *(rbx_5 + 0xc)
                            *(rbx_5 + 0xc) -= 1
                            
                            if (rax_10 == 1)
                                int64_t* rcx_13 = var_a8:8.q
                                (*(*rcx_13 + 8))(rcx_13, 1)
                
                *(rsi_4 + 0xfc) = 0xbf800000
                rsi_4[0x20].d = 0xbf800000
                *(rsi_4 + 0x104) = 0
                *(rsi_4 + 0x10c) = 0
                *(rsi_4 + 0x114) = 0xbf800000
                rsi_4[0x23].d = 0xbf800000
                rsi_4[2] = 0
                int128_t var_98 = zx.o(0)
                
                if (&rsi_4[3] != &var_98)
                    rsi_4[3] = 0
                    sub_1405aeff0(&rsi_4[4], &var_98:8)
                    void* rcx_16 = var_98:8.q
                    
                    if (rcx_16 != 0)
                        int32_t rax_12 = *(rcx_16 + 8)
                        *(rcx_16 + 8) -= 1
                        
                        if (rax_12 == 1)
                            int64_t* rbx_6 = var_98:8.q
                            (**rbx_6)(rbx_6)
                            int32_t rax_14 = *(rbx_6 + 0xc)
                            *(rbx_6 + 0xc) -= 1
                            
                            if (rax_14 == 1)
                                int64_t* rcx_18 = var_98:8.q
                                (*(*rcx_18 + 8))(rcx_18, 1)
                
                rsi_4[5].d = 0
                __builtin_memset(&rsi_4[0x12], 0, 0x18)
                int32_t rax_16 = *(rsi_4 + 0xb4)
                void* r15_2 = rsi_4[0x15]
                int32_t i_5 = rsi_4[0x16].d
                
                if (rax_16 s< 0)
                    if (i_5 != 0)
                        void* r15_4 = r15_2 + 8
                        int32_t i_2
                        
                        do
                            int64_t* rcx_20 = *r15_4
                            
                            if (rcx_20 != 0)
                                int32_t rax_19 = *(rcx_20 + 0xc)
                                *(rcx_20 + 0xc) -= 1
                                
                                if (rax_19 == 1 && rcx_20 != 0)
                                    (*(*rcx_20 + 8))(rcx_20, 1)
                            
                            r15_4 += 0x20
                            i_2 = i_5
                            i_5 -= 1
                        while (i_2 != 1)
                        rax_16 = *(rsi_4 + 0xb4)
                    
                    rsi_4[0x16].d = 0
                    
                    if (rax_16 != 0)
                        sub_1405a51b0(&rsi_4[0x15], 0)
                else
                    if (i_5 != 0)
                        int64_t* r15_3 = r15_2 + 8
                        int32_t i_3
                        
                        do
                            int64_t* rcx_19 = *r15_3
                            
                            if (rcx_19 != 0)
                                int32_t rax_17 = *(rcx_19 + 0xc)
                                *(rcx_19 + 0xc) -= 1
                                
                                if (rax_17 == 1 && rcx_19 != 0)
                                    (*(*rcx_19 + 8))(rcx_19, 1)
                            
                            r15_3 = &r15_3[4]
                            i_3 = i_5
                            i_5 -= 1
                        while (i_3 != 1)
                    
                    rsi_4[0x16].d = 0
                
                rsi_4[0x17].d = 0xffffffff
                rsi_4[0x18] = -1
                int32_t rax_21 = *(rsi_4 + 0xd4)
                rsi_4[0x1a].d = 0
                
                if (rax_21 s< 0 && rax_21 != 0)
                    sub_1405dadb0(&rsi_4[0x19], 0)
                
                int32_t rax_22 = *(rsi_4 + 0xe4)
                rsi_4[0x1c].d = 0
                
                if (rax_22 s< 0 && rax_22 != 0)
                    sub_1405dadb0(&rsi_4[0x1b], 0)
                
                rsi_4[0x34].d = 0xffffffff
                char var_d0_1 = 1
                void** var_88
                void*** rax_24
                rax_24, zmm6, zmm7 = sub_141c2e370(&var_88, 
                    _mm_cvtepi32_ps(zx.o(*(*(arg1 + 0x28) + 0xc))), zmm7.d, zmm6, 2)
                rsi_4[0x55].d = rax_24[1].d
                *(rsi_4 + 0x2ac) = *(rax_24 + 0xc)
                rsi_4[0x56].d = rax_24[2].d
                *(rsi_4 + 0x2b4) = *(rax_24 + 0x14)
                rsi_4[0x57].d = rax_24[3].d
                *(rsi_4 + 0x2bc) = *(rax_24 + 0x1c)
                rsi_4[0x58].d = rax_24[4].d
                *(rsi_4 + 0x2c4) = *(rax_24 + 0x24)
                sub_141c31b70(&var_88)
                r12_2 = arg1 + 0xc8
                int64_t rcx_33 = var_b0_1
                rdx_8 = var_c8_1 + 1
                *(rsi_4 + 0x3d1) &= 2
                rcx_9 = rcx_33 + 0x3f0
                *(rsi_4 + 0x3d2) &= 0xf1
                rsi_4[0x59].d = 0
                rsi_4[0x39].b = 0
                rsi_4[0x7a].b = 0
                *(rsi_4 + 0x3d4) = 0
                *(rsi_4 + 0x3dc) = 0
                rsi_5 = *(arg1 + 0x1ac)
                var_c8_1 = rdx_8
                var_b0_1 = rcx_9
            while (rdx_8 s< rsi_5)
            r12_2 = arg1 + 0xc8
        
        int64_t r15_5 = sx.q(*(arg1 + 0x170))
        int32_t rax_26 = r15_5.d + rsi_5
        *(arg1 + 0x170) = rax_26
        
        if (rax_26 s> *(arg1 + 0x174))
            sub_140679a80(arg1 + 0x168)
        
        memset(r15_5 + *(arg1 + 0x168), 0, sx.q(rsi_5))
        int64_t count = sx.q(*(arg1 + 0x1ac))
        int64_t rsi_6 = sx.q(*(arg1 + 0x180))
        int32_t rax_27 = (rsi_6 + count).d
        *(arg1 + 0x180) = rax_27
        
        if (rax_27 s> *(arg1 + 0x184))
            sub_140679a80(arg1 + 0x178)
        
        memset(rsi_6 + *(arg1 + 0x178), 0, count)
        int64_t count_1 = sx.q(*(arg1 + 0x1ac))
        int64_t rsi_7 = sx.q(*(arg1 + 0x190))
        int32_t rax_28 = (rsi_7 + count_1).d
        *(arg1 + 0x190) = rax_28
        
        if (rax_28 s> *(arg1 + 0x194))
            sub_140679a80(arg1 + 0x188)
        
        memset(rsi_7 + *(arg1 + 0x188), 0, count_1)
        int64_t count_2 = sx.q(*(arg1 + 0x1ac))
        int64_t rsi_8 = sx.q(*(arg1 + 0x1a0))
        int32_t rax_29 = (rsi_8 + count_2).d
        *(arg1 + 0x1a0) = rax_29
        
        if (rax_29 s> *(arg1 + 0x1a4))
            sub_140679a80(arg1 + 0x198)
        
        memset(rsi_8 + *(arg1 + 0x198), 0, count_2)
        int32_t rdx_13 = *(arg1 + 0x1ac)
        *(arg1 + 0x160) = 0
        
        if (rdx_13 s> *(arg1 + 0x164))
            sub_1405dadb0(arg1 + 0x158, rdx_13)
        
        int32_t rax_32 = *(arg1 + 0x1ac)
        int32_t r15_6 = rax_32 - 1
        
        if (r15_6 s>= 0)
            int32_t temp9_1
            
            do
                int64_t rsi_9 = sx.q(*(arg1 + 0x160))
                int32_t rax_30 = (rsi_9 + 1).d
                *(arg1 + 0x160) = rax_30
                
                if (rax_30 s> *(arg1 + 0x164))
                    sub_1405a4cf0(arg1 + 0x158)
                
                *(*(arg1 + 0x158) + (rsi_9 << 2)) = r15_6
                temp9_1 = r15_6
                r15_6 -= 1
            while (temp9_1 - 1 s>= 0)
            rax_32 = *(arg1 + 0x1ac)
        
        int32_t i_4 = 0
        
        if (rax_32 s> 0)
            int64_t rbx_8 = 0
            
            do
                void* rsi_10 = *r12_2
                int32_t rdx_16 = *(arg1 + 0x1b0) << 3
                uint64_t* rcx_49 = rsi_10 + 0x30 + rbx_8
                rcx_49[1].d = 0
                
                if (rdx_16 s> *(rcx_49 + 0xc))
                    sub_140775b10(rcx_49, rdx_16)
                
                void* rcx_51 = rsi_10 + 0x50 + rbx_8
                int32_t rdx_18 = *(arg1 + 0x1b0) << 3
                *(rcx_51 + 8) = 0
                
                if (rdx_18 s> *(rcx_51 + 0xc))
                    sub_140775b10(rcx_51, rdx_18)
                
                void* rcx_53 = rsi_10 + 0x60 + rbx_8
                int32_t rdx_20 = *(arg1 + 0x1b0) << 3
                *(rcx_53 + 8) = 0
                
                if (rdx_20 s> *(rcx_53 + 0xc))
                    sub_140775b10(rcx_53, rdx_20)
                
                void* rcx_55 = rsi_10 + 0x290 + rbx_8
                int32_t rdx_22 = *(arg1 + 0x1b0) * 2
                *(rcx_55 + 8) = 0
                
                if (rdx_22 s> *(rcx_55 + 0xc))
                    sub_140775b10(rcx_55, rdx_22)
                
                i_4 += 1
                rbx_8 += 0x3f0
            while (i_4 s< *(arg1 + 0x1ac))
        
        int32_t rax_33 = *(arg1 + 0x144)
        *(arg1 + 0x140) = 0
        
        if (rax_33 s< 0 && rax_33 != 0)
            sub_1405c5570(arg1 + 0x138, 0)
        
        int32_t r8_6 = *(arg1 + 0x1b8)
        
        if (r8_6 s> 0)
            int32_t rcx_57 = *(arg1 + 0x1ac)
            int32_t r15_7 = 0
            int32_t temp0_8 = divs.dp.d(sx.q(rcx_57), r8_6)
            int32_t rdx_24 = 1
            
            if (temp0_8 s>= 1)
                rdx_24 = temp0_8
            
            if (rcx_57 s> 0)
                int32_t r12_4
                
                do
                    int32_t rax_37 = r15_7 + rdx_24
                    
                    if (rax_37 s<= rcx_57)
                        rcx_57 = rax_37
                    
                    r12_4 = rcx_57
                    void*** rax_38 = j_sub_140a82f30(0x38)
                    void*** rbx_9 = rax_38
                    
                    if (rax_38 == 0)
                        rbx_9 = nullptr
                    else
                        *rbx_9 = &data_14320a000
                        rbx_9[1] = arg1
                        rbx_9[2].d = r15_7
                        *(rbx_9 + 0x14) = r12_4
                        rbx_9[3].b = 0
                        rbx_9[4].d = 0
                        rbx_9[5] = 0
                        rbx_9[6] = 0
                    
                    int64_t r15_8 = sx.q(*(arg1 + 0x140))
                    int32_t rax_39 = (r15_8 + 1).d
                    *(arg1 + 0x140) = rax_39
                    
                    if (rax_39 s> *(arg1 + 0x144))
                        sub_1405a4d70(arg1 + 0x138)
                    
                    *(*(arg1 + 0x138) + (r15_8 << 3)) = rbx_9
                    r15_7 = r12_4
                    rcx_57 = *(arg1 + 0x1ac)
                while (r12_4 s< rcx_57)
        
        void* rcx_59 = *(arg1 + 0x28)
        *(arg1 + 0x1b8) = *(arg1 + 0x140)
        int64_t* rdx_26 = *(rcx_59 + 0x38)
        int64_t var_c0 = *(rcx_59 + 0x30)
        int64_t* var_b8_1 = rdx_26
        
        if (rdx_26 != 0)
            rdx_26[1].d += 1
            rdx_26 = var_b8_1
        
        result = &var_c0
        
        if (&var_c0 != arg1 + 0x30)
            uint128_t zmm1_1 = var_c0.o
            uint128_t var_60_1 = zmm1_1
            var_c0.o = *(arg1 + 0x30)
            rdx_26 = var_b8_1
            *(arg1 + 0x30) = zmm1_1
        
        if (rdx_26 != 0)
            result = zx.q(rdx_26[1].d)
            rdx_26[1].d -= 1
            
            if (result.d == 1)
                result = (**var_b8_1)(var_b8_1, rdx_26)
                int32_t r13_2 = *(var_b8_1 + 0xc)
                *(var_b8_1 + 0xc) -= 1
                
                if (r13_2 == 1)
                    result = (*(*var_b8_1 + 8))(var_b8_1, zx.q(r13_2))
        
        if (*(arg1 + 0x30) != 0)
            result = *(arg1 + 0x28)
            *(arg1 + 0x1c0) |= 2
            *(arg1 + 0x1c4) = *(result + 0x354)
        
        *(arg1 + 0x1c0) |= 1
        *(arg1 + 0x1c8) = 0

__security_check_cookie(result_1 ^ &var_f8)
return result
