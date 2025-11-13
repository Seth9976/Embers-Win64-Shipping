// 函数: sub_1410493a0
// 地址: 0x1410493a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143e2c644 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143e2c644)
    
    if (data_143e2c644 == 0xffffffff)
        sub_140af2b60()
        char rax_3
        
        if (sub_140b21a10(&data_143dbb3f0, u"d3ddebug") != 0)
            rax_3 = 1
        else
            sub_140af2b60()
            
            if (sub_140b21a10(&data_143dbb3f0, u"d3debug") != 0)
                rax_3 = 1
            else
                sub_140af2b60()
                rax_3 = sub_140b21a10(&data_143dbb3f0, u"dxdebug")
                
                if (rax_3 != 0)
                    rax_3 = 1
        
        data_143e2c640 = rax_3
        _Init_thread_footer(&data_143e2c644)

return zx.q(data_143e2c640)
