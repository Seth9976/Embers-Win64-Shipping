// 函数: sub_140e64e10
// 地址: 0x140e64e10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = 0
int64_t rcx = 0
int64_t* rbx = *(arg1 + 0x10)

if (rbx != 0)
    int32_t rax_1 = rbx[1].d
    
    if (rax_1 != 0)
        rbx[1].d = rax_1 + 1
        rax_1.b = 1
    
    if (rax_1.b == 0)
        rbx = nullptr
    
    if (rbx != 0)
        rcx = *(arg1 + 8)

int64_t var_48 = rcx
int64_t* var_40 = rbx
int32_t arg_8

if (*sub_140e10ae0(arg5, &arg_8, &var_48) != 0xffffffff)
    if (rbx != 0)
        rbx[1].d -= 1
        
        if (rbx[1].d == 1)
            (**rbx)(rbx)
            int32_t temp3_1 = *(rbx + 0xc)
            *(rbx + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rbx + 8))(rbx, 1)
    
    return 0

sub_140e47250(arg5, &arg_8, &var_48, nullptr)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp2_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rbx + 8))(rbx, 1)

int64_t result = 0
int64_t r9

if (*(arg1 + 0xe0) == 0)
label_140e64f4b:
    int64_t* rbx_1 = arg2[1]
    var_48 = *arg2
    int64_t* var_40_1 = rbx_1
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    int64_t r8_3
    r8_3, r9 = sub_140e109c0(arg1 + 0x68, &arg_8, &var_48)
    int64_t rax_13 = sx.q(arg_8)
    int64_t rax_16
    
    if (rax_13.d == 0xffffffff)
        rax_16 = 0
    else
        rax_16 = rax_13 * 0x60 + *(arg1 + 0x68)
    
    result = rax_16 + 0x10
    
    if (rax_16 == 0)
        result = 0
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            r8_3, r9 = (**rbx_1)(rbx_1)
            int32_t temp5_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp5_1 == 1)
                r8_3, r9 = (*(*rbx_1 + 8))(rbx_1, 1)
    
    if (result == 0)
        if (arg3 == 0)
            goto label_140e650a2
        
        for (int32_t i = 0; i s>= 0; i += 1)
            if (i s>= *(arg1 + 0xd0))
                break
            
            int64_t* rax_21 = (sx.q(i) << 4) + *(arg1 + 0xc8)
            int64_t* rbx_2 = rax_21[1]
            int64_t rcx_12 = *rax_21
            
            if (rbx_2 != 0)
                *(rbx_2 + 0xc) += 1
            
            if (rcx_12 == 0)
            label_140e65065:
                
                if (rbx_2 != 0)
                    int32_t temp8_1 = *(rbx_2 + 0xc)
                    *(rbx_2 + 0xc) -= 1
                    
                    if (temp8_1 == 1)
                        r8_3, r9 = (*(*rbx_2 + 8))(rbx_2, 1)
            else if (rbx_2 != 0)
                int32_t rax_22 = rbx_2[1].d
                
                if (rax_22 s> 0)
                    rbx_2[1].d = rax_22 + 1
                    r8_3.b = 1
                    int64_t result_1
                    result_1, r8_3, r9 = sub_140e64e10(rcx_12, arg2, r8_3, 0, arg5)
                    rbx_2[1].d -= 1
                    result = result_1
                    
                    if (rbx_2[1].d == 1)
                        int64_t rdx_5 = *rbx_2
                        r8_3, r9 = (*rdx_5)(rbx_2, rdx_5)
                        int32_t temp12_1 = *(rbx_2 + 0xc)
                        *(rbx_2 + 0xc) -= 1
                        
                        if (temp12_1 == 1)
                            int64_t r8_4 = *rbx_2
                            r8_3, r9 = (*(r8_4 + 8))(rbx_2, 1, r8_4)
                    
                    if (result != 0)
                        int32_t temp13_1 = *(rbx_2 + 0xc)
                        *(rbx_2 + 0xc) -= 1
                        
                        if (temp13_1 == 1)
                            (*(*rbx_2 + 8))(rbx_2, 1)
                        
                        break
                
                goto label_140e65065
        
        if (result == 0)
            goto label_140e650a2
else
    int64_t* rcx_7 = *(arg1 + 0xd8)
    
    if (rcx_7 == 0)
        goto label_140e64f4b
    
    if ((*(*rcx_7 + 0x28))(rcx_7) == 0)
        goto label_140e64f4b
    
    int64_t* rcx_8
    
    if (*(arg1 + 0xe0) == 0)
        rcx_8 = nullptr
    else
        rcx_8 = *(arg1 + 0xd8)
    
    char rax_11
    rax_11, r9 = (*(*rcx_8 + 0x48))(rcx_8, arg2)
    
    if (rax_11 != 0)
        goto label_140e64f4b
    
label_140e650a2:
    
    if (arg4 != 0)
        for (; i_1 s>= 0; i_1 += 1)
            if (i_1 s>= *(arg1 + 0xc0))
                break
            
            int64_t* rbx_5 = (sx.q(i_1) << 4) + *(arg1 + 0xb8)
            int64_t rcx_17 = *rbx_5
            int64_t* rbx_6 = rbx_5[1]
            
            if (rbx_6 != 0)
                *(rbx_6 + 0xc) += 1
            
            if (rcx_17 == 0)
            label_140e65134:
                
                if (rbx_6 != 0)
                    int32_t temp6_1 = *(rbx_6 + 0xc)
                    *(rbx_6 + 0xc) -= 1
                    
                    if (temp6_1 == 1)
                        (*(*rbx_6 + 8))(rbx_6, 1)
            else if (rbx_6 != 0)
                int32_t rax_26 = rbx_6[1].d
                
                if (rax_26 s> 0)
                    r9.b = 1
                    rbx_6[1].d = rax_26 + 1
                    int64_t result_2
                    result_2, r9 = sub_140e64e10(rcx_17, arg2, 0, r9, arg5)
                    rbx_6[1].d -= 1
                    result = result_2
                    
                    if (rbx_6[1].d == 1)
                        (**rbx_6)(rbx_6)
                        int32_t temp9_1 = *(rbx_6 + 0xc)
                        *(rbx_6 + 0xc) -= 1
                        
                        if (temp9_1 == 1)
                            (*(*rbx_6 + 8))(rbx_6, 1)
                    
                    if (result != 0)
                        int32_t temp11_1 = *(rbx_6 + 0xc)
                        *(rbx_6 + 0xc) -= 1
                        
                        if (temp11_1 == 1)
                            (*(*rbx_6 + 8))(rbx_6, 1)
                        
                        break
                
                goto label_140e65134
return result
