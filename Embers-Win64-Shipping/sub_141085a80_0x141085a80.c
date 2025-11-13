// 函数: sub_141085a80
// 地址: 0x141085a80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = data_143e4c617

if ((rax & 2) != 0)
    return &data_143e4c5b0

data_143e4c617 = rax | 2
data_143e4c5b8 = u"TBasePassPixelShaderBaseType"
data_143e4c5d0 = sub_140b4ede0
data_143e4c5f8 = sub_140594890
char rax_1 = data_143e4f17f
data_143e4c5d8 = sub_140b4ed00
data_143e4c5e0 = sub_140b4e800
data_143e4c5e8 = sub_140b4ead0
data_143e4c5f0 = sub_140b4eb90
data_143e4c608 = 0x148
data_143e4c610 = 8
data_143e4c614 = 0
data_143e4c60c = 0xffffffff
data_143e4eff8 = u"BASE"
data_143e4f022 = 4

if ((rax_1 & 2) == 0)
    data_143e4f138 = sub_140b4ede0
    data_143e4f17f = rax_1 | 2
    data_143e4f140 = sub_140b4ed00
    data_143e4f120 = u"TBasePassPixelShaderPolicyParamType"
    data_143e4f160 = sub_140594890
    data_143e4f148 = sub_140b4e800
    data_143e4f150 = sub_140b4ead0
    data_143e4f158 = sub_140b4eb90
    data_143e4f170 = 0x148
    data_143e4f178 = 8
    data_143e4f17c = 0
    data_143e4f174 = 0xffffffff
    data_143e4fe18 = u"ReflectionCaptureBuffer"
    data_143e4fe42 = sub_140b4fdf0(u"ReflectionCaptureBuffer")
    sub_1419db3a0()
    data_143e4fe20 = &data_143f21520
    data_143e4fe28 = data_143e4f128
    data_143e4f128 = &data_143e4fe18
    data_143e4fe30 = sub_140b4f380
    data_143e4fe38 = 0x146
    data_143e4fe3c = 1
    data_143e4fe40 = 0
    data_143e50a18 = u"BASE"
    data_143e50a42 = 4
    sub_141245460()
    int64_t rcx_1 = data_143e4f128
    data_143e4f17d += 1
    data_143e50a28 = rcx_1
    data_143e4f128 = &data_143e50a18
    data_143e50a20 = &data_143e85cb0
    data_143e50a30 = sub_140b4f380
    data_143e50a38 = 0x140
    data_143e50a3c = 1
    
    if (data_143e85d14 != 0)
        data_143e4f17e += 1
    
    data_143e50418 = u"BASE"
    data_143e50442 = 4
    sub_141462970()
    int64_t rcx_2 = data_143e4f128
    data_143e4f17d += 1
    data_143e50428 = rcx_2
    data_143e4f128 = &data_143e50418
    data_143e50420 = &data_143ed82c8
    data_143e50430 = sub_140b4f380
    data_143e50438 = 0
    data_143e5043c = 1
    
    if (data_143ed832c != 0)
        data_143e4f17e += 1
    
    sub_140b51460(&data_143e4f118)

int64_t rax_4 = data_143e4c5c0
data_143e4c615 += 1
bool cond:0 = data_143e4f17c == 0
data_143e4f008 = rax_4
data_143e4f000 = &data_143e4f118
data_143e4c5c0 = &data_143e4eff8
data_143e4f010 = sub_140b4f380
data_143e4f018 = 0
data_143e4f01c = 1

if (not(cond:0))
    data_143e4c616 += 1

sub_140b51460(&data_143e4c5b0)
return &data_143e4c5b0
