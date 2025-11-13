// 函数: sub_1419327a0
// 地址: 0x1419327a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143eff8a8 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143eff8a8)
    
    if (data_143eff8a8 == 0xffffffff)
        sub_141929790(&data_143eff880)
        atexit(&data_142cee460)
        _Init_thread_footer(&data_143eff8a8)

int64_t result = sub_14194e2d0(&data_143eff880)
void* rdi = data_143eff640

if (rdi == 0)
    return result

EnterCriticalSection(&data_143eff838)

while (*(rdi + 0x138) != 0)
    int64_t r8_1 = sx.q(*(rdi + 0x138))
    int128_t* rbx_1 = *(*(rdi + 0x130) + (r8_1 << 3) - 8)
    *(rdi + 0x138) = (r8_1 - 1).d
    sub_1405c53d0(rdi + 0x130)
    sub_141934230(rdi, rbx_1)

return LeaveCriticalSection(&data_143eff838) __tailcall
