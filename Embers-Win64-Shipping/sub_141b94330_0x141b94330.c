// 函数: sub_141b94330
// 地址: 0x141b94330
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r14 = nullptr
int32_t arg_8 = 0
*(arg1 + 0x50) = *arg2
int64_t* rdi = arg2[1]
int64_t* rbx = *(arg1 + 0x58)

if (rdi != rbx)
    if (rdi != 0)
        *(rdi + 0xc) += 1
        rbx = *(arg1 + 0x58)
    
    if (rbx != 0)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)
    
    *(arg1 + 0x58) = rdi
    rbx = rdi

char var_38 = 1
void* rcx_1 = nullptr
int64_t var_30 = 0
int32_t var_28 = 0
int128_t var_48 = *(arg1 + 0x38)

if (rbx != 0)
    int32_t rax_2 = rbx[1].d
    
    if (rax_2 != 0)
        rbx[1].d = rax_2 + 1
        rax_2.b = 1
    
    if (rax_2.b == 0)
        rbx = nullptr
    
    if (rbx != 0)
        rcx_1 = *(arg1 + 0x50)

sub_140f15600(rcx_1, &var_48)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp2_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rbx + 8))(rbx, 1)

sub_140745b20(&var_30)
int64_t* rbx_1 = *(arg1 + 0x58)
int64_t* rcx_5 = nullptr

if (rbx_1 != 0)
    int32_t rax_5 = rbx_1[1].d
    
    if (rax_5 != 0)
        rbx_1[1].d = rax_5 + 1
        rax_5.b = 1
    
    if (rax_5.b == 0)
        rbx_1 = nullptr
    
    if (rbx_1 != 0)
        rcx_5 = *(arg1 + 0x50)

sub_140f5e570(rcx_5, zx.d(*(arg1 + 0x48)))

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp4_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp4_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

int64_t* rbx_2 = *(arg1 + 0x58)
int64_t* rcx_8 = nullptr

if (rbx_2 != 0)
    int32_t rax_8 = rbx_2[1].d
    
    if (rax_8 != 0)
        rbx_2[1].d = rax_8 + 1
        rax_8.b = 1
    
    if (rax_8.b == 0)
        rbx_2 = nullptr
    
    if (rbx_2 != 0)
        rcx_8 = *(arg1 + 0x50)

sub_140f61770(rcx_8, zx.d(*(arg1 + 0x49)))

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        (**rbx_2)(rbx_2)
        int32_t temp6_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp6_1 == 1)
            (*(*rbx_2 + 8))(rbx_2, 1)

int64_t* rcx_11 = *(arg1 + 0x30)
void** (** rcx_12)(void** arg1, int64_t arg2, int64_t* arg3, int64_t* arg4)
int32_t rbp
int32_t* rdi_1
void** (* var_78)(void** arg1, int64_t arg2, int64_t* arg3, int64_t* arg4)

if (rcx_11 == 0)
    rdi_1 = data_143e244b8
    var_78 = data_143e244b0
    int32_t* var_70_1 = rdi_1
    
    if (rdi_1 != 0)
        rdi_1[2] += 1
    
    rcx_12 = &var_78
    rbp = 2
else
    arg_8.b = 0
    int32_t* var_70 = &arg_8
    var_78 = sub_141b970e0
    void var_58
    sub_141befea0(rcx_11, &var_58, &var_78)
    rdi_1 = var_70
    rcx_12 = &var_58
    rbp = 1
int64_t* rbx_3 = *(arg1 + 0x58)

if (rbx_3 != 0)
    int32_t rax_12 = rbx_3[1].d
    
    if (rax_12 == 0)
        rbx_3 = nullptr
    else
        rbx_3[1].d = rax_12 + 1
    
    if (rbx_3 != 0)
        r14 = *(arg1 + 0x50)

void** (* var_68)(void** arg1, int64_t arg2, int64_t* arg3, int64_t* arg4) = *rcx_12
void* rax_15 = rcx_12[1]
void* var_60 = rax_15

if (rax_15 != 0)
    *(rax_15 + 8) += 1

int64_t result = (*(*r14 + 0x240))(r14, &var_68)

if (rbx_3 != 0)
    rbx_3[1].d -= 1
    
    if (rbx_3[1].d == 1)
        result = (**rbx_3)(rbx_3)
        int32_t temp8_1 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (temp8_1 == 1)
            result = (*(*rbx_3 + 8))(rbx_3, 1)

if ((rbp.b & 2) != 0)
    rbp &= 0xfffffffd
    
    if (rdi_1 != 0)
        int32_t temp9_1 = rdi_1[2]
        rdi_1[2] -= 1
        
        if (temp9_1 == 1)
            result = (**rdi_1)(rdi_1)
            int32_t temp12_1 = rdi_1[3]
            rdi_1[3] -= 1
            
            if (temp12_1 == 1)
                result = (*(*rdi_1 + 8))(rdi_1, 1)

int64_t* var_50

if ((rbp.b & 1) != 0 && var_50 != 0)
    var_50[1].d -= 1
    
    if (var_50[1].d == 1)
        result = (**var_50)(var_50)
        int32_t temp14_1 = *(var_50 + 0xc)
        *(var_50 + 0xc) -= 1
        
        if (temp14_1 == 1)
            result = (*(*var_50 + 8))(var_50, 1)

int64_t* rbx_5 = arg2[1]

if (rbx_5 != 0)
    rbx_5[1].d -= 1
    
    if (rbx_5[1].d == 1)
        result = (**rbx_5)(rbx_5)
        int32_t temp13_1 = *(rbx_5 + 0xc)
        *(rbx_5 + 0xc) -= 1
        
        if (temp13_1 == 1)
            return (*(*rbx_5 + 8))(rbx_5, 1)

return result
