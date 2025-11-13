// 函数: sub_14209a560
// 地址: 0x14209a560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141ee9810(arg1)
TEB* gsbase
int32_t result = *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)))
int64_t rdx_1

if (data_143cd80cc s> result)
    result, rdx_1 = _Init_thread_header(&data_143cd80cc)
    
    if (data_143cd80cc == 0xffffffff)
        arg2 = sub_140af2b60()
        data_143cd80c8 = sub_140b21a10(&data_143dbb3f0, u"nullrhi")
        result, rdx_1 = _Init_thread_footer(&data_143cd80cc)

if ((data_143de5426 != 0 && data_143de5427 == 0) || data_143cd80c8 != 0
        || (*(arg1 + 8) & 0x30) != 0)
    return result

int32_t rax_1 = *(arg1 + 0x4a0)
int32_t rcx

if (rax_1 s> 0)
    rcx = *(arg1 + 0x4d8)

if (rax_1 s> 0 && (rcx == rax_1 || rcx == 0))
    rdx_1.b = 1
else
    rdx_1.b = 0

return sub_142097c30(arg1, rdx_1.b, nullptr, 0, arg2) __tailcall
