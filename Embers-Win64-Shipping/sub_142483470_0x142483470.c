// 函数: sub_142483470
// 地址: 0x142483470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_10 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_10, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

void var_48
sub_140a96170(&var_48)
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_48, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_48)

void* rax_3 = *(arg2 + 0x38)
void* r15 = &var_48

if (rax_3 != 0)
    r15 = rax_3

void var_60
sub_140a96170(&var_60)
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_60, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_60)

void* rax_5 = *(arg2 + 0x38)
void* r14 = &var_60

if (rax_5 != 0)
    r14 = rax_5

void var_78
sub_140a96170(&var_78)
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_78, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_78)

void* rax_7 = *(arg2 + 0x38)
void* rsi = &var_78
int64_t var_88 = 0
int64_t var_80 = 0

if (rax_7 != 0)
    rsi = rax_7

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &var_88, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_88)

int64_t rax_9 = *(arg2 + 0x20)
int32_t rcx_8 = arg_10
int64_t rdi
rdi.b = rax_9 != 0
*(arg2 + 0x20) = rdi + rax_9
int32_t result = sub_1420d1670(rcx_8, r15, r14, rsi, &var_88)
int64_t rcx_9 = var_88
*arg3 = result

if (rcx_9 != 0)
    result = sub_140a74f90(rcx_9)

int64_t* var_70

if (var_70 != 0)
    result = var_70[1].d
    var_70[1].d -= 1
    
    if (result == 1)
        (**var_70)(var_70)
        result = *(var_70 + 0xc)
        *(var_70 + 0xc) -= 1
        
        if (result == 1)
            result = (*(*var_70 + 8))(var_70, 1)

int64_t* var_58

if (var_58 != 0)
    result = var_58[1].d
    var_58[1].d -= 1
    
    if (result == 1)
        (**var_58)(var_58)
        result = *(var_58 + 0xc)
        *(var_58 + 0xc) -= 1
        
        if (result == 1)
            result = (*(*var_58 + 8))(var_58, 1)

int64_t* var_40

if (var_40 != 0)
    result = var_40[1].d
    var_40[1].d -= 1
    
    if (result == 1)
        result = (**var_40)(var_40)
        int32_t rdi_2 = *(var_40 + 0xc)
        *(var_40 + 0xc) -= 1
        
        if (rdi_2 == 1)
            return (*(*var_40 + 8))(var_40, zx.q(rdi_2))

return result
