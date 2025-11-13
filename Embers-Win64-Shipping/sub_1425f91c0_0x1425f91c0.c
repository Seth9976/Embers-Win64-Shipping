// 函数: sub_1425f91c0
// 地址: 0x1425f91c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase
int32_t* rdi_1 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14

if (data_143f70d58 s> *rdi_1)
    _Init_thread_header(&data_143f70d58)
    
    if (data_143f70d58 == 0xffffffff)
        sub_140b58260(&data_143f70d50, &data_142d6be30, 1)
        _Init_thread_footer(&data_143f70d58)

if (data_143f70d68 s> *rdi_1)
    _Init_thread_header(&data_143f70d68)
    
    if (data_143f70d68 == 0xffffffff)
        sub_140b58260(&data_143f70d60, u"OPUS", 1)
        _Init_thread_footer(&data_143f70d68)

if (data_143f70d78 s> *rdi_1)
    _Init_thread_header(&data_143f70d78)
    
    if (data_143f70d78 == 0xffffffff)
        sub_140b58260(&data_143f70d70, &data_143206710, 1)
        _Init_thread_footer(&data_143f70d78)

if (data_143f70d88 s> *rdi_1)
    _Init_thread_header(&data_143f70d88)
    
    if (data_143f70d88 == 0xffffffff)
        sub_140b58260(&data_143f70d80, u"ADPCM", 1)
        _Init_thread_footer(&data_143f70d88)

char rax_5 = sub_14236bfb0(arg3, nullptr)
int64_t rax_7
bool cond:0_1

if (rax_5 != 0)
    cond:0_1 = sub_14236bfa0(arg3) != 0
    rax_7 = data_143f70d80

if (rax_5 == 0 || not(cond:0_1))
    rax_7 = data_143f70d50

*arg2 = rax_7
return arg2
