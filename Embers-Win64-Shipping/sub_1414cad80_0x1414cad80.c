// 函数: sub_1414cad80
// 地址: 0x1414cad80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = &__return_addr
int32_t* r12 = arg6
int64_t* r13 = arg3

if (r12[2] s> 0)
    int32_t* var_88 = nullptr
    int64_t* var_60 = nullptr
    int64_t var_68 = 0
    result = sub_1410f1cc0(arg1, arg2, arg3, arg4, 0, &var_88, &var_60, &var_68)
    arg6.d = result
    
    if (result s<= 0 || var_60 == 0 || var_68 == 0)
        *(r12 + 4) = 0
        r12[3] = 0
    else
        int32_t* rcx_1 = var_88
        int64_t rdx = *(rcx_1 + 0x20)
        int64_t* rbx_3 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        int64_t rcx_2 = *(rcx_1 + 0x40)
        void* rax = &rbx_3[2]
        
        if (rax u> *(arg1 + 0x38))
            sub_140b0e3d0(arg1 + 0x30, 0x18)
            rbx_3 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            rax = &rbx_3[2]
        
        *(arg1 + 0x30) = rax
        *rbx_3 = rdx
        rbx_3[1] = rcx_2
        void*** rcx_6 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_2 = &rcx_6[6]
        
        if (rax_2 u> *(arg1 + 0x38))
            sub_140b0e3d0(arg1 + 0x30, 0x38)
            rcx_6 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            rax_2 = &rcx_6[6]
        
        *(arg1 + 0x30) = rax_2
        void**** rax_3 = *(arg1 + 8)
        *(arg1 + 0x14) += 1
        *rax_3 = rcx_6
        *(arg1 + 8) = &rcx_6[1]
        rcx_6[1] = 0
        *rcx_6 = &data_142da7798
        rcx_6[2].d = 2
        rcx_6[3] = rbx_3
        rcx_6[4].d = 2
        *(rcx_6 + 0x24) = 3
        rcx_6[5] = 0
        void* var_78
        sub_1419a2ec0(std::_Get_future_error_what((*1111")[sx.q(r13[0x2a9].d)]), &var_78, 
            &data_143ee7fd0, 0)
        void* r14_1 = var_78
        void* rbx_6 = nullptr
        void* var_70
        
        if (r14_1 != 0)
            int64_t rdx_2 = sx.q(*(r14_1 + 0x10c))
            int64_t* r15_1 = *(var_70 + 0x10)
            int64_t* rbx_7 = r15_1[3]
            
            if (rbx_7[rdx_2] == 0)
                sub_1419ccf30(r15_1, rdx_2.d)
                rbx_7 = r15_1[3]
            
            rbx_6 = rbx_7[rdx_2]
            r13 = arg3
        
        *(arg1 + 0x1b0) = rbx_6
        sub_14198aa60(rbx_6)
        void*** rcx_16 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_8 = &rcx_16[3]
        
        if (rax_8 u> *(arg1 + 0x38))
            sub_140b0e3d0(arg1 + 0x30, 0x20)
            rcx_16 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            rax_8 = &rcx_16[3]
        
        *(arg1 + 0x30) = rax_8
        void**** rax_9 = *(arg1 + 8)
        *(arg1 + 0x14) += 1
        *rax_9 = rcx_16
        *(arg1 + 8) = &rcx_16[1]
        rcx_16[1] = 0
        *rcx_16 = &data_142dd5b40
        rcx_16[2] = rbx_6
        int64_t rbx_8 = *(arg1 + 0x1b0)
        int32_t* r15_2 = var_88
        int64_t r9 = r13[2]
        int32_t var_98 = arg6.d
        int64_t var_80 = rbx_8
        sub_1410809a0(r14_1, arg1, rbx_8, r9)
        sub_140741e30(arg1, &var_80, r14_1 + 0x118, &var_98, 0)
        int64_t rax_12 = *(r15_2 + 0x10)
        
        if (*(r14_1 + 0x120) u> 0)
            uint32_t r15_3 = zx.d(*(r14_1 + 0x11e))
            void*** rcx_24 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_13 = &rcx_24[5]
            
            if (rax_13 u> *(arg1 + 0x38))
                sub_140b0e3d0(arg1 + 0x30, 0x30)
                rcx_24 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                rax_13 = &rcx_24[5]
            
            *(arg1 + 0x30) = rax_13
            void**** rax_14 = *(arg1 + 8)
            *(arg1 + 0x14) += 1
            *rax_14 = rcx_24
            *(arg1 + 8) = &rcx_24[1]
            rcx_24[1] = 0
            *rcx_24 = &data_142d99560
            rcx_24[3].d = r15_3
            rcx_24[4] = rax_12
            rcx_24[2] = rbx_8
        
        sub_14077c370(r14_1 + 0x122, arg1, &var_80, &r15_2[6])
        int32_t r8_4 = data_1439b55c4 * data_1439b55c0
        sub_1419cd1c0(arg1, r14_1, divs.dp.d(sx.q(arg6.d - 1 + r8_4), r8_4), 1, 1)
        int64_t r15_4 = *(arg1 + 0x1b0)
        sub_14077cfd0(r14_1 + 0x122, arg1, r15_4)
        
        if (*(r14_1 + 0x120) u> 0)
            uint32_t rbx_9 = zx.d(*(r14_1 + 0x11e))
            void*** rcx_33 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_22 = &rcx_33[5]
            
            if (rax_22 u> *(arg1 + 0x38))
                sub_140b0e3d0(arg1 + 0x30, 0x30)
                rcx_33 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                rax_22 = &rcx_33[5]
            
            *(arg1 + 0x30) = rax_22
            void**** rax_23 = *(arg1 + 8)
            *(arg1 + 0x14) += 1
            *rax_23 = rcx_33
            *(arg1 + 8) = &rcx_33[1]
            rcx_33[1] = 0
            rcx_33[2] = r15_4
            *rcx_33 = &data_142d99560
            rcx_33[4] = 0
            rcx_33[3].d = rbx_9
        
        int64_t* rbx_12 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        int64_t rcx_37 = *(var_88 + 0x20)
        void* rax_26 = &rbx_12[1]
        
        if (rax_26 u> *(arg1 + 0x38))
            sub_140b0e3d0(arg1 + 0x30, 0x10)
            rbx_12 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            rax_26 = &rbx_12[1]
        
        *(arg1 + 0x30) = rax_26
        *rbx_12 = rcx_37
        void*** rcx_41 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_27 = &rcx_41[6]
        
        if (rax_27 u> *(arg1 + 0x38))
            sub_140b0e3d0(arg1 + 0x30, 0x38)
            rcx_41 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            rax_27 = &rcx_41[6]
        
        *(arg1 + 0x30) = rax_27
        void**** rax_28 = *(arg1 + 8)
        *(arg1 + 0x14) += 1
        *rax_28 = rcx_41
        *(arg1 + 8) = &rcx_41[1]
        rcx_41[1] = 0
        *rcx_41 = &data_142da7798
        rcx_41[2].d = 1
        rcx_41[3] = rbx_12
        rcx_41[4].d = 0
        *(rcx_41 + 0x24) = 3
        rcx_41[5] = 0
        sub_1419a2ec0(std::_Get_future_error_what((*1111")[sx.q(r13[0x2a9].d)]), &var_78, 
            &data_143ee80e0, 0)
        void* r14_2 = var_78
        void* rbx_15 = nullptr
        
        if (r14_2 != 0)
            int64_t rdx_10 = sx.q(*(r14_2 + 0x10c))
            int64_t* r15_5 = *(var_70 + 0x10)
            int64_t* rbx_16 = r15_5[3]
            
            if (rbx_16[rdx_10] == 0)
                sub_1419ccf30(r15_5, rdx_10.d)
                rbx_16 = r15_5[3]
            
            rbx_15 = rbx_16[rdx_10]
        
        *(arg1 + 0x1b0) = rbx_15
        sub_14198aa60(rbx_15)
        void*** rcx_51 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_34 = &rcx_51[3]
        
        if (rax_34 u> *(arg1 + 0x38))
            sub_140b0e3d0(arg1 + 0x30, 0x20)
            rcx_51 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            rax_34 = &rcx_51[3]
        
        *(arg1 + 0x30) = rax_34
        void**** rax_35 = *(arg1 + 8)
        *(arg1 + 0x14) += 1
        *rax_35 = rcx_51
        *(arg1 + 8) = &rcx_51[1]
        rcx_51[1] = 0
        *rcx_51 = &data_142dd5b40
        rcx_51[2] = rbx_15
        int64_t rbx_17 = *(arg1 + 0x1b0)
        int32_t* r15_6 = var_88
        int64_t r9_3 = r13[2]
        var_98 = arg6.d
        var_80 = rbx_17
        sub_1410809a0(r14_2, arg1, rbx_17, r9_3)
        sub_140741e30(arg1, &var_80, r14_2 + 0x118, &var_98, 0)
        int64_t rax_38 = *(r15_6 + 0x28)
        
        if (*(r14_2 + 0x120) u> 0)
            uint32_t r15_7 = zx.d(*(r14_2 + 0x11e))
            void*** rcx_59 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_39 = &rcx_59[5]
            
            if (rax_39 u> *(arg1 + 0x38))
                sub_140b0e3d0(arg1 + 0x30, 0x30)
                rcx_59 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                rax_39 = &rcx_59[5]
            
            *(arg1 + 0x30) = rax_39
            void**** rax_40 = *(arg1 + 8)
            *(arg1 + 0x14) += 1
            *rax_40 = rcx_59
            *(arg1 + 8) = &rcx_59[1]
            rcx_59[1] = 0
            *rcx_59 = &data_142d99560
            rcx_59[3].d = r15_7
            rcx_59[4] = rax_38
            rcx_59[2] = rbx_17
        
        sub_14077c370(r14_2 + 0x122, arg1, &var_80, &r15_6[0xe])
        int32_t r8_11 = data_1439b55c4 * data_1439b55c0
        sub_1419cd1c0(arg1, r14_2, divs.dp.d(sx.q(arg6.d - 1 + r8_11), r8_11), 1, 1)
        sub_14077cfd0(r14_2 + 0x122, arg1, *(arg1 + 0x1b0))
        int64_t* rbx_20 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        int64_t rcx_66 = *(var_88 + 0x40)
        void* rax_49 = &rbx_20[1]
        
        if (rax_49 u> *(arg1 + 0x38))
            sub_140b0e3d0(arg1 + 0x30, 0x10)
            rbx_20 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            rax_49 = &rbx_20[1]
        
        *(arg1 + 0x30) = rax_49
        *rbx_20 = rcx_66
        void*** rcx_70 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_50 = &rcx_70[6]
        
        if (rax_50 u> *(arg1 + 0x38))
            sub_140b0e3d0(arg1 + 0x30, 0x38)
            rcx_70 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            rax_50 = &rcx_70[6]
        
        *(arg1 + 0x30) = rax_50
        void**** rax_51 = *(arg1 + 8)
        *(arg1 + 0x14) += 1
        *rax_51 = rcx_70
        *(arg1 + 8) = &rcx_70[1]
        rcx_70[1] = 0
        *rcx_70 = &data_142da7798
        rcx_70[2].d = 1
        rcx_70[3] = rbx_20
        rcx_70[4].d = 0
        *(rcx_70 + 0x24) = 3
        rcx_70[5] = 0
        sub_1419a2ec0(std::_Get_future_error_what((*1111")[sx.q(r13[0x2a9].d)]), &var_78, 
            &data_143ee81f0, 0)
        void* r15_8 = var_78
        void* rbx_23 = nullptr
        
        if (r15_8 != 0)
            int64_t rdx_18 = sx.q(*(r15_8 + 0x10c))
            int64_t* rbx_24 = *(var_70 + 0x10)
            int64_t* rax_56 = rbx_24[3]
            
            if (rax_56[rdx_18] == 0)
                sub_1419ccf30(rbx_24, rdx_18.d)
                rax_56 = rbx_24[3]
            
            rbx_23 = rax_56[rdx_18]
        
        *(arg1 + 0x1b0) = rbx_23
        sub_14198aa60(rbx_23)
        void*** rcx_80 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_57 = &rcx_80[3]
        
        if (rax_57 u> *(arg1 + 0x38))
            sub_140b0e3d0(arg1 + 0x30, 0x20)
            rcx_80 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            rax_57 = &rcx_80[3]
        
        *(arg1 + 0x30) = rax_57
        void**** rax_58 = *(arg1 + 8)
        *(arg1 + 0x14) += 1
        *rax_58 = rcx_80
        *(arg1 + 8) = &rcx_80[1]
        rcx_80[1] = 0
        *rcx_80 = &data_142dd5b40
        rcx_80[2] = rbx_23
        int32_t var_a8_2 = var_88.d
        int32_t** var_b0_1
        var_b0_1.d = arg6.d
        sub_1414ddab0(r15_8, arg1, r13, *r12, r12[1])
        int32_t r8_16 = data_1439b55c4 * data_1439b55c0
        int32_t var_b8_2 = 1
        sub_1419cd1c0(arg1, r15_8, divs.dp.d(sx.q(r12[1] - 1 + r8_16), r8_16), 1, 1)
        sub_1414e7c70(r15_8, arg1, r13)
        int64_t* var_a0_1
        var_a0_1.d = r12[1]
        var_b8_2.q = var_68
        result = sub_1410f7dc0(arg1, r13, arg4, var_60, var_b8_2, arg5, *r12, var_a0_1.d)
        int32_t r14_5 = r12[2] - r12[1]
        var_98 = r14_5
        
        if (r14_5 s> 0)
            sub_1419a2ec0(std::_Get_future_error_what((*1111")[sx.q(r13[0x2a9].d)]), &var_78, 
                &data_143ee81f0, 0)
            void* r15_9 = var_78
            void* rbx_25 = nullptr
            
            if (r15_9 != 0)
                int64_t rdx_25 = sx.q(*(r15_9 + 0x10c))
                int64_t* r14_6 = *(var_70 + 0x10)
                int64_t* rbx_26 = r14_6[3]
                
                if (rbx_26[rdx_25] == 0)
                    sub_1419ccf30(r14_6, rdx_25.d)
                    rbx_26 = r14_6[3]
                
                rbx_25 = rbx_26[rdx_25]
                r13 = arg3
                r14_5 = var_98
            
            *(arg1 + 0x1b0) = rbx_25
            sub_14198aa60(rbx_25)
            void*** rcx_94 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_75 = &rcx_94[3]
            
            if (rax_75 u> *(arg1 + 0x38))
                sub_140b0e3d0(arg1 + 0x30, 0x20)
                rcx_94 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                rax_75 = &rcx_94[3]
            
            *(arg1 + 0x30) = rax_75
            void**** rax_76 = *(arg1 + 8)
            *(arg1 + 0x14) += 1
            *rax_76 = rcx_94
            *(arg1 + 8) = &rcx_94[1]
            rcx_94[1] = 0
            *rcx_94 = &data_142dd5b40
            rcx_94[2] = rbx_25
            int32_t var_a8_3 = var_88.d
            int64_t var_b0_2
            var_b0_2.d = arg6.d
            sub_1414ddab0(r15_9, arg1, r13, r12[1] + *r12, r14_5)
            int32_t r8_22 = data_1439b55c4 * data_1439b55c0
            int32_t var_b8_4 = 1
            sub_1419cd1c0(arg1, r15_9, divs.dp.d(sx.q(r8_22 - 1 + r14_5), r8_22), 1, 1)
            sub_1414e7c70(r15_9, arg1, r13)
            var_a0_1.d = r14_5
            var_b8_4.q = var_68
            return sub_1410f7dc0(arg1, r13, arg4, var_60, var_b8_4, arg5, r12[1] + *r12, var_a0_1.d)

return result
