// 函数: sub_1405f7b60
// 地址: 0x1405f7b60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = -2

if (arg2 == 0)
    return 0x80004003

void* arg_10 = arg1 + 0x18
EnterCriticalSection(arg1 + 0x18)
int32_t rdi_1

if (*(arg1 + 0x40) != 0)
    int64_t* rcx_1 = *(arg1 + 0x48)
    
    if (rcx_1 != 0)
        rdi_1 = (*(*rcx_1 + 0x50))(rcx_1, &data_1434cbb80, arg2)
    else
        rdi_1 = -0x3ff2c94a
else
    rdi_1 = -0x3ff2c17b

if (arg1 != -0x18)
    LeaveCriticalSection(arg1 + 0x18)

return zx.q(rdi_1)
