// 函数: sub_142004830
// 地址: 0x142004830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(&arg1[0x14])
int32_t arg_8
sub_142002e20(arg1, &arg_8, arg2)
int64_t rax = sx.q(arg_8)
void* rdx_1

if (rax.d == 0xffffffff)
    rdx_1 = nullptr
else
    rdx_1 = *arg1 + rax * 0x48

void* const rax_2 = rdx_1 + 0x10

if (rdx_1 == 0)
    rax_2 = nullptr

int64_t* rdi

if (rax_2 != 0)
    rdi.b = 1
    *arg3 = *(rax_2 + 0x10)
else
    rdi.b = 0

if (arg1 != -0xa0)
    LeaveCriticalSection(&arg1[0x14])

return zx.q(rdi.b)
