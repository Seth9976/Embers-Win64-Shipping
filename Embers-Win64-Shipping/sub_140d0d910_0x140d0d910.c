// 函数: sub_140d0d910
// 地址: 0x140d0d910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140ce7ea0(arg1, arg2, arg3)
TEB* gsbase

if (data_143e1c4f0 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143e1c4f0)
    
    if (data_143e1c4f0 == 0xffffffff)
        data_143e1c4e8 = j_sub_140bdca20()
        _Init_thread_footer(&data_143e1c4f0)

if (arg2[5].b s< 0 && (*(*arg2 + 0x18))(arg2) != 0 && (arg2[5].b & 1) != 0 && *(arg1 + 0x78) == 0)
    *(arg1 + 0x78) = data_143e1c4e8

int64_t result = (*(*arg2 + 0x130))(arg2, arg1 + 0x78)

if (*(arg1 + 0x78) == 0)
    return result

return sub_140d0a9b0(arg1)
