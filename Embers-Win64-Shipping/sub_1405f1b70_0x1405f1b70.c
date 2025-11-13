// 函数: sub_1405f1b70
// 地址: 0x1405f1b70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = -2
void* arg_8 = arg1 + 0x10
EnterCriticalSection(arg1 + 0x10)
int64_t* rcx_1 = *(arg1 + 0x38)
int32_t rdi_1

if (rcx_1 != 0)
    rdi_1 = (*(*rcx_1 + 0x20))(rcx_1, arg2, arg3)
else
    rdi_1 = -0x3ff2c17b

if (arg1 != -0x10)
    LeaveCriticalSection(arg1 + 0x10)

return zx.q(rdi_1)
