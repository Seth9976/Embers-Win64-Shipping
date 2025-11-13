// 函数: sub_1406237e0
// 地址: 0x1406237e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_18 = nullptr
int32_t i_5 = 0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_18, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_18)

int64_t* rax_2 = *(arg2 + 0x38)
int64_t* rsi = &var_18
int64_t* var_28 = nullptr
int32_t i_4 = 0

if (rax_2 != 0)
    rsi = rax_2

*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_28, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_28)

int64_t* rax_4 = *(arg2 + 0x38)
int64_t* rdx_4 = &var_28

if (rax_4 != 0)
    rdx_4 = rax_4

int64_t rax_5 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_5 != 0
*(arg2 + 0x20) = rdi + rax_5
int64_t result = sub_14061fd20(rsi, rdx_4)
int32_t i_2 = i_4
int64_t* rbx_1 = var_28

if (i_2 != 0)
    int32_t i
    
    do
        int64_t rcx_3 = *rbx_1
        
        if (rcx_3 != 0)
            result = sub_140a74f90(rcx_3)
        
        rbx_1 = &rbx_1[3]
        i = i_2
        i_2 -= 1
    while (i != 1)
    rbx_1 = var_28

if (rbx_1 != 0)
    result = sub_140a74f90(rbx_1)

int32_t i_3 = i_5
int64_t* rbx_2 = var_18

if (i_3 != 0)
    int32_t i_1
    
    do
        int64_t rcx_5 = *rbx_2
        
        if (rcx_5 != 0)
            result = sub_140a74f90(rcx_5)
        
        rbx_2 = &rbx_2[3]
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)
    rbx_2 = var_18

if (rbx_2 == 0)
    return result

return sub_140a74f90(rbx_2)
