// 函数: sub_141b94ce0
// 地址: 0x141b94ce0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x30)
int32_t var_80 = 0
int64_t* rsi
int64_t* r12
int32_t r14
void** (* var_90)(void** arg1, int64_t arg2, int64_t* arg3, int64_t* arg4)

if (rcx != 0)
    char var_a8 = 0
    int64_t* var_88_1 = &var_a8
    var_90 = sub_141b970e0
    void var_70
    sub_141befea0(rcx, &var_70, &var_90)
    rsi = var_88_1
    r12 = &var_70
    r14 = 2
else
    rsi = data_143e244b8
    var_90 = data_143e244b0
    int64_t* var_88 = rsi
    
    if (rsi != 0)
        rsi[1].d += 1
    
    r12 = &var_90
    r14 = 1
int128_t zmm0 = *(arg1 + 0x40)
int64_t* rcx_1 = *arg2
char rdi = *(arg1 + 0x51)
char rbx = *(arg1 + 0x50)
int64_t var_48 = 0
int32_t var_40 = 0
int128_t var_a0 = zmm0
char var_50 = 1
int128_t var_60 = zmm0
void*** rax_2 = sub_140de7320(rcx_1, 0xffffffff)
rax_2[7].b = 1
*(rax_2 + 0x28) = var_a0
sub_140692f90(&rax_2[8], &var_48)
sub_140745b20(&var_48)
*(rax_2 + 0x24) = rbx
*(rax_2 + 0x25) = rdi
int64_t* rdi_1 = rax_2[3]

if (rdi_1 != 0)
    rdi_1[1].d += 1

sub_140e0dfc0(rax_2)
int64_t* rbx_1 = r12[1]
var_a0.q = *r12
var_a0:8.q = rbx_1

if (rbx_1 != 0)
    rbx_1[1].d += 1

if (&var_a0 != &rax_2[2])
    int128_t zmm1_1 = var_a0
    var_a0 = *(rax_2 + 0x10)
    rbx_1 = var_a0:8.q
    *(rax_2 + 0x10) = zmm1_1

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp2_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

int64_t result = sub_140de7bf0(rax_2)

if (rdi_1 != 0)
    rdi_1[1].d -= 1
    
    if (rdi_1[1].d == 1)
        result = (**rdi_1)(rdi_1)
        int32_t temp3_1 = *(rdi_1 + 0xc)
        *(rdi_1 + 0xc) -= 1
        
        if (temp3_1 == 1)
            result = (*(*rdi_1 + 8))(rdi_1, 1)

*(arg1 + 0x38) = rax_2

if ((r14.b & 2) != 0)
    r14 &= 0xfffffffd
    int64_t* var_68
    
    if (var_68 != 0)
        var_68[1].d -= 1
        
        if (var_68[1].d == 1)
            result = (**var_68)(var_68)
            int32_t temp7_1 = *(var_68 + 0xc)
            *(var_68 + 0xc) -= 1
            
            if (temp7_1 == 1)
                result = (*(*var_68 + 8))(var_68, 1)

if ((r14.b & 1) != 0 && rsi != 0)
    rsi[1].d -= 1
    
    if (rsi[1].d == 1)
        result = (**rsi)(rsi)
        int32_t temp9_1 = *(rsi + 0xc)
        *(rsi + 0xc) -= 1
        
        if (temp9_1 == 1)
            result = (*(*rsi + 8))(rsi, 1)

int64_t* rbx_4 = arg2[1]

if (rbx_4 != 0)
    rbx_4[1].d -= 1
    
    if (rbx_4[1].d == 1)
        result = (**rbx_4)(rbx_4)
        int32_t temp8_1 = *(rbx_4 + 0xc)
        *(rbx_4 + 0xc) -= 1
        
        if (temp8_1 == 1)
            return (*(*rbx_4 + 8))(rbx_4, 1)

return result
