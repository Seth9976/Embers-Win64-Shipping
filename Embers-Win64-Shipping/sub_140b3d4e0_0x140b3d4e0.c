// 函数: sub_140b3d4e0
// 地址: 0x140b3d4e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1)
int64_t var_18
int32_t arg_8
sub_14062d5f0(&arg1[1], &arg_8, sub_140a35730(arg2, &var_18))
int64_t rax_1 = sx.q(arg_8)
void* const rcx_4

if (rax_1.d == 0xffffffff)
    rcx_4 = nullptr
else
    rcx_4 = (rax_1 << 5) + arg1->__offset(0x28).q

int32_t* rbx_1 = rcx_4 + 0x10
int64_t rcx_5 = var_18

if (rcx_4 == 0)
    rbx_1 = nullptr

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

int32_t rbx_2

if (rbx_1 == 0)
    rbx_2 = -1
else
    rbx_2 = *rbx_1

if (arg1 != 0)
    LeaveCriticalSection(arg1)

return zx.q(rbx_2)
