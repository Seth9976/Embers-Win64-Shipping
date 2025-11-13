// 函数: sub_142af6af0
// 地址: 0x142af6af0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* r12 = arg5
int16_t r14 = arg4
int64_t rdi = sx.q(arg3)
int16_t* rbx = arg2

if (r12 == 0 || *r12 s> 0)
    return 0

if (arg1 != 0)
    int64_t r15_1 = arg1[1]
    
    if (r15_1 != 0)
        int32_t rdx = *(arg1 + 0x14)
        
        if (rdx s>= 0 && arg3 s>= 0)
            if (arg3 s<= 0)
                if (rbx == 0)
                label_142af6b87:
                    
                    if (rdx == 0)
                        return sub_142a8c440(rbx, rdi.d, 0, r12)
                    
                    int64_t i_3 = sx.q(sub_142a83510(arg1, r12))
                    
                    if (*r12 s> 0)
                        return 0
                    
                    char rax_4 = (arg1[0x11].d).b
                    int16_t* var_38_1 = rbx
                    int32_t var_60_1 = rdi.d
                    
                    if ((rax_4 & 1) != 0)
                        r14 = (r14 & 0xfff7) | 4
                    
                    if ((rax_4 & 2) != 0)
                        r14 = (r14 & 0xfffb) | 8
                    
                    if (*(arg1 + 0x84) - 3 u> 3)
                        r14 &= 0xfffb
                    
                    int32_t var_68
                    
                    if ((r14.b & 0x10) == 0)
                        int32_t i_1 = 0
                        
                        if ((r14.b & 4) != 0)
                            int64_t rax_12 = arg1[0xe]
                            int32_t rax_13 = 0
                            int32_t var_64_1 = 0
                            int64_t i_2 = i_3
                            
                            if (i_3.d s> 0)
                                int64_t rsi_1 = 0
                                int64_t var_48_1 = 0
                                int64_t i
                                
                                do
                                    int32_t rax_14 = sub_142a83e00(arg1, rax_13, &var_68, &arg5)
                                    int64_t r8_3 = sx.q(var_68)
                                    int16_t* r10_1 = r15_1 + (r8_3 << 1)
                                    int32_t rsi_2 = *(rsi_1 + arg1[0x26] + 8)
                                    
                                    if (rsi_2 s< 0)
                                        rsi_2 = 0
                                    
                                    if (rax_14 != 0)
                                        int32_t rdx_9 = arg5.d
                                        
                                        if (arg1[0x10].b != 0 && (
                                                1 << *(sx.q(rdx_9 - 1 + r8_3.d) + rax_12) & 0x2002) == 0)
                                            rsi_2 |= 4
                                        
                                        int16_t rax_25
                                        
                                        if ((rsi_2.b & 1) != 0)
                                            rax_25 = 0x200e
                                        label_142af6e0f:
                                            
                                            if (rdi.d s> 0)
                                                *rbx = rax_25
                                                rbx = &rbx[1]
                                                rdx_9 = arg5.d
                                            
                                            rdi = zx.q(rdi.d - 1)
                                        else if ((rsi_2.b & 4) != 0)
                                            rax_25 = 0x200f
                                            goto label_142af6e0f
                                        int32_t rax_26 =
                                            sub_142af6740(r10_1, rdx_9, rbx, rdi.d, r14, r12)
                                        arg5.d = rax_26
                                        
                                        if (rbx != 0)
                                            rbx = &rbx[sx.q(rax_26)]
                                        
                                        rdi = zx.q(rdi.d - rax_26)
                                        
                                        if (arg1[0x10].b != 0
                                                && (1 << *(sx.q(var_68) + rax_12) & 0x2002) == 0)
                                            rsi_2 |= 8
                                    else
                                        if (arg1[0x10].b != 0 && *(r8_3 + rax_12) != 0)
                                            rsi_2 |= 1
                                        
                                        int16_t rax_16
                                        
                                        if ((rsi_2.b & 1) != 0)
                                            rax_16 = 0x200e
                                        label_142af6d57:
                                            
                                            if (rdi.d s> 0)
                                                *rbx = rax_16
                                                rbx = &rbx[1]
                                            
                                            rdi = zx.q(rdi.d - 1)
                                        else if ((rsi_2.b & 4) != 0)
                                            rax_16 = 0x200f
                                            goto label_142af6d57
                                        int32_t rax_18 = sub_142af6420(r10_1, arg5.d, rbx, rdi.d, 
                                            r14 & 0xfffd, r12)
                                        arg5.d = rax_18
                                        
                                        if (rbx != 0)
                                            rbx = &rbx[sx.q(rax_18)]
                                        
                                        rdi = zx.q(rdi.d - rax_18)
                                        
                                        if (arg1[0x10].b != 0
                                                && *(sx.q(rax_18 + var_68 - 1) + rax_12) != 0)
                                            rsi_2 |= 2
                                    
                                    int16_t rax_29
                                    
                                    if ((rsi_2.b & 2) != 0)
                                        rax_29 = 0x200e
                                    label_142af6e87:
                                        
                                        if (rdi.d s> 0)
                                            *rbx = rax_29
                                            rbx = &rbx[1]
                                        
                                        rdi = zx.q(rdi.d - 1)
                                    else if ((rsi_2.b & 8) != 0)
                                        rax_29 = 0x200f
                                        goto label_142af6e87
                                    rax_13 = var_64_1 + 1
                                    rsi_1 = var_48_1 + 0xc
                                    var_64_1 = rax_13
                                    i = i_2
                                    i_2 -= 1
                                    var_48_1 = rsi_1
                                while (i != 1)
                        else if (i_3.d s> 0)
                            do
                                int32_t r9_2 = rdi.d
                                int32_t rax_9
                                
                                if (sub_142a83e00(arg1, i_1, &var_68, &arg5) != 0)
                                    rax_9 = sub_142af6740(r15_1 + (sx.q(var_68) << 1), arg5.d, rbx, 
                                        r9_2, r14, r12)
                                else
                                    rax_9 = sub_142af6420(r15_1 + (sx.q(var_68) << 1), arg5.d, rbx, 
                                        r9_2, r14 & 0xfffd, r12)
                                
                                arg5.d = rax_9
                                
                                if (rbx != 0)
                                    rbx = &rbx[sx.q(rax_9)]
                                
                                rdi = zx.q(rdi.d - rax_9)
                                i_1 += 1
                            while (i_1 s< i_3.d)
                    else if ((r14.b & 4) != 0)
                        int32_t rsi_5 = i_3.d - 1
                        int64_t r15_2 = arg1[0xe]
                        
                        if (i_3.d - 1 s>= 0)
                            int32_t temp3_1
                            
                            do
                                int32_t rax_36 = sub_142a83e00(arg1, rsi_5, &var_68, &arg5)
                                int64_t rcx_28 = sx.q(var_68)
                                int16_t* r10_2 = r15_1 + (rcx_28 << 1)
                                int16_t rax_42
                                
                                if (rax_36 != 0)
                                    if ((1 << *(rcx_28 + r15_2) & 0x2002) == 0)
                                        if (rdi.d s> 0)
                                            *rbx = 0x200f
                                            rbx = &rbx[1]
                                        
                                        rdi = zx.q(rdi.d - 1)
                                    
                                    int32_t rax_44 =
                                        sub_142af6420(r10_2, arg5.d, rbx, rdi.d, r14, r12)
                                    arg5.d = rax_44
                                    
                                    if (rbx != 0)
                                        rbx = &rbx[sx.q(rax_44)]
                                    
                                    rdi = zx.q(rdi.d - rax_44)
                                    
                                    if ((1 << *(sx.q(rax_44 + var_68 - 1) + r15_2) & 0x2002) == 0)
                                        if (rdi.d s<= 0)
                                            rdi = zx.q(rdi.d - 1)
                                        else
                                            rax_42 = 0x200f
                                        label_142af7067:
                                            *rbx = rax_42
                                            rbx = &rbx[1]
                                            rdi = zx.q(rdi.d - 1)
                                else
                                    int32_t rdx_15 = arg5.d
                                    
                                    if (*(sx.q((rcx_28 - 1).d + rdx_15) + r15_2) != 0)
                                        if (rdi.d s> 0)
                                            *rbx = 0x200e
                                            rbx = &rbx[1]
                                            rdx_15 = arg5.d
                                        
                                        rdi = zx.q(rdi.d - 1)
                                    
                                    int32_t rax_40 =
                                        sub_142af6740(r10_2, rdx_15, rbx, rdi.d, r14 & 0xfffd, r12)
                                    arg5.d = rax_40
                                    
                                    if (rbx != 0)
                                        rbx = &rbx[sx.q(rax_40)]
                                    
                                    rdi = zx.q(rdi.d - rax_40)
                                    
                                    if (*(sx.q(var_68) + r15_2) != 0)
                                        if (rdi.d s> 0)
                                            rax_42 = 0x200e
                                            goto label_142af7067
                                        
                                        rdi = zx.q(rdi.d - 1)
                                temp3_1 = rsi_5
                                rsi_5 -= 1
                            while (temp3_1 - 1 s>= 0)
                    else
                        int32_t rsi_4 = i_3.d - 1
                        
                        if (i_3.d - 1 s>= 0)
                            int32_t temp4_1
                            
                            do
                                int32_t* var_70_4 = r12
                                int32_t r9_7 = rdi.d
                                int32_t rax_33
                                
                                if (sub_142a83e00(arg1, rsi_4, &var_68, &arg5) != 0)
                                    rax_33 = sub_142af6420(r15_1 + (sx.q(var_68) << 1), arg5.d, 
                                        rbx, r9_7, r14, var_70_4)
                                else
                                    rax_33 = sub_142af6740(r15_1 + (sx.q(var_68) << 1), arg5.d, 
                                        rbx, r9_7, r14 & 0xfffd, var_70_4)
                                
                                arg5.d = rax_33
                                
                                if (rbx != 0)
                                    rbx = &rbx[sx.q(rax_33)]
                                
                                rdi = zx.q(rdi.d - rax_33)
                                temp4_1 = rsi_4
                                rsi_4 -= 1
                            while (temp4_1 - 1 s>= 0)
                    return sub_142a8c440(var_38_1, var_60_1, var_60_1 - rdi.d, r12)
                
            label_142af6b67:
                
                if (rbx u> r15_1)
                    if (rbx u>= r15_1 + (sx.q(arg1[2].d) << 1))
                        goto label_142af6b87
                else if (r15_1 u>= &rbx[rdi]
                        && (rbx u< r15_1 || rbx u>= r15_1 + (sx.q(arg1[2].d) << 1)))
                    goto label_142af6b87
            else if (rbx != 0)
                goto label_142af6b67

*r12 = 1
return 0
