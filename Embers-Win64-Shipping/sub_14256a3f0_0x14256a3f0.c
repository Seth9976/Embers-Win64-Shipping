// 函数: sub_14256a3f0
// 地址: 0x14256a3f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t var_18 = 0
int64_t var_10 = 0

if (&var_18 != arg2)
    int32_t rbx_1 = arg2[1].d
    int64_t rsi_1 = *arg2
    var_10.d = rbx_1
    
    if (rbx_1 != 0)
        sub_1405a4c70(&var_18, rbx_1, 0)
        memcpy(var_18, rsi_1, rbx_1 * 2)

int64_t result = (*(*arg1 + 0x210))(arg1, sub_140d1fd30(arg1, data_143f6b948), &var_18)
uint64_t rcx_4 = var_18

if (rcx_4 == 0)
    return result

return sub_140a74f90(rcx_4)
