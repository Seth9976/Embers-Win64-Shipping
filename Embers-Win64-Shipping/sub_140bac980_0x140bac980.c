// 函数: sub_140bac980
// 地址: 0x140bac980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143e1a810 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143e1a810)
    
    if (data_143e1a810 == 0xffffffff)
        if (data_143ddb400 != 0)
            int16_t* const rdx_1 = &data_142d40450
            
            if (data_143de5788 != 0)
                rdx_1 = data_143de5780
            
            sub_140aeaee0(u"/Script/Engine.StreamingSettings", rdx_1, 0x3000000, 0)
        
        _Init_thread_footer(&data_143e1a810)

int32_t result
result.b = data_143e1a328 != 0
return result
