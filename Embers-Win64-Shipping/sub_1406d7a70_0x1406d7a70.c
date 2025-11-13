// 函数: sub_1406d7a70
// 地址: 0x1406d7a70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_68 = nullptr
int32_t i_6 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_68, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_68)

int32_t arg_20 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_20, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

int32_t arg_10 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &arg_10, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t* var_58 = nullptr
int32_t i_7 = 0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_58, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_58)

int64_t* rax_5 = *(arg2 + 0x38)
int64_t* r12 = &var_58

if (rax_5 != 0)
    r12 = rax_5

int64_t rax_6 = *(arg2 + 0x20)
int64_t rcx_4
rcx_4.b = rax_6 != 0
*(arg2 + 0x20) = rcx_4 + rax_6
int64_t* var_48
int64_t* var_78 = &var_48
var_48 = nullptr
int32_t i_5 = i_6
int64_t* rdi = var_68
int32_t i_8 = i_5

if (i_5 != 0)
    sub_1405a4be0(&var_48, i_5, 0)
    int64_t* rbx_1 = var_48
    int32_t i
    
    do
        int64_t* var_70_1 = rbx_1
        *rbx_1 = 0
        int32_t rsi_1 = rdi[1].d
        int64_t r15_1 = *rdi
        rbx_1[1].d = rsi_1
        
        if (rsi_1 != 0)
            sub_1405a4c70(rbx_1, rsi_1, 0)
            memcpy(*rbx_1, r15_1, rsi_1 * 2)
        else
            *(rbx_1 + 0xc) = 0
        
        rbx_1 = &rbx_1[2]
        rdi = &rdi[2]
        i = i_5
        i_5 -= 1
    while (i != 1)
else
    int32_t var_3c_1 = 0

int64_t result = sub_1406cf8c0(&var_48, arg_20, arg_10, r12)
int32_t i_3 = i_7
int64_t* rbx_2 = var_58

if (i_3 != 0)
    int32_t i_1
    
    do
        int64_t rcx_10 = *rbx_2
        
        if (rcx_10 != 0)
            result = sub_140a74f90(rcx_10)
        
        rbx_2 = &rbx_2[2]
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)
    rbx_2 = var_58

if (rbx_2 != 0)
    result = sub_140a74f90(rbx_2)

int32_t i_4 = i_6
int64_t* rbx_3 = var_68

if (i_4 != 0)
    int32_t i_2
    
    do
        int64_t rcx_12 = *rbx_3
        
        if (rcx_12 != 0)
            result = sub_140a74f90(rcx_12)
        
        rbx_3 = &rbx_3[2]
        i_2 = i_4
        i_4 -= 1
    while (i_2 != 1)
    rbx_3 = var_68

if (rbx_3 == 0)
    return result

return sub_140a74f90(rbx_3)
