// 函数: sub_1410881c0
// 地址: 0x1410881c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = data_143e4cfd7

if ((rax & 2) != 0)
    return &data_143e4cf70

data_143e4cfd7 = rax | 2
data_143e4cf78 = u"TBasePassVertexShaderBaseType"
data_143e4cf90 = sub_140b4ede0
data_143e4cfb8 = sub_140594890
char rax_1 = data_143e4fb3f
data_143e4cf98 = sub_140b4ed00
data_143e4cfa0 = sub_140b4e800
data_143e4cfa8 = sub_140b4ead0
data_143e4cfb0 = sub_140b4eb90
data_143e4cfc8 = 0x148
data_143e4cfd0 = 8
data_143e4cfd4 = 0
data_143e4cfcc = 0xffffffff
data_143e4eb78 = u"BASE"
data_143e4eba2 = 4

if ((rax_1 & 2) == 0)
    data_143e4faf8 = sub_140b4ede0
    data_143e4fb3f = rax_1 | 2
    data_143e4fb00 = sub_140b4ed00
    data_143e4fae0 = u"TBasePassVertexShaderPolicyParamType"
    data_143e4fb20 = sub_140594890
    data_143e4fb08 = sub_140b4e800
    data_143e4fb10 = sub_140b4ead0
    data_143e4fb18 = sub_140b4eb90
    data_143e4fb30 = 0x148
    data_143e4fb38 = 8
    data_143e4fb3c = 0
    data_143e4fb34 = 0xffffffff
    data_143e50298 = u"ReflectionCaptureBuffer"
    data_143e502c2 = sub_140b4fdf0(u"ReflectionCaptureBuffer")
    sub_1419db3a0()
    data_143e502a0 = &data_143f21520
    data_143e502a8 = data_143e4fae8
    data_143e4fae8 = &data_143e50298
    data_143e502b0 = sub_140b4f380
    data_143e502b8 = 0x146
    data_143e502bc = 1
    data_143e502c0 = 0
    data_143e50e98 = u"BASE"
    data_143e50ec2 = 4
    sub_141245460()
    int64_t rcx_1 = data_143e4fae8
    data_143e4fb3d += 1
    data_143e50ea8 = rcx_1
    data_143e4fae8 = &data_143e50e98
    data_143e50ea0 = &data_143e85cb0
    data_143e50eb0 = sub_140b4f380
    data_143e50eb8 = 0x140
    data_143e50ebc = 1
    
    if (data_143e85d14 != 0)
        data_143e4fb3e += 1
    
    data_143e50898 = u"BASE"
    data_143e508c2 = 4
    sub_141462970()
    int64_t rcx_2 = data_143e4fae8
    data_143e4fb3d += 1
    data_143e508a8 = rcx_2
    data_143e4fae8 = &data_143e50898
    data_143e508a0 = &data_143ed82c8
    data_143e508b0 = sub_140b4f380
    data_143e508b8 = 0
    data_143e508bc = 1
    
    if (data_143ed832c != 0)
        data_143e4fb3e += 1
    
    sub_140b51460(&data_143e4fad8)

int64_t rax_4 = data_143e4cf80
data_143e4cfd5 += 1
bool cond:0 = data_143e4fb3c == 0
data_143e4eb88 = rax_4
data_143e4eb80 = &data_143e4fad8
data_143e4cf80 = &data_143e4eb78
data_143e4eb90 = sub_140b4f380
data_143e4eb98 = 0
data_143e4eb9c = 1

if (not(cond:0))
    data_143e4cfd6 += 1

sub_140b51460(&data_143e4cf70)
return &data_143e4cf70
