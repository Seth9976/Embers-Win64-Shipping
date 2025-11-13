// 函数: sub_1405fc490
// 地址: 0x1405fc490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 0x28)
void* rax = *(arg1 + 0x60)
int32_t rdi_1

if (rax != 0)
    *(rax + 0x88) = arg3.d
    rdi_1 = 0
else
    rdi_1 = -0x3ff2c17b

if (arg1 != -0x28)
    LeaveCriticalSection(arg1 + 0x28)

return zx.q(rdi_1)
