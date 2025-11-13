// 函数: sub_140be0c40
// 地址: 0x140be0c40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143e1ad80 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143e1ad80)
    
    if (data_143e1ad80 == 0xffffffff)
        sub_1405947f0(&data_143e1ad70, 0x12)
        int32_t rax_4 = data_143e1ad78 + 0x12
        bool cond:0 = rax_4 s<= data_143e1ad7c
        data_143e1ad78 = rax_4
        
        if (not(cond:0))
            sub_140594770(&data_143e1ad70)
        
        UnDecorator::getReferenceType(data_143e1ad70, u"/Temp/__TEMP_BP__", 0x24)
        atexit(sub_142cc1ed0)
        _Init_thread_footer(&data_143e1ad80)

return &data_143e1ad70
