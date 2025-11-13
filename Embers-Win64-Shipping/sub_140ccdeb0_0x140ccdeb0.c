// 函数: sub_140ccdeb0
// 地址: 0x140ccdeb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(&data_1439a9ee8)
int32_t arg_10
sub_140cba0f0(&data_1439a9e98, &arg_10, arg1)
int64_t rax = sx.q(arg_10)
int64_t rcx_1

if (rax.d != 0xffffffff)
    rcx_1 = rax << 5

int64_t result

if (rax.d == 0xffffffff || rcx_1 == neg.q(data_1439a9e98))
    result = 0
else
    result = *(rcx_1 + data_1439a9e98 + 0x10)

LeaveCriticalSection(&data_1439a9ee8)
return result
