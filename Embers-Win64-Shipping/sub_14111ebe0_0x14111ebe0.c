// 函数: sub_14111ebe0
// 地址: 0x14111ebe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = arg3
void*** result = sub_1410e0370(arg1)
int32_t i_1 = 0

if (*(rbx + 8) s> 0)
    result = nullptr
    void*** result_1 = nullptr
    int32_t i
    
    do
        void* r15_2 = result * 0x5240 + *rbx
        int32_t rbx_1 = *(arg1 + 0x8c)
        int32_t rax = *(r15_2 + 0xad8)
        
        if (rbx_1 != rax)
            bool cond:0_1 = *(arg1 + 0x14) u> 0
            *(arg1 + 0x8c) = rax
            
            if (cond:0_1)
                void*** rdx_2 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                void* rax_1 = &rdx_2[3]
                
                if (rax_1 u> *(arg1 + 0x38))
                    sub_140b0e3d0(arg1 + 0x30, 0x20)
                    rdx_2 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                    rax_1 = &rdx_2[3]
                
                *(arg1 + 0x30) = rax_1
                int64_t* rax_2 = *(arg1 + 8)
                *(arg1 + 0x14) += 1
                *rax_2 = rdx_2
                int32_t rax_3 = *(arg1 + 0x8c)
                *(arg1 + 8) = &rdx_2[1]
                rdx_2[1] = 0
                *rdx_2 = &data_142f11588
                rdx_2[2].d = rax_3
            else
                *(arg1 + 0x90) = rax
        
        int32_t rcx_2 = data_1439b55c0
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(*(r15_2 + 0x15a4) - *(r15_2 + 0x159c))
        int32_t rax_8 = (temp3_1 - temp2_1) s>> 1
        int32_t temp4_1
        int32_t temp5_1
        temp4_1:temp5_1 = sx.q(*(r15_2 + 0x15a0) - *(r15_2 + 0x1598))
        int32_t rdx_7 = 1
        int32_t rax_13 = (temp5_1 - temp4_1) s>> 1
        
        if (rax_13 s>= 1)
            rdx_7 = rax_13
        
        int32_t temp0_1 = divs.dp.d(sx.q(rcx_2 - 1 + rdx_7), rcx_2)
        int32_t rax_18 = 1
        
        if (rax_8 s>= 1)
            rax_18 = rax_8
        
        int64_t* r14_2 = *(r15_2 + 8) + 0xd40
        int32_t temp0_2 = divs.dp.d(sx.q(rax_18 - 1 + data_1439b55c4), data_1439b55c4)
        int64_t* rsi_1 = *r14_2
        int32_t var_b4_1 = temp0_2
        int64_t rdi_1 = temp0_1.q
        void*** rdx_11
        
        if (rsi_1 == 0)
            void*** rax_27 = j_sub_140a82f30(0xe0)
            rdx_11 = rax_27
            
            if (rax_27 == 0)
                rdx_11 = nullptr
            else
                int64_t rcx_6 = sx.q((*U"1111")[sx.q(*(r15_2 + 0x1548))])
                int64_t rax_28
                
                if (rcx_6.d u> 0x1f)
                    if (*(rcx_6 * 0x14 + &data_143f025f0) == data_143f025b0)
                        rax_28.b = 0
                    else
                        rax_28.b = 1
                else if (test_bit(0xc8451800, rcx_6.d)
                        || *(rcx_6 * 0x14 + &data_143f025f0) == data_143f025b0)
                    rax_28.b = 0
                else
                    rax_28.b = 1
                
                rdx_11[1].d = 0xffffffff
                *(rdx_11 + 0xc) = 4
                *rdx_11 = &data_142f21a70
                __builtin_memset(&rdx_11[2], 0, 0x1c)
                __builtin_memset(&rdx_11[6], 0, 0x1c)
                __builtin_memset(&rdx_11[0xa], 0, 0x1c)
                __builtin_memset(&rdx_11[0xe], 0, 0x1c)
                __builtin_memset(&rdx_11[0x12], 0, 0x1c)
                __builtin_memset(&rdx_11[0x16], 0, 0x1c)
                rdx_11[0x1b].d = 0
                *(rdx_11 + 0xdc) = rax_28.b
            
            *r14_2 = rdx_11
            goto label_14111eeb3
        
        if (rsi_1[1].d == 0xffffffff || temp0_1 != rsi_1[0x1a].d
                || (rdi_1 u>> 0x20).d != *(rsi_1 + 0xd4) || arg2[0x62c] s> rsi_1[0x1b].d
                || data_143ed3440 != 0)
            (*(*rsi_1 + 0x30))(rsi_1)
            rdx_11 = *r14_2
        label_14111eeb3:
            int32_t rcx_8 = arg2[0x62c]
            rdx_11[0x1a].d = temp0_1
            *(rdx_11 + 0xd4) = (rdi_1 u>> 0x20).d
            rdx_11[0x1b].d = rcx_8
            int64_t* rcx_9 = *r14_2
            (*(*rcx_9 + 0x28))(rcx_9)
            rsi_1 = *r14_2
        
        void* r14_3 = rsi_1[2]
        
        if (*(r14_3 + 0x11) == 0)
            if (data_143f0f1c7 != 0)
                int64_t* rcx_10 = data_143f0f180
                (*(*rcx_10 + 0x618))(rcx_10, r14_3)
            
            *(r14_3 + 0x11) = 1
        
        void* r14_4 = rsi_1[6]
        
        if (*(r14_4 + 0x11) == 0)
            if (data_143f0f1c7 != 0)
                int64_t* rcx_11 = data_143f0f180
                (*(*rcx_11 + 0x618))(rcx_11, r14_4)
            
            *(r14_4 + 0x11) = 1
        
        void* r14_5 = rsi_1[0xa]
        
        if (*(r14_5 + 0x11) == 0)
            if (data_143f0f1c7 != 0)
                int64_t* rcx_12 = data_143f0f180
                (*(*rcx_12 + 0x618))(rcx_12, r14_5)
            
            *(r14_5 + 0x11) = 1
        
        void* r14_6 = rsi_1[0xe]
        
        if (*(r14_6 + 0x11) == 0)
            if (data_143f0f1c7 != 0)
                int64_t* rcx_13 = data_143f0f180
                (*(*rcx_13 + 0x618))(rcx_13, r14_6)
            
            *(r14_6 + 0x11) = 1
        
        void* rsi_2 = rsi_1[0x12]
        
        if (*(rsi_2 + 0x11) == 0)
            if (data_143f0f1c7 != 0)
                int64_t* rcx_14 = data_143f0f180
                (*(*rcx_14 + 0x618))(rcx_14, rsi_2)
            
            *(rsi_2 + 0x11) = 1
        
        if (data_1439b5c44 != 0)
            void* var_58
            sub_1419a2ec0(*(r15_2 + 0x5150), &var_58, &data_143e57270, 0)
            void* r12_2 = var_58
            void* rsi_3 = nullptr
            
            if (r12_2 != 0)
                int64_t rdx_18 = sx.q(*(r12_2 + 0x10c))
                void* var_50
                int64_t* r14_7 = *(var_50 + 0x10)
                int64_t rsi_4 = r14_7[3]
                
                if (*(rsi_4 + (rdx_18 << 3)) == 0)
                    sub_1419ccf30(r14_7, rdx_18.d)
                    rsi_4 = r14_7[3]
                
                rsi_3 = *(rsi_4 + (rdx_18 << 3))
            
            *(arg1 + 0x1b0) = rsi_3
            sub_14198aa60(rsi_3)
            void*** rcx_20 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_39 = &rcx_20[3]
            
            if (rax_39 u> *(arg1 + 0x38))
                sub_140b0e3d0(arg1 + 0x30, 0x20)
                rcx_20 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                rax_39 = &rcx_20[3]
            
            *(arg1 + 0x30) = rax_39
            void**** rax_40 = *(arg1 + 8)
            *(arg1 + 0x14) += 1
            *rax_40 = rcx_20
            *(arg1 + 8) = &rcx_20[1]
            rcx_20[1] = 0
            *rcx_20 = &data_142dd5b40
            int32_t* var_e8_1 = arg5
            rcx_20[2] = rsi_3
            uint128_t zmm1_1 = _mm_cvtepi32_ps(zx.o(temp0_2))
            int64_t var_f0_1 = (_mm_unpacklo_ps(_mm_cvtepi32_ps(zx.o(temp0_1)), zmm1_1.q)).q
            sub_1411430c0(r12_2, arg1, r15_2, arg4, arg2)
            int32_t* var_f8_1
            var_f8_1.d = 1
            sub_1419cd1c0(arg1, r12_2, temp0_1, temp0_2, var_f8_1.d)
            sub_14077cfd0(r12_2 + 0x138, arg1, *(arg1 + 0x1b0))
            uint128_t zmm6_1 = sub_14077cfd0(r12_2 + 0x140, arg1, *(arg1 + 0x1b0))
            int64_t* rsi_8 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_45 = *(*(r15_2 + 8) + 0xd40)
            int64_t rcx_28 = *(rax_45 + 0x18)
            int64_t rax_46 = *(rax_45 + 0x38)
            void* rax_47 = &rsi_8[2]
            
            if (rax_47 u> *(arg1 + 0x38))
                zmm6_1 = sub_140b0e3d0(arg1 + 0x30, 0x18)
                rsi_8 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                rax_47 = &rsi_8[2]
            
            *(arg1 + 0x30) = rax_47
            *rsi_8 = rcx_28
            rsi_8[1] = rax_46
            void*** rcx_32 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_49 = &rcx_32[6]
            
            if (rax_49 u> *(arg1 + 0x38))
                zmm6_1 = sub_140b0e3d0(arg1 + 0x30, 0x38)
                rcx_32 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                rax_49 = &rcx_32[6]
            
            *(arg1 + 0x30) = rax_49
            *(arg1 + 0x14) += 1
            **(arg1 + 8) = rcx_32
            *(arg1 + 8) = &rcx_32[1]
            rcx_32[1] = 0
            rcx_32[3] = rsi_8
            *rcx_32 = &data_142da7798
            rcx_32[2].d = 2
            rcx_32[4].d = 0
            *(rcx_32 + 0x24) = 3
            rcx_32[5] = 0
            int64_t* rsi_13 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            int64_t rcx_36 = *(*r14_2 + 0x58)
            int32_t var_d8_1
            var_d8_1.q = rcx_36
            void* rax_53 = &rsi_13[1]
            
            if (rax_53 u> *(arg1 + 0x38))
                zmm6_1 = sub_140b0e3d0(arg1 + 0x30, 0x10)
                rcx_36 = var_d8_1.q
                rsi_13 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                rax_53 = &rsi_13[1]
            
            *(arg1 + 0x30) = rax_53
            *rsi_13 = rcx_36
            void*** rcx_40 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_54 = &rcx_40[6]
            
            if (rax_54 u> *(arg1 + 0x38))
                zmm6_1 = sub_140b0e3d0(arg1 + 0x30, 0x38)
                rcx_40 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                rax_54 = &rcx_40[6]
            
            *(arg1 + 0x30) = rax_54
            *(arg1 + 0x14) += 1
            int64_t var_98_1 = 0
            int64_t var_90_1 = 0
            **(arg1 + 8) = rcx_40
            *(arg1 + 8) = &rcx_40[1]
            rcx_40[1] = 0
            *rcx_40 = &data_142da7798
            rcx_40[2].d = 1
            rcx_40[3] = rsi_13
            rcx_40[4] = 2
            rcx_40[5] = 0
            void*** rcx_46 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            int64_t rsi_16 = *(*r14_2 + 0x58)
            void* rax_58 = &rcx_46[5]
            
            if (rax_58 u> *(arg1 + 0x38))
                zmm6_1 = sub_140b0e3d0(arg1 + 0x30, 0x30)
                rcx_46 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                rax_58 = &rcx_46[5]
            
            *(arg1 + 0x30) = rax_58
            int64_t* rax_59 = *(arg1 + 8)
            *(arg1 + 0x14) += 1
            *rax_59 = rcx_46
            *(arg1 + 8) = &rcx_46[1]
            rcx_46[1] = 0
            *rcx_46 = &data_142f115d8
            rcx_46[2] = rsi_16
            *(rcx_46 + 0x18) = var_98_1.o
            sub_141116c80(arg1, r15_2, rdi_1, arg5, zmm6_1)
            int64_t* rsi_19 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            int64_t rcx_51 = *(*r14_2 + 0xb8)
            var_d8_1.q = rcx_51
            void* rax_62 = &rsi_19[1]
            
            if (rax_62 u> *(arg1 + 0x38))
                sub_140b0e3d0(arg1 + 0x30, 0x10)
                rcx_51 = var_d8_1.q
                rsi_19 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                rax_62 = &rsi_19[1]
            
            *(arg1 + 0x30) = rax_62
            *rsi_19 = rcx_51
            void*** rcx_55 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_63 = &rcx_55[6]
            
            if (rax_63 u> *(arg1 + 0x38))
                sub_140b0e3d0(arg1 + 0x30, 0x38)
                rcx_55 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                rax_63 = &rcx_55[6]
            
            *(arg1 + 0x30) = rax_63
            *(arg1 + 0x14) += 1
            int64_t var_88_1 = 0
            int64_t var_80_1 = 0
            **(arg1 + 8) = rcx_55
            *(arg1 + 8) = &rcx_55[1]
            rcx_55[1] = 0
            *rcx_55 = &data_142da7798
            rcx_55[2].d = 1
            rcx_55[3] = rsi_19
            rcx_55[4] = 2
            rcx_55[5] = 0
            void*** rcx_61 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            int64_t rsi_22 = *(*r14_2 + 0xb8)
            void* rax_67 = &rcx_61[5]
            
            if (rax_67 u> *(arg1 + 0x38))
                sub_140b0e3d0(arg1 + 0x30, 0x30)
                rcx_61 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                rax_67 = &rcx_61[5]
            
            *(arg1 + 0x30) = rax_67
            int64_t* rax_68 = *(arg1 + 8)
            *(arg1 + 0x14) += 1
            *rax_68 = rcx_61
            *(arg1 + 8) = &rcx_61[1]
            rcx_61[1] = 0
            *rcx_61 = &data_142f115d8
            rcx_61[2] = rsi_22
            *(rcx_61 + 0x18) = var_88_1.o
            void* var_48
            sub_1419a2ec0(*(r15_2 + 0x5150), &var_48, &data_143e57470, 0)
            void* r14_9 = var_48
            void* rsi_23 = nullptr
            var_d8_1.q = r14_9
            uint32_t r12_6 = (arg2[0x62c] + 0x3f) u>> 6
            
            if (r14_9 != 0)
                int64_t rdx_25 = sx.q(*(r14_9 + 0x10c))
                void* var_40
                int64_t* rsi_24 = *(var_40 + 0x10)
                int64_t rax_72 = rsi_24[3]
                
                if (*(rax_72 + (rdx_25 << 3)) == 0)
                    sub_1419ccf30(rsi_24, rdx_25.d)
                    rax_72 = rsi_24[3]
                
                rsi_23 = *(rax_72 + (rdx_25 << 3))
                r14_9 = var_d8_1.q
            
            *(arg1 + 0x1b0) = rsi_23
            sub_14198aa60(rsi_23)
            void*** rcx_70 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_73 = &rcx_70[3]
            
            if (rax_73 u> *(arg1 + 0x38))
                sub_140b0e3d0(arg1 + 0x30, 0x20)
                rcx_70 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                rax_73 = &rcx_70[3]
            
            *(arg1 + 0x30) = rax_73
            void**** rax_74 = *(arg1 + 8)
            *(arg1 + 0x14) += 1
            *rax_74 = rcx_70
            *(arg1 + 8) = &rcx_70[1]
            rcx_70[2] = rsi_23
            rcx_70[1] = 0
            *rcx_70 = &data_142dd5b40
            sub_141144720(r14_9, arg1, r15_2)
            sub_1419cd1c0(arg1, r14_9, r12_6, 1, 1)
            int64_t rsi_26 = *(arg1 + 0x1b0)
            void* r12_7 = var_d8_1.q
            void* r14_11 = *(*(r15_2 + 8) + 0xd40)
            sub_14077cfd0(r12_7 + 0x150, arg1, rsi_26)
            sub_14077cfd0(r12_7 + 0x158, arg1, rsi_26)
            sub_14077cfd0(r12_7 + 0x160, arg1, rsi_26)
            uint128_t zmm6_2 = sub_14077cfd0(r12_7 + 0x168, arg1, rsi_26)
            int64_t var_a8 = 0
            int32_t var_a0_1 = 0
            sub_141124a40(r12_7 + 0x14a, r14_11, &var_a8)
            uint64_t rax_77 = zx.q(var_a0_1)
            int64_t r14_12 = var_a8
            int64_t* rsi_29 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            uint32_t rdx_33 = (rax_77 << 3).d
            int64_t r12_8 = sx.q(rdx_33)
            void* rax_78 = r12_8 + rsi_29
            
            if (rax_78 u> *(arg1 + 0x38))
                zmm6_2 = sub_140b0e3d0(arg1 + 0x30, rdx_33 + 8)
                rsi_29 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                rax_78 = r12_8 + rsi_29
            
            *(arg1 + 0x30) = rax_78
            int64_t j_2 = sx.q(rax_77.d)
            int64_t j_1 = j_2
            
            if (j_2.d s> 0)
                int64_t* rcx_82 = rsi_29
                int64_t j
                
                do
                    *rcx_82 = *(r14_12 - rsi_29 + rcx_82)
                    rcx_82 = &rcx_82[1]
                    j = j_1
                    j_1 -= 1
                while (j != 1)
            
            void*** rcx_85 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_80 = &rcx_85[6]
            
            if (rax_80 u> *(arg1 + 0x38))
                zmm6_2 = sub_140b0e3d0(arg1 + 0x30, 0x38)
                rcx_85 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                rax_80 = &rcx_85[6]
            
            *(arg1 + 0x30) = rax_80
            void** rax_81 = *(arg1 + 8)
            *(arg1 + 0x14) += 1
            *rax_81 = rcx_85
            *(arg1 + 8) = &rcx_85[1]
            rcx_85[2].d = j_2.d
            rcx_85[1] = 0
            *rcx_85 = &data_142da7798
            rcx_85[3] = rsi_29
            rcx_85[4].d = 0
            *(rcx_85 + 0x24) = 3
            rcx_85[5] = 0
            
            if (r14_12 != 0)
                sub_140a74f90(r14_12)
            
            int64_t* rsi_34 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            int64_t rcx_90 = *(*r14_2 + 0x58)
            void* rax_84 = &rsi_34[1]
            
            if (rax_84 u> *(arg1 + 0x38))
                zmm6_2 = sub_140b0e3d0(arg1 + 0x30, 0x10)
                rsi_34 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                rax_84 = &rsi_34[1]
            
            *(arg1 + 0x30) = rax_84
            *rsi_34 = rcx_90
            void*** rcx_94 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_85 = &rcx_94[6]
            
            if (rax_85 u> *(arg1 + 0x38))
                zmm6_2 = sub_140b0e3d0(arg1 + 0x30, 0x38)
                rcx_94 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                rax_85 = &rcx_94[6]
            
            *(arg1 + 0x30) = rax_85
            *(arg1 + 0x14) += 1
            int64_t var_78_1 = 0
            int64_t var_70_1 = 0
            **(arg1 + 8) = rcx_94
            *(arg1 + 8) = &rcx_94[1]
            rcx_94[1] = 0
            *rcx_94 = &data_142da7798
            rcx_94[2].d = 1
            rcx_94[3] = rsi_34
            rcx_94[4] = 2
            rcx_94[5] = 0
            void*** rcx_100 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            int64_t rsi_37 = *(*r14_2 + 0x58)
            void* rax_89 = &rcx_100[5]
            
            if (rax_89 u> *(arg1 + 0x38))
                zmm6_2 = sub_140b0e3d0(arg1 + 0x30, 0x30)
                rcx_100 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                rax_89 = &rcx_100[5]
            
            *(arg1 + 0x30) = rax_89
            int64_t* rax_90 = *(arg1 + 8)
            *(arg1 + 0x14) += 1
            *rax_90 = rcx_100
            *(arg1 + 8) = &rcx_100[1]
            rcx_100[1] = 0
            *rcx_100 = &data_142f115d8
            rcx_100[2] = rsi_37
            *(rcx_100 + 0x18) = var_78_1.o
            sub_141117410(arg1, r15_2, rdi_1, arg5, zmm6_2)
        
        if (*(arg1 + 0x8c) != rbx_1)
            bool cond:1_1 = *(arg1 + 0x14) u> 0
            *(arg1 + 0x8c) = rbx_1
            
            if (cond:1_1)
                void*** rdx_38 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                void* rax_93 = &rdx_38[3]
                
                if (rax_93 u> *(arg1 + 0x38))
                    sub_140b0e3d0(arg1 + 0x30, 0x20)
                    rdx_38 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                    rax_93 = &rdx_38[3]
                
                *(arg1 + 0x30) = rax_93
                int64_t* rax_94 = *(arg1 + 8)
                *(arg1 + 0x14) += 1
                *rax_94 = rdx_38
                int32_t rax_95 = *(arg1 + 0x8c)
                *(arg1 + 8) = &rdx_38[1]
                rdx_38[1] = 0
                *rdx_38 = &data_142f11588
                rdx_38[2].d = rax_95
            else
                *(arg1 + 0x90) = rbx_1
        
        i = i_1 + 1
        rbx = arg3
        result = result_1 + 1
        i_1 = i
        result_1 = result
    while (i s< *(rbx + 8))

return result
