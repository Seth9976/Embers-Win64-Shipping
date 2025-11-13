// 函数: sub_141bbf450
// 地址: 0x141bbf450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r12 = 0
int32_t arg_8 = 0
int64_t* r15 = arg1[0xdc]

if (r15[1].d s<= 0 || (*(arg4 + 8) & 0x30) != 0)
    sub_140f7f130(arg1, arg2, arg3, arg4)
else
    int64_t* rbx_1 = *(arg4 + 0x28)
    int64_t r13
    r13.b = 0
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    uint64_t rdi
    rdi.b = *(arg4 + 0x18) == data_143e1e170
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp3_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)
    
    int64_t rcx_2
    
    if (rdi.b == 0)
        int64_t* rbx_2 = *(arg4 + 0x28)
        
        if (rbx_2 != 0)
            rbx_2[1].d += 1
        
        rdi.b = *(arg4 + 0x18) == data_143e1e158
        
        if (rbx_2 != 0)
            rbx_2[1].d -= 1
            
            if (rbx_2[1].d == 1)
                (**rbx_2)(rbx_2)
                int32_t temp5_1 = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (temp5_1 == 1)
                    (*(*rbx_2 + 8))(rbx_2, 1)
        
        if (rdi.b != 0)
            rcx_2 = *(*r15 + (sx.q(r15[1].d) << 3) - 8)
            goto label_141bbf6d9
        
        int64_t* rbx_3 = *(arg4 + 0x28)
        
        if (rbx_3 != 0)
            rbx_3[1].d += 1
        
        rdi.b = *(arg4 + 0x18) == data_143e1e128
        
        if (rbx_3 != 0)
            rbx_3[1].d -= 1
            
            if (rbx_3[1].d == 1)
                (**rbx_3)(rbx_3)
                int32_t temp7_1 = *(rbx_3 + 0xc)
                *(rbx_3 + 0xc) -= 1
                
                if (temp7_1 == 1)
                    (*(*rbx_3 + 8))(rbx_3, 1)
        
        if (rdi.b != 0)
            int64_t i = arg1[0xd0]
            int32_t rbx_4 = 0
            
            if (i != 0)
                int64_t* r8 = *r15
                int64_t* rbx_5 = r8
                void* rdx = &r8[sx.q(r15[1].d)]
                
                if (r8 == rdx)
                label_141bbf5be:
                    rbx_4 = -1
                else
                    while (*rbx_5 != i)
                        rbx_5 = &rbx_5[1]
                        
                        if (rbx_5 == rdx)
                            goto label_141bbf5be
                    
                    rbx_4 = ((rbx_5 - r8) s>> 3).d
            
            (*(*arg1 + 0x260))(arg1)
            int32_t rdi_1 = int.d(arg5)
            int32_t rax_15 = (*(*arg1 + 0x268))(arg1)
            int64_t* rcx_11 = *r15
            rdi = zx.q(rdi_1 - mods.dp.d(sx.q(rdi_1), rax_15))
            
            if (rbx_4 s>= rdi.d)
                rcx_11 = &rcx_11[sx.q(rbx_4 - rdi.d)]
            
            rcx_2 = *rcx_11
            goto label_141bbf6d9
        
        int64_t* rbx_8 = *(arg4 + 0x28)
        
        if (rbx_8 != 0)
            rbx_8[1].d += 1
        
        rdi.b = *(arg4 + 0x18) == data_143e1e140
        
        if (rbx_8 != 0)
            rbx_8[1].d -= 1
            
            if (rbx_8[1].d == 1)
                (**rbx_8)(rbx_8)
                int32_t temp17_1 = *(rbx_8 + 0xc)
                *(rbx_8 + 0xc) -= 1
                
                if (temp17_1 == 1)
                    (*(*rbx_8 + 8))(rbx_8, 1)
        
        if (rdi.b == 0)
            goto label_141bbf706
        
        int64_t i_1 = arg1[0xd0]
        int32_t rbx_9 = 0
        
        if (i_1 != 0)
            int64_t* r8_1 = *r15
            int64_t* rbx_10 = r8_1
            void* rdx_3 = &r8_1[sx.q(r15[1].d)]
            
            if (r8_1 == rdx_3)
            label_141bbf683:
                rbx_9 = -1
            else
                while (*rbx_10 != i_1)
                    rbx_10 = &rbx_10[1]
                    
                    if (rbx_10 == rdx_3)
                        goto label_141bbf683
                
                rbx_9 = ((rbx_10 - r8_1) s>> 3).d
        
        (*(*arg1 + 0x260))(arg1)
        int32_t rdi_2 = int.d(arg5)
        int32_t temp1_2 = mods.dp.d(sx.q(rdi_2), (*(*arg1 + 0x268))(arg1))
        int64_t rcx_17 = sx.q(r15[1].d)
        rdi = zx.q(rdi_2 - temp1_2)
        int64_t rdx_6 = *r15
        
        if (rbx_9 s>= rcx_17.d - rdi.d)
            rcx_2 = *(rdx_6 + (rcx_17 << 3) - 8)
        else
            rcx_2 = *(rdx_6 + (sx.q(rdi.d + rbx_9) << 3))
        
        goto label_141bbf6d9
    
    rcx_2 = **r15
label_141bbf6d9:
    r13.b = 1
    
    if (rcx_2 == 0)
    label_141bbf706:
        int64_t* rbx_12
        
        if (arg1[0xd0] == 0)
            rbx_12 = arg_8.q
            rdi.b = 0
        else
            rbx_12 = *(arg4 + 0x28)
            
            if (rbx_12 != 0)
                rbx_12[1].d += 1
            
            r12 = 1
            
            if (*(arg4 + 0x18) != data_143e1e110)
                rdi.b = 0
            else
                rdi = 1
        
        if ((r12.b & 1) != 0)
            r12 &= 0xfffffffe
            
            if (rbx_12 != 0)
                rbx_12[1].d -= 1
                
                if (rbx_12[1].d == 1)
                    (**rbx_12)(rbx_12)
                    int32_t temp16_1 = *(rbx_12 + 0xc)
                    *(rbx_12 + 0xc) -= 1
                    
                    if (temp16_1 == 1)
                        (*(*rbx_12 + 8))(rbx_12, 1)
        
        if (rdi.b == 0)
            char rax_48 = (*(arg4 + 8)).b
            int64_t* rbx_16
            
            if ((rax_48 & 3) != 0 || (rax_48 & 0x30) != 0 || (rax_48 & 0xc) == 0)
                rbx_16 = arg_8.q
                rdi.b = 0
            else
                rbx_16 = *(arg4 + 0x28)
                r12 |= 2
                
                if (rbx_16 != 0)
                    rbx_16[1].d += 1
                
                if (*(arg4 + 0x18) != data_143e1e308)
                    rdi.b = 0
                else if (*sub_140ebd5a0(&arg1[0x90]) != 3)
                    rdi.b = 0
                else
                    rdi.b = 1
            
            if ((r12.b & 2) != 0 && rbx_16 != 0)
                rbx_16[1].d -= 1
                
                if (rbx_16[1].d == 1)
                    (**rbx_16)(rbx_16)
                    int32_t temp26_1 = *(rbx_16 + 0xc)
                    *(rbx_16 + 0xc) -= 1
                    
                    if (temp26_1 == 1)
                        (*(*rbx_16 + 8))(rbx_16, 1)
            
            if (rdi.b != 0)
                (*(arg1[0x9f] + 0x30))(&arg1[0x9f])
                int32_t i_2 = 0
                
                if (r15[1].d s> 0)
                    int64_t* rbx_17 = nullptr
                    
                    do
                        int64_t r8_5
                        r8_5.b = 1
                        (*(arg1[0x9f] + 0x28))(&arg1[0x9f], *(rbx_17 + *r15), r8_5, 0)
                        i_2 += 1
                        rbx_17 = &rbx_17[1]
                    while (i_2 s< r15[1].d)
                
                (*(arg1[0x9f] + 0x40))(&arg1[0x9f], 0)
                goto label_141bbf892
        else
            arg_8.q = arg1[0xd0]
            int32_t* rax_38
            
            if ((*(arg4 + 8) & 0xc) == 0)
                rax_38 = sub_140ebd5a0(&arg1[0x90])
            
            if ((*(arg4 + 8) & 0xc) != 0 || *rax_38 == 2)
                int64_t rbx_14 = arg1[0x9f]
                char rax_43
                int64_t r8_3
                int64_t r9_1
                rax_43, r8_3, r9_1 = (*(rbx_14 + 0x10))(&arg1[0x9f], &arg_8)
                r9_1.b = 1
                r8_3.b = rax_43 == 0
                (*(rbx_14 + 0x28))(&arg1[0x9f], arg_8.q, r8_3, r9_1)
                (*(arg1[0x9f] + 0x40))(&arg1[0x9f], 0)
                r13.b = 1
            else
                char rax_40
                int64_t r9
                rax_40, r9 = (*(arg1[0x9f] + 0x10))(&arg1[0x9f], &arg_8)
                
                if (rax_40 == 0)
                    r9.b = 1
                    (*(arg1[0x9f] + 0x28))(&arg1[0x9f], arg_8.q, 1, r9)
                    (*(arg1[0x9f] + 0x40))(&arg1[0x9f], 0)
                    r13.b = 1
                else
                    r13.b = 0
            
            arg1[0xd1] = arg1[0xd0]
            int64_t var_48
            sub_141bb2520(&arg1[0xa0], &var_48, &arg_8)
            
            if (var_48 == 0)
                arg1[0xde].d = *(arg4 + 0xc)
                arg1[0xdd] = arg_8.q
                sub_140f89930(arg1)
            
            int64_t* var_40
            
            if (var_40 != 0)
                var_40[1].d -= 1
                
                if (var_40[1].d == 1)
                    (**var_40)(var_40)
                    int32_t temp27_1 = *(var_40 + 0xc)
                    *(var_40 + 0xc) -= 1
                    
                    if (temp27_1 == 1)
                        (*(*var_40 + 8))(var_40, 1)
        
        if (r13.b != 0)
            goto label_141bbf892
        
        sub_140f7f130(arg1, arg2, arg3, arg4)
    else
        arg_8.q = rcx_2
        (*(*arg1 + 0x2b0))(arg1, &arg_8, arg4)
    label_141bbf892:
        *arg2 = 1
        *(arg2 + 8) = 0
        *(arg2 + 0x10) = 0
        arg2[0x20] = 0
        __builtin_memset(&arg2[0x28], 0, 0x88)
        *(arg2 + 0xb4) &= 0xffffff00
        *(arg2 + 0xb0) = 0x20702

return arg2
