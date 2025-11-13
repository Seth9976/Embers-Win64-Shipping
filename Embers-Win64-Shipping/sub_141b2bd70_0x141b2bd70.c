// 函数: sub_141b2bd70
// 地址: 0x141b2bd70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141a5cb80(arg1)
char result = sub_140ab3dc0(&arg1[0x2d])

if (result != 0)
    return result

sub_140597df0(&arg1[0x2b], sub_140ac6680(&arg1[0x2d]))
TEB* gsbase

if (data_143cd6ff0 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143cd6ff0)
    
    if (data_143cd6ff0 == 0xffffffff)
        sub_140a96080(&data_143cd6fd8)
        atexit(sub_142cb0d20)
        _Init_thread_footer(&data_143cd6ff0)

return sub_14065da90(&arg1[0x2d], &data_143cd6fd8)
