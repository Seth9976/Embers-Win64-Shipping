// 函数: sub_140cd0eb0
// 地址: 0x140cd0eb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_738
int64_t var_48 = __security_cookie ^ &var_738
void* r15 = arg1
void* var_6f0 = arg1
int32_t* rsi_1 = sx.q(arg2) * 0x38 + *(arg1 + 8)
int64_t result

if (*(rsi_1 + 0x28) == 0 || rsi_1[0xc] == 0xffffffff)
    int32_t rcx
    rcx.b = rsi_1[4] == 0
    
    if ((rcx.b & sub_140b5b8a0(rsi_1[3], 0).b) != 0)
        result.b = 0
    else
        void* r12_1 = &rsi_1[5]
        int32_t rcx_1
        rcx_1.b = *(r12_1 + 4) == 0
        
        if ((rcx_1.b & sub_140b5b8a0(rsi_1[5], 0).b) != 0)
            result.b = 0
        else
            int32_t rcx_2
            rcx_2.b = rsi_1[1] == 0
            
            if ((rcx_2.b & sub_140b5b8a0(*rsi_1, 0).b) != 0)
                result.b = 0
            else
                void var_688
                int16_t* var_6a8 = &var_688
                void* r13_1 = nullptr
                int16_t var_690_1 = 0x100
                void* var_6a0_1 = &var_688
                int16_t* var_488
                int64_t* var_698_1 = &var_488
                int64_t r14
                int64_t var_38_1 = r14
                void* var_6e8 = nullptr
                int32_t rcx_3
                
                if (rsi_1[2] == 0)
                    rcx_3.b = sub_140b5b8a0(*r12_1, 0xcf) == 0
                
                uint64_t rbx_4
                
                if (rsi_1[2] != 0 || (*(r12_1 + 4) != 0 | rcx_3.b) == 0)
                    int32_t rdx = rsi_1[2]
                    
                    if (rdx != 0)
                        sub_140cd0ad0(r15, not.d(rdx), arg3, arg4)
                        int64_t rdx_8 = *(r15 + 8)
                        void* r12_3 = sx.q(0xffffffff - rsi_1[2]) * 0x38 + rdx_8
                        
                        if (*(r12_3 + 0x28) == 0 && *(r12_3 + 0x20) != 0)
                            int32_t i = *(r12_3 + 8)
                            void* rcx_13 = r12_3
                            
                            for (; i s< 0; i = *(rcx_13 + 8))
                                rcx_13 = sx.q(not.d(i)) * 0x38 + rdx_8
                            
                            void* rbx_7 = *(rcx_13 + 0x20)
                            
                            if (rbx_7 != 0)
                                void* rax_22 = sub_140cddea0()
                                void* rdx_9 = *(rbx_7 + 0x10)
                                int64_t rax_23 = sx.q(*(rax_22 + 0x38))
                                
                                if (rax_23.d s<= *(rdx_9 + 0x38)
                                        && *(*(rdx_9 + 0x30) + (rax_23 << 3)) == rax_22 + 0x30
                                        && (*(rbx_7 + 0x50) & 0x11) != 0)
                                    r13_1 = rbx_7
                        
                        int64_t rax_25 = *(r12_3 + 0x28)
                        *(rsi_1 + 0x28) = rax_25
                        char var_6f8
                        int64_t var_6e0
                        void*** (* var_6d8)()
                        void var_6b8
                        int16_t* var_268
                        
                        if (rax_25 != 0)
                            int32_t i_1 = rsi_1[2]
                            int32_t* rcx_16 = rsi_1
                            
                            for (; i_1 s< 0; i_1 = rcx_16[2])
                                rcx_16 = sx.q(not.d(i_1)) * 0x38 + *(r15 + 8)
                            
                            int16_t var_250_1 = 0x100
                            void var_248
                            var_268 = &var_248
                            void* var_260_1 = &var_248
                            int64_t* var_258_1 = &var_48
                            sub_140b63f10(rcx_16, &var_268)
                            
                            if (*var_260_1 != 0)
                                *var_260_1 = 0
                            
                            void* rax_29 = sub_140d1dfb0(nullptr, var_268)
                            int32_t rdx_13 = (*(rsi_1 + 0x14)).d
                            rbx_4 = &rsi_1[5]
                            int64_t r8_5 = *(rsi_1 + 0xc)
                            int32_t rcx_18 = (*rsi_1).d
                            var_6e8 = rax_29
                            char rax_30 = sub_140cc03b0(rcx_18, rdx_13, r8_5)
                            void* r9_2 = *(rsi_1 + 0x28)
                            var_6f8 = 0
                            int64_t var_6c8 = *(rsi_1 + 0xc)
                            uint64_t r15_1 = zx.q(rax_30) << 2
                            int32_t rdi_3 = *(r15_1 + *(r9_2 + 0x2e8))
                            void var_6c0
                            
                            if (rdi_3 == 0xffffffff)
                            label_140cd1308:
                                var_6c8 = *PDBCommon::QueryLastError(&var_6c0, &var_6c8)
                            else
                                while (true)
                                    int64_t rax_32
                                    
                                    if (rdi_3 s< 0 || rdi_3 s>= *(r9_2 + 0x20))
                                        rax_32.b = 0
                                    else
                                        rax_32.b = 1
                                    
                                    if (rax_32.b == 0)
                                        goto label_140cd1308
                                    
                                    r14 = sx.q(rdi_3) << 7
                                    
                                    if (*(r14 + *(r9_2 + 0x18)) == *rsi_1)
                                        if (*sub_140cbb7c0(r9_2, &var_6e0, rdi_3) == *rbx_4
                                                && *sub_140cbb8b0(*(rsi_1 + 0x28), &var_6c0, rdi_3)
                                                == *(rsi_1 + 0xc))
                                            var_6f8 = 1
                                            break
                                        
                                        rbx_4 = &rsi_1[5]
                                    
                                    r9_2 = *(rsi_1 + 0x28)
                                    rdi_3 = *(*(r9_2 + 0x18) + r14 + 0x48)
                                    
                                    if (rdi_3 == 0xffffffff)
                                        goto label_140cd1308
                            
                            void* rcx_24 = *(rsi_1 + 0x28)
                            int32_t rdi_4 = *(r15_1 + *(rcx_24 + 0x2e8))
                            
                            if (rdi_4 != 0xffffffff)
                                while (true)
                                    int64_t rax_37
                                    
                                    if (rdi_4 s< 0 || rdi_4 s>= *(rcx_24 + 0x20))
                                        rax_37.b = 0
                                    else
                                        rax_37.b = 1
                                    
                                    if (rax_37.b == 0)
                                        goto label_140cd1435
                                    
                                    int64_t* r15_2 = *(rcx_24 + 0x18)
                                    r14 = sx.q(rdi_4) << 7
                                    
                                    if (*(r15_2 + r14) == *rsi_1
                                            && *sub_140cbb7c0(rcx_24, &var_6c0, rdi_4)
                                            == *(rsi_1 + 0x14))
                                        void* rcx_25 = *(rsi_1 + 0x28)
                                        int64_t* rax_40
                                        
                                        if (var_6f8 == 0)
                                            rax_40 = PDBCommon::QueryLastError(&var_6d8, 
                                                sub_140cbb8b0(rcx_25, &var_6b8, rdi_4))
                                        else
                                            rax_40 = sub_140cbb8b0(rcx_25, &var_6e0, rdi_4)
                                        
                                        if (*rax_40 == var_6c8)
                                            bool cond:2_1
                                            
                                            if (rsi_1[2] s< 0 && *(r12_3 + 0x28) != 0)
                                                int32_t rax_43 = *(r12_3 + 0x30)
                                                int32_t rcx_28 = *(r15_2 + r14 + 8)
                                                
                                                if (rax_43 != 0xffffffff)
                                                    cond:2_1 = rax_43 + 1 == rcx_28
                                                else
                                                    cond:2_1 = rcx_28 == 0
                                            
                                            if (rsi_1[2] s>= 0 || *(r12_3 + 0x28) == 0 || cond:2_1)
                                                if ((*(r15_2 + r14 + 0x1c) & 1) != 0)
                                                    rsi_1[0xc] = rdi_4
                                                    break
                                                
                                                void* rax_45 = var_6f0
                                                int64_t i_3 = sx.q(*(rax_45 + 0x100))
                                                
                                                if (i_3 s> 0)
                                                    int64_t rax_47 = *(rax_45 + 0x18) + 0xc
                                                    int64_t i_2
                                                    
                                                    do
                                                        rax_47 -= -0x80
                                                        i_2 = i_3
                                                        i_3 -= 1
                                                    while (i_2 != 1)
                                                
                                                sub_140b301c0(&var_268)
                                                goto label_140cd19d9_2
                                    
                                    rcx_24 = *(rsi_1 + 0x28)
                                    rdi_4 = *(*(rcx_24 + 0x18) + r14 + 0x48)
                                    
                                    if (rdi_4 == 0xffffffff)
                                        goto label_140cd1435
                            
                        label_140cd1435:
                            sub_140b301c0(&var_268)
                            r15 = var_6f0
                        
                        void* r12_4 = var_6e8
                        r14.b = 0
                        int32_t* rdi_5
                        
                        if (r12_4 != 0)
                            rdi_5 = &rsi_1[3]
                        label_140cd164d:
                            
                            if (rsi_1[0xc] != 0xffffffff || r12_4 == 0)
                                goto label_140cd1978
                            
                            int16_t var_470_1 = 0x100
                            void var_468
                            var_488 = &var_468
                            void* var_480_1 = &var_468
                            int64_t* var_478_1 = &var_268
                            sub_140b63f10(rdi_5, &var_488)
                            
                            if (*var_480_1 != 0)
                                *var_480_1 = 0
                            
                            int32_t* rax_59 = sub_140d2ee50(sub_140cddea0(), nullptr, var_488, 0)
                            
                            if (rax_59 == 0)
                                rax_59.b = 1
                            else
                                sub_140b63f10(&rsi_1[5], &var_488)
                                
                                if (*var_480_1 != 0)
                                    *var_480_1 = 0
                                
                                rax_59 = sub_140d2ee50(sub_140bdf2e0(), rax_59, var_488, 0)
                                rbx_4 = rax_59
                                
                                if (rax_59 == 0)
                                    rax_59.b = 1
                                else
                                    int32_t rcx_45 = rsi_1[2]
                                    
                                    if (rcx_45 s< 0)
                                        void* rax_61 =
                                            *(sx.q(not.d(rcx_45)) * 0x38 + *(r15 + 8) + 0x20)
                                        
                                        if (rax_61 != 0)
                                            r12_4 = rax_61
                                    
                                    void* rcx_49 = var_6a0_1
                                    
                                    if (((rcx_49 - var_6a8) s>> 1).d == 0)
                                        sub_140b5c850(rsi_1, &var_6a8)
                                        rcx_49 = var_6a0_1
                                    
                                    if (*rcx_49 != 0)
                                        *rcx_49 = 0
                                    
                                    rax_59 = sub_140ba7090(r15, rbx_4, r12_4, var_6a8)
                                    int32_t* rdi_8 = rax_59
                                    
                                    if (r14.b != 0)
                                        r14.b = 1
                                    else if (rax_59 == 0)
                                        r14.b = 0
                                    else
                                        int32_t rax_65 = rax_59[3]
                                        int32_t r9_4 = data_143e1d9b4
                                        int64_t r10_1 = data_143e1d9a0
                                        void* const rdx_39
                                        
                                        if (rax_65 s>= r9_4)
                                            rdx_39 = nullptr
                                        else
                                            int16_t temp0_1
                                            int32_t temp1_1
                                            temp0_1:temp1_1 = sx.q(rax_65)
                                            uint32_t rdx_37 = zx.d(temp0_1)
                                            int32_t rax_67 = temp1_1 + rdx_37
                                            rdx_39 = *(r10_1 + (sx.q(rax_67 s>> 0x10) << 3))
                                                + sx.q(zx.d(rax_67.w) - rdx_37) * 0x18
                                        
                                        if (((*(rdx_39 + 8) u>> 0x19).b & 1) != 0
                                                && (rdi_8[2] & 0x41).b == 0x41)
                                            r14.b = 1
                                        else if (((rdi_8[2] u>> 4).b & 1) == 0)
                                            r14.b = 0
                                        else
                                            void* r8_14 = *(rdi_8 + 0x10)
                                            int32_t rax_76 = *(r8_14 + 0xc)
                                            void* const rdx_43
                                            
                                            if (rax_76 s>= r9_4)
                                                rdx_43 = nullptr
                                            else
                                                int16_t temp3_1
                                                int32_t temp4_1
                                                temp3_1:temp4_1 = sx.q(rax_76)
                                                uint32_t rdx_41 = zx.d(temp3_1)
                                                int32_t rax_78 = temp4_1 + rdx_41
                                                rdx_43 = *(r10_1 + (sx.q(rax_78 s>> 0x10) << 3))
                                                    + sx.q(zx.d(rax_78.w) - rdx_41) * 0x18
                                            
                                            if (((*(rdx_43 + 8) u>> 0x19).b & 1) == 0
                                                    || (*(r8_14 + 8) & 0x41).b != 0x41)
                                                r14.b = 0
                                            else
                                                r14.b = 1
                                    
                                    if (rdi_8 != 0)
                                        if ((*(r15 + 0x290) & 0x4000) != 0 || r14.b != 0)
                                        label_140cd18e0:
                                            *(rsi_1 + 0x20) = rdi_8
                                            char* var_6d0_1 = &var_6f8
                                            var_6f8 = 0
                                            var_6d8 = sub_140884c50
                                            void* rax_89 = sub_140a756e0(&var_6d8, &data_14397f5f0)
                                            var_6f0 = r15
                                            void* rcx_63 = *(rax_89 + 0x48)
                                            *(rcx_63 + 4) += 1
                                            void* rax_90 = sub_140cdbb20()
                                            EnterCriticalSection(rax_90 + 0xd0)
                                            sub_140ca9be0(rax_90 + 0x80, &var_6e8, &var_6f0, 
                                                nullptr)
                                            
                                            if (rax_90 != -0xd0)
                                                LeaveCriticalSection(rax_90 + 0xd0)
                                            
                                            rax_59.b = 0
                                        else
                                            rax_59.b = 1
                                    else if (r14.b == 0)
                                        rax_59.b = 1
                                    else
                                        int64_t r9_5
                                        rax_59, r9_5 = sub_140bdfe30()
                                        
                                        if (rbx_4 != rax_59)
                                            rax_59.b = 1
                                        else
                                            void* rcx_57 = var_6a0_1
                                            
                                            if (((rcx_57 - var_6a8) s>> 1).d == 0)
                                                sub_140b5c850(rsi_1, &var_6a8)
                                                rcx_57 = var_6a0_1
                                            
                                            if (*rcx_57 != 0)
                                                *rcx_57 = 0
                                            
                                            r9_5.b = 1
                                            rax_59 = sub_140d2ee50(rbx_4, -ffffffffffffffff, 
                                                var_6a8, r9_5)
                                            rdi_8 = rax_59
                                            
                                            if (rax_59 == 0)
                                                rax_59.b = 1
                                            else
                                                if (sub_140d21d80(r12_4) == sub_140d21d80(rdi_8) &&
                                                        ((*(r15 + 0x290) & 0x4000) != 0
                                                        || r14.b != 0))
                                                    goto label_140cd18e0
                                                
                                                rax_59.b = 1
                            
                            if (*(rsi_1 + 0x20) != 0 || rax_59.b != 0)
                                sub_140b301c0(&var_488)
                            label_140cd1978:
                                
                                if (data_143de5452 != 0)
                                labelid_2:
                                    rbx_4.b = 0
                                else
                                    if (*(rsi_1 + 0x28) != 0)
                                        var_6f8 = 0
                                        char* var_6d0_2 = &var_6f8
                                        var_6d8 = sub_140884c50
                                        
                                        if (*(sub_140a756e0(&var_6d8, &data_14397f5f0) + 0x48) == 0)
                                            var_6f8 = 0
                                            char* var_6d0_3 = &var_6f8
                                            var_6d8 = sub_140884c50
                                            sub_140a756e0(&var_6d8, &data_14397f5f0)
                                    
                                labelid_2:
                                    rbx_4.b = 0
                            else
                                sub_140b301c0(&var_488)
                                rbx_4.b = 1
                        else
                            r12_1 = &rsi_1[5]
                        label_140cd1454:
                            
                            if (r13_1 == 0 || (*(r13_1 + 0x50) & 0x11) == 0)
                                r14.b = 0
                                rdi_5 = &rsi_1[3]
                                
                                if ((*(r15 + 0x290) & 0x4000) == 0)
                                    r12_4 = var_6e8
                                else
                                    r12_4 = -ffffffffffffffff
                                
                                goto label_140cd164d
                            
                            rdi_5 = &rsi_1[3]
                            r14.b = 1
                            int32_t rcx_31
                            rcx_31.b = rdi_5[1] == 0
                            int64_t rax_48
                            
                            if ((rcx_31.b & sub_140b5b8a0(rsi_1[3], 0x21).b) != 0)
                                rax_48.b = 1
                            else
                                int64_t rdx_22 = data_143de5770
                                int64_t rax_49 = *rdi_5
                                var_6e0 = rax_49
                                
                                if ((-0x8000000000000000 & rdx_22) == 0 || rax_49 != 0)
                                    rax_48 = *sub_140b63580(&data_143de5770, &var_6d8)
                                    rax_48.b = var_6e0 == rax_48
                                else
                                    char* rdx_23 = rdx_22 & 0x7fffffffffffffff
                                    int64_t* rcx_32 = &var_6e0
                                    
                                    if (data_143de577c != rax_49.b)
                                        rax_48 = sub_140b5b9d0(rcx_32, rdx_23)
                                    else
                                        rax_48 = sub_140b5b8c0(rcx_32, rdx_23)
                                
                                if (rax_48.b != 0)
                                    rax_48.b = 1
                                else
                                    int32_t rcx_33
                                    rcx_33.b = rdi_5[1] == 0
                                    
                                    if ((rcx_33.b & sub_140b5b8a0(*rdi_5, 0x1e).b) != 0)
                                        rax_48.b = 1
                                    else
                                        int64_t rdx_25 = data_143de5760
                                        void* rax_51 = *rdi_5
                                        var_6f0 = rax_51
                                        
                                        if ((-0x8000000000000000 & rdx_25) == 0 || rax_51 != 0)
                                            rax_48 = *sub_140b63580(&data_143de5760, &var_6b8)
                                            rax_48.b = var_6f0 == rax_48
                                        else
                                            int64_t* rcx_34 = &var_6f0
                                            char* rdx_26 = rdx_25 & 0x7fffffffffffffff
                                            
                                            if (data_143de576c != 0)
                                                rax_48 = sub_140b5b9d0(rcx_34, rdx_26)
                                            else
                                                rax_48 = sub_140b5b8c0(rcx_34, rdx_26)
                                        
                                        if (rax_48.b != 0)
                                            rax_48.b = 1
                            
                            char rax_53
                            int32_t rcx_35
                            
                            if (rax_48.b != 0)
                                rbx_4 = zx.q(*(r12_1 + 4))
                                rax_53 = sub_140b5b8a0(*r12_1, 0xcf)
                                rcx_35.b = rbx_4.d == 0
                            
                            if (rax_48.b == 0 || (rcx_35.b & rax_53) == 0 || *(r13_1 + 0x20) != 0
                                    || *rsi_1 != *(r13_1 + 0x18))
                                r12_4 = r13_1
                                goto label_140cd164d
                            
                            *(rsi_1 + 0x20) = r13_1
                            void* rax_55 = sub_140baa940()
                            var_6f0 = r15
                            *(rax_55 + 4) += 1
                            void* rax_56 = sub_140cdbb20()
                            EnterCriticalSection(rax_56 + 0xd0)
                            sub_140ca9be0(rax_56 + 0x80, &var_6e8, &var_6f0, nullptr)
                            
                            if (rax_56 != -0xd0)
                                LeaveCriticalSection(rax_56 + 0xd0)
                            
                        labelid_2:
                            rbx_4.b = 0
                    else
                        int32_t rdi_2 = *(r15 + 0x290) & 0x2082
                        void* rax_3
                        int32_t rdx_2
                        rax_3, rdx_2 = sub_140b92fc0(0, *rsi_1, 0, 0, 0)
                        r13_1 = rax_3
                        uint8_t rax_4
                        
                        if (rax_3 != 0)
                            rax_4 = sub_140ce0e10(rax_3, rdx_2)
                        
                        int32_t var_718_1
                        
                        if (rax_3 == 0 || rax_4 == 0)
                            r14.b = 0
                            void* rcx_5 = var_6a0_1
                            rdi_2 |= *(r15 + 0x290) & 0x100000
                            
                            if (((rcx_5 - var_6a8) s>> 1).d == 0)
                                sub_140b5c850(rsi_1, &var_6a8)
                                rcx_5 = var_6a0_1
                            
                            if (*rcx_5 != 0)
                                *rcx_5 = 0
                            
                            int16_t* rbx_5 = var_6a8
                            int64_t var_710_1 = sub_140baa940()
                            var_718_1.q = 0
                            r13_1 = sub_140d24110(nullptr, rbx_5, rdi_2 | 0x100, r15, var_718_1)
                        else
                            r14.b = 1
                        
                        if (r13_1 != 0)
                            if ((*(r13_1 + 0x52) & 1) == 0)
                            label_140cd10c7:
                                rbx_4 = zx.q(rdi_2) | 0x80
                                
                                if (*(r15 + 0x32a) == 0)
                                    rbx_4 = zx.q(rdi_2)
                                
                                if (r14.b == 0)
                                    var_6f0 = sub_140baa940()
                                    void** var_708_1 = &var_6f0
                                    var_718_1.q = 0
                                    *(rsi_1 + 0x28) = sub_140cbd210(r13_1, nullptr, rbx_4.d, 0, 
                                        var_718_1, nullptr)
                                
                                goto label_140cd1454
                            
                        label_140cd19d9:
                            rbx_4.b = 0
                        else
                            void* rcx_8 = var_6a0_1
                            
                            if (((rcx_8 - var_6a8) s>> 1).d == 0)
                                sub_140b5c850(rsi_1, &var_6a8)
                                rcx_8 = var_6a0_1
                            
                            if (*rcx_8 != 0)
                                *rcx_8 = 0
                            
                            void* rax_15 = sub_140d1dfb0(nullptr, var_6a8)
                            r13_1 = rax_15
                            
                            if (rax_15 != 0 && (*(r13_1 + 0x52) & 1) == 0)
                                goto label_140cd10c7
                            
                        label_140cd19d9_1:
                            rbx_4.b = 0
                else
                    *(rsi_1 + 0x28) = 0
                label_140cd19d9_2:
                    rbx_4.b = 0
                
                sub_140b301c0(&var_6a8)
                result = zx.q(rbx_4.b)
else
    result.b = 0

__security_check_cookie(var_48 ^ &var_738)
return result
