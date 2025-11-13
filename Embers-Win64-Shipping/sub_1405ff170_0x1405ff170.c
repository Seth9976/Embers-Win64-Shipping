// 函数: sub_1405ff170
// 地址: 0x1405ff170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = -2

if (arg2 != 0)
    return 0xc00d36b3

if ((arg4 & 0xfffffffe) != 0)
    return 0x80070057

int32_t rdi_1 = 0
void* var_10_1 = &arg1[2]
EnterCriticalSection(&arg1[2])

if ((*(*arg1 + 0x100))(arg1) == 0)
    int32_t rax_4
    
    if (arg3 != 0)
        rax_4 = (*(*arg1 + 0xf0))(arg1, arg3)
        rdi_1 = rax_4
    
    if ((arg3 == 0 || rax_4 s>= 0) && (not.d(arg4) & 1) != 0)
        rdi_1 = (*(*arg1 + 0xf8))(arg1, arg3)
else
    rdi_1 = -0x3ff2928c

if (arg1 != -0x10)
    LeaveCriticalSection(&arg1[2])

return zx.q(rdi_1)
