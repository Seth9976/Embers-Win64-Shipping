// 函数: sub_14197ee80
// 地址: 0x14197ee80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143f0fc9c s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f0fc9c)
    
    if (data_143f0fc9c == 0xffffffff)
        sub_140af2b60()
        char rax_3
        
        if (sub_140b21a10(&data_143dbb3f0, u"FeatureLevelES31") != 0)
            rax_3 = 1
        else
            sub_140af2b60()
            rax_3 = sub_140b21a10(&data_143dbb3f0, u"FeatureLevelES3_1")
            
            if (rax_3 != 0)
                rax_3 = 1
        
        data_143f0fc98 = rax_3
        _Init_thread_footer(&data_143f0fc9c)

if (data_143f0fc98 != 0)
    *arg1 = 1
    int32_t rax_1
    rax_1.b = 1
    return rax_1

int32_t rax_2 = data_1439c8298

if (rax_2 == 4)
    rax_2.b = 0
    return rax_2

*arg1 = rax_2
rax_2.b = 1
return rax_2
