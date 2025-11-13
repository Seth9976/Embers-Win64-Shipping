// 函数: sub_1409572b0
// 地址: 0x1409572b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x40)
void*** rdi = rax

if (rax == 0)
    rdi = nullptr
else
    rax[1].d = 1
    *(rax + 0xc) = 1
    *rdi = &data_142e21840
    rdi[3] = 0
    rdi[4] = 0
    rdi[2] = &data_142e1f860
    sub_140596d10(&rdi[5], arg3)
    rdi[7] = arg4

void** rbx_1 = &rdi[3]

if (rdi == -0x10)
    rbx_1 = nullptr

if (rbx_1 != 0)
    void* rax_1
    
    if (*rbx_1 != 0)
        rax_1 = rbx_1[1]
    
    if (*rbx_1 == 0 || rax_1 == 0 || *(rax_1 + 8) s<= 0)
        if (rdi != 0)
            rdi[1].d += 1
        
        *rbx_1 = &rdi[2]
        int64_t* rcx_1 = rbx_1[1]
        
        if (rdi != rcx_1)
            if (rdi != 0)
                *(rdi + 0xc) += 1
                rcx_1 = rbx_1[1]
            
            if (rcx_1 != 0)
                int32_t temp3_1 = *(rcx_1 + 0xc)
                *(rcx_1 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*rcx_1 + 8))(rcx_1, 1)
            
            rbx_1[1] = rdi
        
        if (rdi != 0)
            rdi[1].d -= 1
            
            if (rdi[1].d == 1)
                (**rdi)(rdi)
                int32_t temp2_1 = *(rdi + 0xc)
                *(rdi + 0xc) -= 1
                
                if (temp2_1 == 1)
                    (*rdi)[1](rdi, 1)

*arg2 = &rdi[2]
arg2[1] = rdi

if (rdi != 0)
    int32_t rax_5 = rdi[1].d
    rdi[1].d = rax_5
    
    if (rax_5 == 0)
        (**rdi)(rdi)
        int32_t temp0_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp0_1 == 1)
            (*rdi)[1](rdi, 1)

return arg2
