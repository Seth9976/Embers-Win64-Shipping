// 函数: sub_140ea9330
// 地址: 0x140ea9330
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_698
int64_t rax_1 = __security_cookie ^ &var_698
int64_t rax_3 = (*(*arg2 + 0x48))(arg2, *arg3, ".Separator")
int64_t r10 = *arg2
int64_t rdx_1 = *arg3
void* r14 = nullptr
int64_t var_600 = rax_3
char var_5f8 = 1
int64_t var_5f0 = 0
int32_t var_5e8 = 0
int128_t* rax_4 = (*(r10 + 0x40))(arg2, rdx_1, ".Separator.Padding", &data_143e244f0)
char var_590 = 1
int64_t var_588 = 0
int32_t var_580 = 0
int128_t var_5a0 = *rax_4
void var_398
int64_t* rax_5
int128_t zmm6_1
rax_5, zmm6_1 = sub_14068c640(&var_398)
rax_5[0x39].b = 1
*(rax_5 + 0x1b8) = zmm6_1
sub_140692f90(&rax_5[0x3a], &var_588)
rax_5[0x44] = rax_3
rax_5[0x45].b = 1
sub_140692f90(&rax_5[0x46], &var_5f0)
void*** rax_6 = j_sub_140a82f30(0x4c8)
void*** rdi_1 = rax_6

if (rax_6 == 0)
    rdi_1 = nullptr
else
    rax_6[1].d = 1
    *(rax_6 + 0xc) = 1
    *rdi_1 = &data_142d8c5a0
    
    if (rdi_1 != -0x10)
        sub_140f20640(&rdi_1[2])

void* var_648 = &rdi_1[2]
sub_14065fa30(&var_648, &rdi_1[2])
int64_t var_678 = 0x4b8
void var_668
void* var_638 = &var_668
void* var_568
void** rax_7 = sub_140695920(&var_648, &var_568, rax_5, sub_140e23ed0(&rdi_1[2], "SBorder"))
int64_t* rbx_2 = rax_7[1]
void* var_630 = *rax_7
int64_t* var_628 = rbx_2

if (rbx_2 != 0)
    rbx_2[1].d += 1

void*** rax_8 = j_sub_140a82f30(0x88)
void*** rdi_2 = rax_8

if (rax_8 == 0)
    rdi_2 = nullptr
else
    sub_14068e490(rax_8)
    *rdi_2 = &data_142d8add0

void* rax_9 = sub_140698b50(rdi_2)
int128_t var_5c8
__builtin_memcpy(&var_5c8, "\x00\x00\x00\x00\x00\x00\x80\x40\x00\x00\x00\x00\x00\x00\x00\x40\x01", 
    0x11)
int64_t var_5b0 = 0
int32_t var_5a8 = 0
__builtin_memcpy(rax_9 + 0x48, 
    "\x00\x00\x00\x00\x00\x00\x80\x40\x00\x00\x00\x00\x00\x00\x00\x40\x01", 0x11)
sub_1407473e0(rax_9 + 0x60, &var_5b0)
sub_140745b20(&var_5b0)
sub_140693600(rax_9, &var_630)

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        (**rbx_2)(rbx_2)
        int32_t temp1_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx_2 + 8))(rbx_2, 1)

void var_548
int64_t* rax_12 = sub_14068d420(&var_548)
int64_t rsi_1 = sx.q(rax_12[0x35].d)
int32_t rcx_18 = (rsi_1 + 1).d
rax_12[0x35].d = rcx_18

if (rcx_18 s> *(rax_12 + 0x1ac))
    sub_140638870(&rax_12[0x34])

*(rax_12[0x34] + (rsi_1 << 3)) = rax_9
void*** rax_14 = j_sub_140a82f30(0x2e8)
void*** rdi_4 = rax_14

if (rax_14 == 0)
    rdi_4 = nullptr
else
    rax_14[1].d = 1
    *(rax_14 + 0xc) = 1
    *rdi_4 = &data_142d8c590
    
    if (rdi_4 != -0x10)
        sub_14068e550(&rdi_4[2])

void* var_660 = &rdi_4[2]
sub_14065fa30(&var_660, &rdi_4[2])
int64_t var_678_1 = 0x2d8
void var_667
void* var_650 = &var_667
void* var_578
void** rax_15 = sub_140696920(&var_660, &var_578, rax_12, sub_140e23ed0(&rdi_4[2], "SVerticalBox"))
int64_t* rbx_4 = rax_15[1]
void* var_620 = *rax_15
int64_t* var_618 = rbx_4

if (rbx_4 != 0)
    rbx_4[1].d += 1

sub_140de1b90(&arg1[0x58], &var_620)

if (rbx_4 != 0)
    rbx_4[1].d -= 1
    
    if (rbx_4[1].d == 1)
        (**rbx_4)(rbx_4)
        int32_t temp4_1 = *(rbx_4 + 0xc)
        *(rbx_4 + 0xc) -= 1
        
        if (temp4_1 == 1)
            (*(*rbx_4 + 8))(rbx_4, 1)

int64_t* var_570

if (var_570 != 0)
    var_570[1].d -= 1
    
    if (var_570[1].d == 1)
        (**var_570)(var_570)
        int32_t temp6_1 = *(var_570 + 0xc)
        *(var_570 + 0xc) -= 1
        
        if (temp6_1 == 1)
            (*(*var_570 + 8))(var_570, 1)

if (rdi_4 != 0)
    rdi_4[1].d -= 1
    
    if (rdi_4[1].d == 1)
        (**rdi_4)(rdi_4)
        int32_t temp7_1 = *(rdi_4 + 0xc)
        *(rdi_4 + 0xc) -= 1
        
        if (temp7_1 == 1)
            (*rdi_4)[1](rdi_4, 1)

int64_t var_3a8

if (var_3a8 != 0)
    sub_140a74f90(var_3a8)

sub_140660250(&var_548)
int64_t* var_560

if (var_560 != 0)
    var_560[1].d -= 1
    
    if (var_560[1].d == 1)
        (**var_560)(var_560)
        int32_t temp10_1 = *(var_560 + 0xc)
        *(var_560 + 0xc) -= 1
        
        if (temp10_1 == 1)
            (*(*var_560 + 8))(var_560, 1)

if (rdi_1 != 0)
    rdi_1[1].d -= 1
    
    if (rdi_1[1].d == 1)
        (**rdi_1)(rdi_1)
        int32_t temp11_1 = *(rdi_1 + 0xc)
        *(rdi_1 + 0xc) -= 1
        
        if (temp11_1 == 1)
            (*rdi_1)[1](rdi_1, 1)

sub_14068fed0(&var_398)
sub_140745b20(&var_588)
sub_140745b20(&var_5f0)
void* result = arg1[0x75]

if (*(result + 0x94) != 0)
    sub_1405d9400()
    int64_t var_5e0 = data_143cd6fd8
    void* rcx_42 = data_143cd6fe0
    void* var_5d8_1 = rcx_42
    
    if (rcx_42 != 0)
        *(rcx_42 + 8) += 1
    
    int32_t var_5d0_1 = data_143cd6fe8
    void var_558
    int64_t* rax_28 = (*(*arg1 + 8))(arg1, &var_558)
    int64_t var_610 = *rax_28
    void* rcx_45 = rax_28[1]
    void* var_608_1 = rcx_45
    
    if (rcx_45 != 0)
        *(rcx_45 + 8) += 1
    
    int64_t* rbx_9 = arg1[0x74]
    
    if (rbx_9 != 0)
        int32_t rax_29 = rbx_9[1].d
        
        if (rax_29 != 0)
            rbx_9[1].d = rax_29 + 1
            rax_29.b = 1
        
        if (rax_29.b == 0)
            rbx_9 = nullptr
        
        if (rbx_9 != 0)
            r14 = arg1[0x73]
    
    result = sub_140ea2410(r14, &var_610, &var_5e0)
    
    if (rbx_9 != 0)
        rbx_9[1].d -= 1
        
        if (rbx_9[1].d == 1)
            result = (**rbx_9)(rbx_9)
            int32_t temp14_1 = *(rbx_9 + 0xc)
            *(rbx_9 + 0xc) -= 1
            
            if (temp14_1 == 1)
                result = (*(*rbx_9 + 8))(rbx_9, 1)
    
    int64_t* var_550
    
    if (var_550 != 0)
        var_550[1].d -= 1
        
        if (var_550[1].d == 1)
            result = (**var_550)(var_550)
            int32_t temp15_1 = *(var_550 + 0xc)
            *(var_550 + 0xc) -= 1
            
            if (temp15_1 == 1)
                result = (*(*var_550 + 8))(var_550, 1)

__security_check_cookie(rax_1 ^ &var_698)
return result
