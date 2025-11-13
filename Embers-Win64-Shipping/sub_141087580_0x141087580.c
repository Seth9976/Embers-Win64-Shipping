// 函数: sub_141087580
// 地址: 0x141087580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = data_143e4ca8f

if ((rax & 2) != 0)
    return &data_143e4ca28

data_143e4ca8f = rax | 2
data_143e4ca30 = u"TBasePassVertexShaderBaseType"
data_143e4ca48 = sub_140b4ede0
data_143e4ca70 = sub_140594890
char rax_1 = data_143e4f5f7
data_143e4ca50 = sub_140b4ed00
data_143e4ca58 = sub_140b4e800
data_143e4ca60 = sub_140b4ead0
data_143e4ca68 = sub_140b4eb90
data_143e4ca80 = 0x148
data_143e4ca88 = 8
data_143e4ca8c = 0
data_143e4ca84 = 0xffffffff
data_143e4ede8 = u"BASE"
data_143e4ee12 = 4

if ((rax_1 & 2) == 0)
    data_143e4f5b0 = sub_140b4ede0
    data_143e4f5f7 = rax_1 | 2
    data_143e4f5b8 = sub_140b4ed00
    data_143e4f598 = u"TBasePassVertexShaderPolicyParamType"
    data_143e4f5d8 = sub_140594890
    data_143e4f5c0 = sub_140b4e800
    data_143e4f5c8 = sub_140b4ead0
    data_143e4f5d0 = sub_140b4eb90
    data_143e4f5e8 = 0x148
    data_143e4f5f0 = 8
    data_143e4f5f4 = 0
    data_143e4f5ec = 0xffffffff
    data_143e50028 = u"ReflectionCaptureBuffer"
    data_143e50052 = sub_140b4fdf0(u"ReflectionCaptureBuffer")
    sub_1419db3a0()
    data_143e50030 = &data_143f21520
    data_143e50038 = data_143e4f5a0
    data_143e4f5a0 = &data_143e50028
    data_143e50040 = sub_140b4f380
    data_143e50048 = 0x146
    data_143e5004c = 1
    data_143e50050 = 0
    data_143e50c28 = u"BASE"
    data_143e50c52 = 4
    sub_141245460()
    int64_t rcx_1 = data_143e4f5a0
    data_143e4f5f5 += 1
    data_143e50c38 = rcx_1
    data_143e4f5a0 = &data_143e50c28
    data_143e50c30 = &data_143e85cb0
    data_143e50c40 = sub_140b4f380
    data_143e50c48 = 0x140
    data_143e50c4c = 1
    
    if (data_143e85d14 != 0)
        data_143e4f5f6 += 1
    
    data_143e50628 = u"BASE"
    data_143e50652 = 4
    sub_141462970()
    int64_t rcx_2 = data_143e4f5a0
    data_143e4f5f5 += 1
    data_143e50638 = rcx_2
    data_143e4f5a0 = &data_143e50628
    data_143e50630 = &data_143ed82c8
    data_143e50640 = sub_140b4f380
    data_143e50648 = 0
    data_143e5064c = 1
    
    if (data_143ed832c != 0)
        data_143e4f5f6 += 1
    
    sub_140b51460(&data_143e4f590)

int64_t rax_4 = data_143e4ca38
data_143e4ca8d += 1
bool cond:0 = data_143e4f5f4 == 0
data_143e4edf8 = rax_4
data_143e4edf0 = &data_143e4f590
data_143e4ca38 = &data_143e4ede8
data_143e4ee00 = sub_140b4f380
data_143e4ee08 = 0
data_143e4ee0c = 1

if (not(cond:0))
    data_143e4ca8e += 1

sub_140b51460(&data_143e4ca28)
return &data_143e4ca28
