// 函数: sub_1425692d0
// 地址: 0x1425692d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t var_38 = 0
int64_t var_30 = 0
int64_t var_28 = 0

if (&var_38 != arg2)
    int64_t rbp_1 = *arg2
    int32_t rdi_1 = arg2[1].d
    var_30.d = rdi_1
    
    if (rdi_1 != 0)
        sub_1405a4c70(&var_38, rdi_1, 0)
        memcpy(var_38, rbp_1, rdi_1 * 2)

int64_t var_28_1 = arg3
int32_t var_20 = arg4.d
int64_t result = (*(*arg1 + 0x210))(arg1, sub_140d1fd30(arg1, data_143f6b810), &var_38)
uint64_t rcx_4 = var_38

if (rcx_4 == 0)
    return result

return sub_140a74f90(rcx_4)
