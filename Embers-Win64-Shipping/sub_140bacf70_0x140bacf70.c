// 函数: sub_140bacf70
// 地址: 0x140bacf70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_288
int64_t rax_1 = __security_cookie ^ &var_288
int32_t r8 = arg1[1].d
int32_t rcx = r8 - 1

if (r8 == 0)
    rcx = -1

uint64_t result = zx.q(r8 - 1)

if (r8 == 0)
    result = 0xffffffff

if (r8 == 0)
    result = 0

int64_t* rdi_7

if (result.d s>= 4)
    int16_t* rdx_2 = *arg1
    int64_t* rax_41
    
    if (*rdx_2 == 0x2f)
        if (r8 == 0)
            rcx = 0
        
        if (rdx_2[sx.q(rcx) - 1] != 0x2f)
            if (sub_140ba1610(arg1, arg3).b == 0)
                sub_140ba9350()
                int64_t* var_268 = nullptr
                int32_t i_2 = 0
                int64_t r13
                r13.b = 0
                sub_140baaec0(&data_143e1a650, &var_268, arg2)
                int32_t rdi_8 = 0
                
                if (i_2 s> 0)
                    do
                        if (sub_140a32a50(arg1, &var_268[sx.q(rdi_8) * 2], 1) != 0)
                            r13.b = 1
                            goto label_140bad8fa
                        
                        rdi_8 += 1
                    while (rdi_8 s< i_2)
                
                if (arg3 == 0)
                label_140bad8fa:
                    int32_t i_1 = i_2
                    int64_t* rbx_4 = var_268
                    
                    if (i_1 != 0)
                        int32_t i
                        
                        do
                            int64_t rcx_74 = *rbx_4
                            
                            if (rcx_74 != 0)
                                sub_140a74f90(rcx_74)
                            
                            rbx_4 = &rbx_4[2]
                            i = i_1
                            i_1 -= 1
                        while (i != 1)
                else
                    if (i_2 != 0)
                        int64_t var_258 = 0
                        int64_t var_250_1 = 0
                        
                        if (i_2 != 1)
                            int32_t r14_2 = 0
                            
                            if (i_2 s> 0)
                                int64_t* rdi_10 = var_268
                                
                                do
                                    int32_t rax_56 = rdi_10[1].d
                                    int64_t rcx_46
                                    
                                    if (r14_2 s>= i_2 - 1)
                                        int16_t* const r8_7
                                        
                                        if (rax_56 == 0)
                                            r8_7 = &data_142d40450
                                        else
                                            r8_7 = *rdi_10
                                        
                                        int64_t var_1d8
                                        sub_140a2e390(&var_1d8, u"or '%s'", r8_7)
                                        int32_t var_1d0
                                        int32_t r8_9
                                        
                                        if (var_1d0 == 0)
                                            r8_9 = 0
                                        else
                                            r8_9 = var_1d0 - 1
                                        
                                        sub_140a20ba0(&var_258, var_1d8, r8_9)
                                        rcx_46 = var_1d8
                                    else
                                        int16_t* const r8_4
                                        
                                        if (rax_56 == 0)
                                            r8_4 = &data_142d40450
                                        else
                                            r8_4 = *rdi_10
                                        
                                        int64_t var_1e8
                                        sub_140a2e390(&var_1e8, u"'%s', ", r8_4)
                                        int32_t var_1e0
                                        int32_t r8_6
                                        
                                        if (var_1e0 == 0)
                                            r8_6 = 0
                                        else
                                            r8_6 = var_1e0 - 1
                                        
                                        sub_140a20ba0(&var_258, var_1e8, r8_6)
                                        rcx_46 = var_1e8
                                    
                                    if (rcx_46 != 0)
                                        sub_140a74f90(rcx_46)
                                    
                                    r14_2 += 1
                                    rdi_10 = &rdi_10[2]
                                while (r14_2 s< i_2)
                        else
                            int64_t* rcx_41 = var_268
                            int16_t* const r15_2
                            
                            if (rcx_41[1].d == 0)
                                r15_2 = &data_142d40450
                            else
                                r15_2 = *rcx_41
                            
                            int64_t var_1f8
                            sub_140a2e390(&var_1f8, u"'%s'", r15_2)
                            int64_t rcx_43 = var_258
                            
                            if (rcx_43 != 0)
                                sub_140a74f90(rcx_43)
                            
                            var_258 = var_1f8
                            int32_t var_1f0
                            var_250_1.d = var_1f0
                            int32_t var_1ec
                            var_250_1:4.d = var_1ec
                        
                        void var_b8
                        int64_t* rax_57 = sub_140aae420(&var_b8, &var_258)
                        void var_108
                        char* var_e0
                        char** rax_59 = sub_140a96390(&var_e0, 
                            _vfprintf_p_l(&var_108, 
                                Path does not start with a valid root. Path must begin with: {0}", 
                            Core"))
                        int64_t rcx_52 = *rax_57
                        int64_t* rcx_53 = rax_57[1]
                        int32_t var_70_1 = 4
                        
                        if (rcx_53 != 0)
                            rcx_53[1].d += 1
                        
                        int32_t rax_60 = rax_57[2].d
                        char var_48_1 = 1
                        int32_t* var_238 = nullptr
                        int32_t var_230_1 = 1
                        sub_1405a4b40(&var_238, 1, 0)
                        int32_t* rcx_55 = var_238
                        *rcx_55 = var_70_1
                        int64_t var_68
                        *(rcx_55 + 8) = var_68
                        *(rcx_55 + 8) = var_68
                        rcx_55[2] = var_68.d
                        *(rcx_55 + 8) = var_68
                        rcx_55[0xa].b = 0
                        
                        if (var_48_1 != 0)
                            *(rcx_55 + 0x10) = rcx_52
                            *(rcx_55 + 0x18) = rcx_53
                            
                            if (rcx_53 != 0)
                                rcx_53[1].d += 1
                            
                            rcx_55[8] = rax_60
                            rcx_55[0xa].b = 1
                        
                        char* var_1a8 = *rax_59
                        void* rax_68 = rax_59[1]
                        void* var_1a0_1 = rax_68
                        
                        if (rax_68 != 0)
                            *(rax_68 + 8) += 1
                        
                        void var_120
                        int64_t* rax_69 = sub_140aac870(&var_120, &var_1a8, &var_238)
                        int64_t rcx_57 = *rax_69
                        void* rcx_58 = rax_69[1]
                        
                        if (rcx_58 != 0)
                            *(rcx_58 + 8) += 1
                        
                        int32_t rax_70 = rax_69[2].d
                        int64_t* var_118
                        
                        if (var_118 != 0)
                            var_118[1].d -= 1
                            
                            if (var_118[1].d == 1)
                                (**var_118)(var_118)
                                int32_t rax_73 = *(var_118 + 0xc)
                                *(var_118 + 0xc) -= 1
                                
                                if (rax_73 == 1)
                                    (*(*var_118 + 8))(var_118, 1)
                        
                        sub_140596f50(&var_238)
                        
                        if (var_48_1 != 0)
                            char var_48_2 = 0
                            
                            if (rcx_53 != 0)
                                rcx_53[1].d -= 1
                                
                                if (rcx_53[1].d == 1)
                                    (**rcx_53)(rcx_53)
                                    int32_t rax_77 = *(rcx_53 + 0xc)
                                    *(rcx_53 + 0xc) -= 1
                                    
                                    if (rax_77 == 1)
                                        (*(*rcx_53 + 8))(rcx_53, 1)
                        
                        int64_t* rdi_13 = rax_59[1]
                        
                        if (rdi_13 != 0)
                            rdi_13[1].d -= 1
                            
                            if (rdi_13[1].d == 1)
                                (**rdi_13)(rdi_13)
                                int32_t rax_81 = *(rdi_13 + 0xc)
                                *(rdi_13 + 0xc) -= 1
                                
                                if (rax_81 == 1)
                                    (*(*rdi_13 + 8))(rdi_13, 1)
                        
                        int64_t* rdi_14 = rax_57[1]
                        
                        if (rdi_14 != 0)
                            rdi_14[1].d -= 1
                            
                            if (rdi_14[1].d == 1)
                                (**rdi_14)(rdi_14)
                                int32_t rax_85 = *(rdi_14 + 0xc)
                                *(rdi_14 + 0xc) -= 1
                                
                                if (rax_85 == 1)
                                    (*(*rdi_14 + 8))(rdi_14, 1)
                        
                        int64_t rcx_68 = *arg3
                        *arg3 = rcx_57
                        int64_t* rdi_15 = arg3[1]
                        arg3[1] = rcx_58
                        arg3[2].d = rax_70
                        int64_t var_210_2 = rcx_68
                        int64_t* var_208_2 = rdi_15
                        
                        if (rdi_15 != 0)
                            rdi_15[1].d -= 1
                            
                            if (rdi_15[1].d == 1)
                                (**rdi_15)(rdi_15)
                                int32_t rax_93 = *(rdi_15 + 0xc)
                                *(rdi_15 + 0xc) -= 1
                                
                                if (rax_93 == 1)
                                    (*(*rdi_15 + 8))(rdi_15, 1)
                        
                        int64_t* var_100
                        
                        if (var_100 != 0)
                            var_100[1].d -= 1
                            
                            if (var_100[1].d == 1)
                                (**var_100)(var_100)
                                int32_t rbx_3 = *(var_100 + 0xc)
                                *(var_100 + 0xc) -= 1
                                
                                if (rbx_3 == 1)
                                    (*(*var_100 + 8))(var_100, zx.q(rbx_3))
                        
                        int64_t rcx_73 = var_258
                        
                        if (rcx_73 != 0)
                            sub_140a74f90(rcx_73)
                        
                        goto label_140bad8fa
                    
                    void var_138
                    int64_t* rax_46 = _vfprintf_p_l(&var_138, u"No valid roots exist!", u"Core")
                    int64_t rdx_13 = *arg3
                    *arg3 = *rax_46
                    *rax_46 = rdx_13
                    int64_t rdx_14 = arg3[1]
                    arg3[1] = rax_46[1]
                    rax_46[1] = rdx_14
                    arg3[2].d = rax_46[2].d
                    int64_t* var_130
                    
                    if (var_130 != 0)
                        var_130[1].d -= 1
                        
                        if (var_130[1].d == 1)
                            (**var_130)(var_130)
                            int32_t rbx_2 = *(var_130 + 0xc)
                            *(var_130 + 0xc) -= 1
                            
                            if (rbx_2 == 1)
                                (*(*var_130 + 8))(var_130, zx.q(rbx_2))
                
                int64_t* rcx_75 = var_268
                
                if (rcx_75 != 0)
                    sub_140a74f90(rcx_75)
                
                result = zx.q(r13.b)
            else
                result.b = 0
        else
            if (arg3 != 0)
                void var_150
                rax_41 = _vfprintf_p_l(&var_150, u"Path may not end with a '/'", u"Core")
                int64_t rdx_5 = *arg3
                *arg3 = *rax_41
                *rax_41 = rdx_5
                int64_t rdx_6 = arg3[1]
                arg3[1] = rax_41[1]
                rax_41[1] = rdx_6
                int64_t* var_148
                rdi_7 = var_148
                goto label_140bad38a
            
            result.b = 0
    else if (arg3 == 0)
        result.b = 0
    else
        void var_168
        rax_41 = _vfprintf_p_l(&var_168, u"Path should start with a '/'", u"Core")
        int64_t rdx_3 = *arg3
        *arg3 = *rax_41
        *rax_41 = rdx_3
        int64_t rdx_4 = arg3[1]
        arg3[1] = rax_41[1]
        rax_41[1] = rdx_4
        int64_t* var_160
        rdi_7 = var_160
    label_140bad38a:
        arg3[2].d = rax_41[2].d
    label_140bad38d:
        
        if (rdi_7 == 0)
            result.b = 0
        else
            rdi_7[1].d -= 1
            
            if (rdi_7[1].d != 1)
                result.b = 0
            else
                (**rdi_7)(rdi_7)
                int32_t rbx_1 = *(rdi_7 + 0xc)
                *(rdi_7 + 0xc) -= 1
                
                if (rbx_1 != 1)
                    result.b = 0
                else
                    (*(*rdi_7 + 8))(rdi_7, zx.q(rbx_1))
                    result.b = 0
else
    if (arg3 != 0)
        int128_t var_1b8 = zx.o(0)
        void var_d0
        int64_t* rax_2 = sub_140aa10e0(&var_d0, 4, nullptr, &var_1b8)
        void var_180
        char* var_f0
        char** rax_4 = sub_140a96390(&var_f0, 
            _vfprintf_p_l(&var_180, Path should be no less than {0} characters long.", Core"))
        int64_t rcx_4 = *rax_2
        int64_t* rcx_5 = rax_2[1]
        int32_t var_a0_1 = 4
        
        if (rcx_5 != 0)
            rcx_5[1].d += 1
        
        int32_t rcx_6 = rax_2[2].d
        char var_78_1 = 1
        int32_t* var_248 = nullptr
        int32_t var_240_1 = 1
        sub_1405a4b40(&var_248, 1, 0)
        int32_t* rcx_8 = var_248
        *rcx_8 = var_a0_1
        int64_t var_98
        *(rcx_8 + 8) = var_98
        *(rcx_8 + 8) = var_98
        rcx_8[2] = var_98.d
        *(rcx_8 + 8) = var_98
        rcx_8[0xa].b = 0
        
        if (var_78_1 != 0)
            *(rcx_8 + 0x10) = rcx_4
            *(rcx_8 + 0x18) = rcx_5
            
            if (rcx_5 != 0)
                rcx_5[1].d += 1
            
            rcx_8[8] = rcx_6
            rcx_8[0xa].b = 1
        
        char* var_1c8 = *rax_4
        void* rax_12 = rax_4[1]
        void* var_1c0_1 = rax_12
        
        if (rax_12 != 0)
            *(rax_12 + 8) += 1
        
        void var_198
        int64_t* rax_13 = sub_140aac870(&var_198, &var_1c8, &var_248)
        int64_t rcx_10 = *rax_13
        void* rcx_11 = rax_13[1]
        
        if (rcx_11 != 0)
            *(rcx_11 + 8) += 1
        
        int32_t rax_14 = rax_13[2].d
        int64_t* var_190
        
        if (var_190 != 0)
            var_190[1].d -= 1
            
            if (var_190[1].d == 1)
                (**var_190)(var_190)
                int32_t rax_17 = *(var_190 + 0xc)
                *(var_190 + 0xc) -= 1
                
                if (rax_17 == 1)
                    (*(*var_190 + 8))(var_190, 1)
        
        sub_140596f50(&var_248)
        
        if (var_78_1 != 0)
            char var_78_2 = 0
            
            if (rcx_5 != 0)
                rcx_5[1].d -= 1
                
                if (rcx_5[1].d == 1)
                    (**rcx_5)(rcx_5)
                    int32_t rax_21 = *(rcx_5 + 0xc)
                    *(rcx_5 + 0xc) -= 1
                    
                    if (rax_21 == 1)
                        (*(*rcx_5 + 8))(rcx_5, 1)
        
        int64_t* rdi_3 = rax_4[1]
        
        if (rdi_3 != 0)
            rdi_3[1].d -= 1
            
            if (rdi_3[1].d == 1)
                (**rdi_3)(rdi_3)
                int32_t rax_25 = *(rdi_3 + 0xc)
                *(rdi_3 + 0xc) -= 1
                
                if (rax_25 == 1)
                    (*(*rdi_3 + 8))(rdi_3, 1)
        
        int64_t* rdi_4 = rax_2[1]
        
        if (rdi_4 != 0)
            rdi_4[1].d -= 1
            
            if (rdi_4[1].d == 1)
                (**rdi_4)(rdi_4)
                int32_t rax_29 = *(rdi_4 + 0xc)
                *(rdi_4 + 0xc) -= 1
                
                if (rax_29 == 1)
                    (*(*rdi_4 + 8))(rdi_4, 1)
        
        int64_t rcx_21 = *arg3
        *arg3 = rcx_10
        int64_t* rdi_5 = arg3[1]
        arg3[1] = rcx_11
        arg3[2].d = rax_14
        int64_t var_228_2 = rcx_21
        int64_t* var_220_2 = rdi_5
        
        if (rdi_5 != 0)
            rdi_5[1].d -= 1
            
            if (rdi_5[1].d == 1)
                (**rdi_5)(rdi_5)
                int32_t rax_35 = *(rdi_5 + 0xc)
                *(rdi_5 + 0xc) -= 1
                
                if (rax_35 == 1)
                    (*(*rdi_5 + 8))(rdi_5, 1)
        
        int64_t* var_178
        
        if (var_178 != 0)
            var_178[1].d -= 1
            
            if (var_178[1].d == 1)
                (**var_178)(var_178)
                int32_t rax_39 = *(var_178 + 0xc)
                *(var_178 + 0xc) -= 1
                
                if (rax_39 == 1)
                    (*(*var_178 + 8))(var_178, 1)
        
        rdi_7 = var_1b8:8.q
        goto label_140bad38d
    
    result.b = 0
__security_check_cookie(rax_1 ^ &var_288)
return result
