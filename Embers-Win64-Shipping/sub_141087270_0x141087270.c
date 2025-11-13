// 函数: sub_141087270
// 地址: 0x141087270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = data_143e4cb5f

if ((rax & 2) != 0)
    return &data_143e4caf8

data_143e4cb5f = rax | 2
data_143e4cb00 = u"TBasePassVertexShaderBaseType"
data_143e4cb18 = sub_140b4ede0
data_143e4cb40 = sub_140594890
char rax_1 = data_143e4f6c7
data_143e4cb20 = sub_140b4ed00
data_143e4cb28 = sub_140b4e800
data_143e4cb30 = sub_140b4ead0
data_143e4cb38 = sub_140b4eb90
data_143e4cb50 = 0x148
data_143e4cb58 = 8
data_143e4cb5c = 0
data_143e4cb54 = 0xffffffff
data_143e4ed88 = u"BASE"
data_143e4edb2 = 4

if ((rax_1 & 2) == 0)
    data_143e4f680 = sub_140b4ede0
    data_143e4f6c7 = rax_1 | 2
    data_143e4f688 = sub_140b4ed00
    data_143e4f668 = u"TBasePassVertexShaderPolicyParamType"
    data_143e4f6a8 = sub_140594890
    data_143e4f690 = sub_140b4e800
    data_143e4f698 = sub_140b4ead0
    data_143e4f6a0 = sub_140b4eb90
    data_143e4f6b8 = 0x148
    data_143e4f6c0 = 8
    data_143e4f6c4 = 0
    data_143e4f6bc = 0xffffffff
    data_143e50088 = u"ReflectionCaptureBuffer"
    data_143e500b2 = sub_140b4fdf0(u"ReflectionCaptureBuffer")
    sub_1419db3a0()
    data_143e50090 = &data_143f21520
    data_143e50098 = data_143e4f670
    data_143e4f670 = &data_143e50088
    data_143e500a0 = sub_140b4f380
    data_143e500a8 = 0x146
    data_143e500ac = 1
    data_143e500b0 = 0
    data_143e50c88 = u"BASE"
    data_143e50cb2 = 4
    sub_141245460()
    int64_t rcx_1 = data_143e4f670
    data_143e4f6c5 += 1
    data_143e50c98 = rcx_1
    data_143e4f670 = &data_143e50c88
    data_143e50c90 = &data_143e85cb0
    data_143e50ca0 = sub_140b4f380
    data_143e50ca8 = 0x140
    data_143e50cac = 1
    
    if (data_143e85d14 != 0)
        data_143e4f6c6 += 1
    
    data_143e50688 = u"BASE"
    data_143e506b2 = 4
    sub_141462970()
    int64_t rcx_2 = data_143e4f670
    data_143e4f6c5 += 1
    data_143e50698 = rcx_2
    data_143e4f670 = &data_143e50688
    data_143e50690 = &data_143ed82c8
    data_143e506a0 = sub_140b4f380
    data_143e506a8 = 0
    data_143e506ac = 1
    
    if (data_143ed832c != 0)
        data_143e4f6c6 += 1
    
    sub_140b51460(&data_143e4f660)

int64_t rax_4 = data_143e4cb08
data_143e4cb5d += 1
bool cond:0 = data_143e4f6c4 == 0
data_143e4ed98 = rax_4
data_143e4ed90 = &data_143e4f660
data_143e4cb08 = &data_143e4ed88
data_143e4eda0 = sub_140b4f380
data_143e4eda8 = 0
data_143e4edac = 1

if (not(cond:0))
    data_143e4cb5e += 1

sub_140b51460(&data_143e4caf8)
return &data_143e4caf8
