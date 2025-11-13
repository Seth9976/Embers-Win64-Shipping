// 函数: sub_140e80120
// 地址: 0x140e80120
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_58 = zx.o(0)
int64_t* rbx_1
int64_t* var_40

if (*(arg1 + 0x58) s<= 0)
    rbx_1 = var_58:8.q
label_140e801ec:
    *arg1 = 1
    
    if (&arg1[8] != &var_40)
        *(arg1 + 8) = 0
        int64_t* rdi_2 = *(arg1 + 0x10)
        
        if (rdi_2 != 0)
            *(arg1 + 0x10) = 0
            rdi_2[1].d -= 1
            
            if (rdi_2[1].d == 1)
                (**rdi_2)(rdi_2)
                int32_t temp3_1 = *(rdi_2 + 0xc)
                *(rdi_2 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*rdi_2 + 8))(rdi_2, 1)
    
    *(arg1 + 0x18) = 0x101
    sub_140e88d80(arg1, arg3)
else
    void var_48
    int64_t* rax_1 = sub_140e63a40(arg1, &var_48, arg3)
    int64_t rbp_1 = 0
    
    if (&var_58 == rax_1)
        rbx_1 = var_58:8.q
    else
        rbp_1 = *rax_1
        *rax_1 = 0
        rbx_1 = rax_1[1]
        var_58.q = rbp_1
        
        if (rbx_1 == 0)
            rbx_1 = var_58:8.q
        else
            rax_1[1] = 0
            var_58:8.q = rbx_1
    
    int64_t* rdi_1 = var_40
    int64_t rax_2 = rbp_1
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t temp4_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            rax_2 = rbp_1
            
            if (temp4_1 == 1)
                (*(*rdi_1 + 8))(rdi_1, 1)
                rax_2 = rbp_1
    
    if (rax_2 == 0)
        goto label_140e801ec
char var_68 = 1
sub_140e7fd50(arg1, arg2, &var_58, arg4, arg5, arg6, arg7, arg8)

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp5_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp5_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

return arg2
