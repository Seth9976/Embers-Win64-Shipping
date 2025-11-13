// 函数: sub_140de9d00
// 地址: 0x140de9d00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = *arg3
int64_t var_68
int64_t* rbx_1

if (rcx != 0)
    rbx_1 = arg3[1]
    var_68 = rcx
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    if (&var_68 != arg1 + 0x258)
        arg5 = var_68.o
        var_68.o = *(arg1 + 0x258)
        *(arg1 + 0x258) = arg5
    
    if (rbx_1 != 0)
        goto label_140de9e90
else
    void var_48
    
    if (*(arg2 + 0x18) == 0)
        int64_t* rcx_5 = *(arg1 + 0x258)
        char rax_10
        
        if (rcx_5 != 0)
            rax_10 = (*(*rcx_5 + 0x18))(rcx_5)
        
        if ((rcx_5 == 0 || rax_10 != 0) && arg1 + 0x258 != &var_48)
            *(arg1 + 0x258) = 0
            rbx_1 = *(arg1 + 0x260)
            
            if (rbx_1 != 0)
                *(arg1 + 0x260) = 0
            label_140de9e90:
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    (**rbx_1)(rbx_1, arg5)
                    int32_t temp4_1 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (temp4_1 == 1)
                        (*(*rbx_1 + 8))(rbx_1, 1)
    else
        int64_t* rcx_1 = data_143e20d08
        int64_t* rax_4 = (*(*rcx_1 + 0x120))(rcx_1, &var_68, arg2)
        int64_t* rbx_2 = rax_4[1]
        
        if (rbx_2 != 0)
            rbx_2[1].d += 1
        
        if (arg1 + 0x258 == &var_48)
        label_140de9e22:
            
            if (rbx_2 != 0)
                rbx_2[1].d -= 1
                
                if (rbx_2[1].d == 1)
                    (**rbx_2)(rbx_2)
                    int32_t temp2_1 = *(rbx_2 + 0xc)
                    *(rbx_2 + 0xc) -= 1
                    
                    if (temp2_1 == 1)
                        (*(*rbx_2 + 8))(rbx_2, 1)
        else
            *(arg1 + 0x258) = *rax_4
            int64_t* rdi_1 = *(arg1 + 0x260)
            
            if (rbx_2 == rdi_1)
                goto label_140de9e22
            
            *(arg1 + 0x260) = rbx_2
            
            if (rdi_1 != 0)
                rdi_1[1].d -= 1
                
                if (rdi_1[1].d == 1)
                    (**rdi_1)(rdi_1)
                    int32_t temp5_1 = *(rdi_1 + 0xc)
                    *(rdi_1 + 0xc) -= 1
                    
                    if (temp5_1 == 1)
                        (*(*rdi_1 + 8))(rdi_1, 1)
        
        int64_t* var_60
        rbx_1 = var_60
        
        if (rbx_1 != 0)
            goto label_140de9e90
sub_140de1210(arg1 + 0x238, arg4)
sub_140de1440(arg1 + 0x190, arg6)
*(arg1 + 0x1a8) = *arg7
*(arg1 + 0x1a9) = arg7[1]
sub_1407473e0(arg1 + 0x1b0, &arg7[8])
*(arg1 + 0x1c0) = arg8
sub_140de1160(arg1 + 0x1c8, arg9)
sub_140de12c0(arg1 + 0x1f8, arg10)
int64_t rcx_13 = *arg11
*(arg1 + 0x28) &= 0xdf
*(arg1 + 0x28) |= arg12 << 5
*(arg1 + 0x2c) = arg13
uint64_t result = zx.q(arg14)
*(arg1 + 0x2d) = result.b
*(arg1 + 0x220) = rcx_13

if (arg1 + 0x228 != arg16)
    int32_t i_2 = *(arg1 + 0x230)
    
    if (i_2 != 0)
        int64_t* rdi_4 = *(arg1 + 0x228) + 8
        int32_t i
        
        do
            int64_t* rbx_3 = *rdi_4
            
            if (rbx_3 != 0)
                rbx_3[1].d -= 1
                
                if (rbx_3[1].d == 1)
                    result = (**rbx_3)(rbx_3)
                    int32_t temp9_1 = *(rbx_3 + 0xc)
                    *(rbx_3 + 0xc) -= 1
                    
                    if (temp9_1 == 1)
                        result = (*(*rbx_3 + 8))(rbx_3, 1)
            
            rdi_4 = &rdi_4[2]
            i = i_2
            i_2 -= 1
        while (i != 1)
    
    int32_t i_3 = arg16[1].d
    void* rbx_4 = *arg16
    int32_t r8_1 = *(arg1 + 0x234)
    *(arg1 + 0x230) = i_3
    
    if (i_3 != 0 || r8_1 != 0)
        result = sub_1405a4be0(arg1 + 0x228, i_3, r8_1)
        void* rcx_17 = *(arg1 + 0x228)
        
        if (i_3 != 0)
            int32_t i_1
            
            do
                *rcx_17 = *rbx_4
                result = *(rbx_4 + 8)
                *(rcx_17 + 8) = result
                
                if (result != 0)
                    *(result + 8) += 1
                
                rcx_17 += 0x10
                rbx_4 += 0x10
                i_1 = i_3
                i_3 -= 1
            while (i_1 != 1)
    else
        *(arg1 + 0x234) = i_3

if (arg15[0x68] == 0)
    return result

uint8_t rdx_8 = *(arg1 + 0x29)
char rcx_18 = *arg15 & 1

if (rdx_8 u>> 7 != rcx_18)
    *(arg1 + 0x29) = (rdx_8 & 0x7f) | rcx_18 << 7
    void* rax_22 = data_143e20d08
    int64_t* rbx_5 = *(rax_22 + 0xb0)
    
    if (rbx_5 != 0)
        rbx_5[1].d += 1
    
    *(*(rax_22 + 0xa8) + 0x78) = 1
    
    if (rbx_5 != 0)
        rbx_5[1].d -= 1
        
        if (rbx_5[1].d == 1)
            (**rbx_5)(rbx_5)
            int32_t temp10_1 = *(rbx_5 + 0xc)
            *(rbx_5 + 0xc) -= 1
            
            if (temp10_1 == 1)
                (*(*rbx_5 + 8))(rbx_5, 1)

rdx_8 = 3

if (arg15[0x20] == 0)
    rdx_8 = arg15[1]

sub_140e23520(arg1, rdx_8, &arg15[8], 0)
char rdx_9 = 3

if (arg15[0x50] == 0)
    rdx_9 = arg15[2]

return sub_140e23520(arg1, rdx_9, &arg15[0x38], 1)
