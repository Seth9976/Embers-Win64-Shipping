// 函数: sub_1423517b0
// 地址: 0x1423517b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15e10(arg1)
uint64_t rcx = zx.q(data_14401b1a0)
arg1[5] = 0
arg1[6] = 0
*arg1 = &data_14332ec60
TEB* gsbase

if (data_143f34bd8 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (rcx << 3))))
    _Init_thread_header(&data_143f34bd8)
    
    if (data_143f34bd8 == 0xffffffff)
        sub_140b58260(&data_143f34bd0, u"Default Soundfield Endpoint", 1)
        _Init_thread_footer(&data_143f34bd8)

arg1[7] = data_143f34bd0
arg1[8] = 0
arg1[0xa] = 0
arg1[0xc] = 0
arg1[0xd] = 0
return arg1
