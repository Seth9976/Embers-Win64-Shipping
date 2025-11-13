// 函数: sub_141f6cfb0
// 地址: 0x141f6cfb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase
int32_t* rbx_1 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14

if (data_143f3bb58 s> *rbx_1)
    _Init_thread_header(&data_143f3bb58)
    
    if (data_143f3bb58 == 0xffffffff)
        sub_140b58260(&data_143f3bb50, u"LightColor", 1)
        _Init_thread_footer(&data_143f3bb58)

if (data_143f3bb68 s> *rbx_1)
    _Init_thread_header(&data_143f3bb68)
    
    if (data_143f3bb68 == 0xffffffff)
        sub_140b58260(&data_143f3bb60, u"Intensity", 1)
        _Init_thread_footer(&data_143f3bb68)

if (data_143f3bb78 s> *rbx_1)
    _Init_thread_header(&data_143f3bb78)
    
    if (data_143f3bb78 == 0xffffffff)
        sub_140b58260(&data_143f3bb70, u"IndirectLightingIntensity", 1)
        _Init_thread_footer(&data_143f3bb78)

if (data_143f3bb88 s> *rbx_1)
    _Init_thread_header(&data_143f3bb88)
    
    if (data_143f3bb88 == 0xffffffff)
        sub_140b58260(&data_143f3bb80, u"VolumetricScatteringIntensity", 1)
        _Init_thread_footer(&data_143f3bb88)

int64_t rax_5

if (arg2 == 0)
    rax_5 = 0
    int64_t arg_10 = 0
else
    rax_5 = *(arg2 + 0x28)

if (rax_5 != data_143f3bb50 && rax_5 != data_143f3bb60 && rax_5 != data_143f3bb70
        && rax_5 != data_143f3bb80)
    return sub_141f44af0(arg1, arg2) __tailcall

return sub_141f75da0(arg1) __tailcall
