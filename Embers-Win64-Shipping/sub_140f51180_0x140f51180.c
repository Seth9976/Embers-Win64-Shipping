// 函数: sub_140f51180
// 地址: 0x140f51180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rbp = 0

if (arg1[0x72].b != 0)
    sub_140dc0fb0(arg1, arg2, arg3, arg4)
else
    bool rax_2
    
    if (arg1[0x77].b != 0)
        rax_2 = sub_140d6df00(sub_140f46790(&arg1[0x73]))
    
    int64_t* rbx_1
    int64_t r15
    
    if (arg1[0x77].b == 0 || rax_2 == 0 || *(arg1 + 0x429) == 0)
        rbx_1 = 0.q
        r15.b = 0
    else
        rbx_1 = *(arg4 + 0x28)
        
        if (rbx_1 != 0)
            rbx_1[1].d += 1
        
        rbp = 1
        
        if (*(arg4 + 0x18) != data_143e1ecc8)
            r15.b = 0
        else
            r15 = 1
    
    if ((rbp & 1) != 0 && rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp1_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)
    
    if (r15.b == 0)
        int64_t* rcx_8 = arg1[0x8c]
        
        if (rcx_8 == 0)
            sub_140dc0fb0(arg1, arg2, arg3, arg4)
        else
            (*(*rcx_8 + 0x40))(rcx_8, arg2, arg3, arg4)
    else
        int64_t* rbx_2 = data_143e202c8
        int64_t rcx_4 = data_143e202c0
        
        if (rbx_2 != 0)
            rbx_2[1].d += 1
        
        int64_t var_68 = data_143e202b8
        int64_t var_60_1 = rcx_4
        int64_t* var_58_1 = rbx_2
        
        if (rbx_2 != 0)
            rbx_2[1].d += 1
        
        int32_t var_50
        int32_t var_50_1 = var_50 & 0xfffffff0
        char var_48_1 = 1
        int64_t var_40_1 = 0
        int32_t var_38_1 = 0
        sub_140f60ba0(arg1, &var_68)
        
        if (rbx_2 != 0)
            rbx_2[1].d -= 1
            
            if (rbx_2[1].d == 1)
                (**rbx_2)(rbx_2)
                int32_t temp3_1 = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*rbx_2 + 8))(rbx_2, 1)
        
        *arg2 = 1
        *(arg2 + 8) = 0
        *(arg2 + 0x10) = 0
        arg2[0x20] = 0
        __builtin_memset(&arg2[0x28], 0, 0x88)
        *(arg2 + 0xb4) &= 0xffffff00
        *(arg2 + 0xb0) = 0x20702

return arg2
