// 函数: sub_140aae890
// 地址: 0x140aae890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143dba098 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143dba098)
    
    if (data_143dba098 == 0xffffffff)
        InitializeCriticalSection(&data_143dba020)
        SetCriticalSectionSpinCount(&data_143dba020, 0xfa0)
        data_143dba074 = 0x80
        __builtin_memset(&data_143dba048, 0, 0x2c)
        data_143dba07c = 0
        data_143dba088 = 0
        data_143dba090 = 0
        data_143dba078 = 0xffffffff
        atexit(sub_142cbdb40)
        _Init_thread_footer(&data_143dba098)

return &data_143dba020
