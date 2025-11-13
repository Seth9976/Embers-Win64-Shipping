// 函数: sub_142062780
// 地址: 0x142062780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t zmm1
float zmm6[0x4]
zmm1, zmm6 = sub_14209a560(arg1, arg2)
TEB* gsbase
uint64_t result = zx.q(*(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))

if (data_143cd80cc s> result.d)
    result = _Init_thread_header(&data_143cd80cc)
    
    if (data_143cd80cc == 0xffffffff)
        zmm1 = sub_140af2b60()
        data_143cd80c8 = sub_140b21a10(&data_143dbb3f0, u"nullrhi")
        result = _Init_thread_footer(&data_143cd80cc)

if ((data_143de5426 == 0 || data_143de5427 != 0) && data_143cd80c8 == 0 && arg1[0x94].d s> 0)
    result = arg1[0xa8]
    
    if (*(result + 8) == 0 && (arg1[1].b & 0x30) == 0)
        arg1[0xbc].b |= 2
        int64_t* rcx = arg1[0x88]
        
        if (rcx != 0)
            result = zx.q(rcx[1].d u>> 0xa)
            
            if ((result.b & 1) == 0)
                sub_140cd85e0(rcx)
                return sub_1420501d0(arg1, zmm1, zmm6) __tailcall

return result
