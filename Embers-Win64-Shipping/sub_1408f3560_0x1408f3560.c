// 函数: sub_1408f3560
// 地址: 0x1408f3560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 0x20)
int64_t* rcx_1 = *(arg1 + 0x48)
int32_t rax_2

if (rcx_1 != 0)
    rax_2 = (*(*rcx_1 + 0x80))(rcx_1)

uint64_t rdi

if (rcx_1 == 0 || rax_2 != 1)
    rdi.b = 0
else
    rdi = zx.q(rax_2.b)

if (arg1 != -0x20)
    LeaveCriticalSection(arg1 + 0x20)

return zx.q(rdi.b)
