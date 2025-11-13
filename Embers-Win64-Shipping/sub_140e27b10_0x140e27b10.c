// 函数: sub_140e27b10
// 地址: 0x140e27b10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result

if (*(arg1 + 0xa20) != 1)
    result = data_1439ae51e

if (*(arg1 + 0xa20) == 1 || *(arg1 + 0x9e0) == 0)
    result = data_1439ae520

*(arg1 + 0x8e8) = result
int64_t* rcx = *(arg1 + 0x8a8)
char result_1

if (rcx != 0)
    result_1 = result
    char var_27_1 = 1
    int64_t var_20_1 = 0
    int32_t var_18_1 = 0
    result = sub_140e253b0(rcx, &result_1)

int64_t* rcx_1 = *(arg1 + 0x8b8)

if (rcx_1 != 0)
    result_1 = *(arg1 + 0x8e8)
    char var_27_2 = 1
    int64_t var_20_2 = 0
    int32_t var_18_2 = 0
    result = sub_140e253b0(rcx_1, &result_1)

int64_t* rcx_2 = *(arg1 + 0x8c8)

if (rcx_2 != 0)
    result_1 = *(arg1 + 0x8e8)
    char var_27_3 = 1
    int64_t var_20_3 = 0
    int32_t var_18_3 = 0
    result = sub_140e253b0(rcx_2, &result_1)

int64_t* rcx_3 = *(arg1 + 0x8d8)

if (rcx_3 == 0)
    return result

result_1 = *(arg1 + 0x8e8)
char var_27_4 = 1
int64_t var_20_4 = 0
int32_t var_18_4 = 0
return (*(*rcx_3 + 0x1d8))(rcx_3, &result_1)
