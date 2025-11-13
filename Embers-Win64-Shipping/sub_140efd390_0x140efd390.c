// 函数: sub_140efd390
// 地址: 0x140efd390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28
sub_140efd580(arg1, &var_28, arg3)
int64_t rbp = var_28
int64_t* rbx_1
int64_t* var_20

if (rbp != 0)
    rbx_1 = var_20
else
    void var_18
    int64_t* rax_2 = sub_140ee85c0(arg1, &var_18, arg3, arg4, arg5)
    int64_t* rdi_1 = rax_2[1]
    rbp = *rax_2
    
    if (rdi_1 != 0)
        rdi_1[1].d += 1
    
    rbx_1 = var_20
    int64_t* rsi_1 = rbx_1
    
    if (rdi_1 != rbx_1)
        rbx_1 = rdi_1
        
        if (rsi_1 != 0)
            rsi_1[1].d -= 1
            
            if (rsi_1[1].d == 1)
                (**rsi_1)(rsi_1)
                int32_t temp5_1 = *(rsi_1 + 0xc)
                *(rsi_1 + 0xc) -= 1
                
                if (temp5_1 == 1)
                    (*(*rsi_1 + 8))(rsi_1, 1)
    else if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t temp4_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (temp4_1 == 1)
                (*(*rdi_1 + 8))(rdi_1, 1)
    
    int64_t* var_10
    
    if (var_10 != 0)
        var_10[1].d -= 1
        
        if (var_10[1].d == 1)
            (**var_10)(var_10)
            int32_t temp6_1 = *(var_10 + 0xc)
            *(var_10 + 0xc) -= 1
            
            if (temp6_1 == 1)
                (*(*var_10 + 8))(var_10, 1)
*arg2 = rbp
arg2[1] = rbx_1

if (rbx_1 != 0)
    int32_t rax_8 = rbx_1[1].d
    rbx_1[1].d = rax_8
    
    if (rax_8 == 0)
        (**rbx_1)(rbx_1)
        int32_t temp0_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp0_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

return arg2
