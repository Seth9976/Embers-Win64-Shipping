// 函数: sub_1410be940
// 地址: 0x1410be940
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143e2ce30 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143e2ce30)
    
    if (data_143e2ce30 == 0xffffffff)
        int64_t* rcx_2 = data_143db18d0
        
        if (rcx_2 == 0)
            sub_140a53c40()
            rcx_2 = data_143db18d0
        
        int64_t r8_1
        r8_1.b = 1
        data_143e2ce28 = (*(*rcx_2 + 0xb0))(rcx_2, u"r.AllowStaticLighting", r8_1)
        _Init_thread_footer(&data_143e2ce30)

uint32_t result
result.b = not.b(arg1[3].b)

if ((result.b & 1) != 0 && arg1[4] u> 1)
    int64_t* rcx = data_143e2ce28
    
    if (rcx != 0)
        result = (*(*rcx + 0x90))(rcx)
    
    if (rcx == 0 || result != 0)
        result.b = not.b(arg1[3].b)
        
        if ((result.b & 1) != 0 && arg1[4] u> 1 && sub_1405fba70(*arg1, 3).b != 0)
            result.b = 1
            return result

result.b = 0
return result
