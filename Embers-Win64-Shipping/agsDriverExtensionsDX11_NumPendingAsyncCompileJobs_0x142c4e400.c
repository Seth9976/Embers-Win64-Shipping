// 函数: agsDriverExtensionsDX11_NumPendingAsyncCompileJobs
// 地址: 0x142c4e400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0 || arg2 == 0)
    return 2

if ((*(arg1 + 0x130) & 0x20000) == 0)
    return 6

int64_t* rcx = *(arg1 + 0x170)
int32_t rax_2 = (*(*rcx + 0x28))(rcx)
int32_t rax_3 = neg.d(rax_2)
return zx.q(sbb.d(rax_3, rax_3, rax_2 != 0)) & 8
