// 函数: sub_141b5edb0
// 地址: 0x141b5edb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28
sub_141b5f6a0(arg1[0x45] + 0x98, &var_28, arg2)
int64_t rsi = var_28
int64_t* rbx_1
int64_t* var_20

if (rsi != 0)
    rbx_1 = var_20
else
    void var_18
    int64_t* rax_2 = sub_141b61b30(arg1[0x45], &var_18, arg2, arg3, arg4, arg5)
    rbx_1 = var_20
    
    if (&var_28 != rax_2)
        rsi = *rax_2
        *rax_2 = 0
        int64_t* rdi_1 = rbx_1
        int64_t* rcx_3 = rax_2[1]
        
        if (rcx_3 != rbx_1)
            rax_2[1] = 0
            rbx_1 = rcx_3
            
            if (rdi_1 != 0)
                rdi_1[1].d -= 1
                
                if (rdi_1[1].d == 1)
                    (**rdi_1)(rdi_1)
                    int32_t temp5_1 = *(rdi_1 + 0xc)
                    *(rdi_1 + 0xc) -= 1
                    
                    if (temp5_1 == 1)
                        (*(*rdi_1 + 8))(rdi_1, 1)
    
    int64_t* var_10
    
    if (var_10 != 0)
        var_10[1].d -= 1
        
        if (var_10[1].d == 1)
            (**var_10)(var_10)
            int32_t temp3_1 = *(var_10 + 0xc)
            *(var_10 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*var_10 + 8))(var_10, 1)
int64_t* rdi
rdi.b = rsi != 0

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp2_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp2_1 == 1)
            int64_t r8_3 = *rbx_1
            (*(r8_3 + 8))(rbx_1, 1, r8_3)

return zx.q(rdi.b)
