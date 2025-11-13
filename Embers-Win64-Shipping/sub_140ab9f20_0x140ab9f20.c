// 函数: sub_140ab9f20
// 地址: 0x140ab9f20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_138
int64_t rax_1 = __security_cookie ^ &var_138
int32_t* r14 = arg5
int32_t var_b8 = 0
int32_t rax_3 = arg2[1].d
int32_t* var_e0 = r14
int32_t rcx = rax_3 - 1

if (rax_3 == 0)
    rcx = 0

wchar16* _String2

if (rax_3 == 0)
    _String2 = &data_142d40450
else
    _String2 = *arg2

int16_t* result

if (wcsncmp(arg1, _String2, sx.q(rcx)) != 0)
    result = nullptr
else
    int32_t rax_5 = arg2[1].d
    int32_t rcx_2 = rax_5 - 1
    
    if (rax_5 == 0)
        rcx_2 = 0
    
    void* _String1 = &arg1[sx.q(rcx_2)]
    int32_t rax_7 = wcsncmp(_String1, u"_LOCAL", 6)
    void* rbx_1
    int16_t* result_1
    
    if (rax_7 == 0)
        int64_t var_f0 = 0
        int64_t var_e8_1 = 0
        rbx_1 = _String1 + 0xc
        sub_1405947f0(&var_f0, rax_7 + 0xc)
        int32_t r14_1 = var_e8_1:4.d
        int32_t rsi_1 = var_e8_1.d + 0xc
        var_e8_1.d = rsi_1
        
        if (rsi_1 s> r14_1)
            sub_140594770(&var_f0)
            r14_1 = var_e8_1:4.d
            rsi_1 = var_e8_1.d
        
        int64_t rdi_1 = var_f0
        UnDecorator::getReferenceType(rdi_1, u"Etc/Unknown", 0x18)
        
        if (arg6 != &var_f0)
            int64_t rcx_7 = *arg6
            
            if (rcx_7 != 0)
                sub_140a74f90(rcx_7)
            
            *arg6 = rdi_1
            arg6[1].d = rsi_1
            *(arg6 + 0xc) = r14_1
        else if (rdi_1 != 0)
            sub_140a74f90(rdi_1)
        
        r14 = var_e0
        result_1 = nullptr
        goto label_140aba054
    
    if (wcsncmp(_String1, u"_UTC", 4) != 0)
        result = nullptr
    else
        result_1 = nullptr
        rbx_1 = _String1 + 8
        arg6[1].d = 0
        
        if (*(arg6 + 0xc) s<= 0xffffffff)
            sub_1405947f0(arg6, 0)
        
        int16_t* rax_16 = *arg6
        
        if (rax_16 != 0)
            *rax_16 = 0
        
    label_140aba054:
        int16_t i = *rbx_1
        
        if (i != 0)
            while (i == 9 || i == 0x20)
                i = *(rbx_1 + 2)
                rbx_1 += 2
                
                if (i == 0)
                    break
        
        void* rax_8 = nullptr
        
        if (*rbx_1 == 0x28)
            rax_8 = rbx_1
        
        void* rbx_2 = rax_8 + 2
        
        if (rax_8 == 0)
            rbx_2 = rax_8
        
        if (rbx_2 == 0)
            result = nullptr
        else
            int32_t var_88 = 4
            sub_1405d9400()
            int64_t var_78_1 = data_143cd6fd8
            int64_t* rcx_9 = data_143cd6fe0
            
            if (rcx_9 != 0)
                rcx_9[1].d += 1
            
            int32_t var_68_1 = data_143cd6fe8
            int16_t i_1 = *rbx_2
            char var_60_1 = 1
            
            if (i_1 != 0)
                while (i_1 == 9 || i_1 == 0x20)
                    i_1 = *(rbx_2 + 2)
                    rbx_2 += 2
                    
                    if (i_1 == 0)
                        break
            
            int16_t* rax_10 = sub_140abcf90(rbx_2, &var_88)
            int16_t* rbx_3 = rax_10
            
            if (rax_10 != 0)
                int32_t rax_11 = var_88
                double var_80
                int64_t* rax_14
                int64_t* rcx_18
                int64_t rdx_3
                
                if (rax_11 == 0)
                    void var_a0
                    rcx_18 = &var_a0
                label_140aba224:
                    rax_14 = sub_140b0a2c0(rcx_18, 0x7b2, 1, 1, 0, 0, 0, 0)
                    rdx_3 = var_80 i* 0x989680
                label_140aba234:
                    *arg3 = rdx_3 + *rax_14
                    void var_f8
                    
                    if (arg4 == 0)
                    label_140aba292:
                        
                        if (r14 == 0)
                        label_140aba2ea:
                            
                            if (arg6[1].d s> 1)
                            label_140aba347:
                                int16_t* rax_23 = sub_140ac5870(rbx_3, 0x2c)
                                int16_t* rcx_26 = rax_23
                                
                                if (rax_23 != 0)
                                    int64_t var_d8 = 0
                                    int32_t var_d0_1 = 0
                                    int16_t i_2 = *rax_23
                                    
                                    if (i_2 != 0)
                                        while (i_2 == 9 || i_2 == 0x20)
                                            i_2 = rcx_26[1]
                                            rcx_26 = &rcx_26[1]
                                            
                                            if (i_2 == 0)
                                                break
                                    
                                    void* rax_24 = sub_140abd7c0(rcx_26, &var_d8)
                                    
                                    if (rax_24 != 0)
                                        int128_t var_c8
                                        int128_t* rax_25
                                        int32_t rdi_2
                                        
                                        if (var_d0_1 s> 1)
                                            void var_98
                                            rax_25 =
                                                sub_140a783a0(sub_140a752e0(), &var_98, &var_d8)
                                            rdi_2 = 2
                                        else
                                            rax_25 = &var_c8
                                            var_c8 = zx.o(0)
                                            rdi_2 = 1
                                        
                                        if (arg7 != rax_25)
                                            *arg7 = *rax_25
                                            *rax_25 = 0
                                            sub_1405aeff0(&arg7[1], rax_25 + 8)
                                        
                                        if ((rdi_2.b & 2) != 0)
                                            rdi_2 &= 0xfffffffd
                                            int64_t* var_90
                                            
                                            if (var_90 != 0)
                                                var_90[1].d -= 1
                                                
                                                if (var_90[1].d == 1)
                                                    (**var_90)(var_90)
                                                    int32_t rax_29 = *(var_90 + 0xc)
                                                    *(var_90 + 0xc) -= 1
                                                    
                                                    if (rax_29 == 1)
                                                        (*(*var_90 + 8))(var_90, 1)
                                        
                                        if ((rdi_2.b & 1) != 0)
                                            void* rcx_32 = var_c8:8.q
                                            
                                            if (rcx_32 != 0)
                                                int32_t rax_31 = *(rcx_32 + 8)
                                                *(rcx_32 + 8) -= 1
                                                
                                                if (rax_31 == 1)
                                                    int64_t* rbx_5 = var_c8:8.q
                                                    (**rbx_5)(rbx_5)
                                                    int32_t rax_33 = *(rbx_5 + 0xc)
                                                    *(rbx_5 + 0xc) -= 1
                                                    
                                                    if (rax_33 == 1)
                                                        int64_t* rcx_34 = var_c8:8.q
                                                        (*(*rcx_34 + 8))(rcx_34, 1)
                                        
                                        result_1 = sub_140ac5870(rax_24, 0x29)
                                    
                                    int64_t rcx_36 = var_d8
                                    
                                    if (rcx_36 != 0)
                                        sub_140a74f90(rcx_36)
                            else
                                int16_t* rax_21 = sub_140ac5870(rbx_3, 0x2c)
                                int16_t* rcx_24 = rax_21
                                
                                if (rax_21 != 0)
                                    int16_t i_3 = *rax_21
                                    
                                    if (i_3 != 0)
                                        while (i_3 == 9 || i_3 == 0x20)
                                            i_3 = rcx_24[1]
                                            rcx_24 = &rcx_24[1]
                                            
                                            if (i_3 == 0)
                                                break
                                    
                                    void* rax_22 = sub_140abd7c0(rcx_24, arg6)
                                    rbx_3 = rax_22
                                    
                                    if (rax_22 != 0)
                                        goto label_140aba347
                        else
                            int16_t* rax_19 = sub_140ac5870(rbx_3, 0x2c)
                            int16_t* rdx_6 = rax_19
                            
                            if (rax_19 != 0)
                                int16_t i_4 = *rax_19
                                
                                if (i_4 != 0)
                                    while (i_4 == 9 || i_4 == 0x20)
                                        i_4 = rdx_6[1]
                                        rdx_6 = &rdx_6[1]
                                        
                                        if (i_4 == 0)
                                            break
                                
                                int16_t* rax_20 = sub_140a9cbc0(&var_f8, rdx_6, r14)
                                rbx_3 = rax_20
                                
                                if (rax_20 != 0)
                                    goto label_140aba2ea
                    else
                        int16_t* rax_17 = sub_140ac5870(rbx_3, 0x2c)
                        int16_t* rdx_5 = rax_17
                        
                        if (rax_17 != 0)
                            int16_t i_5 = *rax_17
                            
                            if (i_5 != 0)
                                while (i_5 == 9 || i_5 == 0x20)
                                    i_5 = rdx_5[1]
                                    rdx_5 = &rdx_5[1]
                                    
                                    if (i_5 == 0)
                                        break
                            
                            int16_t* rax_18 = sub_140a9cbc0(&var_f8, rdx_5, arg4)
                            rbx_3 = rax_18
                            
                            if (rax_18 != 0)
                                goto label_140aba292
                else
                    if (rax_11 == 1)
                        void var_a8
                        rcx_18 = &var_a8
                        goto label_140aba224
                    
                    if (rax_11 == 2)
                        rax_14 = sub_140b0a2c0(&var_b8, 0x7b2, 1, 1, 0, 0, 0, 0)
                        rdx_3 = int.q(fconvert.t(var_80.d)) * 0x989680
                        goto label_140aba234
                    
                    if (rax_11 == 3)
                        rax_14 = sub_140b0a2c0(&var_e0, 0x7b2, rax_11 - 2, rax_11 - 2, 0, 0, 0, 0)
                        rdx_3 = int.q(fconvert.t(var_80)) * 0x989680
                        goto label_140aba234
            
            if (var_60_1 != 0 && rcx_9 != 0)
                rcx_9[1].d -= 1
                
                if (rcx_9[1].d == 1)
                    (**rcx_9)(rcx_9)
                    int32_t rsi_2 = *(rcx_9 + 0xc)
                    *(rcx_9 + 0xc) -= 1
                    
                    if (rsi_2 == 1)
                        int64_t r8_7 = *rcx_9
                        (*(r8_7 + 8))(rcx_9, zx.q(rsi_2), r8_7)
            
            result = result_1

__security_check_cookie(rax_1 ^ &var_138)
return result
