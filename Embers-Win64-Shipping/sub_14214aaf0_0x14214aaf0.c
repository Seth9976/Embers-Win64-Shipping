// 函数: sub_14214aaf0
// 地址: 0x14214aaf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6 = *(*(arg1 + 0x58) + 0x78)

if (*(arg1 + 0x134) != 2)
    if ((*(arg1 + 0x138) & 1) != 0)
    label_14214ab32:
        
        if ((*(arg1 + 0x138) & 1) == 0)
            zmm6 = *(*(arg1 + 0x58) + 0x7c)
        else
            zmm6 = 0x40000000
    else
        int64_t* rcx = *(arg1 + 0x98)
        
        if (rcx != 0 && (*(*rcx + 0x3e0))(rcx) != 0)
            goto label_14214ab32

TEB* gsbase

if (data_143f4cda0 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f4cda0)
    
    if (data_143f4cda0 == 0xffffffff)
        sub_140af2b60()
        data_143f4cd9c = sub_140b21a10(&data_143dbb3f0, u"longtimeouts")
        _Init_thread_footer(&data_143f4cda0)

int32_t zmm0 = *(*(arg1 + 0x58) + 0x80)

if (not(zmm0 f<= (zx.o(0)).d) && data_143f4cd9c != 0)
    zmm6.d = zmm6.d f* zmm0

return zmm6.d
