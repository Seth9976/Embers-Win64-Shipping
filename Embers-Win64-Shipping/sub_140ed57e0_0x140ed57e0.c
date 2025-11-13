// 函数: sub_140ed57e0
// 地址: 0x140ed57e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r8 = *(arg1 + 0x3b8)
int64_t* rsi = r8
void* rax_2 = &r8[sx.q(*(arg1 + 0x3c0)) * 2]
int32_t rsi_1

if (r8 == rax_2)
label_140ed5838:
    rsi_1 = -1
else
    while (*rsi != *arg2)
        rsi = &rsi[2]
        
        if (rsi == rax_2)
            goto label_140ed5838
    
    rsi_1 = ((rsi - r8) s>> 4).d

int64_t* rbx = arg3[1]
int128_t* rcx_3 = &r8[sx.q(rsi_1) * 2]
int64_t (* var_c8)(int64_t* arg1) = *arg3

if (rbx != 0)
    rbx[1].d += 1

if (&var_c8 != rcx_3)
    var_c8.o = *rcx_3
    *rcx_3 = var_c8.o

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

void* rax_6 = *arg2
int64_t* r14_1 = arg3[1]
int512_t (* rdi)(void* arg1) = *arg3
int64_t* rbx_1 = r14_1
int512_t (* var_88)(void* arg1) = rdi
int64_t* var_80 = r14_1
*(rdi + 0x3a0) = *(rax_6 + 0x3a0)

if (r14_1 != 0)
    r14_1[1].d += 1
    rdi = *arg3
    rbx_1 = arg3[1]

int512_t (* r13)(void* arg1) = nullptr
var_c8 = sub_140e9eb0c
int64_t* var_c0
var_c0.d = 0
int128_t zmm0 = var_c8.o
int32_t var_90 = 0
int64_t (* var_b0)(void* arg1, int32_t arg2 @ zmm1) = sub_140edadc0
int512_t (* var_98)(void* arg1) = sub_140ebfdf0
var_c8.o = var_98.o
int32_t var_a8 = 0
int128_t var_78 = zmm0
var_98 = rdi
var_90.q = rbx_1

if (rbx_1 != 0)
    rbx_1[1].d += 1
    rbx_1 = arg3[1]
    rdi = *arg3
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1

void*** rax_7 = sub_140a84c80(0, 0x40, 0)

if (rax_7 != 0)
    *rax_7 = &data_142edec78
    rax_7[1] = rdi
    rax_7[2] = rbx_1
    
    if (rbx_1 != 0)
        *(rbx_1 + 0xc) += 1
    
    *(rax_7 + 0x18) = var_b0.o
    rax_7[6] = sub_140a387b0()
    *rax_7 = &data_142edecd0

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp3_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

var_b0 = *arg3
void* rax_12 = arg3[1]
var_a8.q = rax_12

if (rax_12 != 0)
    *(rax_12 + 8) += 1

void* rbx_3 = *(arg1 + 0x3a8)
void var_68
int32_t* rax_13 = sub_140e8e940(&var_68, &var_b0, &var_c8)
void* rax_14 = sub_140f61a40(rbx_3, rsi_1)
*(rax_14 + 0x38) = *rax_13
*(rax_14 + 0x3c) = rax_13[1].b
sub_140692f90(rax_14 + 0x40, &rax_13[2])

if (&var_b0 != rax_14 + 0x50)
    if (rax_7 != 0)
        (*rax_7)[8](rax_7, rax_14 + 0x50)
    else if (*(rax_14 + 0x58) != 0)
        int64_t* rcx_15 = *(rax_14 + 0x50)
        
        if (rcx_15 != 0)
            (*(*rcx_15 + 0x38))(rcx_15, 0)
            int64_t rcx_16 = *(rax_14 + 0x50)
            
            if (rcx_16 != 0)
                *(rax_14 + 0x50) = sub_140a84c80(rcx_16, 0, 0)
            
            *(rax_14 + 0x58) = 0

void var_50
sub_140e99b50(sub_140edb400(rax_14, sub_140e8ea40(&var_50, &var_98, &var_78)), &var_88)
void var_60
sub_140745b20(&var_60)

if (rax_7 != 0)
    (*rax_7)[7](rax_7, 0)
    int64_t rax_21 = sub_140a84c80(rax_7, 0, 0)
    
    if (rax_21 != 0)
        sub_140a74f90(rax_21)

void var_48
sub_140745b20(&var_48)

if (r14_1 != 0)
    r14_1[1].d -= 1
    
    if (r14_1[1].d == 1)
        (**r14_1)(r14_1)
        int32_t temp5_1 = *(r14_1 + 0xc)
        *(r14_1 + 0xc) -= 1
        
        if (temp5_1 == 1)
            (*(*r14_1 + 8))(r14_1, 1)

int64_t* rdi_2 = *arg3
int64_t* rbx_5 = *(arg1 + 0x10)

if (rbx_5 != 0)
    int32_t rax_25 = rbx_5[1].d
    
    if (rax_25 != 0)
        rbx_5[1].d = rax_25 + 1
        rax_25.b = 1
    
    if (rax_25.b == 0)
        rbx_5 = nullptr
    
    if (rbx_5 != 0)
        r13 = *(arg1 + 8)

var_88 = r13
int64_t* var_80_1 = rbx_5

if (rbx_5 != 0)
    int32_t rax_27 = rbx_5[1].d
    rbx_5[1].d = rax_27
    
    if (rax_27 == 0)
        (**rbx_5)(rbx_5)
        int32_t temp6_1 = *(rbx_5 + 0xc)
        *(rbx_5 + 0xc) -= 1
        
        if (temp6_1 == 1)
            (*(*rbx_5 + 8))(rbx_5, 1)

return (*(*rdi_2 + 0x248))(rdi_2, &var_88)
