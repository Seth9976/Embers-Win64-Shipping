// 函数: sub_140984400
// 地址: 0x140984400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_78 = nullptr

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_78, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_78)

void* var_80 = nullptr

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_80, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_80)

int64_t var_88 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_88, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_88)

char arg_10 = 0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &arg_10, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

char* rax_5 = *(arg2 + 0x38)
char* r12 = &arg_10

if (rax_5 != 0)
    r12 = rax_5

void var_40
sub_140a96170(&var_40)
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &var_40, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_40)

void* rax_7 = *(arg2 + 0x38)
void* r15 = &var_40

if (rax_7 != 0)
    r15 = rax_7

void var_58
sub_140a96170(&var_58)
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_11 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_11[4]
    sub_140d30490(arg2, &var_58, r8_11)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_58)

void* rax_9 = *(arg2 + 0x38)
void* r14 = &var_58

if (rax_9 != 0)
    r14 = rax_9

void var_70
sub_140a96170(&var_70)
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_13 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_13[4]
    sub_140d30490(arg2, &var_70, r8_13)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_70)

void* rax_11 = *(arg2 + 0x38)
void* rsi = &var_70
char arg_20 = 0
*(arg2 + 0x38) = 0

if (rax_11 != 0)
    rsi = rax_11

if (*(arg2 + 0x20) == 0)
    int64_t* r8_15 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_15[4]
    sub_140d30490(arg2, &arg_20, r8_15)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

char* rax_13 = *(arg2 + 0x38)
char* rcx_11 = &arg_20
int64_t r8_16 = var_88
void* rdx_16 = var_80

if (rax_13 != 0)
    rcx_11 = rax_13

int64_t rax_14 = *(arg2 + 0x20)
int64_t* rcx_12 = var_78
int64_t rdi
rdi.b = rax_14 != 0
*(arg2 + 0x20) = rdi + rax_14
uint32_t result = sub_140960730(rcx_12, rdx_16, r8_16, r12, r15, r14, rsi, rcx_11)
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
        (**var_50)(var_50)
        result = *(var_50 + 0xc)
        *(var_50 + 0xc) -= 1
        
        if (result == 1)
            result = (*(*var_50 + 8))(var_50, 1)

int64_t* var_38

if (var_38 != 0)
    result = var_38[1].d
    var_38[1].d -= 1
    
    if (result == 1)
        result = (**var_38)(var_38)
        int32_t rdi_2 = *(var_38 + 0xc)
        *(var_38 + 0xc) -= 1
        
        if (rdi_2 == 1)
            return (*(*var_38 + 8))(var_38, zx.q(rdi_2))

return result
