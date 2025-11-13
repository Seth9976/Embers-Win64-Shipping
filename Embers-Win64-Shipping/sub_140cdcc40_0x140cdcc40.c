// 函数: sub_140cdcc40
// 地址: 0x140cdcc40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_58
sub_140cdd3f0(&var_58, arg1)
int16_t* const var_68
int32_t var_50
int64_t var_48

if (var_50 == 0 || var_50 == 1)
    int64_t* rax_12 = sub_140b63b70(arg1[2] + 0xe8, &var_68)
    int16_t* const rbx_1 = &data_142d40450
    
    if (rax_12[1].d != 0)
        *rax_12
    
    int16_t** rax_13 = sub_140b24f00(&var_48)
    
    if (rax_13[1].d != 0)
        rbx_1 = *rax_13
    
    sub_140a2e390(arg2, u"%sDefault%s.ini", rbx_1)
    int64_t rcx_36 = var_48
    
    if (rcx_36 != 0)
        sub_140a74f90(rcx_36)
    
    int16_t* const rcx_37 = var_68
    
    if (rcx_37 != 0)
        sub_140a74f90(rcx_37)
    
    int64_t rcx_38 = var_58
    
    if (rcx_38 != 0)
        sub_140a74f90(rcx_38)
    
    return arg2

int64_t* rax_1 = sub_140b13d10(&var_48)
int16_t* const rbx = &data_142d40450

if (rax_1[1].d == 0)
    var_68 = &data_142d40450
else
    var_68 = *rax_1

int64_t r13 = var_58
uint64_t rsi = 0
int64_t var_60 = r13
uint64_t var_88 = 0
int32_t var_80 = 0
sub_140b0f5f0(&var_88, &var_68, 2)
char rax_3 = sub_140b12f50(&var_88)
uint64_t rcx_4 = var_88

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

int64_t rcx_5 = var_48

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

int64_t* rax_4 = sub_140b63b70(arg1[2] + 0xe8, &var_58)
int16_t* const rdi_1

if (rax_4[1].d == 0)
    rdi_1 = &data_142d40450
else
    rdi_1 = *rax_4

int64_t* rax_5 = sub_140b24f00(&var_48)
int16_t* const r8

if (rax_5[1].d == 0)
    r8 = &data_142d40450
else
    r8 = *rax_5

int16_t* const var_90 = rdi_1
int64_t var_98 = r13
int16_t* var_78
sub_140a2e390(&var_78, u"%s%s", r8)
int64_t rcx_10 = var_48

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

int64_t rcx_11 = var_58

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)

int32_t var_70
int32_t r15 = var_70
int16_t* rdi_2 = var_78
var_88 = 0
int16_t* const r14_1

if (r15 != 0)
    sub_1405a4c70(&var_88, r15, 0)
    rsi = var_88
    memcpy(rsi, rdi_2, r15 * 2)
    r14_1 = var_78

if (r15 == 0 || var_70 == 0)
    r14_1 = &data_142d40450

int32_t rdx_6 = 0
var_88 = 0
int32_t rcx_14 = 0
int64_t var_80_1 = 0

if (r14_1 != 0 && *r14_1 != 0)
    int64_t rdi_3 = -1
    
    do
        rdi_3 += 1
    while (r14_1[rdi_3] != 0)
    
    if (rdi_3.d + 1 s> 0)
        sub_1405947f0(&var_88, rdi_3.d + 1)
        rcx_14 = var_80_1:4.d
        rdx_6 = var_80_1.d
    
    int32_t rax_6 = rdx_6 + rdi_3.d + 1
    var_80_1.d = rax_6
    
    if (rax_6 s> rcx_14)
        sub_140594770(&var_88)
    
    UnDecorator::getReferenceType(var_88, r14_1, (rdi_3.d + 1) * 2)

char rax_7 = sub_140b12f50(&var_88)
uint64_t rcx_19 = var_88

if (rcx_19 != 0)
    sub_140a74f90(rcx_19)

if (rax_3 != 0 && rax_7 == 0)
    int64_t* rax_8 = sub_140b25550(&var_48)
    int16_t* const r8_5
    
    if (rax_8[1].d == 0)
        r8_5 = &data_142d40450
    else
        r8_5 = *rax_8
    
    sub_140a2e390(&var_88, u"%s%s/Config", r8_5)
    
    if (rsi != 0)
        sub_140a74f90(rsi)
    
    int64_t rcx_23 = var_48
    rsi = var_88
    r15 = var_80_1.d
    var_88 = 0
    int64_t var_80_2 = 0
    
    if (rcx_23 != 0)
        sub_140a74f90(rcx_23)

int64_t* rax_9 = sub_140b63b70(arg1[2] + 0xe8, &var_48)
int16_t* const rax_10

if (rax_9[1].d == 0)
    rax_10 = &data_142d40450
else
    rax_10 = *rax_9

int16_t* const var_98_1 = rax_10

if (r15 != 0)
    rbx = rsi

sub_140a2e390(arg2, u"%s/%s%s.ini", rbx)
int64_t rcx_28 = var_48

if (rcx_28 != 0)
    sub_140a74f90(rcx_28)

if (rsi != 0)
    sub_140a74f90(rsi)

int16_t* rcx_30 = var_78

if (rcx_30 != 0)
    sub_140a74f90(rcx_30)

if (r13 != 0)
    sub_140a74f90(r13)

return arg2
