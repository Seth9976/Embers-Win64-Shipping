// 函数: sub_141c63a10
// 地址: 0x141c63a10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 0xb8)
int64_t* rcx_1 = *(arg1 + 0x60)
uint64_t rdi

if (rcx_1 == 0)
    rdi.b = 1
else
    rdi = zx.q((*(*rcx_1 + 8))(rcx_1))

if (arg1 != -0xb8)
    LeaveCriticalSection(arg1 + 0xb8)

return zx.q(rdi.b)
