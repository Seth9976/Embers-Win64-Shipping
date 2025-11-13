// 函数: sub_141f34810
// 地址: 0x141f34810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143f3b380 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f3b380)
    
    if (data_143f3b380 == 0xffffffff)
        sub_140b58170(&data_143f3b378, "PhysicsVolumeChangedDelegate", 1)
        _Init_thread_footer(&data_143f3b380)

if (*(arg1 + 0x151) != 0)
    sub_140d1a460(arg1, data_143f3b378)
    *(arg1 + 0x151) = 0

return sub_141ed8270(arg1) __tailcall
