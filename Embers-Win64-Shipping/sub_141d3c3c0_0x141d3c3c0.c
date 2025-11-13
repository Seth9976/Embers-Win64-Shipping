// 函数: sub_141d3c3c0
// 地址: 0x141d3c3c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 0x20)
int32_t arg_8
sub_140865c40(arg1 + 0x48, &arg_8, arg2)
int64_t rax = sx.q(arg_8)
int64_t result = 0
void* const rcx_2

if (rax.d == 0xffffffff)
    rcx_2 = nullptr
else
    rcx_2 = *(arg1 + 0x48) + rax * 0x18

int64_t* rax_2 = rcx_2 + 8

if (rcx_2 == 0)
    rax_2 = nullptr

if (rax_2 != 0)
    result = *rax_2

if (arg1 != -0x20)
    LeaveCriticalSection(arg1 + 0x20)

return result
