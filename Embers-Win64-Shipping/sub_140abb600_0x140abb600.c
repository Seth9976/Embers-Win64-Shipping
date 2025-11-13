// 函数: sub_140abb600
// 地址: 0x140abb600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (wcsncmp(arg2, u"LOCGEN_FORMAT_NAMED", 0x13) == 0)
    int16_t i = arg2[0x13]
    void* rdx = &arg2[0x13]
    
    if (i != 0)
        while (i == 9 || i == 0x20)
            i = *(rdx + 2)
            rdx += 2
            
            if (i == 0)
                break
    
    if (*rdx == 0x28)
        void* rbx_1 = rdx + 2
        
        if (rbx_1 != 0)
            sub_1405d9400()
            int64_t var_38 = data_143cd6fd8
            int64_t* rcx_2 = data_143cd6fe0
            
            if (rcx_2 != 0)
                rcx_2[1].d += 1
            
            int16_t i_1 = *rbx_1
            int32_t var_28 = 0
            
            if (i_1 != 0)
                while (i_1 == 9 || i_1 == 0x20)
                    i_1 = *(rbx_1 + 2)
                    rbx_1 += 2
                    
                    if (i_1 == 0)
                        break
            
            char var_88 = 1
            wchar16* rax_1 = sub_140abc1e0(rbx_1, &var_38, 0, 0, 1)
            wchar16* rbx_2 = rax_1
            void* result
            
            if (rax_1 == 0)
            label_140abb8e0:
                result = nullptr
            else
                char* var_48
                char** rax_2 = sub_140a96390(&var_48, &var_38)
                char* rdx_3 = *(arg1 + 0x10)
                *(arg1 + 0x10) = *rax_2
                *rax_2 = rdx_3
                int64_t rdx_4 = *(arg1 + 0x18)
                *(arg1 + 0x18) = rax_2[1]
                rax_2[1] = rdx_4
                int64_t* var_40
                
                if (var_40 != 0)
                    var_40[1].d -= 1
                    
                    if (var_40[1].d == 1)
                        (**var_40)(var_40)
                        int32_t rax_6 = *(var_40 + 0xc)
                        *(var_40 + 0xc) -= 1
                        
                        if (rax_6 == 1)
                            (*(*var_40 + 8))(var_40, 1)
                
                sub_140ac0940(arg1 + 0x20)
                wchar16 i_5
                
                while (true)
                    wchar16 i_2 = *rbx_2
                    
                    if (i_2 != 0)
                        while (i_2 == 9 || i_2 == 0x20)
                            i_2 = rbx_2[1]
                            rbx_2 = &rbx_2[1]
                            
                            if (i_2 == 0)
                                break
                    
                    i_5 = *rbx_2
                    
                    if (i_5 != 0x2c)
                        break
                    
                    void* rcx_10 = &rbx_2[1]
                    int64_t var_68 = 0
                    int64_t var_60_1 = 0
                    int16_t i_3 = *rcx_10
                    
                    if (i_3 != 0)
                        while (i_3 == 9 || i_3 == 0x20)
                            i_3 = *(rcx_10 + 2)
                            rcx_10 += 2
                            
                            if (i_3 == 0)
                                break
                    
                    void* rax_9 = sub_140abd7c0(rcx_10, &var_68)
                    
                    if (rax_9 != 0)
                        int16_t* rax_10 = sub_140ac5870(rax_9, 0x2c)
                        int16_t* rbx_3 = rax_10
                        
                        if (rax_10 != 0)
                            int64_t* var_70 = &var_68
                            int32_t var_58
                            sub_140749df0(arg1 + 0x20, &var_58)
                            int64_t* var_50
                            sub_140a8fa60(&var_70, var_50)
                            var_50[8].d = 0xffffffff
                            int16_t* rcx_14
                            
                            if (var_50[1].d == 0)
                                rcx_14 = &data_142d40450
                            else
                                rcx_14 = *var_50
                            
                            int32_t rax_11 = sub_140a5ff80(rcx_14, 0)
                            var_88.d = var_58
                            int32_t var_78
                            sub_140aa7840(arg1 + 0x20, &var_78, rax_11, var_50, var_88, nullptr)
                            int16_t i_4 = *rbx_3
                            
                            if (i_4 != 0)
                                while (i_4 == 9 || i_4 == 0x20)
                                    i_4 = rbx_3[1]
                                    rbx_3 = &rbx_3[1]
                                    
                                    if (i_4 == 0)
                                        break
                            
                            int16_t* rax_14 =
                                sub_140aadf50(*(arg1 + 0x20) + ((sx.q(var_78) * 9 + 2) << 3), rbx_3)
                            rbx_2 = rax_14
                            
                            if (rax_14 != 0)
                                int64_t rcx_20 = var_68
                                
                                if (rcx_20 == 0)
                                    continue
                                else
                                    sub_140a74f90(rcx_20)
                                    continue
                    
                    int64_t rcx_21 = var_68
                    
                    if (rcx_21 != 0)
                        sub_140a74f90(rcx_21)
                    
                    goto label_140abb8e0_2
                
                if (i_5 != 0)
                    while (i_5 == 9 || i_5 == 0x20)
                        i_5 = rbx_2[1]
                        rbx_2 = &rbx_2[1]
                        
                        if (i_5 == 0)
                            break
                
                if (*rbx_2 != 0x29)
                label_140abb8e0_1:
                    result = nullptr
                else
                    result = &rbx_2[1]
                    
                    if (result == 0)
                    label_140abb8e0_2:
                        result = nullptr
                    else
                        sub_140ab73d0(arg1, arg3)
            
            if (rcx_2 != 0)
                rcx_2[1].d -= 1
                
                if (rcx_2[1].d == 1)
                    (**rcx_2)(rcx_2)
                    int32_t rsi_1 = *(rcx_2 + 0xc)
                    *(rcx_2 + 0xc) -= 1
                    
                    if (rsi_1 == 1)
                        int64_t r8_3 = *rcx_2
                        (*(r8_3 + 8))(rcx_2, zx.q(rsi_1), r8_3)
            
            return result

return 0
