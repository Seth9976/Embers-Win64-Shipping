// 函数: sub_14180fed0
// 地址: 0x14180fed0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_2 = arg3[1].d
void* rdi = *arg3
void* var_68 = nullptr
int32_t i_4 = i_2
int32_t var_5c

if (i_2 != 0)
    sub_1405a4b40(&var_68, i_2, 0)
    void* rbx_2 = var_68 + 0x20
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
    var_5c = 0

int16_t* rbx_3

if (arg2[1].d == 0)
    rbx_3 = &data_142d40450
else
    rbx_3 = *arg2

int64_t var_48 = 0
int64_t var_40 = 0
sub_1405947f0(&var_48, 6)
int32_t rax_4 = var_40.d + 6
var_40.d = rax_4

if (rax_4 s> 0)
    sub_140594770(&var_48)

UnDecorator::getReferenceType(var_48, u"Error", 0xc)
int64_t var_38
sub_1417ea920(&var_38, rbx_3)
int64_t i_6 = sx.q(i_4)
int32_t i_5 = (i_6 + 1).d

if (i_5 s> var_5c)
    sub_1405c4f50(&var_68)

int64_t rax_5 = var_48
int64_t* rcx_10 = i_6 * 0x30 + var_68
int64_t var_58 = 0
int32_t var_50 = 0
*rcx_10 = rax_5
rcx_10[1].d = var_40.d
*(rcx_10 + 0xc) = var_40:4.d
rcx_10[2] = var_38
int32_t var_30
rcx_10[3].d = var_30
int32_t var_2c
*(rcx_10 + 0x1c) = var_2c
rcx_10[4] = 0
rcx_10[5].b = 0
*(rcx_10 + 0x2c) = 0
sub_1405947f0(&var_58, 0xb)
int32_t rax_11 = var_50 + 0xb
var_50 = rax_11

if (rax_11 s> 0)
    sub_140594770(&var_58)

UnDecorator::getReferenceType(var_58, u"Game Error", 0x16)
int64_t result = (*(*arg1 + 0x58))(arg1, &var_58, &var_68)
int64_t rcx_15 = var_58

if (rcx_15 != 0)
    result = sub_140a74f90(rcx_15)

int32_t i_3 = i_5
void* rbx_4 = var_68

if (i_3 != 0)
    int32_t i_1
    
    do
        int64_t rcx_16 = *(rbx_4 + 0x10)
        
        if (rcx_16 != 0)
            result = sub_140a74f90(rcx_16)
        
        int64_t rcx_17 = *rbx_4
        
        if (rcx_17 != 0)
            result = sub_140a74f90(rcx_17)
        
        rbx_4 += 0x30
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)
    rbx_4 = var_68

if (rbx_4 == 0)
    return result

return sub_140a74f90(rbx_4)
