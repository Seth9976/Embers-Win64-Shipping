// 函数: sub_1417e7710
// 地址: 0x1417e7710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_20 = 0
int64_t var_18 = 0
int32_t var_28 = arg2

if (&var_20 != arg3)
    uint32_t count = arg3[1].d
    int64_t rsi_1 = *arg3
    var_18.d = count
    
    if (count != 0)
        sub_1405da9e0(&var_20, count, 0)
        memcpy(var_20, rsi_1, count)

int64_t result = (*(*arg1 + 0x210))(arg1, sub_140d1fd30(arg1, data_143ef8f68), &var_28)
int64_t rcx_4 = var_20

if (rcx_4 == 0)
    return result

return sub_140a74f90(rcx_4)
