// 函数: sub_1405f7760
// 地址: 0x1405f7760
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28 = -2
int64_t* rbx = nullptr
int64_t* arg_8 = nullptr
void* arg_20 = arg1 + 0x10
EnterCriticalSection(arg1 + 0x10)
int64_t* rcx_1 = *(arg1 + 0x38)
int32_t rdi_1

if (rcx_1 != 0)
    (*(*rcx_1 + 8))(rcx_1)
    rbx = *(arg1 + 0x38)
    arg_8 = rbx
    
    if (arg1 != -0x10)
        LeaveCriticalSection(arg1 + 0x10)
    
    rdi_1 = (*(*rbx + 0x18))(rbx, zx.q(arg2), arg3)
else
    if (arg1 != -0x10)
        LeaveCriticalSection(arg1 + 0x10)
    
    rdi_1 = -0x3ff2c17b

if (rbx != 0)
    int64_t rdx_1 = *rbx
    (*(rdx_1 + 0x10))(rbx, rdx_1)

return zx.q(rdi_1)
