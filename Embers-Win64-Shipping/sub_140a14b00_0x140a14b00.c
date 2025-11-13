// 函数: sub_140a14b00
// 地址: 0x140a14b00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_228
int64_t rax_1 = __security_cookie ^ &var_228
int16_t* var_1e8 = nullptr
int32_t var_1e0 = 0
int64_t var_1b0 = 0
int64_t var_1a8 = 0
int64_t* var_1f8 = nullptr
int32_t var_1f0 = 0
sub_1405947f0(&var_1f8, 4)
int32_t rax_2 = var_1f0 + 4
var_1f0 = rax_2

if (rax_2 s> 0)
    sub_140594770(&var_1f8)

int64_t* rbx = var_1f8
UnDecorator::getReferenceType(rbx, &data_142d62df8, 8)
int64_t* rdi
rdi.b = sub_14060a620(arg2, &var_1f8, &var_1e8, &var_1b0, 0, 0) == 0

if (rbx != 0)
    sub_140a74f90(rbx)

int64_t* rdi_2

if (rdi.b == 0)
    rbx = *(arg1 + 0x30)
    void* r14_3 = &rbx[sx.q(*(arg1 + 0x38)) * 2]
    
    if (rbx != r14_3)
        int16_t* const rdi_3 = &data_142d40450
        
        do
            int16_t* const rdx_4 = &data_142d40450
            
            if (var_1e0 != 0)
                rdx_4 = var_1e8
            
            int16_t* const rcx_9
            
            if (rbx[1].d == 0)
                rcx_9 = &data_142d40450
            else
                rcx_9 = *rbx
            
            if (sub_140a54510(rcx_9, rdx_4) == 0)
                if (var_1e0 != 0)
                    rdi_3 = var_1e8
                
                if (sub_140a54510(rdi_3, u"file") == 0)
                    int64_t var_1a0
                    sub_140b19c30(&var_1a0, &var_1b0, 0)
                    
                    if (sub_1405a71a0(arg1 + 0x10, &var_1a0) == 0)
                        if (arg3 != 0)
                            void var_d8
                            int64_t* rax_52 = sub_140aae420(&var_d8, &var_1a0)
                            void var_140
                            char* var_f8
                            char** rax_54 = sub_140a96390(&var_f8, 
                                _vfprintf_p_l(&var_140, The file extension '{0}' is not supported", 
                                FWebMMediaFactoryModule"))
                            int64_t rcx_45 = *rax_52
                            int64_t* rcx_46 = rax_52[1]
                            int32_t var_a8_1 = 4
                            
                            if (rcx_46 != 0)
                                rcx_46[1].d += 1
                            
                            int32_t rcx_47 = rax_52[2].d
                            char var_80_1 = 1
                            int32_t* var_1d0 = nullptr
                            int32_t var_1c8_1 = 1
                            sub_1405a4b40(&var_1d0, 1, 0)
                            int32_t* rcx_49 = var_1d0
                            *rcx_49 = var_a8_1
                            int64_t var_a0
                            *(rcx_49 + 8) = var_a0
                            *(rcx_49 + 8) = var_a0
                            rcx_49[2] = var_a0.d
                            *(rcx_49 + 8) = var_a0
                            rcx_49[0xa].b = 0
                            
                            if (var_80_1 != 0)
                                *(rcx_49 + 0x10) = rcx_45
                                *(rcx_49 + 0x18) = rcx_46
                                
                                if (rcx_46 != 0)
                                    rcx_46[1].d += 1
                                
                                rcx_49[8] = rcx_47
                                rcx_49[0xa].b = 1
                            
                            char* var_190 = *rax_54
                            void* rax_62 = rax_54[1]
                            void* var_188_1 = rax_62
                            
                            if (rax_62 != 0)
                                *(rax_62 + 8) += 1
                            
                            void var_158
                            int64_t* rax_63 = sub_140aac870(&var_158, &var_190, &var_1d0)
                            int64_t* rdi_5 = rax_63[1]
                            int64_t rcx_51 = *rax_63
                            
                            if (rdi_5 != 0)
                                rdi_5[1].d += 1
                            
                            int32_t r13_2 = rax_63[2].d
                            int64_t* var_150
                            
                            if (var_150 != 0)
                                var_150[1].d -= 1
                                
                                if (var_150[1].d == 1)
                                    (**var_150)(var_150)
                                    int32_t rax_66 = *(var_150 + 0xc)
                                    *(var_150 + 0xc) -= 1
                                    
                                    if (rax_66 == 1)
                                        (*(*var_150 + 8))(var_150, 1)
                            
                            sub_140596f50(&var_1d0)
                            
                            if (var_80_1 != 0)
                                char var_80_2 = 0
                                
                                if (rcx_46 != 0)
                                    rcx_46[1].d -= 1
                                    
                                    if (rcx_46[1].d == 1)
                                        (**rcx_46)(rcx_46)
                                        int32_t rax_70 = *(rcx_46 + 0xc)
                                        *(rcx_46 + 0xc) -= 1
                                        
                                        if (rax_70 == 1)
                                            (*(*rcx_46 + 8))(rcx_46, 1)
                            
                            int64_t* r14_11 = rax_54[1]
                            
                            if (r14_11 != 0)
                                r14_11[1].d -= 1
                                
                                if (r14_11[1].d == 1)
                                    (**r14_11)(r14_11)
                                    int32_t rax_74 = *(r14_11 + 0xc)
                                    *(r14_11 + 0xc) -= 1
                                    
                                    if (rax_74 == 1)
                                        (*(*r14_11 + 8))(r14_11, 1)
                            
                            int64_t* r14_12 = rax_52[1]
                            
                            if (r14_12 != 0)
                                r14_12[1].d -= 1
                                
                                if (r14_12[1].d == 1)
                                    (**r14_12)(r14_12)
                                    int32_t rax_78 = *(r14_12 + 0xc)
                                    *(r14_12 + 0xc) -= 1
                                    
                                    if (rax_78 == 1)
                                        (*(*r14_12 + 8))(r14_12, 1)
                            
                            int64_t r14_13 = sx.q(arg3[1].d)
                            int32_t rax_80 = (r14_13 + 1).d
                            arg3[1].d = rax_80
                            
                            if (rax_80 s> *(arg3 + 0xc))
                                sub_1405a4df0(arg3)
                            
                            int64_t rax_81 = *arg3
                            int64_t rdx_17 = r14_13 * 3
                            *(rax_81 + (rdx_17 << 3)) = rcx_51
                            *(rax_81 + (rdx_17 << 3) + 8) = rdi_5
                            
                            if (rdi_5 != 0)
                                rdi_5[1].d += 1
                            
                            *(rax_81 + (rdx_17 << 3) + 0x10) = r13_2
                            
                            if (rdi_5 != 0)
                                rdi_5[1].d -= 1
                                
                                if (rdi_5[1].d == 1)
                                    (**rdi_5)(rdi_5)
                                    int32_t rax_85 = *(rdi_5 + 0xc)
                                    *(rdi_5 + 0xc) -= 1
                                    
                                    if (rax_85 == 1)
                                        (*(*rdi_5 + 8))(rdi_5, 1)
                            
                            int64_t* var_138
                            
                            if (var_138 != 0)
                                var_138[1].d -= 1
                                
                                if (var_138[1].d == 1)
                                    (**var_138)(var_138)
                                    int32_t rbx_2 = *(var_138 + 0xc)
                                    *(var_138 + 0xc) -= 1
                                    
                                    if (rbx_2 == 1)
                                        (*(*var_138 + 8))(var_138, zx.q(rbx_2))
                        
                        int64_t rcx_67 = var_1a0
                        
                        if (rcx_67 != 0)
                            sub_140a74f90(rcx_67)
                        
                        goto label_140a14fc5
                    
                    int64_t rcx_68 = var_1a0
                    
                    if (rcx_68 != 0)
                        sub_140a74f90(rcx_68)
                
                rbx.b = 1
                goto label_140a14fc7
            
            rbx = &rbx[2]
        while (rbx != r14_3)
    
    if (arg3 != 0)
        void var_c0
        int64_t* rax_9 = sub_140aae420(&var_c0, &var_1e8)
        void var_110
        char* var_e8
        char** rax_11 = sub_140a96390(&var_e8, 
            _vfprintf_p_l(&var_110, The URI scheme '{0}' is not supported", 
            FWebMMediaFactoryModule"))
        int64_t rcx_13 = *rax_9
        int64_t* rcx_14 = rax_9[1]
        int32_t var_78_1 = 4
        
        if (rcx_14 != 0)
            rcx_14[1].d += 1
        
        int32_t rcx_15 = rax_9[2].d
        char var_50_1 = 1
        int32_t* var_1c0 = nullptr
        int32_t var_1b8_1 = 1
        sub_1405a4b40(&var_1c0, 1, 0)
        int32_t* rcx_17 = var_1c0
        *rcx_17 = var_78_1
        int64_t var_70
        *(rcx_17 + 8) = var_70
        *(rcx_17 + 8) = var_70
        rcx_17[2] = var_70.d
        *(rcx_17 + 8) = var_70
        rcx_17[0xa].b = 0
        
        if (var_50_1 != 0)
            *(rcx_17 + 0x10) = rcx_13
            *(rcx_17 + 0x18) = rcx_14
            
            if (rcx_14 != 0)
                rcx_14[1].d += 1
            
            rcx_17[8] = rcx_15
            rcx_17[0xa].b = 1
        
        char* var_180 = *rax_11
        void* rax_19 = rax_11[1]
        void* var_178_1 = rax_19
        
        if (rax_19 != 0)
            *(rax_19 + 8) += 1
        
        void var_128
        int64_t* rax_20 = sub_140aac870(&var_128, &var_180, &var_1c0)
        int64_t* rdi_4 = rax_20[1]
        int64_t rcx_19 = *rax_20
        
        if (rdi_4 != 0)
            rdi_4[1].d += 1
        
        int32_t r13_1 = rax_20[2].d
        int64_t* var_120
        
        if (var_120 != 0)
            var_120[1].d -= 1
            
            if (var_120[1].d == 1)
                (**var_120)(var_120)
                int32_t rax_23 = *(var_120 + 0xc)
                *(var_120 + 0xc) -= 1
                
                if (rax_23 == 1)
                    (*(*var_120 + 8))(var_120, 1)
        
        sub_140596f50(&var_1c0)
        
        if (var_50_1 != 0)
            char var_50_2 = 0
            
            if (rcx_14 != 0)
                rcx_14[1].d -= 1
                
                if (rcx_14[1].d == 1)
                    (**rcx_14)(rcx_14)
                    int32_t rax_27 = *(rcx_14 + 0xc)
                    *(rcx_14 + 0xc) -= 1
                    
                    if (rax_27 == 1)
                        (*(*rcx_14 + 8))(rcx_14, 1)
        
        int64_t* r14_6 = rax_11[1]
        
        if (r14_6 != 0)
            r14_6[1].d -= 1
            
            if (r14_6[1].d == 1)
                (**r14_6)(r14_6)
                int32_t rax_31 = *(r14_6 + 0xc)
                *(r14_6 + 0xc) -= 1
                
                if (rax_31 == 1)
                    (*(*r14_6 + 8))(r14_6, 1)
        
        int64_t* r14_7 = rax_9[1]
        
        if (r14_7 != 0)
            r14_7[1].d -= 1
            
            if (r14_7[1].d == 1)
                (**r14_7)(r14_7)
                int32_t rax_35 = *(r14_7 + 0xc)
                *(r14_7 + 0xc) -= 1
                
                if (rax_35 == 1)
                    (*(*r14_7 + 8))(r14_7, 1)
        
        int64_t r14_8 = sx.q(arg3[1].d)
        int32_t rax_37 = (r14_8 + 1).d
        arg3[1].d = rax_37
        
        if (rax_37 s> *(arg3 + 0xc))
            sub_1405a4df0(arg3)
        
        int64_t rax_38 = *arg3
        int64_t rdx_9 = r14_8 * 3
        *(rax_38 + (rdx_9 << 3)) = rcx_19
        *(rax_38 + (rdx_9 << 3) + 8) = rdi_4
        
        if (rdi_4 != 0)
            rdi_4[1].d += 1
        
        *(rax_38 + (rdx_9 << 3) + 0x10) = r13_1
        
        if (rdi_4 != 0)
            rdi_4[1].d -= 1
            
            if (rdi_4[1].d == 1)
                (**rdi_4)(rdi_4)
                int32_t rax_42 = *(rdi_4 + 0xc)
                *(rdi_4 + 0xc) -= 1
                
                if (rax_42 == 1)
                    (*(*rdi_4 + 8))(rdi_4, 1)
        
        int64_t* var_108
        rdi_2 = var_108
        
        if (rdi_2 != 0)
            goto label_140a14f9d
else if (arg3 != 0)
    void var_170
    int64_t* rax_4 = _vfprintf_p_l(&var_170, u"No URI scheme found", u"FWebMMediaFactoryModule")
    int64_t rdi_1 = sx.q(arg3[1].d)
    int32_t rcx_6 = (rdi_1 + 1).d
    arg3[1].d = rcx_6
    
    if (rcx_6 s> *(arg3 + 0xc))
        sub_1405a4df0(arg3)
    
    int64_t rdx_3 = rdi_1 * 3
    int64_t rcx_8 = *arg3
    *(rcx_8 + (rdx_3 << 3)) = *rax_4
    void* rax_6 = rax_4[1]
    *(rcx_8 + (rdx_3 << 3) + 8) = rax_6
    
    if (rax_6 != 0)
        *(rax_6 + 8) += 1
    
    *(rcx_8 + (rdx_3 << 3) + 0x10) = rax_4[2].d
    int64_t* var_168
    rdi_2 = var_168
    
    if (rdi_2 != 0)
    label_140a14f9d:
        rdi_2[1].d -= 1
        
        if (rdi_2[1].d == 1)
            (**rdi_2)(rdi_2)
            int32_t rbx_1 = *(rdi_2 + 0xc)
            *(rdi_2 + 0xc) -= 1
            
            if (rbx_1 == 1)
                (*(*rdi_2 + 8))(rdi_2, zx.q(rbx_1))
label_140a14fc5:
rbx.b = 0
label_140a14fc7:
int64_t rcx_35 = var_1b0

if (rcx_35 != 0)
    sub_140a74f90(rcx_35)

int16_t* rcx_36 = var_1e8

if (rcx_36 != 0)
    sub_140a74f90(rcx_36)

__security_check_cookie(rax_1 ^ &var_228)
return zx.q(rbx.b)
