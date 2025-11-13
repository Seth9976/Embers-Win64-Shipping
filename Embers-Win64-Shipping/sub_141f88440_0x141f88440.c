// 函数: sub_141f88440
// 地址: 0x141f88440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_8
sub_141f7a100(&arg_8, arg1)
sub_140cdba30(arg1)
(*(*arg1 + 0x260))(arg1)
EnterCriticalSection(&data_143f3c8d0)
void* rbx_1 = arg_8
sub_140865c40(&data_143a2db70, &arg_8, rbx_1)
int64_t rax_1 = sx.q(arg_8.d)
void* const rcx_3

if (rax_1.d == 0xffffffff)
    rcx_3 = nullptr
else
    rcx_3 = data_143a2db70 + rax_1 * 0x18

int32_t temp0 = *(rcx_3 + 8)
*(rcx_3 + 8) -= 1

if (temp0 == 1)
    sub_140599090(rbx_1 + 0x80)
    sub_140868c90(&data_143a2db70, rbx_1)

return LeaveCriticalSection(&data_143f3c8d0) __tailcall
