// 函数: sub_1408f29f0
// 地址: 0x1408f29f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x58)
void*** rbp

if (rax == 0)
    rbp = nullptr
else
    rbp = sub_1408f2c10(rax)

void*** rax_2 = j_sub_140a82f30(0x18)
void*** rbx = rax_2

if (rax_2 == 0)
    rbx = nullptr
else
    rax_2[1].d = 1
    *(rax_2 + 0xc) = 1
    *rbx = &data_142e151a8
    rbx[2] = rbp

void**** rdi = &rbp[1]

if (rbp == 0)
    rdi = nullptr

if (rdi != 0)
    void* rax_3
    
    if (*rdi != 0)
        rax_3 = rdi[1]
    
    if (*rdi == 0 || rax_3 == 0 || *(rax_3 + 8) s<= 0)
        if (rbx != 0)
            rbx[1].d += 1
        
        *rdi = rbp
        int64_t* rcx_1 = rdi[1]
        
        if (rbx != rcx_1)
            if (rbx != 0)
                *(rbx + 0xc) += 1
                rcx_1 = rdi[1]
            
            if (rcx_1 != 0)
                int32_t temp3_1 = *(rcx_1 + 0xc)
                *(rcx_1 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*rcx_1 + 8))(rcx_1, 1)
            
            rdi[1] = rbx
        
        if (rbx != 0)
            rbx[1].d -= 1
            
            if (rbx[1].d == 1)
                (**rbx)(rbx)
                int32_t temp2_1 = *(rbx + 0xc)
                *(rbx + 0xc) -= 1
                
                if (temp2_1 == 1)
                    (*rbx)[1](rbx, 1)

*arg2 = rbp
arg2[1] = rbx

if (rbx != 0)
    int32_t rax_7 = rbx[1].d
    rbx[1].d = rax_7
    
    if (rax_7 == 0)
        (**rbx)(rbx)
        int32_t temp0_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp0_1 == 1)
            (*rbx)[1](rbx, 1)

return arg2
