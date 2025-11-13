// 函数: sub_1409f6d50
// 地址: 0x1409f6d50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143cd6ff0 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143cd6ff0)
    
    if (data_143cd6ff0 == 0xffffffff)
        sub_140a96080(&data_143cd6fd8)
        atexit(sub_142cb0d20)
        _Init_thread_footer(&data_143cd6ff0)

*arg2 = data_143cd6fd8
void* rax_3 = data_143cd6fe0
arg2[1] = rax_3

if (rax_3 != 0)
    *(rax_3 + 8) += 1

arg2[2].d = data_143cd6fe8
return arg2
