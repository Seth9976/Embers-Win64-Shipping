// 函数: sub_1422cd720
// 地址: 0x1422cd720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = arg2[3].d
uint64_t result

if (rbx s>= *(arg2 + 0x1c))
label_1422cda4b:
    result.b = 1
else
    while (true)
        int64_t* r15_3 = (sx.q(rbx) << 5) + **(arg1 + 0x30)
        *(arg2 + 0x24) += 1
        
        if (*(arg2 + 0x24) == *(arg1 + 0x48))
            if (*(r15_3 + 0x1c) != 0)
                result, arg3 = sub_1422cda70(*(arg1 + 0x10), arg2[2], arg2[4].d, arg2[1], arg3, 
                    *arg2, *(arg1 + 8), *(arg1 + 0x28), *(arg1 + 0x30), rbx, *arg1, *(arg1 + 0x20), 
                    arg1[1])
                
                if (result.b != 0)
                    **(arg1 + 0x18) = 1
                
                goto label_1422cd9cb
            
            int64_t rcx = *arg2
            int64_t rdx = arg2[1]
            int64_t* rdi_2 = sx.q(*(r15_3 + 0xc)) + rcx
            int64_t* r9_1 = *(arg1 + 0x10)
            int64_t* r14_2 = sx.q(r15_3[2].d) + rdx
            int32_t var_50_1 = rbx + 1
            int128_t var_68
            __builtin_memset(&var_68, 0, 0x18)
            int32_t var_48_1 = 0
            int32_t var_4c_1 = zx.d(r15_3[1].w) - 1
            int16_t var_44_1 = 0
            int16_t arg_10 = 0
            int64_t var_78 = rcx
            int64_t* rcx_1 = r9_1[1]
            int64_t var_70 = rdx
            int16_t* rdx_1 = *rcx_1
            
            if (&rdx_1[1] u> rcx_1[1])
                int16_t* rdx_2 = &arg_10
                
                if ((*(r9_1 + 0x29) & 0x20) != 0)
                    sub_140b54000(r9_1, rdx_2, arg3)
                else
                    (*(*r9_1 + 0x150))(r9_1, rdx_2, 2)
            else
                arg_10 = *rdx_1
                int64_t* rax_6 = r9_1[1]
                *rax_6 += 2
            
            char var_90
            var_90.q = &var_78
            int32_t var_98
            var_98.q = &var_70
            int64_t* var_a0
            var_a0.d = rbx
            int64_t var_b8
            var_b8.d = arg2[4].d + *(r15_3 + 0xc)
            int64_t rax_11
            rax_11, arg3 = sub_1422cc290(zx.d(arg_10), r14_2, rdi_2, arg2[2], var_b8.d, 
                zx.q(*(r15_3 + 0x16)) * 0x30 + **(arg1 + 0x28), r15_3, var_a0.d, var_98, var_90, 
                *(arg1 + 8))
            int64_t* rcx_4 = *(arg1 + 0x10)
            int64_t var_58_1 = rax_11
            int32_t result_1 = 0
            (*(*rcx_4 + 0x168))(rcx_4, &result_1)
            int32_t arg_18
            
            if (*arg1 != 0)
                int64_t* rcx_5 = *(arg1 + 0x10)
                arg_18 = 0xabadf00d
                int64_t* rdx_5 = rcx_5[1]
                int32_t* r8_4 = *rdx_5
                
                if (&r8_4[1] u> rdx_5[1])
                    int32_t* rdx_6 = &arg_18
                    
                    if ((*(rcx_5 + 0x29) & 0x20) != 0)
                        sub_140b54070(rcx_5, rdx_6, arg3)
                    else
                        (*(*rcx_5 + 0x150))(rcx_5, rdx_6, 4)
                else
                    arg_18 = *r8_4
                    *rdx_5 += 4
            
            result = zx.q(result_1)
            *(arg1 + 0x48) = result.w
            
            if (0 != result.w)
                int32_t r12_1 = rdi_2[1].d
                int32_t r14_3 = 0
                
                if (r12_1 s> 0)
                    int64_t rdi_3 = var_78
                    int64_t rbx_2 = var_70
                    
                    do
                        int32_t rcx_7 = zx.d(*(r15_3 + 0xa)) * r14_3
                        int64_t rdx_7 = sx.q(rcx_7)
                        var_68.q = rdx_7 + rdi_3
                        int64_t rax_17
                        
                        if (rbx_2 == 0)
                            rax_17 = 0
                        else
                            rax_17 = rdx_7 + rbx_2
                        
                        int32_t var_48_2 = rcx_7
                        var_68:8.q = rax_17
                        
                        if (sub_1422cd720(arg1, &var_68).b == 0)
                            goto label_1422cda68
                        
                        r14_3 += 1
                    while (r14_3 s< r12_1)
                
                if (0 != *(arg1 + 0x48))
                    goto label_1422cda68
                
                goto label_1422cd967
            
        label_1422cd967:
            rbx = zx.d(r15_3[1].w) - 1
        label_1422cd9cb:
            int64_t* rcx_10 = *(arg1 + 0x10)
            
            if ((*(rcx_10 + 0x29) & 1) != 0)
            label_1422cda68:
                result.b = 0
                break
            
            result_1 = 0
            (*(*rcx_10 + 0x168))(rcx_10, &result_1)
            
            if (*arg1 != 0)
                int64_t* rcx_11 = *(arg1 + 0x10)
                arg_18 = 0xabadf00d
                int64_t* rdx_11 = rcx_11[1]
                int32_t* r8_6 = *rdx_11
                
                if (&r8_6[1] u> rdx_11[1])
                    int32_t* rdx_12 = &arg_18
                    
                    if ((*(rcx_11 + 0x29) & 0x20) != 0)
                        sub_140b54070(rcx_11, rdx_12, arg3)
                    else
                        (*(*rcx_11 + 0x150))(rcx_11, rdx_12, 4)
                else
                    arg_18 = *r8_6
                    *rdx_11 += 4
            
            *(arg1 + 0x48) = result_1.w
        else if (*(r15_3 + 0x1c) == 0)
            rbx = zx.d(r15_3[1].w) - 1
        
        rbx += 1
        
        if (rbx s>= *(arg2 + 0x1c))
            goto label_1422cda4b

return result
