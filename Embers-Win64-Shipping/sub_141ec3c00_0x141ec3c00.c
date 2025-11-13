// 函数: sub_141ec3c00
// 地址: 0x141ec3c00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t (* var_28)(int64_t* arg1) = sub_141eb84d4
void* rsi = nullptr
uint8_t rax_1 = (arg1[1].d u>> 4).b
int64_t* result_1 = nullptr
int32_t var_30 = 0
int32_t var_20 = 0

if ((rax_1 & 1) == 0)
    rsi = arg1[4]

void*** rax_2 = sub_140a84c80(0, 0x30, 0)

if (rax_2 != 0)
    *rax_2 = &data_14325ce88
    sub_140d3a3a0(&rax_2[1], rsi)
    *(rax_2 + 0x10) = var_28.o
    rax_2[5] = sub_140a387b0()
    (*rax_2)[8](rax_2, &result_1)
else if (var_30 != 0)
    int64_t* result_2 = result_1
    
    if (result_2 != 0)
        (*(*result_2 + 0x38))(result_2, 0)
        int64_t* result_3 = result_1
        
        if (result_3 != 0)
            result_1 = sub_140a84c80(result_3, 0, 0)

if (rax_2 != 0)
    (*rax_2)[7](rax_2, 0)
    int64_t rax_8 = sub_140a84c80(rax_2, 0, 0)
    
    if (rax_8 != 0)
        sub_140a74f90(rax_8)

int64_t* rbx_1 = *((*(*arg1 + 0x150))(arg1) + 0x128)
var_28 = nullptr
int32_t var_20_1 = 0

if (var_30 != 0)
    int64_t* result_4 = result_1
    
    if (result_4 != 0)
        (*(*result_4 + 0x40))(result_4, &var_28)

int64_t rdx_4 = 0

if (((arg1[1].d u>> 4).b & 1) == 0)
    rdx_4 = arg1[4]

(*(*rbx_1 + 0x6c0))(rbx_1, rdx_4, &var_28)
int128_t zmm6
zmm6.d = arg2.d f+ *((*(*arg1 + 0x150))(arg1) + 0x520)
int64_t* result = (*(*arg1 + 0x150))(arg1)
*(result + 0x534) = zmm6.d

if (var_30 == 0)
    result = result_1
label_141ec3dc8:
    
    if (result != 0)
        return sub_140a74f90(result)
else
    int64_t* result_5 = result_1
    
    if (result_5 != 0)
        (*(*result_5 + 0x38))(result_5, 0)
        result = result_1
        
        if (result != 0)
            result = sub_140a84c80(result, 0, 0)
            result_1 = result
        
        int32_t var_30_1 = 0
        goto label_141ec3dc8

return result
