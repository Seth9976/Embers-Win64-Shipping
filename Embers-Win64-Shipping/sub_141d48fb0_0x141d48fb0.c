// 函数: sub_141d48fb0
// 地址: 0x141d48fb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* var_68
void* var_58

if (arg2 != sub_141d49ef0())
    int32_t rsi_3 = arg1[1].d - *(arg1 + 0x34)
    int64_t* rbx_2
    
    if (rsi_3 s> 0)
        var_58 = arg2
        int64_t* rax_9
        
        if (arg2 == 0)
            rax_9 = nullptr
        else
            rax_9 = *(arg2 + 0x50)
        
        int32_t var_48_1 = 0xffffffff
        int16_t var_44_1 = 0x101
        char var_42_1 = 0
        sub_1406328d0(&var_58)
        rbx_2 = rax_9
    
    void* rax
    
    if (rsi_3 s<= 0 || rbx_2 == 0)
    label_141d49204:
        rax.b = 1
    else
        while (true)
            if ((arg6 == 0 || (rbx_2[8] & arg6) != 0 || arg6 == -1) && (rbx_2[8] & arg7) == 0
                    && arg7 != -1)
                double zmm2_1[0x2] = sub_140b63b70(&rbx_2[5], &var_68)
                int32_t arg_10
                sub_14062d6e0(arg1, &arg_10, &var_68)
                int64_t rax_10 = sx.q(arg_10)
                void* const rcx_9
                
                if (rax_10.d == 0xffffffff)
                    rcx_9 = nullptr
                else
                    rcx_9 = *arg1 + rax_10 * 0x28
                
                void** rdi_2 = rcx_9 + 0x10
                void* rcx_10 = var_68
                
                if (rcx_9 == 0)
                    rdi_2 = nullptr
                
                if (rcx_10 != 0)
                    sub_140a74f90(rcx_10)
                
                if (rdi_2 != 0)
                    rax = *rdi_2
                    
                    if (rax != 0 && *(rax + 8) u> 1 && sub_141d49370(rdi_2, rbx_2, 
                            sx.q(*(rbx_2 + 0x4c)) + arg3, arg4, zmm2_1, arg5, arg6, arg7).b == 0)
                        rax.b = 0
                        break
                    
                    rsi_3 -= 1
                    
                    if (rsi_3 s<= 0)
                        goto label_141d49204
            
            int64_t* rax_13 = rbx_2[4]
            sub_1406328d0(&var_58)
            rbx_2 = rax_13
            
            if (rbx_2 == 0)
                goto label_141d49204
    
    return rax

void*** rax_1 = sub_140666cd0()
var_68 = &rax_1[2]
void*** rbx_1 = rax_1
void*** rdi_1 = rbx_1

if (rbx_1 != 0)
    rbx_1[1].d += 1
    rbx_1 = rax_1

if (arg3 + 0x10 == &var_58)
label_141d4904f:
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d != 1)
            rbx_1 = rax_1
        else
            (**rdi_1)(rdi_1)
            int32_t temp2_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (temp2_1 != 1)
                rbx_1 = rax_1
            else
                (*rdi_1)[1](rdi_1, 1)
                rbx_1 = rax_1
else
    *(arg3 + 0x10) = var_68
    void*** rsi_1 = *(arg3 + 0x18)
    
    if (rdi_1 == rsi_1)
        goto label_141d4904f
    
    *(arg3 + 0x18) = rdi_1
    
    if (rsi_1 != 0)
        rsi_1[1].d -= 1
        
        if (rsi_1[1].d != 1)
            rbx_1 = rax_1
        else
            (**rsi_1)(rsi_1)
            int32_t temp5_1 = *(rsi_1 + 0xc)
            *(rsi_1 + 0xc) -= 1
            
            if (temp5_1 != 1)
                rbx_1 = rax_1
            else
                (*rsi_1)[1](rsi_1, 1)
                rbx_1 = rax_1

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp4_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp4_1 == 1)
            (*rbx_1)[1](rbx_1, 1)

sub_141d46260(*(arg3 + 0x10), arg1)
int64_t* rax_8
rax_8.b = 1
return rax_8
