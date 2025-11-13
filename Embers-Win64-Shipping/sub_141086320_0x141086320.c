// 函数: sub_141086320
// 地址: 0x141086320
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = data_143e4cf6f

if ((rax & 2) != 0)
    return &data_143e4cf08

data_143e4cf6f = rax | 2
data_143e4cf10 = u"TBasePassVertexShaderBaseType"
data_143e4cf28 = sub_140b4ede0
data_143e4cf50 = sub_140594890
char rax_1 = data_143e4fad7
data_143e4cf30 = sub_140b4ed00
data_143e4cf38 = sub_140b4e800
data_143e4cf40 = sub_140b4ead0
data_143e4cf48 = sub_140b4eb90
data_143e4cf60 = 0x148
data_143e4cf68 = 8
data_143e4cf6c = 0
data_143e4cf64 = 0xffffffff
data_143e4eba8 = u"BASE"
data_143e4ebd2 = 4

if ((rax_1 & 2) == 0)
    data_143e4fa90 = sub_140b4ede0
    data_143e4fad7 = rax_1 | 2
    data_143e4fa98 = sub_140b4ed00
    data_143e4fa78 = u"TBasePassVertexShaderPolicyParamType"
    data_143e4fab8 = sub_140594890
    data_143e4faa0 = sub_140b4e800
    data_143e4faa8 = sub_140b4ead0
    data_143e4fab0 = sub_140b4eb90
    data_143e4fac8 = 0x148
    data_143e4fad0 = 8
    data_143e4fad4 = 0
    data_143e4facc = 0xffffffff
    data_143e50268 = u"ReflectionCaptureBuffer"
    data_143e50292 = sub_140b4fdf0(u"ReflectionCaptureBuffer")
    sub_1419db3a0()
    data_143e50270 = &data_143f21520
    data_143e50278 = data_143e4fa80
    data_143e4fa80 = &data_143e50268
    data_143e50280 = sub_140b4f380
    data_143e50288 = 0x146
    data_143e5028c = 1
    data_143e50290 = 0
    data_143e50e68 = u"BASE"
    data_143e50e92 = 4
    sub_141245460()
    int64_t rcx_1 = data_143e4fa80
    data_143e4fad5 += 1
    data_143e50e78 = rcx_1
    data_143e4fa80 = &data_143e50e68
    data_143e50e70 = &data_143e85cb0
    data_143e50e80 = sub_140b4f380
    data_143e50e88 = 0x140
    data_143e50e8c = 1
    
    if (data_143e85d14 != 0)
        data_143e4fad6 += 1
    
    data_143e50868 = u"BASE"
    data_143e50892 = 4
    sub_141462970()
    int64_t rcx_2 = data_143e4fa80
    data_143e4fad5 += 1
    data_143e50878 = rcx_2
    data_143e4fa80 = &data_143e50868
    data_143e50870 = &data_143ed82c8
    data_143e50880 = sub_140b4f380
    data_143e50888 = 0
    data_143e5088c = 1
    
    if (data_143ed832c != 0)
        data_143e4fad6 += 1
    
    sub_140b51460(&data_143e4fa70)

int64_t rax_4 = data_143e4cf18
data_143e4cf6d += 1
bool cond:0 = data_143e4fad4 == 0
data_143e4ebb8 = rax_4
data_143e4ebb0 = &data_143e4fa70
data_143e4cf18 = &data_143e4eba8
data_143e4ebc0 = sub_140b4f380
data_143e4ebc8 = 0
data_143e4ebcc = 1

if (not(cond:0))
    data_143e4cf6e += 1

sub_140b51460(&data_143e4cf08)
return &data_143e4cf08
