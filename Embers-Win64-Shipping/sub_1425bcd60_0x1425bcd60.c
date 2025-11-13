// 函数: sub_1425bcd60
// 地址: 0x1425bcd60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_38 = 0
int64_t var_30 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_38, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_38)

int64_t* var_48 = nullptr
int32_t i_2 = 0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_48, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_48)

int64_t* rax_3 = *(arg2 + 0x38)
int64_t* rsi = &var_48
char arg_8 = 0

if (rax_3 != 0)
    rsi = rax_3

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &arg_8, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_8)

int32_t arg_10 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &arg_10, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t rax_6 = *(arg2 + 0x20)
uint64_t r9 = zx.q(arg_8)
int64_t rdi
rdi.b = rax_6 != 0
int32_t rax_7 = arg_10
*(arg2 + 0x20) = rdi + rax_6
char result = (*(*arg1 + 0x2a0))(arg1, &var_38, rsi, r9, rax_7)
int32_t i_1 = i_2
int64_t* rbx_1 = var_48
*arg3 = result

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx_5 = *rbx_1
        
        if (rcx_5 != 0)
            result = sub_140a74f90(rcx_5)
        
        rbx_1 = &rbx_1[2]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx_1 = var_48

if (rbx_1 != 0)
    result = sub_140a74f90(rbx_1)

int64_t rcx_7 = var_38

if (rcx_7 == 0)
    return result

return sub_140a74f90(rcx_7)
