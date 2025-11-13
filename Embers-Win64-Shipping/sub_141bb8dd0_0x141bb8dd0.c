// 函数: sub_141bb8dd0
// 地址: 0x141bb8dd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143f31668 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f31668)
    
    if (data_143f31668 == 0xffffffff)
        sub_140b58260(&data_143f31660, u"ESlateVisibility", 1)
        _Init_thread_footer(&data_143f31668)

if (arg2 != 0)
    int64_t rcx_2 = *(arg2[1] + 0x10)
    
    if (((rcx_2 u>> 0x30).b & 1) != 0)
        int64_t rax_4
        rax_4.b = *(arg2[0x10] + 0x18) == data_143f31660
        return rax_4
    
    rcx_2.b u>>= 6
    
    if ((rcx_2.b & 1) != 0 && (*(*arg2 + 0x140))(arg2) != 0)
        int64_t rax_6
        rax_6.b = *(arg2[0xf] + 0x18) == data_143f31660
        return rax_6

uint64_t rax_1
rax_1.b = 0
return rax_1
