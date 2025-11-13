// 函数: sub_14098bb50
// 地址: 0x14098bb50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t var_28 = 0
int64_t var_20
__builtin_memset(&var_20, 0, 0x18)
sub_140597df0(&var_28, arg2)
int64_t var_18

if (&var_18 != &arg2[2])
    uint32_t count = arg2[3].d
    int64_t var_10
    int32_t r8_1 = var_10:4.d
    int64_t rsi_1 = arg2[2]
    var_10.d = count
    
    if (count != 0 || r8_1 != 0)
        sub_1405da9e0(&var_18, count, r8_1)
        memcpy(var_18, rsi_1, count)
    else
        var_10:4.d = 0

int64_t result = sub_1405a9f90(arg1, &var_28)
int64_t rcx_4 = var_18

if (rcx_4 != 0)
    result = sub_140a74f90(rcx_4)

uint64_t rcx_5 = var_28

if (rcx_5 == 0)
    return result

return sub_140a74f90(rcx_5)
