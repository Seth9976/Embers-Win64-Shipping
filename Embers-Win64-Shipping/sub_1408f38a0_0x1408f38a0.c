// 函数: sub_1408f38a0
// 地址: 0x1408f38a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 0x20)
int64_t* rcx_1 = *(arg1 + 0x48)
int32_t rdi = 0

if (rcx_1 != 0)
    int32_t arg_8 = 0
    (*(*rcx_1 + 0x68))(rcx_1, arg2, zx.q(arg3), &arg_8, 0)
    rdi = arg_8
    
    if (rdi s> 0)
        *(arg1 + 0x54) += 1

if (arg1 != -0x20)
    LeaveCriticalSection(arg1 + 0x20)

return zx.q(rdi)
