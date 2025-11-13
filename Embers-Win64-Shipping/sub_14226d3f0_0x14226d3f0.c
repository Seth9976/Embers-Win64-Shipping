// 函数: sub_14226d3f0
// 地址: 0x14226d3f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 0x348)

if (rcx == 0)
    *arg4 = 0
    *arg3 = 0
    return 0

int64_t var_28
void* rax_5

if (arg2 == 0)
    var_28 = data_143e1eb78
    int64_t var_20_2 = data_143e1eb80
    void* rax_8 = data_143e1eb88
    void* var_18_1 = rax_8
    
    if (rax_8 != 0)
        *(rax_8 + 8) += 1
        rcx = *(arg1 + 0x348)
    
    *arg3 = sub_142411a80(rcx, &var_28)
    var_28 = data_143e1eb90
    int64_t var_20_3 = data_143e1eb98
    rax_5 = data_143e1eba0
else
    if (arg2 != 1)
        *arg3 = 0
        *arg4 = 0
        return 0
    
    var_28 = data_143e1eba8
    int64_t var_20 = data_143e1ebb0
    void* rax_2 = data_143e1ebb8
    void* var_18 = rax_2
    
    if (rax_2 != 0)
        *(rax_2 + 8) += 1
        rcx = *(arg1 + 0x348)
    
    *arg3 = sub_142411a80(rcx, &var_28)
    var_28 = data_143e1ebc0
    int64_t var_20_1 = data_143e1ebc8
    rax_5 = data_143e1ebd0

void* var_18_2 = rax_5

if (rax_5 != 0)
    *(rax_5 + 8) += 1

int64_t result
int32_t zmm0_2
zmm0_2, result = sub_142411a80(*(arg1 + 0x348), &var_28)
*arg4 = zmm0_2
return result
