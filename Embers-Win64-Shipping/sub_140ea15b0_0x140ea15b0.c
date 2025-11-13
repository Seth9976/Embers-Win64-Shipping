// 函数: sub_140ea15b0
// 地址: 0x140ea15b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi = arg2[1]
int512_t (* rdi)(void* arg1) = *arg2
int512_t (* var_98)(void* arg1) = rdi
int64_t* rbx = rsi
int64_t* var_90 = rsi

if (rsi != 0)
    rsi[1].d += 1
    rdi = *arg2
    rbx = arg2[1]

int512_t (* r12)(void* arg1) = nullptr
int64_t (* var_88)(int64_t* arg1) = sub_140e9eb0c
int32_t var_80 = 0
int128_t zmm0 = var_88.o
int32_t var_a0 = 0
int64_t (* var_b8)(void* arg1, int32_t arg2 @ zmm1) = sub_140edadc0
int512_t (* var_a8)(void* arg1) = sub_140ebfdf0
var_88.o = var_a8.o
int32_t var_b0 = 0
int128_t var_78 = zmm0
var_a8 = rdi
var_a0.q = rbx

if (rbx != 0)
    rbx[1].d += 1
    rbx = arg2[1]
    rdi = *arg2
    
    if (rbx != 0)
        rbx[1].d += 1

void*** rax = sub_140a84c80(0, 0x40, 0)

if (rax != 0)
    *rax = &data_142edec78
    rax[1] = rdi
    rax[2] = rbx
    
    if (rbx != 0)
        *(rbx + 0xc) += 1
    
    *(rax + 0x18) = var_b8.o
    rax[6] = sub_140a387b0()
    *rax = &data_142edecd0

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

var_b8 = *arg2
void* rax_5 = arg2[1]
var_b0.q = rax_5

if (rax_5 != 0)
    *(rax_5 + 8) += 1

void* rbx_1 = *(arg1 + 0x3a8)
void var_68
int32_t* rax_6 = sub_140e8e940(&var_68, &var_b8, &var_88)
void*** rax_7 = sub_140f2a990(rbx_1, arg3)
rax_7[7].d = *rax_6
*(rax_7 + 0x3c) = rax_6[1].b
sub_140692f90(&rax_7[8], &rax_6[2])

if (&var_b8 != &rax_7[0xa])
    if (rax != 0)
        (*rax)[8](rax, &rax_7[0xa])
    else if (rax_7[0xb].d != 0)
        int64_t* rcx_8 = rax_7[0xa]
        
        if (rcx_8 != 0)
            (*(*rcx_8 + 0x38))(rcx_8, 0)
            int64_t rcx_9 = rax_7[0xa]
            
            if (rcx_9 != 0)
                rax_7[0xa] = sub_140a84c80(rcx_9, 0, 0)
            
            rax_7[0xb].d = 0

void var_50
sub_140e99b50(sub_140edb400(rax_7, sub_140e8ea40(&var_50, &var_a8, &var_78)), &var_98)
void var_60
sub_140745b20(&var_60)

if (rax != 0)
    (*rax)[7](rax, 0)
    int64_t rax_14 = sub_140a84c80(rax, 0, 0)
    
    if (rax_14 != 0)
        sub_140a74f90(rax_14)

void var_48
sub_140745b20(&var_48)

if (rsi != 0)
    rsi[1].d -= 1
    
    if (rsi[1].d == 1)
        (**rsi)(rsi)
        int32_t temp3_1 = *(rsi + 0xc)
        *(rsi + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rsi + 8))(rsi, 1)

int64_t r14_1 = sx.q(arg3)
void* rax_19

if (r14_1.d != 0xffffffff)
    int32_t rsi_1 = *(arg1 + 0x3c0)
    *(arg1 + 0x3c0) = rsi_1 + 1
    
    if (rsi_1 + 1 s> *(arg1 + 0x3c4))
        sub_1405a4f90(arg1 + 0x3b8)
    
    int64_t rbx_6 = r14_1 << 4
    int64_t rdx_10 = *(arg1 + 0x3b8) + rbx_6
    memmove(rdx_10 + 0x10, rdx_10, (rsi_1 - r14_1.d) << 4)
    int64_t rcx_26 = *(arg1 + 0x3b8)
    *(rbx_6 + rcx_26) = *arg2
    rax_19 = arg2[1]
    *(rbx_6 + rcx_26 + 8) = rax_19
else
    int64_t rbx_4 = sx.q(*(arg1 + 0x3c0))
    int32_t rax_17 = (rbx_4 + 1).d
    *(arg1 + 0x3c0) = rax_17
    
    if (rax_17 s> *(arg1 + 0x3c4))
        sub_1405a4f90(arg1 + 0x3b8)
    
    int64_t* rcx_23 = (rbx_4 << 4) + *(arg1 + 0x3b8)
    *rcx_23 = *arg2
    rax_19 = arg2[1]
    rcx_23[1] = rax_19

if (rax_19 != 0)
    *(rax_19 + 8) += 1

int64_t* rbx_7 = *(arg1 + 0x10)
int64_t* rdi_3 = *arg2

if (rbx_7 != 0)
    int32_t rax_22 = rbx_7[1].d
    
    if (rax_22 != 0)
        rbx_7[1].d = rax_22 + 1
        rax_22.b = 1
    
    if (rax_22.b == 0)
        rbx_7 = nullptr
    
    if (rbx_7 != 0)
        r12 = *(arg1 + 8)

var_98 = r12
int64_t* var_90_1 = rbx_7

if (rbx_7 != 0)
    int32_t rax_23 = rbx_7[1].d
    rbx_7[1].d = rax_23
    
    if (rax_23 == 0)
        (**rbx_7)(rbx_7)
        int32_t temp4_1 = *(rbx_7 + 0xc)
        *(rbx_7 + 0xc) -= 1
        
        if (temp4_1 == 1)
            (*(*rbx_7 + 8))(rbx_7, 1)

return (*(*rdi_3 + 0x248))(rdi_3, &var_98)
