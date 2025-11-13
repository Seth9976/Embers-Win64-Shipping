// 函数: ?findC13Lines@Mod1@@AEAA_NXZ
// 地址: 0x141f9fa90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2b8
int64_t rax_1 = __security_cookie ^ &var_2b8
int32_t var_260 = 0
char rsi = arg2
int64_t var_1d8 = 0
int64_t var_1d0 = 0
int32_t rbx = 0
int64_t* rdi
rdi.b = 0
void* rax_2 = sub_141f87f60(arg1, &var_1d8)
uint64_t result
int512_t zmm2

if (rax_2 != 0)
    if (rsi != 0)
        int64_t var_178
        void var_c0
        int64_t* rax_4 = sub_140aae2f0(&var_c0, sub_140d21e10(rax_2, &var_178, 0))
        void var_128
        char* var_e0
        char** rax_6 = sub_140a96390(&var_e0, 
            _vfprintf_p_l(&var_128, 
                Cyclic dependency found. Table {0} depends on itself. Please fix your data", 
            CompositeDataTables"))
        int64_t rcx_4 = *rax_4
        int64_t* rcx_5 = rax_4[1]
        int32_t var_90_1 = 4
        
        if (rcx_5 != 0)
            rcx_5[1].d += 1
        
        int32_t rcx_6 = rax_4[2].d
        char var_68_1 = 1
        int32_t* var_238 = nullptr
        int32_t var_230_1 = 1
        sub_1405a4b40(&var_238, 1, 0)
        int32_t* rcx_8 = var_238
        *rcx_8 = var_90_1
        int64_t var_88
        *(rcx_8 + 8) = var_88
        *(rcx_8 + 8) = var_88
        rcx_8[2] = var_88.d
        *(rcx_8 + 8) = var_88
        rcx_8[0xa].b = 0
        
        if (var_68_1 != 0)
            *(rcx_8 + 0x10) = rcx_4
            *(rcx_8 + 0x18) = rcx_5
            
            if (rcx_5 != 0)
                rcx_5[1].d += 1
            
            rcx_8[8] = rcx_6
            rcx_8[0xa].b = 1
        
        char* var_1c8 = *rax_6
        void* rax_14 = rax_6[1]
        void* var_1c0_1 = rax_14
        
        if (rax_14 != 0)
            *(rax_14 + 8) += 1
        
        void var_140
        int64_t* rax_15
        rax_15, zmm2 = sub_140aac870(&var_140, &var_1c8, &var_238)
        rdi = rax_15[1]
        
        if (rdi != 0)
            rdi[1].d += 1
        
        int64_t* var_138
        
        if (var_138 != 0)
            var_138[1].d -= 1
            
            if (var_138[1].d == 1)
                (**var_138)(var_138)
                int32_t rax_18 = *(var_138 + 0xc)
                *(var_138 + 0xc) -= 1
                
                if (rax_18 == 1)
                    (*(*var_138 + 8))(var_138, 1)
        
        sub_140596f50(&var_238)
        
        if (var_68_1 != 0)
            char var_68_2 = 0
            
            if (rcx_5 != 0)
                rcx_5[1].d -= 1
                
                if (rcx_5[1].d == 1)
                    (**rcx_5)(rcx_5)
                    int32_t rax_22 = *(rcx_5 + 0xc)
                    *(rcx_5 + 0xc) -= 1
                    
                    if (rax_22 == 1)
                        (*(*rcx_5 + 8))(rcx_5, 1)
        
        int64_t* rsi_3 = rax_6[1]
        
        if (rsi_3 != 0)
            rsi_3[1].d -= 1
            
            if (rsi_3[1].d == 1)
                (**rsi_3)(rsi_3)
                int32_t rax_26 = *(rsi_3 + 0xc)
                *(rsi_3 + 0xc) -= 1
                
                if (rax_26 == 1)
                    (*(*rsi_3 + 8))(rsi_3, 1)
        
        int64_t* rsi_4 = rax_4[1]
        
        if (rsi_4 != 0)
            rsi_4[1].d -= 1
            
            if (rsi_4[1].d == 1)
                (**rsi_4)(rsi_4)
                int32_t rax_30 = *(rsi_4 + 0xc)
                *(rsi_4 + 0xc) -= 1
                
                if (rax_30 == 1)
                    (*(*rsi_4 + 8))(rsi_4, 1)
        
        int64_t* var_120
        
        if (var_120 != 0)
            var_120[1].d -= 1
            
            if (var_120[1].d == 1)
                (**var_120)(var_120)
                int32_t rax_34 = *(var_120 + 0xc)
                *(var_120 + 0xc) -= 1
                
                if (rax_34 == 1)
                    (*(*var_120 + 8))(var_120, 1)
        
        int64_t rcx_21 = var_178
        
        if (rcx_21 != 0)
            sub_140a74f90(rcx_21)
        
        if (rdi != 0)
            rdi[1].d -= 1
            
            if (rdi[1].d == 1)
                (**rdi)(rdi)
                int32_t rax_38 = *(rdi + 0xc)
                *(rdi + 0xc) -= 1
                
                if (rax_38 == 1)
                    (*(*rdi + 8))(rdi, 1)
        
        rsi = arg2
    
    result = zx.q(arg1[7].d)
    rdi.b = 1

if (rax_2 == 0 || result.d != *(arg1 + 0x64))
    result = sub_141fb0ab0(arg1)
    
    if (rdi.b == 0)
        int64_t** r14_2 = arg1[0x19]
        result = sx.q(arg1[0x1a].d)
        void* r15_2 = &r14_2[result]
        
        if (r14_2 != r15_2)
            char r12_1 = 0
            
            do
                int64_t* rdi_1 = *r14_2
                
                if (rdi_1 != 0)
                    result = arg1[5]
                    
                    if (rdi_1[5] == result)
                        void* rax_47 = (*(*rdi_1 + 0x278))(rdi_1)
                        int32_t r11_1 = *(rax_47 + 0x28)
                        int32_t rcx_41 = 0
                        int32_t r8_2 = 0
                        int32_t var_258_1 = 0
                        int32_t var_254_1 = 1
                        int32_t var_248_1 = 0xffffffff
                        void* r9_2 = rax_47 + 0x10
                        void* var_250_1 = r9_2
                        int64_t var_244_1 = 0
                        
                        if (r11_1 != 0)
                            void* rax_48 = *(r9_2 + 0x10)
                            
                            if (rax_48 != 0)
                                r9_2 = rax_48
                            
                            int32_t temp1_1
                            int32_t temp2_1
                            temp1_1:temp2_1 = sx.q(r11_1 - 1)
                            int32_t rdx_11 = *r9_2
                            
                            if (rdx_11 != 0)
                            label_141fa007b:
                                int32_t rax_55 = neg.d(rdx_11) & rdx_11
                                uint64_t rflags_1
                                int32_t temp0_13
                                temp0_13, rflags_1 = _bit_scan_reverse(rax_55)
                                int32_t var_254_2 = rax_55
                                int32_t var_260_1 = temp0_13
                                int32_t rax_56
                                
                                if (rax_55 == 0)
                                    rax_56 = 0x20
                                else
                                    rax_56 = 0x1f - temp0_13
                                
                                var_244_1.d = r8_2 - rax_56 + 0x1f
                                
                                if (r8_2 - rax_56 + 0x1f s> r11_1)
                                    var_244_1.d = r11_1
                            else
                                while (true)
                                    int64_t rdx_12 = sx.q(rcx_41)
                                    r8_2 += 0x20
                                    rcx_41 += 1
                                    var_244_1:4.d = r8_2
                                    var_258_1 = rcx_41
                                    
                                    if (rdx_12.d s>= (temp2_1 + (temp1_1 & 0x1f)) s>> 5)
                                        break
                                    
                                    rdx_11 = *(r9_2 + (rdx_12 << 2) + 4)
                                    int32_t var_248_2 = 0xffffffff
                                    
                                    if (rdx_11 != 0)
                                        goto label_141fa007b
                                
                                var_244_1.d = r11_1
                        
                        zmm2.o = 0xffffffff
                        int128_t var_150_1 = 0xffffffff
                        double var_160_1[0x2] = var_258_1.o
                        double var_218[0x2] = rax_47.o
                        result = 0
                        int64_t var_1f8_1 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
                        
                        if (0 s< r11_1)
                            int32_t i = var_160_1[1]:4.d
                            
                            do
                                int64_t rdx_13 = sx.q(i) * 3
                                int64_t rcx_43 = *var_218[0]
                                int64_t r8_4 = *(rcx_43 + (rdx_13 << 3) + 8)
                                
                                if (r8_4 != 0)
                                    sub_141fa9a50(arg1, *(rcx_43 + (rdx_13 << 3)), r8_4, zmm2)
                                
                                var_160_1[1].d &= not.d(var_218[1]:4.d)
                                sub_14059bdd0(&var_218[1])
                                result = var_160_1[0]
                                i = var_160_1[1]:4.d
                            while (i s< *(result + 0x18))
                    else if (rsi != 0)
                        r12_1 = 1
                        int64_t var_280
                        int64_t var_1b8
                        int64_t* rax_41
                        int32_t rbx_1
                        
                        if (result == 0)
                            rbx_1 = rbx | 2
                            var_280 = 0
                            int32_t var_278_1 = 0
                            sub_1405947f0(&var_280, 0x13)
                            int32_t rax_42 = var_278_1 + 0x13
                            var_278_1 = rax_42
                            
                            if (rax_42 s> 0)
                                sub_140594770(&var_280)
                            
                            sub_1405a7220(var_280, 0x13, "Missing row struct", 0x13, 0x3f)
                            rax_41 = &var_280
                        else
                            rbx_1 = rbx | 1
                            int64_t var_1f0 = *(result + 0x18)
                            sub_140b63b70(&var_1f0, &var_1b8)
                            rax_41 = &var_1b8
                        
                        int64_t rsi_6 = *rax_41
                        *rax_41 = 0
                        rax_41[1] = 0
                        
                        if ((rbx_1.b & 2) != 0)
                            int64_t rcx_29 = var_280
                            rbx_1 &= 0xfffffffd
                            
                            if (rcx_29 != 0)
                                sub_140a74f90(rcx_29)
                        
                        if ((rbx_1.b & 1) != 0)
                            int64_t rcx_30 = var_1b8
                            rbx_1 &= 0xfffffffe
                            
                            if (rcx_30 != 0)
                                sub_140a74f90(rcx_30)
                        
                        void* rax_43 = rdi_1[5]
                        void* var_270
                        int64_t var_1a8
                        int32_t rcx_32
                        
                        if (rax_43 == 0)
                            var_270 = rax_43
                            sub_1405947f0(&var_270, 0x13)
                            void* var_268_1
                            var_268_1.d = rax_43.d + 0x13
                            
                            if (rax_43.d + 0x13 s> var_268_1:4.d)
                                sub_140594770(&var_270)
                            
                            sub_1405a7220(var_270, 0x13, "Missing row struct", 0x13, 0x3f)
                            result = &var_270
                            rcx_32 = 8
                        else
                            int64_t var_1e8 = *(rax_43 + 0x18)
                            sub_140b63b70(&var_1e8, &var_1a8)
                            result = &var_1a8
                            rcx_32 = 4
                        
                        int64_t rdi_2 = *result
                        rbx = rbx_1 | rcx_32
                        *result = 0
                        *(result + 8) = 0
                        
                        if ((rbx.b & 8) != 0)
                            void* rcx_36 = var_270
                            rbx &= 0xfffffff7
                            
                            if (rcx_36 != 0)
                                result = sub_140a74f90(rcx_36)
                        
                        if ((rbx.b & 4) != 0)
                            int64_t rcx_37 = var_1a8
                            rbx &= 0xfffffffb
                            
                            if (rcx_37 != 0)
                                result = sub_140a74f90(rcx_37)
                        
                        if (rdi_2 != 0)
                            result = sub_140a74f90(rdi_2)
                        
                        if (rsi_6 != 0)
                            result = sub_140a74f90(rsi_6)
                
                rsi = arg2
                r14_2 = &r14_2[1]
            while (r14_2 != r15_2)
            
            if (r12_1 != 0)
                int64_t var_1e0 = arg1[3]
                int64_t var_188
                sub_140b63b70(&var_1e0, &var_188)
                void var_a8
                int64_t* rax_63 = sub_140aae2f0(&var_a8, &var_188)
                void var_f8
                char* var_d0
                char** rax_65 = sub_140a96390(&var_d0, 
                    _vfprintf_p_l(&var_f8, 
                        Composite table '{0}' must have the same row struct as it's parent tables. See "
                "output log for list of invalid rows.", 
                    CompositeDataTables"))
                int64_t rcx_50 = *rax_63
                int64_t* rcx_51 = rax_63[1]
                int32_t var_60_1 = 4
                
                if (rcx_51 != 0)
                    rcx_51[1].d += 1
                
                int32_t rcx_52 = rax_63[2].d
                char var_38_1 = 1
                int32_t* var_228 = nullptr
                int32_t var_220_1 = 1
                sub_1405a4b40(&var_228, 1, 0)
                int32_t* rcx_54 = var_228
                *rcx_54 = var_60_1
                int64_t var_58
                *(rcx_54 + 8) = var_58
                *(rcx_54 + 8) = var_58
                rcx_54[2] = var_58.d
                *(rcx_54 + 8) = var_58
                rcx_54[0xa].b = 0
                
                if (var_38_1 != 0)
                    *(rcx_54 + 0x10) = rcx_50
                    *(rcx_54 + 0x18) = rcx_51
                    
                    if (rcx_51 != 0)
                        rcx_51[1].d += 1
                    
                    rcx_54[8] = rcx_52
                    rcx_54[0xa].b = 1
                
                char* var_198 = *rax_65
                void* rax_73 = rax_65[1]
                void* var_190_1 = rax_73
                
                if (rax_73 != 0)
                    *(rax_73 + 8) += 1
                
                void var_110
                int64_t* rbx_2 = sub_140aac870(&var_110, &var_198, &var_228)[1]
                
                if (rbx_2 != 0)
                    rbx_2[1].d += 1
                
                int64_t* var_108
                
                if (var_108 != 0)
                    var_108[1].d -= 1
                    
                    if (var_108[1].d == 1)
                        (**var_108)(var_108)
                        int32_t rax_77 = *(var_108 + 0xc)
                        *(var_108 + 0xc) -= 1
                        
                        if (rax_77 == 1)
                            (*(*var_108 + 8))(var_108, 1)
                
                result = sub_140596f50(&var_228)
                
                if (var_38_1 != 0)
                    char var_38_2 = 0
                    
                    if (rcx_51 != 0)
                        result = zx.q(rcx_51[1].d)
                        rcx_51[1].d -= 1
                        
                        if (result.d == 1)
                            (**rcx_51)(rcx_51)
                            result = zx.q(*(rcx_51 + 0xc))
                            *(rcx_51 + 0xc) -= 1
                            
                            if (result.d == 1)
                                result = (*(*rcx_51 + 8))(rcx_51, 1)
                
                int64_t* rdi_6 = rax_65[1]
                
                if (rdi_6 != 0)
                    result = zx.q(rdi_6[1].d)
                    rdi_6[1].d -= 1
                    
                    if (result.d == 1)
                        (**rdi_6)(rdi_6)
                        result = zx.q(*(rdi_6 + 0xc))
                        *(rdi_6 + 0xc) -= 1
                        
                        if (result.d == 1)
                            result = (*(*rdi_6 + 8))(rdi_6, 1)
                
                int64_t* rdi_7 = rax_63[1]
                
                if (rdi_7 != 0)
                    result = zx.q(rdi_7[1].d)
                    rdi_7[1].d -= 1
                    
                    if (result.d == 1)
                        (**rdi_7)(rdi_7)
                        result = zx.q(*(rdi_7 + 0xc))
                        *(rdi_7 + 0xc) -= 1
                        
                        if (result.d == 1)
                            result = (*(*rdi_7 + 8))(rdi_7, 1)
                
                int64_t* var_f0
                
                if (var_f0 != 0)
                    result = zx.q(var_f0[1].d)
                    var_f0[1].d -= 1
                    
                    if (result.d == 1)
                        (**var_f0)(var_f0)
                        result = zx.q(*(var_f0 + 0xc))
                        *(var_f0 + 0xc) -= 1
                        
                        if (result.d == 1)
                            result = (*(*var_f0 + 8))(var_f0, 1)
                
                int64_t rcx_67 = var_188
                
                if (rcx_67 != 0)
                    result = sub_140a74f90(rcx_67)
                
                if (rbx_2 != 0)
                    result = zx.q(rbx_2[1].d)
                    rbx_2[1].d -= 1
                    
                    if (result.d == 1)
                        result = (**rbx_2)(rbx_2)
                        int32_t r12_2 = *(rbx_2 + 0xc)
                        *(rbx_2 + 0xc) -= 1
                        
                        if (r12_2 == 1)
                            result = (*(*rbx_2 + 8))(rbx_2, zx.q(r12_2))

__security_check_cookie(rax_1 ^ &var_2b8)
return result
