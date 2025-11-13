// 函数: sub_14128e860
// 地址: 0x14128e860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(&data_143e8eab0)
int64_t rax = data_143e8eaf0
uint64_t rdx = zx.q(arg1) & 0x3fffffff
int64_t r8 = rdx * 0x88
int32_t temp0 = *(r8 + rax + 0x78)
*(r8 + rax + 0x78) -= 1

if (temp0 == 1)
    sub_14128e5e0(&data_143e8eaf0, rdx.d)

return LeaveCriticalSection(&data_143e8eab0) __tailcall
