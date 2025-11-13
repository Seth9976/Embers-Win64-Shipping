// 函数: sub_140e5cf40
// 地址: 0x140e5cf40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x3d0)
void*** rbp

if (rax == 0)
    rbp = nullptr
else
    void* rcx = arg3[1]
    int64_t var_28 = *arg3
    void* var_20_1 = rcx
    
    if (rcx != 0)
        *(rcx + 8) += 1
    
    rbp = sub_140e52130(rax, arg2, &var_28)

void*** rax_2 = j_sub_140a82f30(0x18)
void*** rbx_1 = rax_2

if (rax_2 == 0)
    rbx_1 = nullptr
else
    rax_2[1].d = 1
    *(rax_2 + 0xc) = 1
    *rbx_1 = &data_142d42ea8
    rbx_1[2] = rbp

*arg1 = rbp
void**** rdi = &rbp[1]
arg1[1] = rbx_1

if (rbp == 0)
    rdi = nullptr

if (rdi != 0)
    void* rax_3
    
    if (*rdi != 0)
        rax_3 = rdi[1]
    
    if (*rdi == 0 || rax_3 == 0 || *(rax_3 + 8) s<= 0)
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

int64_t* rbx_2 = arg3[1]

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        (**rbx_2)(rbx_2)
        int32_t temp1_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx_2 + 8))(rbx_2, 1)

return arg1
