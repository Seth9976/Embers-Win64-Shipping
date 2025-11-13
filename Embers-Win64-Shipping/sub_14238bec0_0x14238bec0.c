// 函数: sub_14238bec0
// 地址: 0x14238bec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi = *(arg1 + 0x10)
int64_t rbp = 0
int64_t* rax = rsi

if (rsi != 0)
    int32_t rax_1 = rsi[1].d
    
    if (rax_1 == 0)
        rsi = nullptr
        rax = nullptr
    else
        rsi[1].d = rax_1 + 1
        rax = rsi

int64_t rbx

if (rax == 0 || *(arg1 + 8) == 0)
    rbx.b = 0
else
    int64_t* rdi_1 = *(arg1 + 0x10)
    
    if (rdi_1 != 0)
        int32_t rax_3 = rdi_1[1].d
        
        if (rax_3 != 0)
            rdi_1[1].d = rax_3 + 1
            rax_3.b = 1
        
        if (rax_3.b == 0)
            rdi_1 = nullptr
        
        if (rdi_1 != 0)
            rbp = *(arg1 + 8)
    
    rbx = *(arg1 + 0x18)
    int64_t var_38 = *(arg1 + 0x20)
    void var_30
    sub_140596d10(&var_30, arg1 + 0x28)
    rbx(rbp, arg2, arg3, zx.q(arg4), &var_38)
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t temp3_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rdi_1 + 8))(rdi_1, 1)
    
    rbx.b = 1

if (rsi != 0)
    rsi[1].d -= 1
    
    if (rsi[1].d == 1)
        int64_t r8_1 = *rsi
        (*r8_1)(rsi, arg5, r8_1)
        int32_t temp1_1 = *(rsi + 0xc)
        *(rsi + 0xc) -= 1
        
        if (temp1_1 == 1)
            int64_t r8_2 = *rsi
            (*(r8_2 + 8))(rsi, 1, r8_2)

return zx.q(rbx.b)
