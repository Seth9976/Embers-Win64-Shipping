// 函数: sub_142020040
// 地址: 0x142020040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143cd80cc s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143cd80cc)
    
    if (data_143cd80cc == 0xffffffff)
        sub_140af2b60()
        data_143cd80c8 = sub_140b21a10(&data_143dbb3f0, u"nullrhi")
        _Init_thread_footer(&data_143cd80cc)

if ((data_143de5426 != 0 && data_143de5427 == 0) || data_143cd80c8 != 0)
    int32_t result
    result.b = 0
    return result

int64_t* rax_1 = sub_1424c7800()
void* rax_2 = rax_1[0x23]

if (rax_2 == 0)
    int64_t rdx_1 = *rax_1
    (*(rdx_1 + 0x390))(rax_1, rdx_1)
    rax_2 = rax_1[0x23]

return *(rax_2 + 0x38) u>> 5 & 1
