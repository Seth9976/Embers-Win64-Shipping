// 函数: sub_142835e18
// 地址: 0x142835e18
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18 = arg3
int32_t arg_8 = arg1
int64_t* r15 = *(arg2 + 0x30)
int64_t rbx = arg4
int64_t* var_50 = r15
int64_t r9 = arg3
char const* const rdx_8

if (r15 != 0)
    while (true)
        int32_t r14_1 = 0
        int32_t var_74_1 = 0
        int32_t var_64_1 = 0
        void** rsi_1 = *(*r15 + 0x18)
        void** var_58 = rsi_1
        
        if (rsi_1 != 0)
            int32_t r12_2
            
            while (true)
                void* r13_1 = *rsi_1
                int32_t r12_1 = 0
                int16_t** i = *(r13_1 + 8)
                
                if (i == 0)
                label_14283602f:
                    
                    if (r14_1 != 0)
                        sub_142833a04(2, "Instrument "%s": Discarding invalid global zone", *r15)
                        arg3 = sub_142837df8(arg2, &var_58, *rsi_1)
                        rsi_1 = var_58
                    else
                        var_64_1 = 1
                else
                    while (true)
                        int32_t r13_2 = 0
                        arg_8 = arg1 - 4
                        
                        if (arg1 - 4 s< 0)
                            goto label_1428361ac
                        
                        int64_t r15_1 = arg_18
                        int16_t var_70
                        
                        if ((*(rbx + 0x18))(&var_70, 2, r15_1) == 0xffffffff)
                            return 0
                        
                        uint32_t r14_2 = zx.d(var_70)
                        int16_t var_78
                        uint64_t rdx
                        
                        if (r14_2 == 0x2b)
                            if (r12_1 != 0)
                                goto label_142835fae
                            
                            r12_1 = 1
                            
                            if ((*(rbx + 0x18))(&var_78, 1, r15_1) == 0xffffffff)
                                return 0
                            
                            rdx = 1
                            goto label_142835eec
                        
                        if (r14_2 == 0x2c)
                            if (r12_1 s> 1)
                                goto label_142835fae
                            
                            r12_1 = r14_2 - 0x2a
                            
                            if ((*(rbx + 0x18))(&var_78, zx.q(r14_2 - 0x2b), r15_1) == 0xffffffff)
                                return 0
                            
                            rdx = zx.q(r14_2 - 0x2b)
                        label_142835eec:
                            
                            if ((*(rbx + 0x18))(&var_78:1, rdx, r15_1) == 0xffffffff)
                                return 0
                            
                            goto label_142835f83
                        
                        if (r14_2 == 0x35)
                            int16_t var_68
                            
                            if ((*(rbx + 0x18))(&var_68, 2, r15_1) == 0xffffffff)
                                return 0
                            
                            uint64_t rax_14 = zx.q(var_68)
                            var_78 = rax_14.w
                            **rsi_1 = rax_14 + 1
                        else
                            r12_1 = 2
                            
                            if (sub_142835898(r14_2) == 0)
                                r15_1 = arg_18
                            label_142835fae:
                                var_74_1 = 1
                                r13_2 = 1
                                int32_t rax_11
                                rax_11, arg3 = (*(rbx + 0x20))(r15_1, 2, 1)
                                
                                if (rax_11 == 0xffffffff)
                                    return 0
                                
                                goto label_142835fcb
                            
                            int16_t var_6c
                            int32_t rax_7
                            rax_7, arg3 = (*(rbx + 0x18))(&var_6c, 2, arg_18)
                            
                            if (rax_7 == 0xffffffff)
                                return 0
                            
                            int16_t rbx_1 = var_6c
                            var_78 = rbx_1
                            int16_t** rax_9 = sub_142835878(r14_2, *(r13_1 + 8))
                            int16_t* rax_10
                            
                            if (rax_9 != 0)
                                rax_10 = *rax_9
                                r13_2 = 1
                            else
                            label_142835f83:
                                rax_10, arg3 = malloc(4)
                                *i = rax_10
                                *rax_10 = r14_2.w
                                rbx_1 = var_78
                            
                            rax_10[1] = rbx_1
                        label_142835fcb:
                            int32_t r14_3 = var_74_1
                            
                            if (r13_2 != 0)
                                int16_t** i_1 = i
                                
                                if (i != 0)
                                    i = i[1]
                                
                                *(r13_1 + 8) = sub_14283414c(*(r13_1 + 8), i_1)
                                arg3 = sub_142834028(i_1)
                            else if (i != 0)
                                i = i[1]
                            
                            rbx = arg4
                            arg1 = arg_8
                            
                            if (i != 0)
                                continue
                            else
                                var_74_1 = r14_3
                                
                                if (r12_1 != 3)
                                    r15 = var_50
                                    var_74_1 = r14_3
                                    r14_1 = var_64_1
                                    goto label_14283602f
                        
                        int16_t** i_2 = i
                        
                        if (i != 0)
                            i = i[1]
                        
                        *(r13_1 + 8) = sub_14283414c(*(r13_1 + 8), i_2)
                        arg3 = sub_142834028(i_2)
                        r15 = var_50
                        break
                
                if (i == 0)
                    r12_2 = var_74_1
                else
                    r12_2 = 1
                    int32_t r13_3 = arg_8
                    var_74_1 = 1
                    
                    do
                        int32_t temp1_1 = r13_3
                        r13_3 -= 4
                        arg_8 = r13_3
                        
                        if (temp1_1 - 4 s< 0)
                            rdx_8 = "Instrument generator chunk size mismatch"
                            goto label_1428361b8
                        
                        if ((*(arg4 + 0x20))(arg_18, 4, 1) == 0xffffffff)
                            return 0
                        
                        int16_t** i_3 = i
                        
                        if (i != 0)
                            i = i[1]
                        
                        *(r13_1 + 8) = sub_14283414c(*(r13_1 + 8), i_3)
                        arg3 = sub_142834028(i_3)
                    while (i != 0)
                
                if (rsi_1 != 0)
                    rsi_1 = rsi_1[1]
                
                rbx = arg4
                arg1 = arg_8
                r14_1 = var_64_1
                var_58 = rsi_1
                
                if (rsi_1 == 0)
                    break
            
            if (r12_2 != 0)
                arg3 = sub_142833a04(2, "Instrument "%s": Some invalid generators were discarded", 
                    *r15)
            
            arg1 = arg_8
            rbx = arg4
        
        r15 = r15[1]
        var_50 = r15
        
        if (r15 == 0)
            break
    
    r9 = arg_18

if (arg1 == 0)
    return 1

if (arg1 != 4)
label_1428361ac:
    rdx_8 = "IGEN chunk size mismatch"
label_1428361b8:
    return sub_142835944(3, rdx_8, arg3)

if ((*(rbx + 0x20))(r9, zx.q(arg1), zx.q(arg1 - 3)) != 0xffffffff)
    return 1

return 0
