// 函数: sub_140edee10
// 地址: 0x140edee10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg1 + 0x3b0)

if (rbx != 0)
    rbx[1].d += 1
    
    if (rbx != 0)
        rbx[1].d += 1
        
        if (rbx != 0)
            rbx[1].d -= 1
            
            if (rbx[1].d == 1)
                (**rbx)(rbx)
                int32_t temp1_1 = *(rbx + 0xc)
                *(rbx + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*(*rbx + 8))(rbx, 1)

int64_t* rsi = *(arg1 + 0x3a0)
int64_t* r14 = nullptr
void* r12 = nullptr

if (rsi != 0)
    int32_t rax_3 = rsi[1].d
    
    if (rax_3 == 0)
        rsi = nullptr
    else
        rsi[1].d = rax_3 + 1
        
        if (rsi != 0)
            r12 = *(arg1 + 0x398)

if (arg4 == 0)
    sub_140f2d7d0(r12)
else
    int64_t* rdi_1 = *(arg1 + 0x3e8)
    int64_t* rax_5 = rdi_1
    
    if (rdi_1 != 0)
        int32_t rax_6 = rdi_1[1].d
        
        if (rax_6 == 0)
            rdi_1 = nullptr
            rax_5 = nullptr
        else
            rdi_1[1].d = rax_6 + 1
            rax_5 = rdi_1
    
    if (rax_5 != 0)
        r14 = *(arg1 + 0x3e0)
    
    int64_t* var_28
    int64_t rbp_1 = *sub_140f47ce0(r12, &var_28)
    int64_t* var_20
    
    if (var_20 != 0)
        var_20[1].d -= 1
        
        if (var_20[1].d == 1)
            (**var_20)(var_20)
            int32_t temp7_1 = *(var_20 + 0xc)
            *(var_20 + 0xc) -= 1
            
            if (temp7_1 == 1)
                (*(*var_20 + 8))(var_20, 1)
    
    if (rbp_1 != r14)
        sub_140f2d7d0(r12)
        
        if (r14 != 0)
            int64_t r8
            r8.b = 1
            (*(*r14 + 0x248))(r14, 1, r8, 0)
        
        var_28 = r14
        int64_t* var_20_1 = rdi_1
        
        if (rdi_1 != 0)
            rdi_1[1].d += 1
        
        sub_140eda6e0(r12, &var_28)
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t temp9_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (temp9_1 == 1)
                (*(*rdi_1 + 8))(rdi_1, 1)

if (rsi != 0)
    rsi[1].d -= 1
    
    if (rsi[1].d == 1)
        (**rsi)(rsi)
        int32_t temp4_1 = *(rsi + 0xc)
        *(rsi + 0xc) -= 1
        
        if (temp4_1 == 1)
            (*(*rsi + 8))(rsi, 1)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp6_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp6_1 == 1)
            (*(*rbx + 8))(rbx, 1)

int64_t* result
result.b = 0
return result
