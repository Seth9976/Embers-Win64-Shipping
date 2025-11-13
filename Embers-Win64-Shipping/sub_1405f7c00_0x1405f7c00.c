// 函数: sub_1405f7c00
// 地址: 0x1405f7c00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = -2

if (arg2 == 0)
    return 0x80004003

void* arg_10 = arg1 + 0x10
EnterCriticalSection(arg1 + 0x10)
int32_t rdi_1

if (*(arg1 + 0x38) != 0)
    void* rax_2 = *(arg1 + 0x48)
    int64_t* rcx_1 = rax_2 + 0x10
    rdi_1 = 0
    
    if (rax_2 == 0)
        rcx_1 = nullptr
    
    *arg2 = rcx_1
    int64_t rdx = *rcx_1
    (*(rdx + 8))(arg3, rdx)
else
    rdi_1 = -0x3ff2c17b

if (arg1 != -0x10)
    LeaveCriticalSection(arg1 + 0x10)

return zx.q(rdi_1)
