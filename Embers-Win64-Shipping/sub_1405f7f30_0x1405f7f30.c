// 函数: sub_1405f7f30
// 地址: 0x1405f7f30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = -2

if (arg2 == 0)
    return 0x80004003

void* arg_10 = arg1 + 0x10
EnterCriticalSection(arg1 + 0x10)
int32_t rdi_1

if (*(arg1 + 0x38) != 0)
    rdi_1 = (**(arg1 - 0x10))(arg1 - 0x10, &data_1434cbda0, arg2)
else
    rdi_1 = -0x3ff2c17b

if (arg1 != -0x10)
    LeaveCriticalSection(arg1 + 0x10)

return zx.q(rdi_1)
