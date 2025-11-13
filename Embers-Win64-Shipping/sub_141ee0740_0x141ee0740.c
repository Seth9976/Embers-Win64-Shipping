// 函数: sub_141ee0740
// 地址: 0x141ee0740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((arg1[0x11].b & 1) == 0)
    (*(*arg1 + 0x2b8))()

TEB* gsbase
uint64_t result = zx.q(*(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))

if (data_143cd80cc s> result.d)
    result = _Init_thread_header(&data_143cd80cc)
    
    if (data_143cd80cc == 0xffffffff)
        sub_140af2b60()
        data_143cd80c8 = sub_140b21a10(&data_143dbb3f0, u"nullrhi")
        result = _Init_thread_footer(&data_143cd80cc)

if ((data_143de5426 == 0 || data_143de5427 != 0) && data_143cd80c8 == 0 && (arg1[0x11].b & 2) == 0)
    result = arg1[0x15]
    
    if (*(result + 0x1b0) != 0)
        result = (*(*arg1 + 0x2c8))(arg1)
        
        if (result.b != 0)
            result = (*(*arg1 + 0x2d0))(arg1, arg2)

if ((arg1[0x11].b & 4) == 0)
    result = arg1[0x15]
    
    if (*(result + 0x1f8) != 0)
        result = (*(*arg1 + 0x300))(arg1)
        
        if (result.b != 0)
            (*(*arg1 + 0x2f0))(arg1)
            return sub_140920c10(&data_143a2d698, arg1)

return result
