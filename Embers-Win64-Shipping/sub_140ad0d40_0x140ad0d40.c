// 函数: sub_140ad0d40
// 地址: 0x140ad0d40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = j_sub_140a82f30(0x40)
int64_t* rdi = rax

if (rax == 0)
    rdi = nullptr
else
    __builtin_memset(rax, 0, 0x30)
    rax[6] = 4
    rax[7].d = 0

void*** rax_1 = j_sub_140a82f30(0x18)
void*** rbx = rax_1

if (rax_1 == 0)
    rbx = nullptr
else
    rax_1[1].d = 1
    *(rax_1 + 0xc) = 1
    *rbx = &data_142e6d7f8
    rbx[2] = rdi

*arg1 = rdi
arg1[1] = rbx

if (rdi != 0)
    void* rax_2
    
    if (*rdi != 0)
        rax_2 = rdi[1]
    
    if (*rdi == 0 || rax_2 == 0 || *(rax_2 + 8) s<= 0)
        if (rbx != 0)
            rbx[1].d += 1
        
        *rdi = rdi
        int64_t* rcx = rdi[1]
        
        if (rbx != rcx)
            if (rbx != 0)
                *(rbx + 0xc) += 1
                rcx = rdi[1]
            
            if (rcx != 0)
                int32_t temp3_1 = *(rcx + 0xc)
                *(rcx + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*rcx + 8))(rcx, 1)
            
            rdi[1] = rbx
        
        if (rbx != 0)
            rbx[1].d -= 1
            
            if (rbx[1].d == 1)
                (**rbx)(rbx)
                int32_t temp2_1 = *(rbx + 0xc)
                *(rbx + 0xc) -= 1
                
                if (temp2_1 == 1)
                    (*rbx)[1](rbx, 1)

*(*arg1 + 0x30) = arg2
void*** var_38
void**** rax_7 = sub_140ad0b80(&var_38, arg2)
int64_t* rdi_1 = rax_7[1]
void*** r12 = *rax_7

if (rdi_1 != 0)
    rdi_1[1].d += 1

void* r15 = *arg1
int64_t rbp_1 = sx.q(*(r15 + 0x18))
int32_t rax_8 = (rbp_1 + 1).d
*(r15 + 0x18) = rax_8

if (rax_8 s> *(r15 + 0x1c))
    sub_1405a4f90(r15 + 0x10)

void**** rax_11 = (rbp_1 << 4) + *(r15 + 0x10)
*rax_11 = r12
rax_11[1] = rdi_1

if (rdi_1 != 0)
    rdi_1[1].d += 1

int64_t* rbx_1 = *(r15 + 8)

if (rbx_1 != 0)
    int32_t rax_12 = rbx_1[1].d
    
    if (rax_12 != 0)
        rbx_1[1].d = rax_12 + 1
        rax_12.b = 1
    
    if (rax_12.b == 0)
        rbx_1 = nullptr
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp8_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp8_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)

if (rdi_1 != 0)
    rdi_1[1].d -= 1
    
    if (rdi_1[1].d == 1)
        (**rdi_1)(rdi_1)
        int32_t temp5_1 = *(rdi_1 + 0xc)
        *(rdi_1 + 0xc) -= 1
        
        if (temp5_1 == 1)
            (*(*rdi_1 + 8))(rdi_1, 1)

int64_t* var_30

if (var_30 != 0)
    var_30[1].d -= 1
    
    if (var_30[1].d == 1)
        (**var_30)(var_30)
        int32_t temp6_1 = *(var_30 + 0xc)
        *(var_30 + 0xc) -= 1
        
        if (temp6_1 == 1)
            (*(*var_30 + 8))(var_30, 1)

if (sub_140ab3dc0(arg3) == 0)
    void**** rax_20 = sub_140a005b0(&var_38, arg3)
    int64_t* rdi_2 = rax_20[1]
    void*** r12_1 = *rax_20
    
    if (rdi_2 != 0)
        rdi_2[1].d += 1
    
    void* r15_1 = *arg1
    int64_t rbp_2 = sx.q(*(r15_1 + 0x18))
    int32_t rax_21 = (rbp_2 + 1).d
    *(r15_1 + 0x18) = rax_21
    
    if (rax_21 s> *(r15_1 + 0x1c))
        sub_1405a4f90(r15_1 + 0x10)
    
    void**** rax_24 = (rbp_2 << 4) + *(r15_1 + 0x10)
    *rax_24 = r12_1
    rax_24[1] = rdi_2
    
    if (rdi_2 != 0)
        rdi_2[1].d += 1
    
    int64_t* rbx_3 = *(r15_1 + 8)
    
    if (rbx_3 != 0)
        int32_t rax_25 = rbx_3[1].d
        
        if (rax_25 != 0)
            rbx_3[1].d = rax_25 + 1
            rax_25.b = 1
        
        if (rax_25.b == 0)
            rbx_3 = nullptr
        
        if (rbx_3 != 0)
            rbx_3[1].d -= 1
            
            if (rbx_3[1].d == 1)
                (**rbx_3)(rbx_3)
                int32_t temp14_1 = *(rbx_3 + 0xc)
                *(rbx_3 + 0xc) -= 1
                
                if (temp14_1 == 1)
                    (*(*rbx_3 + 8))(rbx_3, 1)
    
    if (rdi_2 != 0)
        rdi_2[1].d -= 1
        
        if (rdi_2[1].d == 1)
            (**rdi_2)(rdi_2)
            int32_t temp11_1 = *(rdi_2 + 0xc)
            *(rdi_2 + 0xc) -= 1
            
            if (temp11_1 == 1)
                (*(*rdi_2 + 8))(rdi_2, 1)
    
    if (var_30 != 0)
        var_30[1].d -= 1
        
        if (var_30[1].d == 1)
            (**var_30)(var_30)
            int32_t temp12_1 = *(var_30 + 0xc)
            *(var_30 + 0xc) -= 1
            
            if (temp12_1 == 1)
                (*(*var_30 + 8))(var_30, 1)

return arg1
