// 函数: sub_141dc9e00
// 地址: 0x141dc9e00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != 0)
    void* rbx_1 = arg1[0x23]
    
    if (rbx_1 != 0)
        sub_141dcd610(rbx_1)
        return rbx_1 + 0x28
    
    (*(*arg1 + 0x390))()
    rbx_1 = arg1[0x23]
    
    if (rbx_1 != 0)
        sub_141dcd610(rbx_1)
        return rbx_1 + 0x28

TEB* gsbase

if (data_143f38e58 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f38e58)
    
    if (data_143f38e58 == 0xffffffff)
        atexit(sub_142cf8f50)
        _Init_thread_footer(&data_143f38e58)

return &data_143f38e48
