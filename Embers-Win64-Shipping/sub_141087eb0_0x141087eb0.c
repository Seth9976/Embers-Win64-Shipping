// 函数: sub_141087eb0
// 地址: 0x141087eb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = data_143e4c81f

if ((rax & 2) != 0)
    return &data_143e4c7b8

data_143e4c81f = rax | 2
data_143e4c7c0 = u"TBasePassVertexShaderBaseType"
data_143e4c7d8 = sub_140b4ede0
data_143e4c800 = sub_140594890
char rax_1 = data_143e4f387
data_143e4c7e0 = sub_140b4ed00
data_143e4c7e8 = sub_140b4e800
data_143e4c7f0 = sub_140b4ead0
data_143e4c7f8 = sub_140b4eb90
data_143e4c810 = 0x148
data_143e4c818 = 8
data_143e4c81c = 0
data_143e4c814 = 0xffffffff
data_143e4ef08 = u"BASE"
data_143e4ef32 = 4

if ((rax_1 & 2) == 0)
    data_143e4f340 = sub_140b4ede0
    data_143e4f387 = rax_1 | 2
    data_143e4f348 = sub_140b4ed00
    data_143e4f328 = u"TBasePassVertexShaderPolicyParamType"
    data_143e4f368 = sub_140594890
    data_143e4f350 = sub_140b4e800
    data_143e4f358 = sub_140b4ead0
    data_143e4f360 = sub_140b4eb90
    data_143e4f378 = 0x148
    data_143e4f380 = 8
    data_143e4f384 = 0
    data_143e4f37c = 0xffffffff
    data_143e4ff08 = u"ReflectionCaptureBuffer"
    data_143e4ff32 = sub_140b4fdf0(u"ReflectionCaptureBuffer")
    sub_1419db3a0()
    data_143e4ff10 = &data_143f21520
    data_143e4ff18 = data_143e4f330
    data_143e4f330 = &data_143e4ff08
    data_143e4ff20 = sub_140b4f380
    data_143e4ff28 = 0x146
    data_143e4ff2c = 1
    data_143e4ff30 = 0
    data_143e50b08 = u"BASE"
    data_143e50b32 = 4
    sub_141245460()
    int64_t rcx_1 = data_143e4f330
    data_143e4f385 += 1
    data_143e50b18 = rcx_1
    data_143e4f330 = &data_143e50b08
    data_143e50b10 = &data_143e85cb0
    data_143e50b20 = sub_140b4f380
    data_143e50b28 = 0x140
    data_143e50b2c = 1
    
    if (data_143e85d14 != 0)
        data_143e4f386 += 1
    
    data_143e50508 = u"BASE"
    data_143e50532 = 4
    sub_141462970()
    int64_t rcx_2 = data_143e4f330
    data_143e4f385 += 1
    data_143e50518 = rcx_2
    data_143e4f330 = &data_143e50508
    data_143e50510 = &data_143ed82c8
    data_143e50520 = sub_140b4f380
    data_143e50528 = 0
    data_143e5052c = 1
    
    if (data_143ed832c != 0)
        data_143e4f386 += 1
    
    sub_140b51460(&data_143e4f320)

int64_t rax_4 = data_143e4c7c8
data_143e4c81d += 1
bool cond:0 = data_143e4f384 == 0
data_143e4ef18 = rax_4
data_143e4ef10 = &data_143e4f320
data_143e4c7c8 = &data_143e4ef08
data_143e4ef20 = sub_140b4f380
data_143e4ef28 = 0
data_143e4ef2c = 1

if (not(cond:0))
    data_143e4c81e += 1

sub_140b51460(&data_143e4c7b8)
return &data_143e4c7b8
