// 函数: sub_1424b2820
// 地址: 0x1424b2820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t var_20 = 0
int64_t var_18 = 0
int64_t var_28 = arg2

if (&var_20 != arg3)
    int32_t rbx_1 = arg3[1].d
    int64_t rsi_1 = *arg3
    var_18.d = rbx_1
    
    if (rbx_1 != 0)
        sub_1405a4c70(&var_20, rbx_1, 0)
        memcpy(var_20, rsi_1, rbx_1 * 2)

char r9
char var_10 = r9
int64_t result = (*(*arg1 + 0x210))(arg1, sub_140d1fd30(arg1, data_143f64140), &var_28)
uint64_t rcx_4 = var_20

if (rcx_4 == 0)
    return result

return sub_140a74f90(rcx_4)
