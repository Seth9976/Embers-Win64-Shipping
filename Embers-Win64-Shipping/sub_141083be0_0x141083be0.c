// 函数: sub_141083be0
// 地址: 0x141083be0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = data_143e4cd67

if ((rax & 2) != 0)
    return &data_143e4cd00

data_143e4cd67 = rax | 2
data_143e4cd08 = u"TBasePassPixelShaderBaseType"
data_143e4cd20 = sub_140b4ede0
data_143e4cd48 = sub_140594890
char rax_1 = data_143e4f8cf
data_143e4cd28 = sub_140b4ed00
data_143e4cd30 = sub_140b4e800
data_143e4cd38 = sub_140b4ead0
data_143e4cd40 = sub_140b4eb90
data_143e4cd58 = 0x148
data_143e4cd60 = 8
data_143e4cd64 = 0
data_143e4cd5c = 0xffffffff
data_143e4ec98 = u"BASE"
data_143e4ecc2 = 4

if ((rax_1 & 2) == 0)
    data_143e4f888 = sub_140b4ede0
    data_143e4f8cf = rax_1 | 2
    data_143e4f890 = sub_140b4ed00
    data_143e4f870 = u"TBasePassPixelShaderPolicyParamType"
    data_143e4f8b0 = sub_140594890
    data_143e4f898 = sub_140b4e800
    data_143e4f8a0 = sub_140b4ead0
    data_143e4f8a8 = sub_140b4eb90
    data_143e4f8c0 = 0x148
    data_143e4f8c8 = 8
    data_143e4f8cc = 0
    data_143e4f8c4 = 0xffffffff
    data_143e50178 = u"ReflectionCaptureBuffer"
    data_143e501a2 = sub_140b4fdf0(u"ReflectionCaptureBuffer")
    sub_1419db3a0()
    data_143e50180 = &data_143f21520
    data_143e50188 = data_143e4f878
    data_143e4f878 = &data_143e50178
    data_143e50190 = sub_140b4f380
    data_143e50198 = 0x146
    data_143e5019c = 1
    data_143e501a0 = 0
    data_143e50d78 = u"BASE"
    data_143e50da2 = 4
    sub_141245460()
    int64_t rcx_1 = data_143e4f878
    data_143e4f8cd += 1
    data_143e50d88 = rcx_1
    data_143e4f878 = &data_143e50d78
    data_143e50d80 = &data_143e85cb0
    data_143e50d90 = sub_140b4f380
    data_143e50d98 = 0x140
    data_143e50d9c = 1
    
    if (data_143e85d14 != 0)
        data_143e4f8ce += 1
    
    data_143e50778 = u"BASE"
    data_143e507a2 = 4
    sub_141462970()
    int64_t rcx_2 = data_143e4f878
    data_143e4f8cd += 1
    data_143e50788 = rcx_2
    data_143e4f878 = &data_143e50778
    data_143e50780 = &data_143ed82c8
    data_143e50790 = sub_140b4f380
    data_143e50798 = 0
    data_143e5079c = 1
    
    if (data_143ed832c != 0)
        data_143e4f8ce += 1
    
    sub_140b51460(&data_143e4f868)

int64_t rax_4 = data_143e4cd10
data_143e4cd65 += 1
bool cond:0 = data_143e4f8cc == 0
data_143e4eca8 = rax_4
data_143e4eca0 = &data_143e4f868
data_143e4cd10 = &data_143e4ec98
data_143e4ecb0 = sub_140b4f380
data_143e4ecb8 = 0
data_143e4ecbc = 1

if (not(cond:0))
    data_143e4cd66 += 1

sub_140b51460(&data_143e4cd00)
return &data_143e4cd00
