// 函数: sub_14266e3b0
// 地址: 0x14266e3b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x148)
void*** rbp

if (rax == 0)
    rbp = nullptr
else
    rbp = sub_142642140(rax)

void*** rax_2 = j_sub_140a82f30(0x18)
void*** rbx = rax_2

if (rax_2 == 0)
    rbx = nullptr
else
    rax_2[1].d = 1
    *(rax_2 + 0xc) = 1
    *rbx = &data_142d42ea8
    rbx[2] = rbp

*arg2 = rbp
void**** rdi = &rbp[1]
arg2[1] = rbx

if (rbp == 0)
    rdi = nullptr

if (rdi != 0)
    if (*rdi == 0)
        goto label_14266e46e
    
    void* rcx_1 = rdi[1]
    int32_t rax_3
    
    if (rcx_1 != 0)
        rax_3 = 0
        
        if (0 == *(rcx_1 + 8))
            *(rcx_1 + 8) = 0
        else
            rax_3 = *(rcx_1 + 8)
    
    if (rcx_1 == 0 || rax_3 s<= 0)
        rbx = arg2[1]
    label_14266e46e:
        
        if (rbx != 0)
            rbx[1].d += 1
        
        *rdi = rbp
        int64_t* rcx_2 = rdi[1]
        
        if (rbx != rcx_2)
            if (rbx != 0)
                *(rbx + 0xc) += 1
                rcx_2 = rdi[1]
            
            if (rcx_2 != 0)
                int32_t rax_4 = *(rcx_2 + 0xc)
                *(rcx_2 + 0xc) -= 1
                
                if (rax_4 == 1)
                    (*(*rcx_2 + 8))(rcx_2, 1)
            
            rdi[1] = rbx
        
        if (rbx != 0)
            rbx[1].d -= 1
            
            if (rbx[1].d == 1)
                (**rbx)(rbx)
                int32_t rax_8 = *(rbx + 0xc)
                *(rbx + 0xc) -= 1
                
                if (rax_8 == 1)
                    (*rbx)[1](rbx, 1)

void*** rbx_1 = *arg2
int64_t arg_10
sub_140d3a3a0(&arg_10, arg1)
*(rbx_1 + 0x9c) = arg_10
sub_142645a80(&(*arg2)[0x15], arg3)
void*** rbx_2 = *arg2
int32_t zmm0 = sub_14265cb80(arg1)
void*** r15_1 = *arg2
rbx_2[0x1d].d = zmm0
int64_t* rbx_3 = arg2[1]
int64_t* (* var_78)(void* arg1, int64_t* arg2) = sub_1426638c0
int32_t var_70 = 0

if (rbx_3 != 0)
    rbx_3[1].d += 1
    
    if (rbx_3 != 0)
        rbx_3[1].d += 1

void*** rax_11 = sub_140a84c80(0, 0x40, 0)
void*** var_88 = rax_11
void*** rdi_1 = rax_11

if (rax_11 != 0)
    int128_t var_58 = var_78.o
    void*** var_68 = r15_1
    int64_t* var_60_1 = rbx_3
    
    if (rbx_3 != 0)
        rbx_3[1].d += 1
        rdi_1 = var_88
    
    sub_142640560(rdi_1, arg1, &var_58, &var_68)

if (rbx_3 != 0)
    rbx_3[1].d -= 1
    
    if (rbx_3[1].d == 1)
        (**rbx_3)(rbx_3)
        int32_t rax_14 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (rax_14 == 1)
            (*(*rbx_3 + 8))(rbx_3, 1)
    
    rdi_1 = var_88
    
    if (rbx_3 != 0)
        rbx_3[1].d -= 1
        
        if (rbx_3[1].d == 1)
            (**rbx_3)(rbx_3)
            int32_t rax_18 = *(rbx_3 + 0xc)
            *(rbx_3 + 0xc) -= 1
            
            if (rax_18 == 1)
                (*(*rbx_3 + 8))(rbx_3, 1)
        
        rdi_1 = var_88

void var_48
int64_t* rax_20 = sub_140958da0(&var_48, nullptr, 0xff)
int64_t* rbx_5 = *rax_20 + 0x10
*rbx_5 = 0
rbx_5[1].d = 0

if (&var_88 != rbx_5 && rdi_1 != 0)
    void** r8_1 = *rdi_1
    r8_1[8](rdi_1, rbx_5, r8_1)

rbx_5[2].d = 2
void* rcx_16 = *rax_20
int64_t* rbp_1 = *(rcx_16 + 0x30)

if (rbp_1 != 0)
    rbp_1[9].d += 1
    rdi_1 = var_88

sub_140978a40(rcx_16, rax_20[1], rax_20[2].d, 1)

if (rbp_1 != 0)
    rbp_1[9].d -= 1
    
    if (rbp_1[9].d == 1)
        sub_140a2f6e0(rbp_1)
    
    rdi_1 = var_88

if (rdi_1 != 0)
    (*rdi_1)[7](rdi_1, 0)
    int64_t rax_22 = sub_140a84c80(rdi_1, 0, 0)
    
    if (rax_22 != 0)
        sub_140a74f90(rax_22)

return arg2
