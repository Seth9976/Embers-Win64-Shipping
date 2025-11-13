// 函数: sub_140ec5860
// 地址: 0x140ec5860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x40)
void*** rdi = rax

if (rax == 0)
    rdi = nullptr
else
    rax[1] = 0
    rax[2] = 0
    rax[3].d = 0x3f800000
    *rdi = &data_142eda170
    __builtin_memset(&rdi[4], 0, 0x11)
    *(rdi + 0x34) = 0
    *(rdi + 0x3c) = 0xffffffff
    int64_t arg_8 = 0

void*** rax_1 = j_sub_140a82f30(0x18)
void*** rbx = rax_1

if (rax_1 == 0)
    rbx = nullptr
else
    rax_1[1].d = 1
    *(rax_1 + 0xc) = 1
    *rbx = &data_142d42ea8
    rbx[2] = rdi

*arg1 = rdi
void**** r14 = &rdi[1]
arg1[1] = rbx

if (rdi == 0)
    r14 = nullptr

if (r14 != 0)
    void* rax_2
    
    if (*r14 != 0)
        rax_2 = r14[1]
    
    if (*r14 == 0 || rax_2 == 0 || *(rax_2 + 8) s<= 0)
        if (rbx != 0)
            rbx[1].d += 1
        
        *r14 = rdi
        int64_t* rcx = r14[1]
        
        if (rbx != rcx)
            if (rbx != 0)
                *(rbx + 0xc) += 1
                rcx = r14[1]
            
            if (rcx != 0)
                int32_t temp2_1 = *(rcx + 0xc)
                *(rcx + 0xc) -= 1
                
                if (temp2_1 == 1)
                    (*(*rcx + 8))(rcx, 1)
            
            r14[1] = rbx
        
        if (rbx != 0)
            rbx[1].d -= 1
            
            if (rbx[1].d == 1)
                (**rbx)(rbx)
                int32_t temp1_1 = *(rbx + 0xc)
                *(rbx + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*rbx)[1](rbx, 1)

return arg1
