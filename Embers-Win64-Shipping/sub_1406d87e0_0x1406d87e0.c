// 函数: sub_1406d87e0
// 地址: 0x1406d87e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_18 = zx.o(0)
var_18.q = 0
var_18:8.q = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_18, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_18)

int64_t* var_28 = nullptr
int32_t i_5 = 0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_28, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_28)

int64_t* rax_3 = *(arg2 + 0x38)
int64_t* rsi = &var_28

if (rax_3 != 0)
    rsi = rax_3

int64_t* var_38 = nullptr
int32_t i_4 = 0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_38, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_38)

int64_t* rax_5 = *(arg2 + 0x38)
int64_t* r8_6 = &var_38

if (rax_5 != 0)
    r8_6 = rax_5

int64_t rax_6 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_6 != 0
*(arg2 + 0x20) = rdi + rax_6
int64_t result = sub_1406d0f70(&var_18, rsi, r8_6)
int32_t i_2 = i_4
int64_t* rbx_1 = var_38

if (i_2 != 0)
    int32_t i
    
    do
        int64_t rcx_4 = *rbx_1
        
        if (rcx_4 != 0)
            result = sub_140a74f90(rcx_4)
        
        rbx_1 = &rbx_1[2]
        i = i_2
        i_2 -= 1
    while (i != 1)
    rbx_1 = var_38

if (rbx_1 != 0)
    result = sub_140a74f90(rbx_1)

int32_t i_3 = i_5
int64_t* rbx_2 = var_28

if (i_3 != 0)
    int32_t i_1
    
    do
        int64_t rcx_6 = *rbx_2
        
        if (rcx_6 != 0)
            result = sub_140a74f90(rcx_6)
        
        rbx_2 = &rbx_2[2]
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)
    rbx_2 = var_28

if (rbx_2 != 0)
    result = sub_140a74f90(rbx_2)

int64_t rcx_8 = var_18.q

if (rcx_8 == 0)
    return result

return sub_140a74f90(rcx_8)
