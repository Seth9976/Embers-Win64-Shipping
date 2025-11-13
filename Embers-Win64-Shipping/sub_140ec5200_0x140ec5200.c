// 函数: sub_140ec5200
// 地址: 0x140ec5200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x58)
void*** rdi = rax

if (rax == 0)
    rdi = nullptr
else
    int32_t zmm1 = arg2[1]
    int32_t zmm0_1 = *arg2
    rax[1] = 0
    rax[2] = 0
    rax[3].d = 0x3f800000
    rax[4].d = 0
    rax[5] = 0
    rax[6] = 0
    *rdi = &data_142eda1b0
    rdi[7] = 1
    rdi[8].d = 0
    *(rdi + 0x44) = zmm0_1
    rdi[9].d = zmm1
    *(rdi + 0x4c) = 0
    rdi[0xa] = 0

void*** rax_1 = j_sub_140a82f30(0x18)
void*** rbx_1 = rax_1

if (rax_1 == 0)
    rbx_1 = nullptr
else
    rax_1[1].d = 1
    *(rax_1 + 0xc) = 1
    *rbx_1 = &data_142d42ea8
    rbx_1[2] = rdi

*arg1 = rdi
void**** r14 = &rdi[1]
arg1[1] = rbx_1

if (rdi == 0)
    r14 = nullptr

if (r14 != 0)
    void* rax_2
    
    if (*r14 != 0)
        rax_2 = r14[1]
    
    if (*r14 == 0 || rax_2 == 0 || *(rax_2 + 8) s<= 0)
        if (rbx_1 != 0)
            rbx_1[1].d += 1
        
        *r14 = rdi
        int64_t* rcx = r14[1]
        
        if (rbx_1 != rcx)
            if (rbx_1 != 0)
                *(rbx_1 + 0xc) += 1
                rcx = r14[1]
            
            if (rcx != 0)
                int32_t temp2_1 = *(rcx + 0xc)
                *(rcx + 0xc) -= 1
                
                if (temp2_1 == 1)
                    (*(*rcx + 8))(rcx, 1)
            
            r14[1] = rbx_1
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp1_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*rbx_1)[1](rbx_1, 1)

return arg1
