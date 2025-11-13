// 函数: sub_141e809d0
// 地址: 0x141e809d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 0xf8)
int32_t arg_8
sub_140865c40(arg1 + 0x10, &arg_8, arg2)
int64_t rax = sx.q(arg_8)
void* rax_2

if (rax.d != 0xffffffff)
    rax_2 = *(arg1 + 0x10) + rax * 0x18

int64_t rax_3

if (rax.d == 0xffffffff || rax_2 == 0)
    rax_3 = 0
else
    rax_3 = *(rax_2 + 8)

int64_t* rdi_1
rdi_1.b = rax_3 != 0

if (arg1 != -0xf8)
    LeaveCriticalSection(arg1 + 0xf8)

return zx.q(rdi_1.b)
