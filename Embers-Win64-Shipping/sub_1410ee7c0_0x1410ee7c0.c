// 函数: sub_1410ee7c0
// 地址: 0x1410ee7c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result
TEB* gsbase

if (data_143e54cd8 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    int64_t r8_1
    result, r8_1 = _Init_thread_header(&data_143e54cd8)
    
    if (data_143e54cd8 == 0xffffffff)
        int64_t* rcx_1 = data_143db18d0
        
        if (rcx_1 == 0)
            sub_140a53c40()
            rcx_1 = data_143db18d0
        
        r8_1.b = 1
        data_143e54cd0 = (*(*rcx_1 + 0xb0))(rcx_1, u"r.PathTracing.WiperMode", r8_1)
        _Init_thread_footer(&data_143e54cd8)

if (*(arg1 + 0x1588) != 1)
label_1410ee80e:
    
    if (*(arg1 + 0x1588) != 2)
        result.b = 1
        return result
else
    int64_t* rcx = data_143e54cd0
    
    if (rcx != 0 && (*(*rcx + 0x90))(rcx) s> 0)
        goto label_1410ee80e

result.b = 0
return result
