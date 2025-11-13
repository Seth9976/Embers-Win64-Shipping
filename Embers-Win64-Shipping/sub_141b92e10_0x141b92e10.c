// 函数: sub_141b92e10
// 地址: 0x141b92e10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax_2

if (arg2 != 0 && ((*(*(arg2 + 8) + 0x10) u>> 0x14).b & 1) != 0)
    rax_2 = sub_140e2deb0()
    rax_2.b = *(arg2 + 0x78) == rax_2

uint64_t result
TEB* gsbase

if (arg2 == 0 || ((*(*(arg2 + 8) + 0x10) u>> 0x14).b & 1) == 0 || rax_2.b == 0)
    result = sub_141b76c40(arg2)
    
    if (result.b != 0)
        if (data_143f31618
                s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
            _Init_thread_header(&data_143f31618)
            
            if (data_143f31618 == 0xffffffff)
                sub_140b58260(&data_143f31610, u"GetLinearValue", 1)
                _Init_thread_footer(&data_143f31618)
        
        sub_140d3a3a0(arg3, arg1)
        result = data_143f31610
        *(arg3 + 8) = result
else
    if (data_143f31608
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143f31608)
        
        if (data_143f31608 == 0xffffffff)
            sub_140b58260(&data_143f31600, u"GetSlateValue", 1)
            _Init_thread_footer(&data_143f31608)
    
    sub_140d3a3a0(arg3, arg1)
    result = data_143f31600
    *(arg3 + 8) = result
return result
