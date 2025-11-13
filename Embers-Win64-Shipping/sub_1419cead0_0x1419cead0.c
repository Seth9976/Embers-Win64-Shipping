// 函数: sub_1419cead0
// 地址: 0x1419cead0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result
TEB* gsbase

if (data_143f21598 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    int64_t r8_1
    result, r8_1 = _Init_thread_header(&data_143f21598)
    
    if (data_143f21598 == 0xffffffff)
        int64_t* rcx_3 = data_143db18d0
        
        if (rcx_3 == 0)
            sub_140a53c40()
            rcx_3 = data_143db18d0
        
        r8_1.b = 1
        data_143f21590 = (*(*rcx_3 + 0xb0))(rcx_3, u"r.ShaderPipelineCache.SaveUserCache", r8_1)
        _Init_thread_footer(&data_143f21598)

int64_t* rcx_2 = data_143f21590

if (rcx_2 != 0 && (*(*rcx_2 + 0x90))(rcx_2) s> 0)
    result.b = 1
    return result

result.b = 0
return result
