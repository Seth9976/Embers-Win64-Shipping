// 函数: sub_141d49a40
// 地址: 0x141d49a40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = sub_140666cd0()
void* var_38 = &rax[2]

if (rax != 0)
    rax[1].d += 1

uint64_t rdi_1 = zx.q(sub_141d497e0(arg1, arg2, var_38, arg4, arg5, arg7))

if (rax != 0)
    rax[1].d -= 1
    
    if (rax[1].d == 1)
        void** rdx_2 = *rax
        (*rdx_2)(rax, rdx_2)
        int32_t temp1_1 = *(rax + 0xc)
        *(rax + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*rax)[1](rax, 1)

if (rdi_1.b == 0)
    rdi_1.b = 0
else
    char rsi_1
    
    if (arg8 == 0)
        void*** var_18
        sub_14093d6b0(&var_18, arg3, arg6)
        void*** rax_6 = sub_140666b20(&var_38)
        void* var_28 = &rax_6[2]
        rdi_1 = var_18
        rsi_1 = sub_140666e10(&var_28, rdi_1, 1)
        
        if (rax_6 != 0)
            rax_6[1].d -= 1
            
            if (rax_6[1].d == 1)
                (**rax_6)(rax_6)
                int32_t temp6_1 = *(rax_6 + 0xc)
                *(rax_6 + 0xc) -= 1
                
                if (temp6_1 == 1)
                    (*rax_6)[1](rax_6, 1)
        
        (*(*rdi_1 + 8))(rdi_1)
        int64_t* var_10
        
        if (var_10 != 0)
            var_10[1].d -= 1
            
            if (var_10[1].d == 1)
                (**var_10)(var_10)
                int32_t temp7_1 = *(var_10 + 0xc)
                *(var_10 + 0xc) -= 1
                
                if (temp7_1 == 1)
                    (*(*var_10 + 8))(var_10, 1)
    else
        rsi_1 = sub_141d46040(&var_38, arg3, arg6)
    
    if (rsi_1 == 0)
        rdi_1.b = 0
    else
        rdi_1.b = 1

if (rax != 0)
    rax[1].d -= 1
    
    if (rax[1].d == 1)
        (**rax)(rax)
        int32_t temp4_1 = *(rax + 0xc)
        *(rax + 0xc) -= 1
        
        if (temp4_1 == 1)
            void** r8_5 = *rax
            r8_5[1](rax, 1, r8_5)

return zx.q(rdi_1.b)
