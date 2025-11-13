// 函数: sub_1422b8fc0
// 地址: 0x1422b8fc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x40)

if (rcx != 0)
    (**rcx)(rcx, 1)
    *(arg1 + 0x40) = 0

int64_t* rcx_1 = *(arg1 + 0x50)

if (rcx_1 != 0)
    (**rcx_1)(rcx_1, 1)
    *(arg1 + 0x50) = 0

void*** rax_3
void** const rcx_2

if (*(arg1 + 0x81) == 0)
    *(arg1 + 0x70) = 8
    rax_3 = j_sub_140a82f30(0x28)
    
    if (rax_3 == 0)
        rax_3 = nullptr
    else
        *rax_3 = &data_1433179b8
        rcx_2 = &data_143317978
    label_1422b9057:
        rax_3[2] = 0
        rax_3[3] = 0
        rax_3[4].b = arg2
        rax_3[1] = rcx_2
else
    *(arg1 + 0x70) = 0x10
    rax_3 = j_sub_140a82f30(0x28)
    
    if (rax_3 != 0)
        *rax_3 = &data_143317918
        rcx_2 = &data_1433178d8
        goto label_1422b9057
    
    rax_3 = nullptr
*(arg1 + 0x40) = rax_3
void*** result

if (*(arg1 + 0x80) == 0)
    *(arg1 + 0x74) = 4
    result = j_sub_140a82f30(0x28)
    
    if (result == 0)
        result = nullptr
    else
        *result = &data_143317a58
        result[2] = 0
        result[3] = 0
        result[1] = &data_143317a18
        result[4].b = arg2
else
    *(arg1 + 0x74) = 8
    result = j_sub_140a82f30(0x28)
    
    if (result == 0)
        result = nullptr
    else
        *result = &data_143317878
        result[2] = 0
        result[3] = 0
        result[1] = &data_143317838
        result[4].b = arg2

*(arg1 + 0x50) = result
return result
