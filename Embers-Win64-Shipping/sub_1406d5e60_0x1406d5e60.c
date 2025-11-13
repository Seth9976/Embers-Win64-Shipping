// 函数: sub_1406d5e60
// 地址: 0x1406d5e60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_28 = nullptr
int32_t i_2 = 0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_28, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_28)

int64_t* rax_2 = *(arg2 + 0x38)
int64_t* rsi = &var_28

if (rax_2 != 0)
    rsi = rax_2

int128_t var_18 = zx.o(0)
var_18.q = 0
var_18:8.q = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_18, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_18)

int64_t rax_4 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_4 != 0
*(arg2 + 0x20) = rdi + rax_4
int64_t* result = sub_1406cba90(rsi, &var_18)
int64_t rcx_3 = var_18.q

if (rcx_3 != 0)
    result = sub_140a74f90(rcx_3)

int32_t i_1 = i_2
int64_t* rbx_1 = var_28

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx_4 = *rbx_1
        
        if (rcx_4 != 0)
            result = sub_140a74f90(rcx_4)
        
        rbx_1 = &rbx_1[2]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx_1 = var_28

if (rbx_1 == 0)
    return result

return sub_140a74f90(rbx_1)
