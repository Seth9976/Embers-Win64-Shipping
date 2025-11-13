// 函数: sub_141087ba0
// 地址: 0x141087ba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = data_143e4c8ef

if ((rax & 2) != 0)
    return &data_143e4c888

data_143e4c8ef = rax | 2
data_143e4c890 = u"TBasePassVertexShaderBaseType"
data_143e4c8a8 = sub_140b4ede0
data_143e4c8d0 = sub_140594890
char rax_1 = data_143e4f457
data_143e4c8b0 = sub_140b4ed00
data_143e4c8b8 = sub_140b4e800
data_143e4c8c0 = sub_140b4ead0
data_143e4c8c8 = sub_140b4eb90
data_143e4c8e0 = 0x148
data_143e4c8e8 = 8
data_143e4c8ec = 0
data_143e4c8e4 = 0xffffffff
data_143e4eea8 = u"BASE"
data_143e4eed2 = 4

if ((rax_1 & 2) == 0)
    data_143e4f410 = sub_140b4ede0
    data_143e4f457 = rax_1 | 2
    data_143e4f418 = sub_140b4ed00
    data_143e4f3f8 = u"TBasePassVertexShaderPolicyParamType"
    data_143e4f438 = sub_140594890
    data_143e4f420 = sub_140b4e800
    data_143e4f428 = sub_140b4ead0
    data_143e4f430 = sub_140b4eb90
    data_143e4f448 = 0x148
    data_143e4f450 = 8
    data_143e4f454 = 0
    data_143e4f44c = 0xffffffff
    data_143e4ff68 = u"ReflectionCaptureBuffer"
    data_143e4ff92 = sub_140b4fdf0(u"ReflectionCaptureBuffer")
    sub_1419db3a0()
    data_143e4ff70 = &data_143f21520
    data_143e4ff78 = data_143e4f400
    data_143e4f400 = &data_143e4ff68
    data_143e4ff80 = sub_140b4f380
    data_143e4ff88 = 0x146
    data_143e4ff8c = 1
    data_143e4ff90 = 0
    data_143e50b68 = u"BASE"
    data_143e50b92 = 4
    sub_141245460()
    int64_t rcx_1 = data_143e4f400
    data_143e4f455 += 1
    data_143e50b78 = rcx_1
    data_143e4f400 = &data_143e50b68
    data_143e50b70 = &data_143e85cb0
    data_143e50b80 = sub_140b4f380
    data_143e50b88 = 0x140
    data_143e50b8c = 1
    
    if (data_143e85d14 != 0)
        data_143e4f456 += 1
    
    data_143e50568 = u"BASE"
    data_143e50592 = 4
    sub_141462970()
    int64_t rcx_2 = data_143e4f400
    data_143e4f455 += 1
    data_143e50578 = rcx_2
    data_143e4f400 = &data_143e50568
    data_143e50570 = &data_143ed82c8
    data_143e50580 = sub_140b4f380
    data_143e50588 = 0
    data_143e5058c = 1
    
    if (data_143ed832c != 0)
        data_143e4f456 += 1
    
    sub_140b51460(&data_143e4f3f0)

int64_t rax_4 = data_143e4c898
data_143e4c8ed += 1
bool cond:0 = data_143e4f454 == 0
data_143e4eeb8 = rax_4
data_143e4eeb0 = &data_143e4f3f0
data_143e4c898 = &data_143e4eea8
data_143e4eec0 = sub_140b4f380
data_143e4eec8 = 0
data_143e4eecc = 1

if (not(cond:0))
    data_143e4c8ee += 1

sub_140b51460(&data_143e4c888)
return &data_143e4c888
