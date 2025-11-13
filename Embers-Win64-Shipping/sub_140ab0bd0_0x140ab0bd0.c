// 函数: sub_140ab0bd0
// 地址: 0x140ab0bd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 8)
int32_t arg_8
sub_1405e21c0(arg1 + 0xd0, &arg_8, arg2)
int64_t rax = sx.q(arg_8)
int16_t rdi = 0
void* const rcx_4

if (rax.d == 0xffffffff)
    rcx_4 = nullptr
else
    rcx_4 = (rax << 5) + *(arg1 + 0xd0)

int16_t* rax_1 = rcx_4 + 0x10

if (rcx_4 == 0)
    rax_1 = nullptr

if (rax_1 != 0)
    rdi = *rax_1

if (arg1 != -8)
    LeaveCriticalSection(arg1 + 8)

return zx.q(rdi)
