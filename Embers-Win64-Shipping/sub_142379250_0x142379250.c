// 函数: sub_142379250
// 地址: 0x142379250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rsi = data_1439ae520

if (*(arg1 + 0x4d1) != 0)
    rsi = data_1439ae51c

char result = *(arg1 + 0x4d0)
char var_28

if (result != 0)
    if (result != 1)
        return result
    
    int64_t* rcx_1 = *(arg1 + 0x480)
    var_28 = data_1439ae51d
    int64_t var_20_2 = 0
    int32_t var_18_2 = 0
    char var_27_2 = 1
    sub_140e253b0(rcx_1, &var_28)
    char rcx_2 = data_1439ae51d
    
    if (*(arg1 + 0x4d3) != 0)
        rcx_2 = rsi
    
    var_28 = rcx_2
else
    char rdx_1 = data_1439ae51d
    int64_t* rcx = *(arg1 + 0x480)
    
    if (*(arg1 + 0x4d3) != 0)
        rdx_1 = rsi
    
    char var_27_1 = 1
    var_28 = rdx_1
    int64_t var_20_1 = 0
    int32_t var_18_1 = 0
    sub_140e253b0(rcx, &var_28)
    var_28 = data_1439ae51d

char var_27_3 = 1
int64_t var_20_3 = 0
int32_t var_18_3 = 0
return sub_140e253b0(*(arg1 + 0x490), &var_28)
