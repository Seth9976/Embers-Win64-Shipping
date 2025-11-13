// 函数: sub_141f8f3c0
// 地址: 0x141f8f3c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_8
sub_141f7a100(&arg_8, arg1 - 0x28)
EnterCriticalSection(&data_143f3c8d0)
void* rbx = arg_8
sub_140865c40(&data_143a2db70, &arg_8, rbx)
int64_t rax = sx.q(arg_8.d)
void* const rcx_1

if (rax.d == 0xffffffff)
    rcx_1 = nullptr
else
    rcx_1 = data_143a2db70 + rax * 0x18

int32_t temp0 = *(rcx_1 + 8)
*(rcx_1 + 8) -= 1

if (temp0 == 1)
    sub_140599090(rbx + 0x80)
    sub_140868c90(&data_143a2db70, rbx)

return LeaveCriticalSection(&data_143f3c8d0) __tailcall
