// 函数: sub_141b92ff0
// 地址: 0x141b92ff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = *(arg2 + 8)
sub_140d2df10()
int64_t result
TEB* gsbase

if (rbx != &data_143e1d7f0)
    int64_t rbx_1 = *(arg2 + 8)
    result = sub_140d11f70()
    
    if (rbx_1 == &data_143e1c450)
        if (data_143f31658
                s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
            _Init_thread_header(&data_143f31658)
            
            if (data_143f31658 == 0xffffffff)
                sub_140b58260(&data_143f31650, u"GetStringValue", 1)
                _Init_thread_footer(&data_143f31658)
        
        sub_140d3a3a0(arg3, arg1)
        result = data_143f31650
        *(arg3 + 8) = result
else
    if (data_143f31648
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143f31648)
        
        if (data_143f31648 == 0xffffffff)
            sub_140b58260(&data_143f31640, u"GetTextValue", 1)
            _Init_thread_footer(&data_143f31648)
    
    sub_140d3a3a0(arg3, arg1)
    result = data_143f31640
    *(arg3 + 8) = result
return result
