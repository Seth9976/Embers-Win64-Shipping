// 函数: sub_142569a00
// 地址: 0x142569a00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t var_30 = 0
int64_t var_28 = 0
int64_t var_20 = 0
int64_t var_38 = arg2

if (&var_30 != arg3)
    int64_t rbp_1 = *arg3
    int32_t rdi_1 = arg3[1].d
    var_28.d = rdi_1
    
    if (rdi_1 != 0)
        sub_1405a4c70(&var_30, rdi_1, 0)
        memcpy(var_30, rbp_1, rdi_1 * 2)

int64_t r9
int64_t var_20_1 = r9
int32_t var_18 = arg4
int64_t result = (*(*arg1 + 0x210))(arg1, sub_140d1fd30(arg1, data_143f6b8f8), &var_38)
uint64_t rcx_4 = var_30

if (rcx_4 == 0)
    return result

return sub_140a74f90(rcx_4)
