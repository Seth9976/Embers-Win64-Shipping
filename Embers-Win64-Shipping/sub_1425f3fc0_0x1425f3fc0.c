// 函数: sub_1425f3fc0
// 地址: 0x1425f3fc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = arg2
EnterCriticalSection(arg1 + 0x18)
char rax_1

if (*(arg1 + 0x48) == 0)
    rax_1 = sub_1425f4120(arg1)

void* rdi

if (*(arg1 + 0x48) != 0 || rax_1 != 0)
    sub_1405a7050(arg1 + 0x40, &arg_10)
    rdi.b = 1
else
    rdi.b = 0

if (arg1 != -0x18)
    LeaveCriticalSection(arg1 + 0x18)

return zx.q(rdi.b)
