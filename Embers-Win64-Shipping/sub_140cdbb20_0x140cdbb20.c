// 函数: sub_140cdbb20
// 地址: 0x140cdbb20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143e1b780 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143e1b780)
    
    if (data_143e1b780 == 0xffffffff)
        void*** rax_3 = j_sub_140a82f30(0x1f0)
        
        if (rax_3 != 0)
            rax_3 = sub_140cd3830(rax_3)
        
        data_143e1b778 = rax_3
        atexit(sub_142cc24f0)
        _Init_thread_footer(&data_143e1b780)

return data_143e1b778
