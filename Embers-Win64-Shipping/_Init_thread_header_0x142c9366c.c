// 函数: _Init_thread_header
// 地址: 0x142c9366c
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(&data_14401b168)

while (true)
    if (*arg1 == 0)
        *arg1 = 0xffffffff
        break
    
    if (*arg1 != 0xffffffff)
        TEB* gsbase
        *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))) =
            data_143ccb950
        break
    
    _Init_thread_wait(0x64)

return LeaveCriticalSection(&data_14401b168) __tailcall
