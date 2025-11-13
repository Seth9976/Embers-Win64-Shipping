// 函数: sub_141088af0
// 地址: 0x141088af0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = data_143e4d177

if ((rax & 2) != 0)
    return &data_143e4d110

data_143e4d177 = rax | 2
data_143e4d118 = u"TBasePassVertexShaderBaseType"
data_143e4d130 = sub_140b4ede0
data_143e4d158 = sub_140594890
char rax_1 = data_143e4fcdf
data_143e4d138 = sub_140b4ed00
data_143e4d140 = sub_140b4e800
data_143e4d148 = sub_140b4ead0
data_143e4d150 = sub_140b4eb90
data_143e4d168 = 0x148
data_143e4d170 = 8
data_143e4d174 = 0
data_143e4d16c = 0xffffffff
data_143e4eab8 = u"BASE"
data_143e4eae2 = 4

if ((rax_1 & 2) == 0)
    data_143e4fc98 = sub_140b4ede0
    data_143e4fcdf = rax_1 | 2
    data_143e4fca0 = sub_140b4ed00
    data_143e4fc80 = u"TBasePassVertexShaderPolicyParamType"
    data_143e4fcc0 = sub_140594890
    data_143e4fca8 = sub_140b4e800
    data_143e4fcb0 = sub_140b4ead0
    data_143e4fcb8 = sub_140b4eb90
    data_143e4fcd0 = 0x148
    data_143e4fcd8 = 8
    data_143e4fcdc = 0
    data_143e4fcd4 = 0xffffffff
    data_143e50358 = u"ReflectionCaptureBuffer"
    data_143e50382 = sub_140b4fdf0(u"ReflectionCaptureBuffer")
    sub_1419db3a0()
    data_143e50360 = &data_143f21520
    data_143e50368 = data_143e4fc88
    data_143e4fc88 = &data_143e50358
    data_143e50370 = sub_140b4f380
    data_143e50378 = 0x140
    data_143e5037c = 1
    data_143e50380 = 0
    data_143e50f58 = u"BASE"
    data_143e50f82 = 4
    sub_141089ae0()
    int64_t rcx_1 = data_143e4fc88
    data_143e4fcdd += 1
    data_143e50f68 = rcx_1
    data_143e4fc88 = &data_143e50f58
    data_143e50f60 = &data_143e2e080
    data_143e50f70 = sub_140b4f380
    data_143e50f78 = 0x140
    data_143e50f7c = 1
    
    if (data_143e2e0e4 != 0)
        data_143e4fcde += 1
    
    data_143e50958 = u"BASE"
    data_143e50982 = 4
    sub_141462970()
    int64_t rcx_2 = data_143e4fc88
    data_143e4fcdd += 1
    data_143e50968 = rcx_2
    data_143e4fc88 = &data_143e50958
    data_143e50960 = &data_143ed82c8
    data_143e50970 = sub_140b4f380
    data_143e50978 = 0
    data_143e5097c = 1
    
    if (data_143ed832c != 0)
        data_143e4fcde += 1
    
    sub_140b51460(&data_143e4fc78)

int64_t rax_4 = data_143e4d120
data_143e4d175 += 1
bool cond:0 = data_143e4fcdc == 0
data_143e4eac8 = rax_4
data_143e4eac0 = &data_143e4fc78
data_143e4d120 = &data_143e4eab8
data_143e4ead0 = sub_140b4f380
data_143e4ead8 = 0
data_143e4eadc = 1

if (not(cond:0))
    data_143e4d176 += 1

sub_140b51460(&data_143e4d110)
return &data_143e4d110
