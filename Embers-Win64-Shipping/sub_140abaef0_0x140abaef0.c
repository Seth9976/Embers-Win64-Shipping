// 函数: sub_140abaef0
// 地址: 0x140abaef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rsi = nullptr
int32_t var_a8 = 0

if (wcsncmp(arg2, u"NSLOCTEXT", 9) != 0)
    if (wcsncmp(arg2, u"LOCTEXT", 7) == 0)
        int16_t i = arg2[7]
        wchar16* rcx_23 = &arg2[7]
        
        if (i != 0)
            while (i == 9 || i == 0x20)
                i = rcx_23[1]
                rcx_23 = &rcx_23[1]
                
                if (i == 0)
                    break
        
        wchar16* rax_25 = nullptr
        
        if (*rcx_23 == 0x28)
            rax_25 = rcx_23
        
        wchar16* rcx_24 = &rax_25[1]
        
        if (rax_25 == 0)
            rcx_24 = rax_25
        
        if (rcx_24 != 0)
            wchar16 i_1 = *rcx_24
            int64_t var_138 = 0
            int32_t var_130_1 = 0
            
            if (i_1 != 0)
                while (i_1 == 9 || i_1 == 0x20)
                    i_1 = rcx_24[1]
                    rcx_24 = &rcx_24[1]
                    
                    if (i_1 == 0)
                        break
            
            int16_t* rax_26 = sub_140abd7c0(rcx_24, &var_138)
            int16_t* r15_1
            
            if (rax_26 == 0)
                r15_1 = nullptr
            else
                wchar16* rax_27 = sub_140ac5870(rax_26, 0x2c)
                wchar16* rcx_26 = rax_27
                
                if (rax_27 == 0)
                    r15_1 = nullptr
                else
                    wchar16 i_2 = *rax_27
                    
                    if (i_2 != 0)
                        while (i_2 == 9 || i_2 == 0x20)
                            i_2 = rcx_26[1]
                            rcx_26 = &rcx_26[1]
                            
                            if (i_2 == 0)
                                break
                    
                    void* rax_28 = sub_140abd7c0(rcx_26, arg1 + 0x10)
                    
                    if (rax_28 == 0)
                        r15_1 = nullptr
                    else
                        int16_t* rax_29 = sub_140ac5870(rax_28, 0x29)
                        r15_1 = rax_29
                        
                        if (rax_29 == 0)
                            r15_1 = nullptr
                        else
                            if (var_130_1 s<= 1)
                                int64_t var_90
                                void var_40
                                sub_140b291e0(sub_140b214c0(&var_40), &var_90, 0)
                                int64_t rcx_30 = var_138
                                
                                if (rcx_30 != 0)
                                    sub_140a74f90(rcx_30)
                                
                                var_138 = var_90
                                int32_t var_88
                                var_130_1 = var_88
                                int32_t var_84
                                var_130_1 = var_84
                            
                            int16_t* var_148
                            int16_t* var_80
                            int16_t** rcx_35
                            int32_t rbx_5
                            
                            if (arg3 == 0)
                                int64_t var_78_1 = 0
                                rcx_35 = &var_80
                                rbx_5 = 2
                            else
                                int32_t rdx_14 = 0
                                var_148 = nullptr
                                int32_t rcx_31 = 0
                                int64_t var_140_1 = 0
                                
                                if (*arg3 != 0)
                                    int64_t rbx_3 = -1
                                    
                                    do
                                        rbx_3 += 1
                                    while (arg3[rbx_3] != 0)
                                    
                                    if (rbx_3.d + 1 s> 0)
                                        sub_1405947f0(&var_148, rbx_3.d + 1)
                                        rcx_31 = var_140_1:4.d
                                        rdx_14 = var_140_1.d
                                        rsi = var_148
                                    
                                    int32_t rax_34 = rdx_14 + rbx_3.d + 1
                                    var_140_1.d = rax_34
                                    
                                    if (rax_34 s> rcx_31)
                                        sub_140594770(&var_148)
                                        rsi = var_148
                                    
                                    UnDecorator::getReferenceType(rsi, arg3, (rbx_3.d + 1) * 2)
                                
                                rcx_35 = &var_148
                                rbx_5 = 1
                            
                            int16_t* var_f8 = rsi
                            *rcx_35 = nullptr
                            int32_t rax_35 = rcx_35[1].d
                            int32_t var_ec_1 = *(rcx_35 + 0xc)
                            rcx_35[1] = 0
                            
                            if ((rbx_5.b & 2) != 0)
                                int16_t* rcx_36 = var_80
                                rbx_5 &= 0xfffffffd
                                
                                if (rcx_36 != 0)
                                    sub_140a74f90(rcx_36)
                            
                            if ((rbx_5.b & 1) != 0)
                                int16_t* rcx_37 = var_148
                                
                                if (rcx_37 != 0)
                                    sub_140a74f90(rcx_37)
                            
                            sub_140ac5b60(&var_f8)
                            int16_t* const var_c8
                            int32_t var_c0
                            
                            if (var_130_1 s> 1)
                                sub_140aab440(sub_140ab2000(), &var_138, &var_c8, &var_c0)
                            else
                                var_c8 = &data_142d40450
                                var_c0 = 0
                            int16_t* var_b8
                            int32_t var_b0
                            
                            if (rax_35 s> 1)
                                sub_140aab440(sub_140ab2000(), &var_f8, &var_b8, &var_b0)
                            else
                                var_b8 = &data_142d40450
                                var_b0 = 0
                            void var_60
                            int64_t* rax_40 = sub_140aaef90(sub_140aae970(), &var_60, &var_b8, 
                                &var_c8, arg1 + 0x10)
                            int64_t* rcx_42 = rax_40[1]
                            int64_t rdx_20 = *rax_40
                            int64_t var_118 = rdx_20
                            int64_t* var_110 = rcx_42
                            
                            if (rcx_42 != 0)
                                rcx_42[1].d += 1
                                rcx_42 = var_110
                            
                            if (arg4 != &var_118)
                                *arg4 = rdx_20
                                var_118 = 0
                                sub_1405aeff0(&arg4[1], &var_110)
                                rcx_42 = var_110
                            
                            if (rcx_42 != 0)
                                rcx_42[1].d -= 1
                                
                                if (rcx_42[1].d == 1)
                                    int64_t* rbx_6 = var_110
                                    (**rbx_6)(rbx_6)
                                    int32_t rax_44 = *(rbx_6 + 0xc)
                                    *(rbx_6 + 0xc) -= 1
                                    
                                    if (rax_44 == 1)
                                        int64_t* rcx_45 = var_110
                                        (*(*rcx_45 + 8))(rcx_45, 1)
                            
                            int64_t* var_58
                            
                            if (var_58 != 0)
                                var_58[1].d -= 1
                                
                                if (var_58[1].d == 1)
                                    (**var_58)(var_58)
                                    int32_t rdi_3 = *(var_58 + 0xc)
                                    *(var_58 + 0xc) -= 1
                                    
                                    if (rdi_3 == 1)
                                        (*(*var_58 + 8))(var_58, zx.q(rdi_3))
                            
                            int16_t* rcx_48 = var_f8
                            *(arg1 + 8) = 0
                            
                            if (rcx_48 != 0)
                                sub_140a74f90(rcx_48)
            
            int64_t rcx_49 = var_138
            
            if (rcx_49 != 0)
                sub_140a74f90(rcx_49)
            
            return r15_1
else
    int16_t i_3 = arg2[9]
    void* rdx = &arg2[9]
    
    if (i_3 != 0)
        while (i_3 == 9 || i_3 == 0x20)
            i_3 = *(rdx + 2)
            rdx += 2
            
            if (i_3 == 0)
                break
    
    void* rax_1 = nullptr
    
    if (*rdx == 0x28)
        rax_1 = rdx
    
    void* rcx_1 = rax_1 + 2
    
    if (rax_1 == 0)
        rcx_1 = rax_1
    
    if (rcx_1 != 0)
        int16_t i_4 = *rcx_1
        int64_t var_108 = 0
        int32_t var_100_1 = 0
        
        if (i_4 != 0)
            while (i_4 == 9 || i_4 == 0x20)
                i_4 = *(rcx_1 + 2)
                rcx_1 += 2
                
                if (i_4 == 0)
                    break
        
        void* rax_2 = sub_140abd7c0(rcx_1, &var_108)
        
        if (rax_2 != 0)
            int16_t* rax_3 = sub_140ac5870(rax_2, 0x2c)
            int16_t* rcx_3 = rax_3
            
            if (rax_3 != 0)
                int64_t var_158 = 0
                int32_t var_150_1 = 0
                int16_t i_5 = *rax_3
                
                if (i_5 != 0)
                    while (i_5 == 9 || i_5 == 0x20)
                        i_5 = rcx_3[1]
                        rcx_3 = &rcx_3[1]
                        
                        if (i_5 == 0)
                            break
                
                void* rax_4 = sub_140abd7c0(rcx_3, &var_158)
                
                if (rax_4 != 0)
                    int16_t* rax_5 = sub_140ac5870(rax_4, 0x2c)
                    int16_t* rcx_5 = rax_5
                    
                    if (rax_5 != 0)
                        int16_t i_6 = *rax_5
                        
                        if (i_6 != 0)
                            while (i_6 == 9 || i_6 == 0x20)
                                i_6 = rcx_5[1]
                                rcx_5 = &rcx_5[1]
                                
                                if (i_6 == 0)
                                    break
                        
                        void* rax_6 = sub_140abd7c0(rcx_5, arg1 + 0x10)
                        
                        if (rax_6 != 0)
                            int16_t* rax_7 = sub_140ac5870(rax_6, 0x29)
                            rsi = rax_7
                            
                            if (rax_7 == 0)
                                rsi = nullptr
                            else
                                if (var_150_1 s<= 1)
                                    int64_t var_a0
                                    void var_50
                                    sub_140b291e0(sub_140b214c0(&var_50), &var_a0, 0)
                                    int64_t rcx_9 = var_158
                                    
                                    if (rcx_9 != 0)
                                        sub_140a74f90(rcx_9)
                                    
                                    var_158 = var_a0
                                    int32_t var_98
                                    var_150_1 = var_98
                                    int32_t var_94
                                    var_150_1 = var_94
                                
                                sub_140ac5b60(&var_108)
                                int16_t* const var_e8
                                int32_t var_e0
                                
                                if (var_150_1 s> 1)
                                    sub_140aab440(sub_140ab2000(), &var_158, &var_e8, &var_e0)
                                else
                                    var_e8 = &data_142d40450
                                    var_e0 = 0
                                int16_t* const var_d8
                                int32_t var_d0
                                
                                if (var_100_1 s> 1)
                                    sub_140aab440(sub_140ab2000(), &var_108, &var_d8, &var_d0)
                                else
                                    var_d8 = &data_142d40450
                                    var_d0 = 0
                                void var_70
                                int64_t* rax_15 = sub_140aaef90(sub_140aae970(), &var_70, &var_d8, 
                                    &var_e8, arg1 + 0x10)
                                int64_t* rcx_14 = rax_15[1]
                                int64_t rdx_8 = *rax_15
                                int64_t var_128 = rdx_8
                                int64_t* var_120 = rcx_14
                                
                                if (rcx_14 != 0)
                                    rcx_14[1].d += 1
                                    rcx_14 = var_120
                                
                                if (arg4 != &var_128)
                                    *arg4 = rdx_8
                                    var_128 = 0
                                    sub_1405aeff0(&arg4[1], &var_120)
                                    rcx_14 = var_120
                                
                                if (rcx_14 != 0)
                                    rcx_14[1].d -= 1
                                    
                                    if (rcx_14[1].d == 1)
                                        int64_t* rbx_1 = var_120
                                        (**rbx_1)(rbx_1)
                                        int32_t rax_19 = *(rbx_1 + 0xc)
                                        *(rbx_1 + 0xc) -= 1
                                        
                                        if (rax_19 == 1)
                                            int64_t* rcx_17 = var_120
                                            (*(*rcx_17 + 8))(rcx_17, 1)
                                
                                int64_t* var_68
                                
                                if (var_68 != 0)
                                    var_68[1].d -= 1
                                    
                                    if (var_68[1].d == 1)
                                        (**var_68)(var_68)
                                        int32_t rdi_2 = *(var_68 + 0xc)
                                        *(var_68 + 0xc) -= 1
                                        
                                        if (rdi_2 == 1)
                                            (*(*var_68 + 8))(var_68, zx.q(rdi_2))
                                
                                *(arg1 + 8) = 0
                
                int64_t rcx_20 = var_158
                
                if (rcx_20 != 0)
                    sub_140a74f90(rcx_20)
        
        int64_t rcx_21 = var_108
        
        if (rcx_21 != 0)
            sub_140a74f90(rcx_21)
        
        return rsi

return nullptr
