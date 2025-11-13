// 函数: sub_140d26700
// 地址: 0x140d26700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2e8
int64_t rax_1 = __security_cookie ^ &var_2e8
char* rax_2 = *(arg2 + 0x20)
*(arg2 + 0x30) = 0
void* var_2a0 = nullptr
int64_t rsi = arg3
*(arg2 + 0x20) = &rax_2[1]
(&data_143e1cd60)[zx.q(*rax_2)](arg1, arg5, &var_2a0)
void* r9 = var_2a0
void* rbx = *(arg2 + 0x20)
void* const rax_12

if (r9 != 0)
    int32_t rax_5 = *(r9 + 0xc)
    
    if (rax_5 s>= data_143e1d9b4)
        rax_12 = nullptr
    else
        int16_t temp1_1
        int32_t temp2_1
        temp1_1:temp2_1 = sx.q(rax_5)
        uint32_t rdx_1 = zx.d(temp1_1)
        int32_t rax_7 = temp2_1 + rdx_1
        rax_12 =
            *(data_143e1d9a0 + (sx.q(rax_7 s>> 0x10) << 3)) + sx.q(zx.d(rax_7.w) - rdx_1) * 0x18

uint64_t result

if (r9 == 0 || ((*(rax_12 + 8) u>> 0x1d).b & 1) != 0)
    result = zx.q(*(arg2 + 0x90))
label_140d26809:
    
    if (result.b != 0)
        *(arg2 + 0x90) = 0
        *(arg2 + 0x20) = rbx
    
    if (arg4 == 0)
        void* const rax_25
        
        if (r9 != 0)
            int32_t rax_18 = *(r9 + 0xc)
            
            if (rax_18 s>= data_143e1d9b4)
                rax_25 = nullptr
            else
                int16_t temp3_1
                int32_t temp4_1
                temp3_1:temp4_1 = sx.q(rax_18)
                uint32_t rdx_5 = zx.d(temp3_1)
                int32_t rax_20 = temp4_1 + rdx_5
                rax_25 = *(data_143e1d9a0 + (sx.q(rax_20 s>> 0x10) << 3))
                    + sx.q(zx.d(rax_20.w) - rdx_5) * 0x18
        
        int64_t* rdi_11
        
        if (r9 != 0 && ((*(rax_25 + 8) u>> 0x1d).b & 1) != 0)
            void* rcx_12 = *(arg2 + 0x30)
            int64_t var_2b0
            
            if (rcx_12 == 0)
                var_2b0 = 0
                int32_t var_2a8_1 = 0
                sub_1405947f0(&var_2b0, 5)
                int32_t rax_28 = var_2a8_1 + 5
                var_2a8_1 = rax_28
                
                if (rax_28 s> 0)
                    sub_140594770(&var_2b0)
                
                UnDecorator::getReferenceType(var_2b0, u"none", 0xa)
            else
                sub_140b63b70(rcx_12 + 0x28, &var_2b0)
            
            void* rax_29 = var_2a0
            uint64_t var_2c0
            
            if (rax_29 != 0)
                int64_t var_268 = *(rax_29 + 0x18)
                sub_140b63b70(&var_268, &var_2c0)
            else
                var_2c0 = 0
                int32_t var_2b8_1 = 0
                sub_1405947f0(&var_2c0, (rax_29 + 5).d)
                int32_t rax_30 = var_2b8_1 + 5
                var_2b8_1 = rax_30
                
                if (rax_30 s> 0)
                    sub_140594770(&var_2c0)
                
                UnDecorator::getReferenceType(var_2c0, u"None", 0xa)
            
            void var_120
            int64_t* rax_32 = sub_140aae2f0(&var_120, &var_2b0)
            void var_108
            int64_t* rax_33 = sub_140aae2f0(&var_108, &var_2c0)
            void var_1a0
            char* var_140
            char** rax_35 = sub_140a96390(&var_140, 
                _vfprintf_p_l(&var_1a0, 
                    Attempted to access {0} via property {1}, but {0} is pending kill", 
                ScriptCore"))
            int64_t var_98_1 = *rax_33
            void* rcx_26 = rax_33[1]
            int32_t var_a8_1 = 4
            void* var_90_1 = rcx_26
            
            if (rcx_26 != 0)
                *(rcx_26 + 8) += 1
            
            int32_t var_88_1 = rax_33[2].d
            int64_t var_68_1 = *rax_32
            void* rax_38 = rax_32[1]
            char var_80_1 = 1
            int32_t var_78_1 = 4
            void* var_60_1 = rax_38
            
            if (rax_38 != 0)
                *(rax_38 + 8) += 1
            
            int64_t i_1 = 2
            int32_t var_58_1 = rax_32[2].d
            char var_50_1 = 1
            void* var_288 = nullptr
            int32_t var_280_1 = 2
            sub_1405a4b40(&var_288, 2, 0)
            void var_a0
            void* rdx_15 = &var_a0
            int64_t* rcx_29 = var_288 + 8
            int32_t i_2 = 2
            int32_t i
            
            do
                rcx_29[-1].d = *(rdx_15 - 8)
                *rcx_29 = *rdx_15
                *rcx_29 = *rdx_15
                *rcx_29 = *rdx_15
                *rcx_29 = *rdx_15
                rcx_29[4].b = 0
                
                if (*(rdx_15 + 0x20) != 0)
                    rcx_29[1] = *(rdx_15 + 8)
                    void* rax_46 = *(rdx_15 + 0x10)
                    rcx_29[2] = rax_46
                    
                    if (rax_46 != 0)
                        *(rax_46 + 8) += 1
                    
                    rcx_29[3].d = *(rdx_15 + 0x18)
                    rcx_29[4].b = 1
                
                rcx_29 = &rcx_29[6]
                rdx_15 += 0x30
                i = i_2
                i_2 -= 1
            while (i != 1)
            char* var_248 = *rax_35
            void* rax_49 = rax_35[1]
            void* var_240_1 = rax_49
            
            if (rax_49 != 0)
                *(rax_49 + 8) += 1
            
            void var_1b8
            int64_t* rax_50 = sub_140aac870(&var_1b8, &var_248, &var_288)
            int64_t* r14_1 = rax_50[1]
            int64_t rcx_31 = *rax_50
            
            if (r14_1 != 0)
                r14_1[1].d += 1
            
            int32_t r12_1 = rax_50[2].d
            int64_t* var_1b0
            
            if (var_1b0 != 0)
                var_1b0[1].d -= 1
                
                if (var_1b0[1].d == 1)
                    (**var_1b0)(var_1b0)
                    int32_t rax_53 = *(var_1b0 + 0xc)
                    *(var_1b0 + 0xc) -= 1
                    
                    if (rax_53 == 1)
                        (*(*var_1b0 + 8))(var_1b0, 1)
            
            sub_140596f50(&var_288)
            int64_t __saved_r12
            int64_t* rsi_2 = &__saved_r12
            
            do
                i_1 -= 1
                rsi_2 = &rsi_2[-6]
                
                if (*rsi_2 != 0)
                    *rsi_2 = 0
                    int64_t* rdi_3 = rsi_2[-2]
                    
                    if (rdi_3 != 0)
                        rdi_3[1].d -= 1
                        
                        if (rdi_3[1].d == 1)
                            (**rdi_3)(rdi_3)
                            int32_t rax_57 = *(rdi_3 + 0xc)
                            *(rdi_3 + 0xc) -= 1
                            
                            if (rax_57 == 1)
                                (*(*rdi_3 + 8))(rdi_3, 1)
            while (i_1 != 0)
            
            int64_t* rdi_5 = rax_35[1]
            
            if (rdi_5 != 0)
                rdi_5[1].d -= 1
                
                if (rdi_5[1].d == 1)
                    (**rdi_5)(rdi_5)
                    int32_t rax_61 = *(rdi_5 + 0xc)
                    *(rdi_5 + 0xc) -= 1
                    
                    if (rax_61 == 1)
                        (*(*rdi_5 + 8))(rdi_5, zx.q((i_1 + 1).d))
            
            int64_t* rdi_7 = rax_33[1]
            
            if (rdi_7 != 0)
                rdi_7[1].d -= 1
                
                if (rdi_7[1].d == 1)
                    (**rdi_7)(rdi_7)
                    int32_t rax_65 = *(rdi_7 + 0xc)
                    *(rdi_7 + 0xc) -= 1
                    
                    if (rax_65 == 1)
                        (*(*rdi_7 + 8))(rdi_7, 1)
            
            int64_t* rdi_9 = rax_32[1]
            
            if (rdi_9 != 0)
                rdi_9[1].d -= 1
                
                if (rdi_9[1].d == 1)
                    (**rdi_9)(rdi_9)
                    int32_t rax_69 = *(rdi_9 + 0xc)
                    *(rdi_9 + 0xc) -= 1
                    
                    if (rax_69 == 1)
                        (*(*rdi_9 + 8))(rdi_9, 1)
            
            int64_t var_210_1 = rcx_31
            int32_t var_218 = 3
            
            if (r14_1 != 0)
                r14_1[1].d += 1
            
            int32_t var_200_1 = r12_1
            
            if (r14_1 != 0)
                r14_1[1].d -= 1
                
                if (r14_1[1].d == 1)
                    (**r14_1)(r14_1)
                    int32_t rax_74 = *(r14_1 + 0xc)
                    *(r14_1 + 0xc) -= 1
                    
                    if (rax_74 == 1)
                        (*(*r14_1 + 8))(r14_1, 1)
            
            int64_t* var_198
            
            if (var_198 != 0)
                var_198[1].d -= 1
                
                if (var_198[1].d == 1)
                    (**var_198)(var_198)
                    int32_t rax_78 = *(var_198 + 0xc)
                    *(var_198 + 0xc) -= 1
                    
                    if (rax_78 == 1)
                        (*(*var_198 + 8))(var_198, 1)
            
            uint64_t rcx_47 = var_2c0
            
            if (rcx_47 != 0)
                sub_140a74f90(rcx_47)
            
            int64_t rcx_48 = var_2b0
            
            if (rcx_48 != 0)
                sub_140a74f90(rcx_48)
            
            sub_140d30680(arg1, arg2, &var_218)
            rdi_11 = r14_1
            goto label_140d26cff
        
        void* rcx_55 = *(arg2 + 0x30)
        
        if (rcx_55 == 0)
            void var_158
            int64_t* rax_126 = _vfprintf_p_l(&var_158, u"Accessed None", u"ScriptCore")
            int32_t var_1d8 = 3
            int64_t var_1d0_1 = *rax_126
            int64_t* rcx_83 = rax_126[1]
            
            if (rcx_83 != 0)
                rcx_83[1].d += 1
            
            int32_t var_1c0_1 = rax_126[2].d
            int64_t* var_150
            
            if (var_150 != 0)
                var_150[1].d -= 1
                
                if (var_150[1].d == 1)
                    (**var_150)(var_150)
                    int32_t rax_130 = *(var_150 + 0xc)
                    *(var_150 + 0xc) -= 1
                    
                    if (rax_130 == 1)
                        (*(*var_150 + 8))(var_150, 1)
            
            sub_140d30680(arg1, arg2, &var_1d8)
            
            if (rcx_83 != 0)
                rcx_83[1].d -= 1
                
                if (rcx_83[1].d == 1)
                    (**rcx_83)(rcx_83)
                    int32_t rbx_3 = *(rcx_83 + 0xc)
                    *(rcx_83 + 0xc) -= 1
                    
                    if (rbx_3 == 1)
                        (*(*rcx_83 + 8))(rcx_83, zx.q(rbx_3))
        else
            int64_t var_228
            sub_140b63b70(rcx_55 + 0x28, &var_228)
            void var_f0
            int64_t* rax_88 = sub_140aae2f0(&var_f0, &var_228)
            void var_170
            char* var_130
            char** rax_90 = sub_140a96390(&var_130, 
                _vfprintf_p_l(&var_170, Accessed None trying to read property {0}", ScriptCore"))
            int64_t rcx_60 = *rax_88
            int64_t* rcx_61 = rax_88[1]
            int32_t var_d8_1 = 4
            
            if (rcx_61 != 0)
                rcx_61[1].d += 1
            
            int32_t rax_91 = rax_88[2].d
            char var_b0_1 = 1
            int32_t* var_278 = nullptr
            int32_t var_270_1 = 1
            sub_1405a4b40(&var_278, 1, 0)
            int32_t* rcx_63 = var_278
            *rcx_63 = var_d8_1
            int64_t var_d0
            *(rcx_63 + 8) = var_d0
            *(rcx_63 + 8) = var_d0
            rcx_63[2] = var_d0.d
            *(rcx_63 + 8) = var_d0
            rcx_63[0xa].b = 0
            
            if (var_b0_1 != 0)
                *(rcx_63 + 0x10) = rcx_60
                *(rcx_63 + 0x18) = rcx_61
                
                if (rcx_61 != 0)
                    rcx_61[1].d += 1
                
                rcx_63[8] = rax_91
                rcx_63[0xa].b = 1
            
            char* var_238 = *rax_90
            void* rax_99 = rax_90[1]
            void* var_230_1 = rax_99
            
            if (rax_99 != 0)
                *(rax_99 + 8) += 1
            
            void var_188
            int64_t* rax_100 = sub_140aac870(&var_188, &var_238, &var_278)
            int64_t* rdi_12 = rax_100[1]
            int64_t rcx_65 = *rax_100
            
            if (rdi_12 != 0)
                rdi_12[1].d += 1
            
            int32_t r15_1 = rax_100[2].d
            int64_t* var_180
            
            if (var_180 != 0)
                var_180[1].d -= 1
                
                if (var_180[1].d == 1)
                    (**var_180)(var_180)
                    int32_t rax_103 = *(var_180 + 0xc)
                    *(var_180 + 0xc) -= 1
                    
                    if (rax_103 == 1)
                        (*(*var_180 + 8))(var_180, 1)
            
            sub_140596f50(&var_278)
            
            if (var_b0_1 != 0)
                char var_b0_2 = 0
                
                if (rcx_61 != 0)
                    rcx_61[1].d -= 1
                    
                    if (rcx_61[1].d == 1)
                        (**rcx_61)(rcx_61)
                        int32_t rax_107 = *(rcx_61 + 0xc)
                        *(rcx_61 + 0xc) -= 1
                        
                        if (rax_107 == 1)
                            (*(*rcx_61 + 8))(rcx_61, 1)
            
            int64_t* rsi_5 = rax_90[1]
            
            if (rsi_5 != 0)
                rsi_5[1].d -= 1
                
                if (rsi_5[1].d == 1)
                    (**rsi_5)(rsi_5)
                    int32_t rax_111 = *(rsi_5 + 0xc)
                    *(rsi_5 + 0xc) -= 1
                    
                    if (rax_111 == 1)
                        (*(*rsi_5 + 8))(rsi_5, 1)
            
            int64_t* rsi_6 = rax_88[1]
            
            if (rsi_6 != 0)
                rsi_6[1].d -= 1
                
                if (rsi_6[1].d == 1)
                    (**rsi_6)(rsi_6)
                    int32_t rax_115 = *(rsi_6 + 0xc)
                    *(rsi_6 + 0xc) -= 1
                    
                    if (rax_115 == 1)
                        (*(*rsi_6 + 8))(rsi_6, 1)
            
            int64_t var_1f0_1 = rcx_65
            int32_t var_1f8 = 3
            
            if (rdi_12 != 0)
                rdi_12[1].d += 1
            
            int32_t var_1e0_1 = r15_1
            
            if (rdi_12 != 0)
                rdi_12[1].d -= 1
                
                if (rdi_12[1].d == 1)
                    (**rdi_12)(rdi_12)
                    int32_t rax_120 = *(rdi_12 + 0xc)
                    *(rdi_12 + 0xc) -= 1
                    
                    if (rax_120 == 1)
                        (*(*rdi_12 + 8))(rdi_12, 1)
            
            int64_t* var_168
            
            if (var_168 != 0)
                var_168[1].d -= 1
                
                if (var_168[1].d == 1)
                    (**var_168)(var_168)
                    int32_t rax_124 = *(var_168 + 0xc)
                    *(var_168 + 0xc) -= 1
                    
                    if (rax_124 == 1)
                        (*(*var_168 + 8))(var_168, 1)
            
            int64_t rcx_79 = var_228
            
            if (rcx_79 != 0)
                sub_140a74f90(rcx_79)
            
            sub_140d30680(arg1, arg2, &var_1f8)
            rdi_11 = rdi_12
        label_140d26cff:
            
            if (rdi_11 != 0)
                rdi_11[1].d -= 1
                
                if (rdi_11[1].d == 1)
                    (**rdi_11)(rdi_11)
                    int32_t rbx_2 = *(rdi_11 + 0xc)
                    *(rdi_11 + 0xc) -= 1
                    
                    if (rbx_2 == 1)
                        (*(*rdi_11 + 8))(rdi_11, zx.q(rbx_2))
            
            rsi = arg3
    
    int32_t* rax_83 = *(arg2 + 0x20)
    uint64_t r9_2 = zx.q(*rax_83)
    *(arg2 + 0x20) = &rax_83[1]
    int64_t* r8_4 = *(rax_83 + 4)
    *(arg2 + 0x20) = &rax_83[3]
    
    if (r8_4 == 0 || ((zx.q(*(r8_4[1] + 0x10)) u>> 0xf).b & 1) == 0)
        r8_4 = nullptr
    
    *(arg2 + 0x38) = 0
    result = &rax_83[3] + r9_2
    *(arg2 + 0x20) = result
    *(arg2 + 0x30) = 0
    
    if (rsi != 0 && r8_4 != 0)
        if ((r8_4[8] & 0x1000000200) != 0x1000000200)
            result = (*(*r8_4 + 0xe0))(r8_4, rsi)
        else
            result = memset(rsi, 0, sx.q(*(r8_4 + 0x3c)))
else
    *(arg2 + 0x20) = rbx + 0xc
    uint32_t rcx_6 = zx.d(*(rbx + 0xc))
    *(arg2 + 0x20) = rbx + 0xd
    (&data_143e1cd60)[zx.q(rcx_6)](r9, arg2, rsi)
    result = zx.q(*(arg2 + 0x90))
    
    if (result.b != 0)
        r9 = var_2a0
        goto label_140d26809

__security_check_cookie(rax_1 ^ &var_2e8)
return result
