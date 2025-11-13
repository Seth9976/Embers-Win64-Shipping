// 函数: sub_141089110
// 地址: 0x141089110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = data_143e4d0a7

if ((rax & 2) != 0)
    return &data_143e4d040

data_143e4d0a7 = rax | 2
data_143e4d048 = u"TBasePassVertexShaderBaseType"
data_143e4d060 = sub_140b4ede0
data_143e4d088 = sub_140594890
char rax_1 = data_143e4fc0f
data_143e4d068 = sub_140b4ed00
data_143e4d070 = sub_140b4e800
data_143e4d078 = sub_140b4ead0
data_143e4d080 = sub_140b4eb90
data_143e4d098 = 0x148
data_143e4d0a0 = 8
data_143e4d0a4 = 0
data_143e4d09c = 0xffffffff
data_143e4eb18 = u"BASE"
data_143e4eb42 = 4

if ((rax_1 & 2) == 0)
    data_143e4fbc8 = sub_140b4ede0
    data_143e4fc0f = rax_1 | 2
    data_143e4fbd0 = sub_140b4ed00
    data_143e4fbb0 = u"TBasePassVertexShaderPolicyParamType"
    data_143e4fbf0 = sub_140594890
    data_143e4fbd8 = sub_140b4e800
    data_143e4fbe0 = sub_140b4ead0
    data_143e4fbe8 = sub_140b4eb90
    data_143e4fc00 = 0x148
    data_143e4fc08 = 8
    data_143e4fc0c = 0
    data_143e4fc04 = 0xffffffff
    data_143e502f8 = u"ReflectionCaptureBuffer"
    data_143e50322 = sub_140b4fdf0(u"ReflectionCaptureBuffer")
    sub_1419db3a0()
    data_143e50300 = &data_143f21520
    data_143e50308 = data_143e4fbb8
    data_143e4fbb8 = &data_143e502f8
    data_143e50310 = sub_140b4f380
    data_143e50318 = 0x140
    data_143e5031c = 1
    data_143e50320 = 0
    data_143e50ef8 = u"BASE"
    data_143e50f22 = 4
    sub_141089ae0()
    int64_t rcx_1 = data_143e4fbb8
    data_143e4fc0d += 1
    data_143e50f08 = rcx_1
    data_143e4fbb8 = &data_143e50ef8
    data_143e50f00 = &data_143e2e080
    data_143e50f10 = sub_140b4f380
    data_143e50f18 = 0x140
    data_143e50f1c = 1
    
    if (data_143e2e0e4 != 0)
        data_143e4fc0e += 1
    
    data_143e508f8 = u"BASE"
    data_143e50922 = 4
    sub_141462970()
    int64_t rcx_2 = data_143e4fbb8
    data_143e4fc0d += 1
    data_143e50908 = rcx_2
    data_143e4fbb8 = &data_143e508f8
    data_143e50900 = &data_143ed82c8
    data_143e50910 = sub_140b4f380
    data_143e50918 = 0
    data_143e5091c = 1
    
    if (data_143ed832c != 0)
        data_143e4fc0e += 1
    
    sub_140b51460(&data_143e4fba8)

int64_t rax_4 = data_143e4d050
data_143e4d0a5 += 1
bool cond:0 = data_143e4fc0c == 0
data_143e4eb28 = rax_4
data_143e4eb20 = &data_143e4fba8
data_143e4d050 = &data_143e4eb18
data_143e4eb30 = sub_140b4f380
data_143e4eb38 = 0
data_143e4eb3c = 1

if (not(cond:0))
    data_143e4d0a6 += 1

sub_140b51460(&data_143e4d040)
return &data_143e4d040
