// 函数: sub_1425fcae0
// 地址: 0x1425fcae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase
int32_t* rdi_1 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14

if (data_143f71230 s> *rdi_1)
    _Init_thread_header(&data_143f71230)
    
    if (data_143f71230 == 0xffffffff)
        sub_140b58260(&data_143f71228, u"ADPCM", 1)
        _Init_thread_footer(&data_143f71230)

if (data_143f71240 s> *rdi_1)
    _Init_thread_header(&data_143f71240)
    
    if (data_143f71240 == 0xffffffff)
        sub_140b58260(&data_143f71238, &data_142d6be30, 1)
        _Init_thread_footer(&data_143f71240)

if (data_143f71250 s> *rdi_1)
    _Init_thread_header(&data_143f71250)
    
    if (data_143f71250 == 0xffffffff)
        sub_140b58260(&data_143f71248, u"OPUS", 1)
        _Init_thread_footer(&data_143f71250)

if (data_143f71260 s> *rdi_1)
    _Init_thread_header(&data_143f71260)
    
    if (data_143f71260 == 0xffffffff)
        sub_140b58260(&data_143f71258, &data_143206710, 1)
        _Init_thread_footer(&data_143f71260)

char rax_5 = sub_14236bfb0(arg3, nullptr)
int64_t rax_7
bool cond:0_1

if (rax_5 != 0)
    cond:0_1 = sub_14236bfa0(arg3) != 0
    rax_7 = data_143f71228

if (rax_5 == 0 || not(cond:0_1))
    rax_7 = data_143f71238

*arg2 = rax_7
return arg2
