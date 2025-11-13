// 函数: sub_140b011d0
// 地址: 0x140b011d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase
int32_t* rbx_1 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14

if (data_143de58d8 s> *rbx_1)
    _Init_thread_header(&data_143de58d8)
    
    if (data_143de58d8 == 0xffffffff)
        sub_140af2b60()
        int32_t rax_2
        
        if (sub_140b21a10(&data_143dbb3f0, u"ONETHREAD").b != 0)
            rax_2.b = 1
        else
            sub_140af2b60()
            
            if (sub_140b21a10(&data_143dbb3f0, u"noperfthreads").b != 0)
                rax_2.b = 1
            else if (sub_140a54810().b == 0)
                rax_2.b = 1
            else if (sub_140b70da0() s< 4)
                rax_2.b = 1
            else
                rax_2.b = 0
        
        data_143de58d4 = rax_2.b
        _Init_thread_footer(&data_143de58d8)

if (data_143de58e0 s> *rbx_1)
    _Init_thread_header(&data_143de58e0)
    
    if (data_143de58e0 == 0xffffffff)
        sub_140af2b60()
        data_143de58dc = sub_140b21a10(&data_143dbb3f0, u"useperfthreads")
        _Init_thread_footer(&data_143de58e0)

int32_t result

if (data_143de58d4 != 0 && data_143de58dc == 0)
    result.b = 0
    return result

result.b = 1
return result
