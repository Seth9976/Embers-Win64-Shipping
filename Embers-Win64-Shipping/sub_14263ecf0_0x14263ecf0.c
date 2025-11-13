// 函数: sub_14263ecf0
// 地址: 0x14263ecf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x100)
void*** rdi = rax

if (rax == 0)
    rdi = nullptr
else
    sub_1426422e0(rax)
    *rdi = &data_1434513e8
    *(rdi + 0x70) = data_143f71450

void*** rax_1 = j_sub_140a82f30(0x18)
void*** rbx = rax_1

if (rax_1 == 0)
    rbx = nullptr
else
    rax_1[1].d = 1
    *(rax_1 + 0xc) = 1
    *rbx = &data_142d42ea8
    rbx[2] = rdi

*arg2 = rdi
void**** rsi = &rdi[1]
arg2[1] = rbx

if (rdi == 0)
    rsi = nullptr

if (rsi != 0)
    if (*rsi == 0)
        goto label_14263edc3
    
    void* rcx_1 = rsi[1]
    int32_t rax_2
    
    if (rcx_1 != 0)
        rax_2 = 0
        
        if (0 == *(rcx_1 + 8))
            *(rcx_1 + 8) = 0
        else
            rax_2 = *(rcx_1 + 8)
    
    if (rcx_1 == 0 || rax_2 s<= 0)
        rbx = arg2[1]
    label_14263edc3:
        
        if (rbx != 0)
            rbx[1].d += 1
        
        *rsi = rdi
        int64_t* rcx_2 = rsi[1]
        
        if (rbx != rcx_2)
            if (rbx != 0)
                *(rbx + 0xc) += 1
                rcx_2 = rsi[1]
            
            if (rcx_2 != 0)
                int32_t rax_3 = *(rcx_2 + 0xc)
                *(rcx_2 + 0xc) -= 1
                
                if (rax_3 == 1)
                    (*(*rcx_2 + 8))(rcx_2, 1)
            
            rsi[1] = rbx
        
        if (rbx != 0)
            rbx[1].d -= 1
            
            if (rbx[1].d == 1)
                (**rbx)(rbx)
                int32_t rax_7 = *(rbx + 0xc)
                *(rbx + 0xc) -= 1
                
                if (rax_7 == 1)
                    (*rbx)[1](rbx, 1)

void*** rbx_1 = *arg2
int64_t arg_8
sub_140d3a3a0(&arg_8, arg1)
*(rbx_1 + 0x9c) = arg_8
sub_142645a80(&(*arg2)[0x15], arg3)
void* rax_11 = (*(*arg1 + 0x150))(arg1)
int32_t zmm0_2

if (rax_11 == 0)
    zmm0_2 = (zx.o(0)).d
else
    zmm0_2 = *(rax_11 + 0x520)

void*** r15_1 = *arg2
int64_t* rbx_2 = arg2[1]
int64_t* (* var_78)(void* arg1, int64_t* arg2) = sub_1426638c0
int32_t var_70 = 0
r15_1[0x1d].d = zmm0_2

if (rbx_2 != 0)
    rbx_2[1].d += 1
    
    if (rbx_2 != 0)
        rbx_2[1].d += 1

void*** rax_12 = sub_140a84c80(0, 0x40, 0)
void*** var_88 = rax_12
void*** rdi_1 = rax_12

if (rax_12 != 0)
    int128_t var_58 = var_78.o
    void*** var_68 = r15_1
    int64_t* var_60_1 = rbx_2
    
    if (rbx_2 != 0)
        rbx_2[1].d += 1
        rdi_1 = var_88
    
    sub_142640560(rdi_1, arg1, &var_58, &var_68)

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        (**rbx_2)(rbx_2)
        int32_t rax_15 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (rax_15 == 1)
            (*(*rbx_2 + 8))(rbx_2, 1)
    
    rdi_1 = var_88
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            (**rbx_2)(rbx_2)
            int32_t rax_19 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (rax_19 == 1)
                (*(*rbx_2 + 8))(rbx_2, 1)
        
        rdi_1 = var_88

void var_48
int64_t* rax_21 = sub_140958da0(&var_48, nullptr, 0xff)
int64_t* rbx_4 = *rax_21 + 0x10
*rbx_4 = 0
rbx_4[1].d = 0

if (&var_88 != rbx_4 && rdi_1 != 0)
    void** r8_1 = *rdi_1
    r8_1[8](rdi_1, rbx_4, r8_1)

rbx_4[2].d = 2
void* rcx_16 = *rax_21
int64_t* rsi_2 = *(rcx_16 + 0x30)

if (rsi_2 != 0)
    rsi_2[9].d += 1
    rdi_1 = var_88

sub_140978a40(rcx_16, rax_21[1], rax_21[2].d, 1)

if (rsi_2 != 0)
    rsi_2[9].d -= 1
    
    if (rsi_2[9].d == 1)
        sub_140a2f6e0(rsi_2)
    
    rdi_1 = var_88

if (rdi_1 != 0)
    (*rdi_1)[7](rdi_1, 0)
    int64_t rax_23 = sub_140a84c80(rdi_1, 0, 0)
    
    if (rax_23 != 0)
        sub_140a74f90(rax_23)

return arg2
