// 函数: sub_140a15d10
// 地址: 0x140a15d10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142e4d740
arg1[1] = 0
arg1[2] = 0
arg1[3] = 2
arg1[4] = 0
arg1[5] = 0
__builtin_memset(&arg1[7], 0, 0x58)
arg1[0x12].b = 1
void*** rax = j_sub_140a82f30(0x28)
void*** rdi = rax

if (rax == 0)
    rdi = nullptr
else
    __builtin_memset(&rax[1], 0, 0x20)
    *rdi = &data_142e4cd50

void*** rax_1 = j_sub_140a82f30(0x18)
void*** rbx = rax_1

if (rax_1 == 0)
    rbx = nullptr
else
    rax_1[1].d = 1
    *(rax_1 + 0xc) = 1
    *rbx = &data_142d42ea8
    rbx[2] = rdi

void**** r14 = &rdi[1]

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
                int32_t temp6_1 = *(rcx + 0xc)
                *(rcx + 0xc) -= 1
                
                if (temp6_1 == 1)
                    (*(*rcx + 8))(rcx, 1)
            
            r14[1] = rbx
        
        if (rbx != 0)
            rbx[1].d -= 1
            
            if (rbx[1].d == 1)
                (**rbx)(rbx)
                int32_t temp5_1 = *(rbx + 0xc)
                *(rbx + 0xc) -= 1
                
                if (temp5_1 == 1)
                    (*rbx)[1](rbx, 1)

void var_28

if (&arg1[9] == &var_28)
label_140a15eac:
    
    if (rbx != 0)
        rbx[1].d -= 1
        
        if (rbx[1].d == 1)
            (**rbx)(rbx)
            int32_t temp1_1 = *(rbx + 0xc)
            *(rbx + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*rbx)[1](rbx, 1)
else
    arg1[9] = rdi
    void*** rdi_1 = arg1[0xa]
    
    if (rbx == rdi_1)
        goto label_140a15eac
    
    arg1[0xa] = rbx
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t temp3_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*rdi_1)[1](rdi_1, 1)

arg1[6].b = 0
return arg1
