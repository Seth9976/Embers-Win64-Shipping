// 函数: sub_141bb5350
// 地址: 0x141bb5350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg2[1]
int32_t var_40 = 0
uint64_t var_88 = *arg2

if (rbx != 0)
    rbx[1].d += 1

if (&var_88 != &arg1[0x1bd])
    var_88.o = *(arg1 + 0xde8)
    *(arg1 + 0xde8) = var_88.o

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

int64_t* rax_3 = arg1[0x1bd]
int64_t* var_80
uint64_t var_78
void* const var_70
uint64_t rcx_2
int64_t* rbx_1
uint64_t rsi
int32_t rdi_1
uint64_t* r14_1

if (rax_3 == 0)
    rsi = var_88
    r14_1 = &var_78
    rbx_1 = arg2
    rcx_2 = 0
    var_78 = 0
    rdi_1 = 4
    var_70 = nullptr
else
    rbx_1 = arg1[0x1be]
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    int32_t rdi = rax_3[1].d
    rsi = 0
    int64_t r14 = *rax_3
    var_88 = 0
    var_80.d = rdi
    
    if (rdi != 0)
        sub_1405a4c70(&var_88, rdi, 0)
        rsi = var_88
        memcpy(rsi, r14, rdi * 2)
        rcx_2 = var_78
        r14_1 = &var_88
        rdi_1 = 3
    else
        rcx_2 = var_78
        r14_1 = &var_88
        var_80:4.d = 0
        rdi_1 = 3

if (&arg1[0x23] != r14_1)
    uint64_t rcx_5 = arg1[0x23]
    
    if (rcx_5 != 0)
        sub_140a74f90(rcx_5)
    
    uint64_t rax_4 = *r14_1
    *r14_1 = 0
    arg1[0x23] = rax_4
    arg1[0x24].d = r14_1[1].d
    int32_t rax_6 = *(r14_1 + 0xc)
    r14_1[1] = 0
    rsi = var_88
    rcx_2 = var_78
    *(arg1 + 0x124) = rax_6

if ((rdi_1.b & 4) != 0)
    rdi_1 &= 0xfffffffb
    
    if (rcx_2 != 0)
        sub_140a74f90(rcx_2)

if ((rdi_1.b & 2) != 0)
    rdi_1 &= 0xfffffffd
    
    if (rsi != 0)
        sub_140a74f90(rsi)

if ((rdi_1.b & 1) != 0)
    rdi_1 &= 0xfffffffe
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp3_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)

if (arg1[0x1b9] != 0)
    var_78 = arg1[0x1bd]
    void* rax_10 = arg1[0x1be]
    var_70 = rax_10
    
    if (rax_10 != 0)
        *(rax_10 + 8) += 1
    
    sub_141bf4de0(arg1, &var_78)

uint64_t rsi_1 = 0
int64_t* rax_11 = *arg2
uint64_t* rax_12
int32_t rbx_3

if (rax_11 == 0)
    var_70.d = 0
    rax_12 = &var_78
    rbx_3 = 0x10
else
    int32_t rbx_2 = rax_11[1].d
    int64_t r14_2 = *rax_11
    var_88 = 0
    var_80.d = rbx_2
    
    if (rbx_2 != 0)
        sub_1405a4c70(&var_88, rbx_2, 0)
        rsi_1 = var_88
        memcpy(rsi_1, r14_2, rbx_2 * 2)
        rax_12 = &var_88
        rbx_3 = 8
    else
        var_80:4.d = 0
        rax_12 = &var_88
        rbx_3 = 8

int32_t rbx_4 = rbx_3 | rdi_1
*rax_12 = 0
int32_t rdi_2 = rax_12[1].d
rax_12[1] = 0
uint64_t var_58 = 0
int32_t var_4c = 0
int32_t var_50 = rdi_2

if (rdi_2 != 0)
    sub_1405a4c70(&var_58, rdi_2, 0)
    memcpy(var_58, rsi_1, rdi_2 * 2)

char r8
char var_48 = r8
int64_t result = sub_1405a9f90(&arg1[0x1b1], &var_58)
uint64_t rcx_15 = var_58

if (rcx_15 != 0)
    result = sub_140a74f90(rcx_15)

if (rsi_1 != 0)
    result = sub_140a74f90(rsi_1)

if ((rbx_4.b & 0x10) != 0)
    uint64_t rcx_17 = var_78
    rbx_4 &= 0xffffffef
    
    if (rcx_17 != 0)
        result = sub_140a74f90(rcx_17)

if ((rbx_4.b & 8) != 0)
    uint64_t rcx_18 = var_88
    
    if (rcx_18 != 0)
        result = sub_140a74f90(rcx_18)

int64_t* rbx_5 = arg2[1]

if (rbx_5 != 0)
    rbx_5[1].d -= 1
    
    if (rbx_5[1].d == 1)
        result = (**rbx_5)(rbx_5)
        int32_t temp5_1 = *(rbx_5 + 0xc)
        *(rbx_5 + 0xc) -= 1
        
        if (temp5_1 == 1)
            return (*(*rbx_5 + 8))(rbx_5, 1)

return result
