// 函数: sub_1423cc030
// 地址: 0x1423cc030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[0xf] != 0)
    sub_1425b3af0()
    sub_1419aa4a0(arg1[0xf])
    int64_t* rcx_1 = arg1[0xf]
    
    if (rcx_1 != 0)
        (**rcx_1)(rcx_1, 1)
    
    arg1[0xf] = 0

TEB* gsbase

if (data_143cd80cc s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143cd80cc)
    
    if (data_143cd80cc == 0xffffffff)
        sub_140af2b60()
        data_143cd80c8 = sub_140b21a10(&data_143dbb3f0, u"nullrhi")
        _Init_thread_footer(&data_143cd80cc)

uint64_t result

if (data_143de5426 == 0)
    if (data_143cd80c8 != 0)
        result.b = 0
    else
        result.b = 1
else if (data_143de5427 == 0 || data_143cd80c8 != 0)
    result.b = 0
else
    result.b = 1

if (result.b != 0)
    result = zx.q(arg1[1].d u>> 4)
    
    if ((result.b & 1) == 0)
        result = (*(*arg1 + 0x300))(arg1)
        arg1[0xf] = result
        
        if (result != 0)
            return sub_141997e80(result) __tailcall

return result
