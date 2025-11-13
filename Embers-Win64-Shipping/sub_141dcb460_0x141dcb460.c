// 函数: sub_141dcb460
// 地址: 0x141dcb460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != 0)
    void* rbx_1 = arg1[0x23]
    
    if (rbx_1 != 0)
        sub_141dcd610(rbx_1)
        return rbx_1 + 0x38
    
    (*(*arg1 + 0x390))()
    rbx_1 = arg1[0x23]
    
    if (rbx_1 != 0)
        sub_141dcd610(rbx_1)
        return rbx_1 + 0x38

TEB* gsbase

if (data_143f38e70 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f38e70)
    
    if (data_143f38e70 == 0xffffffff)
        atexit(sub_142cf8f70)
        _Init_thread_footer(&data_143f38e70)

return &data_143f38e60
