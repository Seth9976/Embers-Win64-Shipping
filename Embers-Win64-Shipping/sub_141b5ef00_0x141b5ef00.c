// 函数: sub_141b5ef00
// 地址: 0x141b5ef00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_38
sub_141b5f6a0(arg1[0x45] + 0x98, &var_38, arg2)
int64_t rsi = var_38
int64_t* rbx_1
int64_t* var_30

if (rsi != 0)
    rbx_1 = var_30
else
    int64_t var_28 = *arg3
    void* rax_2 = arg3[1]
    void* var_20_1 = rax_2
    
    if (rax_2 != 0)
        *(rax_2 + 8) += 1
        rsi = var_38
    
    void var_18
    int64_t* rax_3 = sub_141b61c60(arg1[0x45], &var_18, arg2, &var_28)
    rbx_1 = var_30
    
    if (&var_38 != rax_3)
        rsi = *rax_3
        *rax_3 = 0
        int64_t* rdi_1 = rbx_1
        int64_t* rcx_3 = rax_3[1]
        var_38 = rsi
        
        if (rcx_3 != rbx_1)
            rax_3[1] = 0
            rbx_1 = rcx_3
            int64_t* var_30_1 = rcx_3
            
            if (rdi_1 != 0)
                rdi_1[1].d -= 1
                
                if (rdi_1[1].d == 1)
                    (**rdi_1)(rdi_1)
                    int32_t temp7_1 = *(rdi_1 + 0xc)
                    *(rdi_1 + 0xc) -= 1
                    
                    if (temp7_1 == 1)
                        (*(*rdi_1 + 8))(rdi_1, 1)
    
    int64_t* var_10
    
    if (var_10 != 0)
        var_10[1].d -= 1
        
        if (var_10[1].d == 1)
            (**var_10)(var_10)
            int32_t temp5_1 = *(var_10 + 0xc)
            *(var_10 + 0xc) -= 1
            
            if (temp5_1 == 1)
                (*(*var_10 + 8))(var_10, 1)
int64_t* rdi
rdi.b = rsi != 0

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp3_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

int64_t* rbx_2 = arg3[1]

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        (**rbx_2)(rbx_2)
        int32_t rsi_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (rsi_1 == 1)
            int64_t r8_3 = *rbx_2
            (*(r8_3 + 8))(rbx_2, zx.q(rsi_1), r8_3)

return zx.q(rdi.b)
