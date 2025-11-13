// 函数: sub_140aae800
// 地址: 0x140aae800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143dbaf28 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143dbaf28)
    
    if (data_143dbaf28 == 0xffffffff)
        sub_140a913f0(&data_143dbaea8)
        data_143dbaf20 = &data_143dbaea8
        atexit(sub_142cbddc0)
        _Init_thread_footer(&data_143dbaf28)

return data_143dbaf20
