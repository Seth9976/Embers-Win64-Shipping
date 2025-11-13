// 函数: sub_140a4aa30
// 地址: 0x140a4aa30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143db4814 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143db4814)
    
    if (data_143db4814 == 0xffffffff)
        sub_140af2b60()
        data_143db4810 = sub_140b21a10(&data_143dbb3f0, u"UNATTENDED")
        _Init_thread_footer(&data_143db4814)

int32_t result

if (data_143db4810 == 0 && data_143de548d == 0)
    result.b = 0
    return result

result.b = 1
return result
