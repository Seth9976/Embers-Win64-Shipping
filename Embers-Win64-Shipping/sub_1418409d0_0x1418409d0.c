// 函数: sub_1418409d0
// 地址: 0x1418409d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143efabc8 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143efabc8)
    
    if (data_143efabc8 == 0xffffffff)
        data_143efabc0 = 0
        _Init_thread_footer(&data_143efabc8)

int64_t* rcx = *(arg1 + 0x10)
void arg_8
int64_t rcx_1 = *(*(*rcx + 0xa0))(rcx, &arg_8, arg2)
*arg3 = rcx_1
int64_t* result
result.b = rcx_1 != data_143efabc0
return result
