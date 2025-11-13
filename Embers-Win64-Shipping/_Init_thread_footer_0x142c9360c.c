// 函数: _Init_thread_footer
// 地址: 0x142c9360c
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(&data_14401b168)
uint64_t rdx = zx.q(data_14401b1a0)
int32_t rax_1 = data_143ccb950 + 1
data_143ccb950 = rax_1
*arg1 = rax_1
TEB* gsbase
*(0x14 + *(gsbase->ThreadLocalStoragePointer + (rdx << 3))) = data_143ccb950
LeaveCriticalSection(&data_14401b168)
return _Init_thread_notify() __tailcall
