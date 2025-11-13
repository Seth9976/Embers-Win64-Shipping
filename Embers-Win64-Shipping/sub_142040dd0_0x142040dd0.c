// 函数: sub_142040dd0
// 地址: 0x142040dd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = j_sub_140a82f30(0x78)
void** rdi_1

if (rax == 0)
    rdi_1 = nullptr
else
    rdi_1 = sub_1421380b0(rax, arg1, arg2)

void*** rax_2 = j_sub_140a82f30(0x18)
void*** rbx_1 = rax_2

if (rax_2 == 0)
    rbx_1 = nullptr
else
    rax_2[1].d = 1
    *(rax_2 + 0xc) = 1
    *rbx_1 = &data_1432a4c88
    rbx_1[2] = rdi_1

if (rdi_1 != 0)
    void* rax_3
    
    if (*rdi_1 != 0)
        rax_3 = rdi_1[1]
    
    if (*rdi_1 == 0 || rax_3 == 0 || *(rax_3 + 8) s<= 0)
        if (rbx_1 != 0)
            rbx_1[1].d += 1
        
        *rdi_1 = rdi_1
        int64_t* rcx_1 = rdi_1[1]
        
        if (rbx_1 != rcx_1)
            if (rbx_1 != 0)
                *(rbx_1 + 0xc) += 1
                rcx_1 = rdi_1[1]
            
            if (rcx_1 != 0)
                int32_t temp4_1 = *(rcx_1 + 0xc)
                *(rcx_1 + 0xc) -= 1
                
                if (temp4_1 == 1)
                    (*(*rcx_1 + 8))(rcx_1, 1)
            
            rdi_1[1] = rbx_1
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp3_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*rbx_1)[1](rbx_1, 1)

char rax_7 = sub_142155de0(rdi_1)

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp1_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*rbx_1)[1](rbx_1, 1)

return zx.q(rax_7)
