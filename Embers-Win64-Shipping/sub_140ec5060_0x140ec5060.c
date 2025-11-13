// 函数: sub_140ec5060
// 地址: 0x140ec5060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0xb8)
void*** rbp

if (rax == 0)
    rbp = nullptr
else
    void* rcx = arg4[1]
    int64_t var_38 = *arg4
    void* var_30_1 = rcx
    
    if (rcx != 0)
        *(rcx + 8) += 1
    
    rbp = sub_140e957b0(rax, arg2, arg3, &var_38, arg5)

void*** rax_3 = j_sub_140a82f30(0x18)
void*** rbx_1 = rax_3

if (rax_3 == 0)
    rbx_1 = nullptr
else
    rax_3[1].d = 1
    *(rax_3 + 0xc) = 1
    *rbx_1 = &data_142d42ea8
    rbx_1[2] = rbp

*arg1 = rbp
void**** rdi = &rbp[1]
arg1[1] = rbx_1

if (rbp == 0)
    rdi = nullptr

if (rdi != 0)
    void* rax_4
    
    if (*rdi != 0)
        rax_4 = rdi[1]
    
    if (*rdi == 0 || rax_4 == 0 || *(rax_4 + 8) s<= 0)
        if (rbx_1 != 0)
            rbx_1[1].d += 1
        
        *rdi = rbp
        int64_t* rcx_2 = rdi[1]
        
        if (rbx_1 != rcx_2)
            if (rbx_1 != 0)
                *(rbx_1 + 0xc) += 1
                rcx_2 = rdi[1]
            
            if (rcx_2 != 0)
                int32_t temp4_1 = *(rcx_2 + 0xc)
                *(rcx_2 + 0xc) -= 1
                
                if (temp4_1 == 1)
                    (*(*rcx_2 + 8))(rcx_2, 1)
            
            rdi[1] = rbx_1
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp3_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*rbx_1)[1](rbx_1, 1)

int64_t* rbx_2 = arg4[1]

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        (**rbx_2)(rbx_2)
        int32_t temp1_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx_2 + 8))(rbx_2, 1)

return arg1
