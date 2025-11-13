// 函数: sub_141b243f0
// 地址: 0x141b243f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
void*** rax_2 = j_sub_140a82f30(0x28)
int32_t rsi = 0
void*** rbx_1

if (rax_2 == 0)
    rbx_1 = nullptr
else
    void* rax_3
    int512_t zmm2_1
    rax_3, zmm2_1 = sub_141b3f680()
    rbx_1 = sub_141af8440(rax_2, rax_3, zmm2_1)

void*** rax_5 = j_sub_140a82f30(0x18)

if (rax_5 == 0)
    rax_5 = nullptr
else
    rax_5[1].d = 1
    *rax_5 = &data_14305dc20
    *(rax_5 + 0xc) = 1
    rax_5[2] = rbx_1

void* rax_7 = (*rbx_1)[3](rbx_1, rbx_1, rbx_1)
int64_t r12 = *arg3
int64_t* rcx_2 = *(arg1 + 0xd0)
int32_t var_90 = arg3[1].d
int64_t var_98 = r12
var_98.o = var_98.o
void var_c0
int64_t* var_88
sub_141a37230(rax_7 + 0x20, 
    sub_141aeb7e0(&var_88, sub_141af26c0(rcx_2, &var_c0, 0), rax_7 + 8, &var_98))
char var_48

if ((var_48 & 1) != 0)
    int64_t* rcx_5 = &var_88
    
    if ((var_48 & 2) == 0)
        rcx_5 = var_88
    
    var_48 &= 0xfe
    (**rcx_5)(rcx_5, 0)
    
    if ((var_48 & 2) == 0)
        sub_140a74f90(var_88)

int64_t* var_b8

if (var_b8 != 0)
    int32_t temp0_1 = *(var_b8 + 0xc)
    *(var_b8 + 0xc) -= 1
    
    if (temp0_1 == 1)
        (*(*var_b8 + 8))(var_b8, 1)

var_98 = r12
int32_t var_90_1 = arg3[1].d
var_98.o = var_98.o
sub_141a37230(rax_7 + 0x20, 
    sub_141aeb7e0(&var_88, sub_141af26c0(*(arg1 + 0xd0), &var_c0, 1), rax_7 + 0xc, &var_98))

if ((var_48 & 1) != 0)
    int64_t** rcx_12 = &var_88
    
    if ((var_48 & 2) == 0)
        rcx_12 = var_88
    
    var_48 &= 0xfe
    (**rcx_12)(rcx_12, 0)
    
    if ((var_48 & 2) == 0)
        sub_140a74f90(var_88)

if (var_b8 != 0)
    int32_t temp1_1 = *(var_b8 + 0xc)
    *(var_b8 + 0xc) -= 1
    
    if (temp1_1 == 1)
        (*(*var_b8 + 8))(var_b8, 1)

var_98 = r12
int32_t var_90_2 = arg3[1].d
var_98.o = var_98.o
sub_141a37230(rax_7 + 0x20, 
    sub_141aeb7e0(&var_88, sub_141af26c0(*(arg1 + 0xd0), &var_c0, 2), rax_7 + 0x10, &var_98))

if ((var_48 & 1) != 0)
    int64_t* rcx_19 = &var_88
    
    if ((var_48 & 2) == 0)
        rcx_19 = var_88
    
    var_48 &= 0xfe
    (**rcx_19)(rcx_19, 0)
    
    if ((var_48 & 2) == 0)
        sub_140a74f90(var_88)

if (var_b8 != 0)
    int32_t temp2_1 = *(var_b8 + 0xc)
    *(var_b8 + 0xc) -= 1
    
    if (temp2_1 == 1)
        (*(*var_b8 + 8))(var_b8, 1)

var_98 = r12
int32_t var_90_3 = arg3[1].d
var_98.o = var_98.o
sub_141a37230(rax_7 + 0x20, 
    sub_141aeb7e0(&var_88, sub_141af26c0(*(arg1 + 0xd0), &var_c0, 3), rax_7 + 0x14, &var_98))

if ((var_48 & 1) != 0)
    int64_t* rcx_26 = &var_88
    
    if ((var_48 & 2) == 0)
        rcx_26 = var_88
    
    (**rcx_26)(rcx_26, 0)
    
    if ((var_48 & 2) == 0)
        sub_140a74f90(var_88)

if (var_b8 != 0)
    int32_t temp3_1 = *(var_b8 + 0xc)
    *(var_b8 + 0xc) -= 1
    
    if (temp3_1 == 1)
        (*(*var_b8 + 8))(var_b8, 1)

sub_141a693b0(rax_7 + 0x20)
int32_t* rdx_14 = &var_98
int32_t var_d8 = 0
int32_t* rax_32 = sub_141a534f0(rax_7 + 0x20, rdx_14)

if (rax_32[1].b != 0)
    rsi = *rax_32

*(rax_7 + 0x18) = rsi
*arg2 = rbx_1
arg2[1] = rax_5

if (rax_5 != 0)
    rax_5[1].d += 1
    
    if (rax_5 != 0)
        rax_5[1].d -= 1
        
        if (rax_5[1].d == 1)
            void** r8_5 = *rax_5
            (*r8_5)(rax_5, rdx_14, r8_5)
            int32_t temp5_1 = *(rax_5 + 0xc)
            *(rax_5 + 0xc) -= 1
            
            if (temp5_1 == 1)
                void** r8_6 = *rax_5
                r8_6[1](rax_5, 1, r8_6)

__security_check_cookie(rax_1 ^ &var_f8)
return arg2
