// 函数: sub_140dc1bf0
// 地址: 0x140dc1bf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char r15 = 0
void*** rax = j_sub_140a82f30(0x68)
void*** rbp
int64_t* rdi

if (rax == 0)
    rdi = 0.q
    rbp = nullptr
else
    rdi = *(arg1 + 0x10)
    int64_t rdx = 0
    
    if (rdi != 0)
        int32_t rax_1 = rdi[1].d
        
        if (rax_1 != 0)
            rdi[1].d = rax_1 + 1
            rax_1.b = 1
        
        if (rax_1.b == 0)
            rdi = nullptr
        
        if (rdi != 0)
            rdx = *(arg1 + 8)
    
    int64_t var_38 = rdx
    int64_t* var_30_1 = rdi
    
    if (rdi != 0)
        *(rdi + 0xc) += 1
    
    rbp = sub_140dd98b0(rax, &var_38, 0)
    r15 = 1

void*** rax_3 = j_sub_140a82f30(0x18)
void*** rbx_1 = rax_3

if (rax_3 == 0)
    rbx_1 = nullptr
else
    rax_3[1].d = 1
    *(rax_3 + 0xc) = 1
    *rbx_1 = &data_142d42ea8
    rbx_1[2] = rbp

*arg2 = rbp
void**** rsi = &rbp[1]
arg2[1] = rbx_1

if (rbp == 0)
    rsi = nullptr

if (rsi != 0)
    void* rax_4
    
    if (*rsi != 0)
        rax_4 = rsi[1]
    
    if (*rsi == 0 || rax_4 == 0 || *(rax_4 + 8) s<= 0)
        if (rbx_1 != 0)
            rbx_1[1].d += 1
        
        *rsi = rbp
        int64_t* rcx_1 = rsi[1]
        
        if (rbx_1 != rcx_1)
            if (rbx_1 != 0)
                *(rbx_1 + 0xc) += 1
                rcx_1 = rsi[1]
            
            if (rcx_1 != 0)
                int32_t temp4_1 = *(rcx_1 + 0xc)
                *(rcx_1 + 0xc) -= 1
                
                if (temp4_1 == 1)
                    (*(*rcx_1 + 8))(rcx_1, 1)
            
            rsi[1] = rbx_1
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp3_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*rbx_1)[1](rbx_1, 1)

if ((r15 & 1) != 0 && rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp1_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rdi + 8))(rdi, 1)

return arg2
