// 函数: sub_1417d85f0
// 地址: 0x1417d85f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = 0
int64_t var_10 = 0

if (&var_18 != arg2)
    uint32_t count = arg2[1].d
    int64_t rsi_1 = *arg2
    var_10.d = count
    
    if (count != 0)
        sub_1405da9e0(&var_18, count, 0)
        memcpy(var_18, rsi_1, count)

int64_t result = sub_1405a9f90(arg1, &var_18)
int64_t rcx_3 = var_18

if (rcx_3 == 0)
    return result

return sub_140a74f90(rcx_3)
