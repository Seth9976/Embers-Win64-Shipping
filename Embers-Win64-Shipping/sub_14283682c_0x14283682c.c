// 函数: sub_14283682c
// 地址: 0x14283682c
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18 = arg3
int32_t arg_8 = arg1
int64_t* i = *(arg2 + 0x28)
int64_t rbx = arg4
int64_t* i_1 = i
int64_t r9 = arg3

if (i != 0)
    do
        int32_t r14_1 = 0
        int32_t var_74_1 = 0
        int32_t var_64_1 = 0
        void** j = *(*i + 0x28)
        void** j_1 = j
        
        if (j != 0)
            int32_t r12_2
            
            do
                void* r13_1 = *j
                int32_t r12_1 = 0
                int16_t** k = *(r13_1 + 8)
                
                if (k == 0)
                label_142836a43:
                    
                    if (r14_1 != 0)
                        sub_142833a04(2, "Preset "%s": Discarding invalid global zone", *i)
                        arg3 = sub_142837df8(arg2, &j_1, *j)
                        j = j_1
                    else
                        var_64_1 = 1
                else
                    while (true)
                        int32_t r13_2 = 0
                        arg_8 = arg1 - 4
                        
                        if (arg1 - 4 s< 0)
                            return sub_142835944(3, "Preset generator chunk size mismatch", arg3)
                        
                        int64_t r15 = arg_18
                        int16_t var_70
                        
                        if ((*(rbx + 0x18))(&var_70, 2, r15) == 0xffffffff)
                            return 0
                        
                        uint32_t r14_2 = zx.d(var_70)
                        int16_t var_78
                        uint64_t rdx
                        
                        if (r14_2 == 0x2b)
                            if (r12_1 != 0)
                                goto label_1428369c2
                            
                            r12_1 = 1
                            
                            if ((*(rbx + 0x18))(&var_78, 1, r15) == 0xffffffff)
                                return 0
                            
                            rdx = 1
                            goto label_142836900
                        
                        if (r14_2 == 0x2c)
                            if (r12_1 s> 1)
                                goto label_1428369c2
                            
                            r12_1 = r14_2 - 0x2a
                            
                            if ((*(rbx + 0x18))(&var_78, zx.q(r14_2 - 0x2b), r15) == 0xffffffff)
                                return 0
                            
                            rdx = zx.q(r14_2 - 0x2b)
                        label_142836900:
                            
                            if ((*(rbx + 0x18))(&var_78:1, rdx, r15) == 0xffffffff)
                                return 0
                            
                            goto label_142836997
                        
                        if (r14_2 == 0x29)
                            int16_t var_68
                            
                            if ((*(rbx + 0x18))(&var_68, 2, r15) == 0xffffffff)
                                goto label_142836bbc
                            
                            uint64_t rax_14 = zx.q(var_68)
                            var_78 = rax_14.w
                            **j = rax_14 + 1
                            goto label_142836a7e
                        
                        r12_1 = 2
                        
                        if (sub_1428358e0(r14_2) == 0)
                            r15 = arg_18
                        label_1428369c2:
                            var_74_1 = 1
                            r13_2 = 1
                            int32_t rax_11
                            rax_11, arg3 = (*(rbx + 0x20))(r15, 2, 1)
                            
                            if (rax_11 == 0xffffffff)
                                return 0
                        else
                            int16_t var_6c
                            int32_t rax_7
                            rax_7, arg3 = (*(rbx + 0x18))(&var_6c, 2, arg_18)
                            
                            if (rax_7 == 0xffffffff)
                                return 0
                            
                            int16_t rbx_1 = var_6c
                            var_78 = rbx_1
                            int16_t** rax_9 = sub_142835878(r14_2, *(r13_1 + 8))
                            
                            if (rax_9 != 0)
                                r13_2 = 1
                                (*rax_9)[1] = rbx_1
                            else
                            label_142836997:
                                int16_t* rax_10
                                rax_10, arg3 = malloc(4)
                                *k = rax_10
                                *rax_10 = r14_2.w
                                rax_10[1] = var_78
                        
                        int32_t r14_3 = var_74_1
                        
                        if (r13_2 != 0)
                            int16_t** k_1 = k
                            
                            if (k != 0)
                                k = k[1]
                            
                            *(r13_1 + 8) = sub_14283414c(*(r13_1 + 8), k_1)
                            arg3 = sub_142834028(k_1)
                        else if (k != 0)
                            k = k[1]
                        
                        rbx = arg4
                        arg1 = arg_8
                        
                        if (k == 0)
                            var_74_1 = r14_3
                            
                            if (r12_1 != 3)
                                i = i_1
                                var_74_1 = r14_3
                                r14_1 = var_64_1
                                goto label_142836a43
                            
                        label_142836a7e:
                            int16_t** k_2 = k
                            
                            if (k != 0)
                                k = k[1]
                            
                            *(r13_1 + 8) = sub_14283414c(*(r13_1 + 8), k_2)
                            arg3 = sub_142834028(k_2)
                            i = i_1
                            break
                
                if (k == 0)
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
                            return sub_142835944(3, "Preset generator chunk size mismatch", arg3)
                        
                        if ((*(arg4 + 0x20))(arg_18, 4, 1) == 0xffffffff)
                            return 0
                        
                        int16_t** k_3 = k
                        
                        if (k != 0)
                            k = k[1]
                        
                        *(r13_1 + 8) = sub_14283414c(*(r13_1 + 8), k_3)
                        arg3 = sub_142834028(k_3)
                    while (k != 0)
                
                if (j != 0)
                    j = j[1]
                
                rbx = arg4
                arg1 = arg_8
                r14_1 = var_64_1
                j_1 = j
            while (j != 0)
            
            if (r12_2 != 0)
                arg3 = sub_142833a04(2, "Preset "%s": Some invalid generators were discarded", *i)
            
            arg1 = arg_8
            rbx = arg4
        
        i = i[1]
        i_1 = i
    while (i != 0)
    
    r9 = arg_18

if (arg1 != 0)
    if (arg1 != 4)
        return sub_142835944(3, "Preset generator chunk size mismatch", arg3)
    
    if ((*(rbx + 0x20))(r9, zx.q(arg1), zx.q(arg1 - 3)) == 0xffffffff)
    label_142836bbc:
        return 0

return 1
