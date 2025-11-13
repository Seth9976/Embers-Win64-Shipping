// 函数: sub_141a279a0
// 地址: 0x141a279a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x18)
void*** rbx = rax

if (rax == 0)
    rbx = nullptr
else
    rax[1].d = 1
    *(rax + 0xc) = 1
    *rbx = &data_142ed9c48
    rbx[2] = arg1

int64_t* rdi = arg1 + 8

if (arg1 == 0)
    rdi = nullptr

if (rdi != 0)
    void* rax_1
    
    if (*rdi != 0)
        rax_1 = rdi[1]
    
    if (*rdi == 0 || rax_1 == 0 || *(rax_1 + 8) s<= 0)
        if (rbx != 0)
            rbx[1].d += 1
        
        *rdi = arg1
        int64_t* rcx = rdi[1]
        
        if (rbx != rcx)
            if (rbx != 0)
                *(rbx + 0xc) += 1
                rcx = rdi[1]
            
            if (rcx != 0)
                int32_t temp6_1 = *(rcx + 0xc)
                *(rcx + 0xc) -= 1
                
                if (temp6_1 == 1)
                    (*(*rcx + 8))(rcx, 1)
            
            rdi[1] = rbx
        
        if (rbx != 0)
            rbx[1].d -= 1
            
            if (rbx[1].d == 1)
                (**rbx)(rbx)
                int32_t temp5_1 = *(rbx + 0xc)
                *(rbx + 0xc) -= 1
                
                if (temp5_1 == 1)
                    (*rbx)[1](rbx, 1)

void var_18
void* result = &var_18

if (arg1 + 0x18 == &var_18)
label_141a27ab0:
    
    if (rbx != 0)
        rbx[1].d -= 1
        
        if (rbx[1].d == 1)
            result = (**rbx)(rbx)
            int32_t temp1_1 = *(rbx + 0xc)
            *(rbx + 0xc) -= 1
            
            if (temp1_1 == 1)
                return (*rbx)[1](rbx, 1)
else
    *(arg1 + 0x18) = arg1
    int64_t* rdi_1 = *(arg1 + 0x20)
    
    if (rbx == rdi_1)
        goto label_141a27ab0
    
    *(arg1 + 0x20) = rbx
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            result = (**rdi_1)(rdi_1)
            int32_t temp3_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (temp3_1 == 1)
                return (*rdi_1)[1](rdi_1, 1)

return result
