// 函数: sub_141084b30
// 地址: 0x141084b30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = data_143e4c957

if ((rax & 2) != 0)
    return &data_143e4c8f0

data_143e4c957 = rax | 2
data_143e4c8f8 = u"TBasePassPixelShaderBaseType"
data_143e4c910 = sub_140b4ede0
data_143e4c938 = sub_140594890
char rax_1 = data_143e4f4bf
data_143e4c918 = sub_140b4ed00
data_143e4c920 = sub_140b4e800
data_143e4c928 = sub_140b4ead0
data_143e4c930 = sub_140b4eb90
data_143e4c948 = 0x148
data_143e4c950 = 8
data_143e4c954 = 0
data_143e4c94c = 0xffffffff
data_143e4ee78 = u"BASE"
data_143e4eea2 = 4

if ((rax_1 & 2) == 0)
    data_143e4f478 = sub_140b4ede0
    data_143e4f4bf = rax_1 | 2
    data_143e4f480 = sub_140b4ed00
    data_143e4f460 = u"TBasePassPixelShaderPolicyParamType"
    data_143e4f4a0 = sub_140594890
    data_143e4f488 = sub_140b4e800
    data_143e4f490 = sub_140b4ead0
    data_143e4f498 = sub_140b4eb90
    data_143e4f4b0 = 0x148
    data_143e4f4b8 = 8
    data_143e4f4bc = 0
    data_143e4f4b4 = 0xffffffff
    data_143e4ff98 = u"ReflectionCaptureBuffer"
    data_143e4ffc2 = sub_140b4fdf0(u"ReflectionCaptureBuffer")
    sub_1419db3a0()
    data_143e4ffa0 = &data_143f21520
    data_143e4ffa8 = data_143e4f468
    data_143e4f468 = &data_143e4ff98
    data_143e4ffb0 = sub_140b4f380
    data_143e4ffb8 = 0x146
    data_143e4ffbc = 1
    data_143e4ffc0 = 0
    data_143e50b98 = u"BASE"
    data_143e50bc2 = 4
    sub_141245460()
    int64_t rcx_1 = data_143e4f468
    data_143e4f4bd += 1
    data_143e50ba8 = rcx_1
    data_143e4f468 = &data_143e50b98
    data_143e50ba0 = &data_143e85cb0
    data_143e50bb0 = sub_140b4f380
    data_143e50bb8 = 0x140
    data_143e50bbc = 1
    
    if (data_143e85d14 != 0)
        data_143e4f4be += 1
    
    data_143e50598 = u"BASE"
    data_143e505c2 = 4
    sub_141462970()
    int64_t rcx_2 = data_143e4f468
    data_143e4f4bd += 1
    data_143e505a8 = rcx_2
    data_143e4f468 = &data_143e50598
    data_143e505a0 = &data_143ed82c8
    data_143e505b0 = sub_140b4f380
    data_143e505b8 = 0
    data_143e505bc = 1
    
    if (data_143ed832c != 0)
        data_143e4f4be += 1
    
    sub_140b51460(&data_143e4f458)

int64_t rax_4 = data_143e4c900
data_143e4c955 += 1
bool cond:0 = data_143e4f4bc == 0
data_143e4ee88 = rax_4
data_143e4ee80 = &data_143e4f458
data_143e4c900 = &data_143e4ee78
data_143e4ee90 = sub_140b4f380
data_143e4ee98 = 0
data_143e4ee9c = 1

if (not(cond:0))
    data_143e4c956 += 1

sub_140b51460(&data_143e4c8f0)
return &data_143e4c8f0
