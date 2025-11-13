// 函数: sub_140d0dfa0
// 地址: 0x140d0dfa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d0de20(arg1, arg2)
TEB* gsbase

if (data_143e1c270 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143e1c270)
    
    if (data_143e1c270 == 0xffffffff)
        data_143e1c268 = j_sub_140bdca20()
        _Init_thread_footer(&data_143e1c270)

if (arg2[5].b s< 0 && (*(*arg2 + 0x18))(arg2) != 0 && (arg2[5].b & 1) != 0 && *(arg1 + 0x70) == 0)
    *(arg1 + 0x70) = data_143e1c268

int64_t result = (*(*arg2 + 0x130))(arg2, arg1 + 0x70)
int64_t* rcx_2 = *(arg1 + 0x70)

if (rcx_2 == 0)
    return result

return (*(*rcx_2 + 0x310))(rcx_2)
