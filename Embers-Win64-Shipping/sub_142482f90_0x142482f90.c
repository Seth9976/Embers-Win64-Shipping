// 函数: sub_142482f90
// 地址: 0x142482f90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg2 + 0x38) = 0
void arg_20

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_20, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

void* rax_2 = *(arg2 + 0x38)
void* r15 = &arg_20
int32_t arg_10 = 0

if (rax_2 != 0)
    r15 = rax_2

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_10, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t r13
r13.b = arg_10 != 0
void var_58
sub_140a96170(&var_58)
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_58, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_58)

void* rax_5 = *(arg2 + 0x38)
void* r12 = &var_58

if (rax_5 != 0)
    r12 = rax_5

void var_70
sub_140a96170(&var_70)
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_70, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_70)

void* rax_7 = *(arg2 + 0x38)
void* r14 = &var_70

if (rax_7 != 0)
    r14 = rax_7

void var_88
sub_140a96170(&var_88)
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &var_88, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_88)

void* rax_9 = *(arg2 + 0x38)
void* rsi = &var_88
int64_t var_98 = 0
int64_t var_90 = 0

if (rax_9 != 0)
    rsi = rax_9

if (*(arg2 + 0x20) == 0)
    int64_t* r8_11 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_11[4]
    sub_140d30490(arg2, &var_98, r8_11)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_98)

int64_t rax_11 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_11 != 0
*(arg2 + 0x20) = rdi + rax_11
int32_t result = sub_1420d1550(r15, r13.b, r12, r14, rsi, &var_98)
*arg3 = result
int64_t rcx_11 = var_98

if (rcx_11 != 0)
    result = sub_140a74f90(rcx_11)

int64_t* var_80

if (var_80 != 0)
    result = var_80[1].d
    var_80[1].d -= 1
    
    if (result == 1)
        (**var_80)(var_80)
        result = *(var_80 + 0xc)
        *(var_80 + 0xc) -= 1
        
        if (result == 1)
            result = (*(*var_80 + 8))(var_80, 1)

int64_t* var_68

if (var_68 != 0)
    result = var_68[1].d
    var_68[1].d -= 1
    
    if (result == 1)
        (**var_68)(var_68)
        result = *(var_68 + 0xc)
        *(var_68 + 0xc) -= 1
        
        if (result == 1)
            result = (*(*var_68 + 8))(var_68, 1)

int64_t* var_50

if (var_50 != 0)
    result = var_50[1].d
    var_50[1].d -= 1
    
    if (result == 1)
        result = (**var_50)(var_50)
        int32_t rdi_2 = *(var_50 + 0xc)
        *(var_50 + 0xc) -= 1
        
        if (rdi_2 == 1)
            return (*(*var_50 + 8))(var_50, zx.q(rdi_2))

return result
