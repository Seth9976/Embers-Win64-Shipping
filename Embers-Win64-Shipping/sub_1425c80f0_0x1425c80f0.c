// 函数: sub_1425c80f0
// 地址: 0x1425c80f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r15 = 0
void* result

while (true)
    if (*(arg1 + 0x40) s<= 1)
        int64_t* rcx = *(arg1 + 0x20)
        uint64_t rcx_5
        int32_t rbx_1
        
        if (rcx == 0)
            rbx_1 = (&rcx[1]).d
            uint64_t var_b8 = 0
            int32_t var_b0_1 = 0
            sub_1405947f0(&var_b8, (rcx + 0xc).d)
            int32_t rax = var_b0_1 + 0xc
            var_b0_1 = rax
            
            if (rax s> 0)
                sub_140594770(&var_b8)
            
            UnDecorator::getReferenceType(var_b8, u"Null Stream", 0x18)
            result, arg3 = sub_140e88b20(arg1, &var_b8)
            rcx_5 = var_b8
            goto label_1425c8602
        
        result = (*(*rcx + 0x30))(rcx)
        
        if (result.b == 0)
        label_1425c81ff:
            
            if (*(arg1 + 0x69) != 0)
                rbx_1 = 8
                uint64_t var_98 = 0
                int32_t var_90_1 = 0
                sub_1405947f0(&var_98, 0x23)
                int32_t rax_3 = var_90_1 + 0x23
                var_90_1 = rax_3
                
                if (rax_3 s> 0)
                    sub_140594770(&var_98)
                
                UnDecorator::getReferenceType(var_98, u"Unexpected additional input found.", 0x46)
                result, arg3 = sub_140e88b20(arg1, &var_98)
                rcx_5 = var_98
                goto label_1425c8602
            
            *(arg1 + 0x30) = 0
            
            if (*(arg1 + 0x34) != 0)
                arg3 = sub_1405947f0(arg1 + 0x28, 0)
            
            int64_t rcx_20
            
            do
                int32_t rcx_16 = 0
                
                if (*(arg1 + 0x10) s> 0)
                    rcx_16 = *(*(arg1 + 8) + (sx.q(*(arg1 + 0x10)) << 2) - 4)
                
                if (rcx_16 == 5)
                    int32_t rdi_2 = *(arg1 + 0x18)
                    *(arg1 + 0x18) = 0
                    char rax_14
                    rax_14, rcx_20, arg3 = sub_1425c6430(arg1, arg1 + 0x18, arg3)
                    
                    if (rax_14 == 0)
                        rcx_20.b = 0
                        break
                    
                    int32_t rax_15 = *(arg1 + 0x18)
                    
                    if (rax_15 != 5 && rdi_2 != 4)
                        if (rax_15 != 1)
                            int64_t var_48 = 0
                            int32_t var_40_1 = 0
                            sub_1405947f0(&var_48, 0x25)
                            int32_t rax_19 = var_40_1 + 0x25
                            var_40_1 = rax_19
                            
                            if (rax_19 s> 0)
                                sub_140594770(&var_48)
                            
                            UnDecorator::getReferenceType(var_48, 
                                Comma token expected, but not found.", 0x4a)
                            arg3 = sub_140e88b20(arg1, &var_48)
                            rcx_20 = var_48
                        label_1425c855c:
                            
                            if (rcx_20 == 0)
                                rcx_20.b = 0
                                break
                            
                            rcx_20, arg3 = sub_140a74f90(rcx_20)
                            rcx_20.b = 0
                            break
                        
                    label_1425c8437:
                        *(arg1 + 0x18) = 0
                        char rax_16
                        rax_16, rcx_20, arg3 = sub_1425c6430(arg1, arg1 + 0x18, arg3)
                        
                        if (rax_16 == 0)
                            rcx_20.b = 0
                            break
                else if (rcx_16 == 6)
                    int32_t rdi_1 = *(arg1 + 0x18)
                    *(arg1 + 0x18) = 0
                    char rax_9
                    rax_9, rcx_20, arg3 = sub_1425c6430(arg1, arg1 + 0x18, arg3)
                    
                    if (rax_9 == 0)
                        rcx_20.b = 0
                        break
                    
                    int32_t rax_10 = *(arg1 + 0x18)
                    
                    if (rax_10 != 3)
                        if (rdi_1 == 2)
                            goto label_1425c8372
                        
                        if (rax_10 != 1)
                            int64_t var_78 = 0
                            int32_t var_70_1 = 0
                            sub_1405947f0(&var_78, 0x25)
                            int32_t rax_17 = var_70_1 + 0x25
                            var_70_1 = rax_17
                            
                            if (rax_17 s> 0)
                                sub_140594770(&var_78)
                            
                            UnDecorator::getReferenceType(var_78, 
                                Comma token expected, but not found.", 0x4a)
                            arg3 = sub_140e88b20(arg1, &var_78)
                            rcx_20 = var_78
                            goto label_1425c855c
                        
                        *(arg1 + 0x18) = 0
                        char rax_11
                        rax_11, rcx_20, arg3 = sub_1425c6430(arg1, arg1 + 0x18, arg3)
                        
                        if (rax_11 == 0)
                            rcx_20.b = 0
                            break
                        
                        rax_10 = *(arg1 + 0x18)
                    label_1425c8372:
                        
                        if (rax_10 != 7)
                            int64_t var_58 = 0
                            int32_t var_50_1 = 0
                            sub_1405947f0(&var_58, 0x26)
                            int32_t rax_18 = var_50_1 + 0x26
                            var_50_1 = rax_18
                            
                            if (rax_18 s> 0)
                                sub_140594770(&var_58)
                            
                            UnDecorator::getReferenceType(var_58, 
                                String token expected, but not found.", 0x4c)
                            arg3 = sub_140e88b20(arg1, &var_58)
                            rcx_20 = var_58
                            goto label_1425c855c
                        
                        int64_t zmm0 = sub_140597df0(arg1 + 0x28, arg1 + 0x48)
                        *(arg1 + 0x18) = 0
                        char rax_12
                        rax_12, rcx_20, arg3 = sub_1425c6430(arg1, arg1 + 0x18, zmm0)
                        
                        if (rax_12 == 0)
                            rcx_20.b = 0
                            break
                        
                        if (*(arg1 + 0x18) == 6)
                            goto label_1425c8437
                        
                        int64_t var_68 = 0
                        int32_t var_60_1 = 0
                        sub_1405947f0(&var_68, 0x25)
                        int32_t rax_13 = var_60_1 + 0x25
                        var_60_1 = rax_13
                        int32_t var_5c
                        
                        if (rax_13 s> var_5c)
                            sub_140594770(&var_68)
                        
                        UnDecorator::getReferenceType(var_68, 
                            Colon token expected, but not found.", 0x4a)
                        arg3 = sub_140e88b20(arg1, &var_68)
                        rcx_20 = var_68
                        goto label_1425c855c
                else
                    sub_1425c7250(arg1)
                    *(arg1 + 0x18) = 0
                    char rax_5
                    rax_5, rcx_20, arg3 = sub_1425c6430(arg1, arg1 + 0x18, arg3)
                    
                    if (rax_5 == 0)
                        rcx_20.b = 0
                        break
                    
                    if (((*(arg1 + 0x18) - 2) & 0xfffffffd) != 0)
                        int64_t var_88 = 0
                        int32_t var_80_1 = 0
                        sub_1405947f0(&var_88, 0x3a)
                        int32_t rax_8 = var_80_1 + 0x3a
                        var_80_1 = rax_8
                        
                        if (rax_8 s> 0)
                            sub_140594770(&var_88)
                        
                        UnDecorator::getReferenceType(var_88, 
                            Open Curly or Square Brace token expected, but not found.", 0x74)
                        arg3 = sub_140e88b20(arg1, &var_88)
                        rcx_20 = var_88
                        goto label_1425c855c
                
                rcx_20.b = 1
            while (*(arg1 + 0x18) == 0)
            
            rbx_1 = *(&data_143b4c6e8 + (sx.q(*(arg1 + 0x18)) << 2))
            int32_t rdx_24 = *(arg1 + 0x10)
            result.b = rdx_24 == 0
            *(arg1 + 0x69) = result.b
            
            if (rcx_20.b != 0 && rbx_1 != 8)
                if (rdx_24 == 0)
                    int64_t* rcx_46 = *(arg1 + 0x20)
                    
                    if ((*(*rcx_46 + 0x30))(rcx_46).b == 0)
                        sub_1425c7250(arg1)
                
                goto label_1425c860c
            
            rbx_1 = 8
            
            if (*(arg1 + 0x40) s> 1)
                goto label_1425c860c
            
            uint64_t var_38 = 0
            int32_t var_30_1 = 0
            sub_1405947f0(&var_38, 0x17)
            int32_t rax_21 = var_30_1 + 0x17
            var_30_1 = rax_21
            
            if (rax_21 s> 0)
                sub_140594770(&var_38)
            
            UnDecorator::getReferenceType(var_38, u"Unknown Error Occurred", 0x2e)
            result, arg3 = sub_140e88b20(arg1, &var_38)
            rcx_5 = var_38
            goto label_1425c8602
        
        if (*(arg1 + 0x69) == 0)
            rbx_1 = 8
            uint64_t var_a8 = 0
            int32_t var_a0_1 = 0
            sub_1405947f0(&var_a8, 0x16)
            int32_t rax_2 = var_a0_1 + 0x16
            var_a0_1 = rax_2
            
            if (rax_2 s> 0)
                sub_140594770(&var_a8)
            
            UnDecorator::getReferenceType(var_a8, u"Improperly formatted.", 0x2c)
            result, arg3 = sub_140e88b20(arg1, &var_a8)
            rcx_5 = var_a8
        label_1425c8602:
            
            if (rcx_5 == 0)
                goto label_1425c860c
            
            result, arg3 = sub_140a74f90(rcx_5)
        label_1425c860c:
            
            if (r15 != 0 || rbx_1 != arg2)
                if (rbx_1 != 0)
                    if (rbx_1 == 1)
                        r15 -= 1
                        continue
                    else if (rbx_1 != 2)
                        if (rbx_1 == 3)
                            r15 -= 1
                            continue
                        
                        if (rbx_1 != 8)
                            continue
                        
                        result.b = 0
                        break
                
                r15 += 1
                continue
        else if (result.b == 0)
            goto label_1425c81ff
    
    result.b = 1
    break

return result
