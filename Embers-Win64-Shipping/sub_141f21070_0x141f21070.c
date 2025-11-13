// 函数: sub_141f21070
// 地址: 0x141f21070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase
void* rbx = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))

if (data_143f3b0e8 s> *(rbx + 0x14))
    _Init_thread_header(&data_143f3b0e8)
    
    if (data_143f3b0e8 == 0xffffffff)
        sub_140b58260(&data_143f3b0e0, u"LightColor", 1)
        _Init_thread_footer(&data_143f3b0e8)

if (data_143f3b0f8 s> *(rbx + 0x14))
    _Init_thread_header(&data_143f3b0f8)
    
    if (data_143f3b0f8 == 0xffffffff)
        sub_140b58260(&data_143f3b0f0, u"Intensity", 1)
        _Init_thread_footer(&data_143f3b0f8)

if (data_143f3b108 s> *(rbx + 0x14))
    _Init_thread_header(&data_143f3b108)
    
    if (data_143f3b108 == 0xffffffff)
        sub_140b58260(&data_143f3b100, u"Brightness", 1)
        _Init_thread_footer(&data_143f3b108)

if (data_143f3b118 s> *(rbx + 0x14))
    _Init_thread_header(&data_143f3b118)
    
    if (data_143f3b118 == 0xffffffff)
        sub_140b58260(&data_143f3b110, u"IndirectLightingIntensity", 1)
        _Init_thread_footer(&data_143f3b118)

if (data_143f3b128 s> *(rbx + 0x14))
    _Init_thread_header(&data_143f3b128)
    
    if (data_143f3b128 == 0xffffffff)
        sub_140b58260(&data_143f3b120, u"VolumetricScatteringIntensity", 1)
        _Init_thread_footer(&data_143f3b128)

if (data_143f3b138 s> *(rbx + 0x14))
    _Init_thread_header(&data_143f3b138)
    
    if (data_143f3b138 == 0xffffffff)
        sub_140b58260(&data_143f3b130, u"Temperature", 1)
        _Init_thread_footer(&data_143f3b138)

int64_t rax_7

if (arg2 == 0)
    rax_7 = 0
    int64_t arg_10 = 0
else
    rax_7 = *(arg2 + 0x28)

int64_t rcx = data_143f3b100

if (rax_7 == data_143f3b0e0 || rax_7 == data_143f3b0f0)
label_141f21155:
    
    if (rax_7 == rcx)
        *(arg1 + 0x204) = arg1[0x40].d
else
    if (rax_7 != rcx)
        if (rax_7 != data_143f3b110 && rax_7 != data_143f3b130 && rax_7 != data_143f3b120)
            return sub_141f44af0(arg1, arg2)
        
        goto label_141f21155
    
    *(arg1 + 0x204) = arg1[0x40].d

return sub_141f29c20(arg1)
