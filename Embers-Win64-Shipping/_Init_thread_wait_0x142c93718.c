// 函数: _Init_thread_wait
// 地址: 0x142c93718
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = data_14401b190

if (rax != 0)
    return rax(&data_14401b158, &data_14401b168, zx.q(arg1)) __tailcall

LeaveCriticalSection(&data_14401b168)
WaitForSingleObjectEx(data_14401b160, arg1, 0)
return EnterCriticalSection(&data_14401b168) __tailcall
