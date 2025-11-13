// 函数: sub_14068f800
// 地址: 0x14068f800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase
void* ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
uint64_t rdx = zx.q(data_14401b1a0)
*arg1 = 0

if (data_143cde030 s> *(0x14 + *(ThreadLocalStoragePointer + (rdx << 3))))
    _Init_thread_header(&data_143cde030)
    
    if (data_143cde030 == 0xffffffff)
        data_143cde028 = sub_1406affd0()
        _Init_thread_footer(&data_143cde030)

HANDLE hActCtx = data_143cde028

if (hActCtx != -1)
    ActivateActCtx(hActCtx, arg1)

return arg1
