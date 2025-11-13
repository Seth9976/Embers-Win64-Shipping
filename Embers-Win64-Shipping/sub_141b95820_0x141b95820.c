// 函数: sub_141b95820
// 地址: 0x141b95820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8 = 0
int64_t* rcx = *(arg1 + 0x30)
void** (* var_98)(void** arg1, int64_t arg2, int64_t* arg3, int64_t* arg4)
void var_78
int64_t* rbx
int32_t rbp
int64_t* rdi

if (rcx != 0)
    arg_8.b = 0
    int64_t* var_90_1 = &arg_8
    var_98 = sub_141b970e0
    sub_141befea0(rcx, &var_78, &var_98)
    rbx = var_90_1
    rdi = &var_78
    rbp = 2
else
    rbx = data_143e244b8
    var_98 = data_143e244b0
    int64_t* var_90 = rbx
    
    if (rbx != 0)
        rbx[1].d += 1
    
    rdi = &var_98
    rbp = 1

int64_t* rdi_1 = rdi[1]
int64_t var_88 = *rdi
int64_t* var_80 = rdi_1

if (rdi_1 != 0)
    rdi_1[1].d += 1

int128_t zmm0 = *(arg1 + 0x40)
char r13 = *(arg1 + 0x59)
int64_t* r15 = *arg2
var_98.o = zmm0
arg_8.b = *(arg1 + 0x58)
int128_t var_58 = zmm0
char var_48 = 1
int64_t var_40 = 0
int32_t var_38 = 0
void*** rax_4 = j_sub_140a82f30(0x88)
void*** rsi = rax_4

if (rax_4 == 0)
    rsi = nullptr
else
    sub_14068e490(rax_4)
    *rsi = &data_142d8add0

sub_140de6520(&r15[0x55], rsi)
sub_140e19ef0(r15, 1)
rsi[0xb].b = 1
*(rsi + 0x48) = var_98.o
sub_140692f90(&rsi[0xc], &var_40)
sub_140745b20(&var_40)
rsi[4].b = arg_8.b
*(rsi + 0x21) = r13
sub_140693600(rsi, &var_88)

if (rdi_1 != 0)
    rdi_1[1].d -= 1
    
    if (rdi_1[1].d == 1)
        (**rdi_1)(rdi_1)
        int32_t temp1_1 = *(rdi_1 + 0xc)
        *(rdi_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rdi_1 + 8))(rdi_1, 1)

*(arg1 + 0x50) = rsi

if ((rbp.b & 2) != 0)
    rbp &= 0xfffffffd
    int64_t* var_70
    
    if (var_70 != 0)
        var_70[1].d -= 1
        
        if (var_70[1].d == 1)
            (**var_70)(var_70)
            int32_t temp5_1 = *(var_70 + 0xc)
            *(var_70 + 0xc) -= 1
            
            if (temp5_1 == 1)
                (*(*var_70 + 8))(var_70, 1)

if ((rbp.b & 1) != 0 && rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp7_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp7_1 == 1)
            (*(*rbx + 8))(rbx, 1)

int32_t* rax_12 = sub_141b9ebe0(&var_78, arg1 + 0x38)
void* r8_2 = *(arg1 + 0x50)
*(r8_2 + 0x28) = *rax_12
*(r8_2 + 0x30) = rax_12[2]
*(r8_2 + 0x34) = rax_12[3].b
sub_140692f90(r8_2 + 0x38, &rax_12[4])
void var_68
uint64_t result = sub_140745b20(&var_68)
int64_t* rbx_1 = arg2[1]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        result = (**rbx_1)(rbx_1)
        int32_t temp6_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp6_1 == 1)
            return (*(*rbx_1 + 8))(rbx_1, 1)

return result
