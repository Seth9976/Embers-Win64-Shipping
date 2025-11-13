// 函数: sub_140be3450
// 地址: 0x140be3450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_8 = *arg1
int64_t result = 0
uint64_t var_18 = 0
int32_t var_10 = 0

if (sub_140b0e470(&arg_8, &var_18) != 0)
    int16_t* const rdx_1 = &data_142d40450
    
    if (var_10 != 0)
        rdx_1 = var_18
    
    int64_t arg_10
    sub_140b58260(&arg_10, rdx_1, 0)
    int64_t result_1 = sub_140be2dd0(arg_10, nullptr)
    result = result_1
    
    if (result_1 != -1)
        *arg1 = arg_8

uint64_t rcx_3 = var_18

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

return result
