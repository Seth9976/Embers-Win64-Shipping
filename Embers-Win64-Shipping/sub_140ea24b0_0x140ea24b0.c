// 函数: sub_140ea24b0
// 地址: 0x140ea24b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_558
int64_t rax_1 = __security_cookie ^ &var_558
int64_t var_520 = 0
int32_t var_518 = 0
sub_1405947f0(&var_520, 0xd)
int32_t rax_2 = var_518 + 0xd
var_518 = rax_2

if (rax_2 s> 0)
    sub_140594770(&var_520)

sub_1405a7220(var_520, 0xd, "Search Start", 0xd, 0x3f)
void var_490
int64_t* rax_3 = sub_140aae2f0(&var_490, &var_520)
int64_t var_510 = *rax_3
int64_t* rcx_5 = rax_3[1]

if (rcx_5 != 0)
    rcx_5[1].d += 1

char rbx = data_1439ae51c
char var_4c8 = rbx
int32_t var_500 = rax_3[2].d
char var_4f8 = 1
int64_t var_4f0 = 0
int32_t var_4e8 = 0
char var_4c7 = 1
int64_t var_4c0 = 0
int32_t var_4b8 = 0
void var_468
int64_t* rax_5 = sub_14068d9d0(&var_468)
rax_5[0xf].b = rbx
*(rax_5 + 0x79) = 1
sub_1407473e0(&rax_5[0x10], &var_4c0)
sub_14065da90(&rax_5[0x34], &var_510)
rax_5[0x37].b = var_4f8
sub_140692f90(&rax_5[0x38], &var_4f0)
void*** rax_6 = j_sub_140a82f30(0x7a8)
void*** rdi = rax_6

if (rax_6 == 0)
    rdi = nullptr
else
    rax_6[1].d = 1
    *(rax_6 + 0xc) = 1
    *rdi = &data_142d8b060
    
    if (rdi != -0x10)
        sub_140f66da0(&rdi[2])

void* var_4e0 = &rdi[2]
sub_14065fa30(&var_4e0, &rdi[2])
int16_t var_538
var_538.q = 0x798
void var_528
void* var_4d0 = &var_528
void* var_4a0
void** rax_7 = sub_140697520(&var_4e0, &var_4a0, rax_5, sub_140e23ed0(&rdi[2], "STextBlock"))
int64_t* rcx_15 = rax_7[1]

if (rcx_15 != 0)
    rcx_15[1].d += 1

void** rax_9 = arg1[1] + 0x28
void var_478

if (rax_9 == &var_478)
label_140ea26d0:
    
    if (rcx_15 != 0)
        rcx_15[1].d -= 1
        
        if (rcx_15[1].d == 1)
            (**rcx_15)(rcx_15)
            int32_t temp3_1 = *(rcx_15 + 0xc)
            *(rcx_15 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rcx_15 + 8))(rcx_15, 1)
else
    *rax_9 = *rax_7
    int64_t* rbx_2 = rax_9[1]
    
    if (rcx_15 == rbx_2)
        goto label_140ea26d0
    
    rax_9[1] = rcx_15
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            (**rbx_2)(rbx_2)
            int32_t temp7_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp7_1 == 1)
                (*(*rbx_2 + 8))(rbx_2, 1)

int64_t* var_498

if (var_498 != 0)
    var_498[1].d -= 1
    
    if (var_498[1].d == 1)
        (**var_498)(var_498)
        int32_t temp6_1 = *(var_498 + 0xc)
        *(var_498 + 0xc) -= 1
        
        if (temp6_1 == 1)
            (*(*var_498 + 8))(var_498, 1)

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp8_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp8_1 == 1)
            (*rdi)[1](rdi, 1)

sub_1406913d0(&var_468)
sub_140745b20(&var_4c0)
sub_140745b20(&var_4f0)

if (rcx_5 != 0)
    rcx_5[1].d -= 1
    
    if (rcx_5[1].d == 1)
        (**rcx_5)(rcx_5)
        int32_t rax_19 = *(rcx_5 + 0xc)
        *(rcx_5 + 0xc) -= 1
        
        if (rax_19 == 1)
            (*(*rcx_5 + 8))(rcx_5, 1)

int64_t* var_488

if (var_488 != 0)
    var_488[1].d -= 1
    
    if (var_488[1].d == 1)
        (**var_488)(var_488)
        int32_t rdi_2 = *(var_488 + 0xc)
        *(var_488 + 0xc) -= 1
        
        if (rdi_2 == 1)
            (*(*var_488 + 8))(var_488, zx.q(rdi_2))

int64_t rcx_31 = var_520

if (rcx_31 != 0)
    sub_140a74f90(rcx_31)

void* rax_24 = arg1[1]
int64_t* rbx_7 = *(rax_24 + 0x30)

if (rbx_7 != 0)
    rbx_7[1].d += 1

int64_t var_4b0 = *(rax_24 + 0x28)
int64_t* var_4a8 = rbx_7

if (rbx_7 != 0)
    rbx_7[1].d += 1

sub_1405d9400()
var_538.b = 0
void* result = sub_140ea2fc0(arg1, &var_4b0, &data_143cd6fd8, 0, var_538.b)

if (rbx_7 != 0)
    rbx_7[1].d -= 1
    
    if (rbx_7[1].d == 1)
        result = (**rbx_7)(rbx_7)
        int32_t temp10_1 = *(rbx_7 + 0xc)
        *(rbx_7 + 0xc) -= 1
        
        if (temp10_1 == 1)
            result = (*(*rbx_7 + 8))(rbx_7, 1)

__security_check_cookie(rax_1 ^ &var_558)
return result
