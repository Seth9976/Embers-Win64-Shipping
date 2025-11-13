// 函数: sub_140e1f140
// 地址: 0x140e1f140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char r15 = 0
int32_t arg_8 = 0

if (*(arg1 + 0x9c0) == 0)
    *arg2 = nullptr
    arg2[1] = 0
    return arg2

void*** rax = j_sub_140a82f30(0x58)
void*** rbp_1
int64_t* rdi

if (rax == 0)
    int64_t* var_40
    rdi = var_40
    rbp_1 = nullptr
else
    int64_t var_38 = *(arg1 + 0x9c0)
    void* rcx_1 = *(arg1 + 0x9c8)
    void* var_30_1 = rcx_1
    
    if (rcx_1 != 0)
        *(rcx_1 + 8) += 1
    
    rdi = *(arg1 + 0x10)
    int64_t rcx_2 = 0
    
    if (rdi != 0)
        int32_t rax_1 = rdi[1].d
        
        if (rax_1 != 0)
            rdi[1].d = rax_1 + 1
            rax_1.b = 1
        
        if (rax_1.b == 0)
            rdi = nullptr
        
        if (rdi != 0)
            rcx_2 = *(arg1 + 8)
    
    int64_t var_48 = rcx_2
    int64_t* var_40_1 = rdi
    
    if (rdi != 0)
        int32_t rax_2 = rdi[1].d
        rdi[1].d = rax_2
        
        if (rax_2 == 0)
            (**rdi)(rdi)
            int32_t temp0_1 = *(rdi + 0xc)
            *(rdi + 0xc) -= 1
            
            if (temp0_1 == 1)
                (*(*rdi + 8))(rdi, 1)
    
    rbp_1 = sub_140dd8790(rax, &var_48, arg3, &var_38)
    r15 = 1

void*** rax_6 = j_sub_140a82f30(0x18)
void*** rbx_1 = rax_6

if (rax_6 == 0)
    rbx_1 = nullptr
else
    rax_6[1].d = 1
    *(rax_6 + 0xc) = 1
    *rbx_1 = &data_142d42ea8
    rbx_1[2] = rbp_1

*arg2 = rbp_1
void**** rsi_1 = &rbp_1[1]
arg2[1] = rbx_1

if (rbp_1 == 0)
    rsi_1 = nullptr

if (rsi_1 != 0)
    void* rax_7
    
    if (*rsi_1 != 0)
        rax_7 = rsi_1[1]
    
    if (*rsi_1 == 0 || rax_7 == 0 || *(rax_7 + 8) s<= 0)
        if (rbx_1 != 0)
            rbx_1[1].d += 1
        
        *rsi_1 = rbp_1
        int64_t* rcx_6 = rsi_1[1]
        
        if (rbx_1 != rcx_6)
            if (rbx_1 != 0)
                *(rbx_1 + 0xc) += 1
                rcx_6 = rsi_1[1]
            
            if (rcx_6 != 0)
                int32_t temp5_1 = *(rcx_6 + 0xc)
                *(rcx_6 + 0xc) -= 1
                
                if (temp5_1 == 1)
                    (*(*rcx_6 + 8))(rcx_6, 1)
            
            rsi_1[1] = rbx_1
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp4_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp4_1 == 1)
                    (*rbx_1)[1](rbx_1, 1)

if ((r15 & 1) != 0 && rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp2_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rdi + 8))(rdi, 1)

return arg2
