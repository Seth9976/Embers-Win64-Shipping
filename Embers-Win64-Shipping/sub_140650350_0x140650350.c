// 函数: sub_140650350
// 地址: 0x140650350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_68 = nullptr
int32_t i_2 = 0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_68, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_68)

int64_t* rax_2 = *(arg2 + 0x38)
int64_t* rsi = &var_68
int32_t arg_10 = 0
*(arg2 + 0x38) = 0

if (rax_2 != 0)
    rsi = rax_2

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_10, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int32_t* rax_4 = *(arg2 + 0x38)
int32_t* rdi = &arg_10
int64_t var_58 = 0
int32_t var_50 = 0

if (rax_4 != 0)
    rdi = rax_4

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_58, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_58)

int32_t arg_18 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &arg_18, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_18)

int64_t rax_7 = *(arg2 + 0x20)
int64_t r15 = var_58
int64_t r14
r14.b = arg_18 != 0
int64_t var_48 = 0
int64_t rcx_4
rcx_4.b = rax_7 != 0
*(arg2 + 0x20) = rcx_4 + rax_7
int32_t var_40 = var_50

if (var_50 != 0)
    sub_1405a4c70(&var_48, var_50, 0)
    memcpy(var_48, r15, var_50 * 2)
else
    int32_t var_3c_1 = 0

char result = sub_140634570(rsi, rdi, &var_48, r14.b)
int64_t rcx_9 = var_58
*arg3 = result

if (rcx_9 != 0)
    result = sub_140a74f90(rcx_9)

int32_t i_1 = i_2
int64_t* rbx_2 = var_68

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx_10 = *rbx_2
        
        if (rcx_10 != 0)
            result = sub_140a74f90(rcx_10)
        
        rbx_2 = &rbx_2[2]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx_2 = var_68

if (rbx_2 == 0)
    return result

return sub_140a74f90(rbx_2)
