// 函数: sub_141810bf0
// 地址: 0x141810bf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_2 = arg4[1].d
void* rdi = *arg4
void* var_88 = nullptr
int32_t i_4 = i_2
int32_t var_7c

if (i_2 != 0)
    sub_1405a4b40(&var_88, i_2, 0)
    void* rbx_2 = var_88 + 0x20
    void* rdi_1 = rdi + 0x20
    int32_t i
    
    do
        sub_140596d10(rbx_2 - 0x20, rdi_1 - 0x20)
        sub_140596d10(rbx_2 - 0x10, rdi_1 - 0x10)
        int64_t rax_1 = *rdi_1
        rdi_1 += 0x30
        *rbx_2 = rax_1
        rbx_2 += 0x30
        *(rbx_2 - 0x28) = *(rdi_1 - 0x28)
        *(rbx_2 - 0x24) = *(rdi_1 - 0x24)
        i = i_2
        i_2 -= 1
    while (i != 1)
else
    var_7c = 0

int16_t* const rdi_2 = &data_142d40450
int16_t* rbx_3

if (arg2[1].d == 0)
    rbx_3 = &data_142d40450
else
    rbx_3 = *arg2

int64_t var_58 = 0
int64_t var_50 = 0
sub_1405947f0(&var_58, 0xd)
int32_t rax_4 = var_50.d + 0xd
var_50.d = rax_4

if (rax_4 s> 0)
    sub_140594770(&var_58)

UnDecorator::getReferenceType(var_58, u"ProgressType", 0x1a)
int64_t var_48
sub_1417ea920(&var_48, rbx_3)
int64_t i_6 = sx.q(i_4)
int32_t rax_5 = (i_6 + 1).d

if (rax_5 s> var_7c)
    sub_1405c4f50(&var_88)

int32_t rsi = 0
int64_t* rcx_10 = i_6 * 0x30 + var_88
*rcx_10 = var_58
rcx_10[1].d = var_50.d
*(rcx_10 + 0xc) = var_50:4.d
rcx_10[2] = var_48
int32_t var_40
rcx_10[3].d = var_40
int32_t var_3c
*(rcx_10 + 0x1c) = var_3c
rcx_10[4] = 0
rcx_10[5].b = 0
*(rcx_10 + 0x2c) = 0
int16_t* var_68 = nullptr
int32_t var_60 = 0

if (arg3[1].d s> 0)
    int64_t* rbx_4 = nullptr
    int32_t rax_13
    
    do
        int64_t rdx_6 = *arg3
        int32_t rax_12 = *(rbx_4 + rdx_6 + 8)
        int32_t r8 = rax_12 - 1
        
        if (rax_12 == 0)
            r8 = 0
        
        sub_140a20ba0(&var_68, *(rbx_4 + rdx_6), r8)
        rax_13 = arg3[1].d
        rsi += 1
        
        if (rsi s< rax_13)
            sub_140a20ba0(&var_68, &data_142d404c4, 1)
            rax_13 = arg3[1].d
        
        rbx_4 = &rbx_4[2]
    while (rsi s< rax_13)
    
    if (var_60 != 0)
        rdi_2 = var_68

var_58 = 0
int64_t var_50_1 = 0
sub_1405947f0(&var_58, 0x12)
int32_t rax_14 = var_50_1.d + 0x12
var_50_1.d = rax_14

if (rax_14 s> 0)
    sub_140594770(&var_58)

UnDecorator::getReferenceType(var_58, u"ProgressHierarchy", 0x24)
var_48 = 0
int64_t r14_1 = 0
var_40.q = 0
int32_t rsi_1 = 0
int32_t r15_1 = 0

if (rdi_2 != 0 && *rdi_2 != 0)
    int64_t rbx_5 = -1
    
    do
        rbx_5 += 1
    while (rdi_2[rbx_5] != 0)
    
    if (rbx_5.d + 1 s> 0)
        sub_1405947f0(&var_48, rbx_5.d + 1)
        r15_1 = var_3c
        rsi_1 = var_40
        r14_1 = var_48
    
    rsi_1 += rbx_5.d + 1
    
    if (rsi_1 s> r15_1)
        sub_140594770(&var_48)
        r15_1 = var_3c
        r14_1 = var_48
    
    UnDecorator::getReferenceType(r14_1, rdi_2, (rbx_5.d + 1) * 2)

int64_t rbx_7 = sx.q(rax_5)
int32_t i_5 = (rbx_7 + 1).d

if (i_5 s> var_7c)
    sub_1405c4f50(&var_88)

int64_t rax_15 = var_58
int64_t* rcx_22 = rbx_7 * 0x30 + var_88
int64_t var_78 = 0
int32_t var_70 = 0
*rcx_22 = rax_15
rcx_22[1].d = var_50_1.d
*(rcx_22 + 0xc) = var_50_1:4.d
rcx_22[2] = r14_1
rcx_22[3].d = rsi_1
*(rcx_22 + 0x1c) = r15_1
rcx_22[4] = 0
rcx_22[5].b = 0
*(rcx_22 + 0x2c) = 0
sub_1405947f0(&var_78, 0xc)
int32_t rax_18 = var_70 + 0xc
var_70 = rax_18

if (rax_18 s> 0)
    sub_140594770(&var_78)

UnDecorator::getReferenceType(var_78, u"Progression", 0x18)
int64_t result = (*(*arg1 + 0x58))(arg1, &var_78, &var_88)
int64_t rcx_27 = var_78

if (rcx_27 != 0)
    result = sub_140a74f90(rcx_27)

int16_t* rcx_28 = var_68

if (rcx_28 != 0)
    result = sub_140a74f90(rcx_28)

int32_t i_3 = i_5
void* rbx_8 = var_88

if (i_3 != 0)
    int32_t i_1
    
    do
        int64_t rcx_29 = *(rbx_8 + 0x10)
        
        if (rcx_29 != 0)
            result = sub_140a74f90(rcx_29)
        
        int64_t rcx_30 = *rbx_8
        
        if (rcx_30 != 0)
            result = sub_140a74f90(rcx_30)
        
        rbx_8 += 0x30
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)
    rbx_8 = var_88

if (rbx_8 == 0)
    return result

return sub_140a74f90(rbx_8)
