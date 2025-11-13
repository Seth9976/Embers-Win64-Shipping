// 函数: sub_141086f60
// 地址: 0x141086f60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = data_143e4cc2f

if ((rax & 2) != 0)
    return &data_143e4cbc8

data_143e4cc2f = rax | 2
data_143e4cbd0 = u"TBasePassVertexShaderBaseType"
data_143e4cbe8 = sub_140b4ede0
data_143e4cc10 = sub_140594890
char rax_1 = data_143e4f797
data_143e4cbf0 = sub_140b4ed00
data_143e4cbf8 = sub_140b4e800
data_143e4cc00 = sub_140b4ead0
data_143e4cc08 = sub_140b4eb90
data_143e4cc20 = 0x148
data_143e4cc28 = 8
data_143e4cc2c = 0
data_143e4cc24 = 0xffffffff
data_143e4ed28 = u"BASE"
data_143e4ed52 = 4

if ((rax_1 & 2) == 0)
    data_143e4f750 = sub_140b4ede0
    data_143e4f797 = rax_1 | 2
    data_143e4f758 = sub_140b4ed00
    data_143e4f738 = u"TBasePassVertexShaderPolicyParamType"
    data_143e4f778 = sub_140594890
    data_143e4f760 = sub_140b4e800
    data_143e4f768 = sub_140b4ead0
    data_143e4f770 = sub_140b4eb90
    data_143e4f788 = 0x148
    data_143e4f790 = 8
    data_143e4f794 = 0
    data_143e4f78c = 0xffffffff
    data_143e500e8 = u"ReflectionCaptureBuffer"
    data_143e50112 = sub_140b4fdf0(u"ReflectionCaptureBuffer")
    sub_1419db3a0()
    data_143e500f0 = &data_143f21520
    data_143e500f8 = data_143e4f740
    data_143e4f740 = &data_143e500e8
    data_143e50100 = sub_140b4f380
    data_143e50108 = 0x146
    data_143e5010c = 1
    data_143e50110 = 0
    data_143e50ce8 = u"BASE"
    data_143e50d12 = 4
    sub_141245460()
    int64_t rcx_1 = data_143e4f740
    data_143e4f795 += 1
    data_143e50cf8 = rcx_1
    data_143e4f740 = &data_143e50ce8
    data_143e50cf0 = &data_143e85cb0
    data_143e50d00 = sub_140b4f380
    data_143e50d08 = 0x140
    data_143e50d0c = 1
    
    if (data_143e85d14 != 0)
        data_143e4f796 += 1
    
    data_143e506e8 = u"BASE"
    data_143e50712 = 4
    sub_141462970()
    int64_t rcx_2 = data_143e4f740
    data_143e4f795 += 1
    data_143e506f8 = rcx_2
    data_143e4f740 = &data_143e506e8
    data_143e506f0 = &data_143ed82c8
    data_143e50700 = sub_140b4f380
    data_143e50708 = 0
    data_143e5070c = 1
    
    if (data_143ed832c != 0)
        data_143e4f796 += 1
    
    sub_140b51460(&data_143e4f730)

int64_t rax_4 = data_143e4cbd8
data_143e4cc2d += 1
bool cond:0 = data_143e4f794 == 0
data_143e4ed38 = rax_4
data_143e4ed30 = &data_143e4f730
data_143e4cbd8 = &data_143e4ed28
data_143e4ed40 = sub_140b4f380
data_143e4ed48 = 0
data_143e4ed4c = 1

if (not(cond:0))
    data_143e4cc2e += 1

sub_140b51460(&data_143e4cbc8)
return &data_143e4cbc8
