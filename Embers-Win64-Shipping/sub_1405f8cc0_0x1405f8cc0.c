// 函数: sub_1405f8cc0
// 地址: 0x1405f8cc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = -2

if (arg3 == 0)
    return 0x80004003

if (arg2 != 0)
    return 0xc00d36bf

void* arg_18 = arg1 + 0x18
EnterCriticalSection(arg1 + 0x18)
void* rcx_1 = *(arg1 + 0x50)
int32_t rdi_1

if (rcx_1 != 0)
    *arg3 = rcx_1 + 0x10
    (*(*(rcx_1 + 0x10) + 8))()
    rdi_1 = 0
else
    rdi_1 = -0x3ff2c17b

if (arg1 != -0x18)
    LeaveCriticalSection(arg1 + 0x18)

return zx.q(rdi_1)
