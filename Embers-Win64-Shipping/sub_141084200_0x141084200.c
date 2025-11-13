// 函数: sub_141084200
// 地址: 0x141084200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = data_143e4cbc7

if ((rax & 2) != 0)
    return &data_143e4cb60

data_143e4cbc7 = rax | 2
data_143e4cb68 = u"TBasePassPixelShaderBaseType"
data_143e4cb80 = sub_140b4ede0
data_143e4cba8 = sub_140594890
char rax_1 = data_143e4f72f
data_143e4cb88 = sub_140b4ed00
data_143e4cb90 = sub_140b4e800
data_143e4cb98 = sub_140b4ead0
data_143e4cba0 = sub_140b4eb90
data_143e4cbb8 = 0x148
data_143e4cbc0 = 8
data_143e4cbc4 = 0
data_143e4cbbc = 0xffffffff
data_143e4ed58 = u"BASE"
data_143e4ed82 = 4

if ((rax_1 & 2) == 0)
    data_143e4f6e8 = sub_140b4ede0
    data_143e4f72f = rax_1 | 2
    data_143e4f6f0 = sub_140b4ed00
    data_143e4f6d0 = u"TBasePassPixelShaderPolicyParamType"
    data_143e4f710 = sub_140594890
    data_143e4f6f8 = sub_140b4e800
    data_143e4f700 = sub_140b4ead0
    data_143e4f708 = sub_140b4eb90
    data_143e4f720 = 0x148
    data_143e4f728 = 8
    data_143e4f72c = 0
    data_143e4f724 = 0xffffffff
    data_143e500b8 = u"ReflectionCaptureBuffer"
    data_143e500e2 = sub_140b4fdf0(u"ReflectionCaptureBuffer")
    sub_1419db3a0()
    data_143e500c0 = &data_143f21520
    data_143e500c8 = data_143e4f6d8
    data_143e4f6d8 = &data_143e500b8
    data_143e500d0 = sub_140b4f380
    data_143e500d8 = 0x146
    data_143e500dc = 1
    data_143e500e0 = 0
    data_143e50cb8 = u"BASE"
    data_143e50ce2 = 4
    sub_141245460()
    int64_t rcx_1 = data_143e4f6d8
    data_143e4f72d += 1
    data_143e50cc8 = rcx_1
    data_143e4f6d8 = &data_143e50cb8
    data_143e50cc0 = &data_143e85cb0
    data_143e50cd0 = sub_140b4f380
    data_143e50cd8 = 0x140
    data_143e50cdc = 1
    
    if (data_143e85d14 != 0)
        data_143e4f72e += 1
    
    data_143e506b8 = u"BASE"
    data_143e506e2 = 4
    sub_141462970()
    int64_t rcx_2 = data_143e4f6d8
    data_143e4f72d += 1
    data_143e506c8 = rcx_2
    data_143e4f6d8 = &data_143e506b8
    data_143e506c0 = &data_143ed82c8
    data_143e506d0 = sub_140b4f380
    data_143e506d8 = 0
    data_143e506dc = 1
    
    if (data_143ed832c != 0)
        data_143e4f72e += 1
    
    sub_140b51460(&data_143e4f6c8)

int64_t rax_4 = data_143e4cb70
data_143e4cbc5 += 1
bool cond:0 = data_143e4f72c == 0
data_143e4ed68 = rax_4
data_143e4ed60 = &data_143e4f6c8
data_143e4cb70 = &data_143e4ed58
data_143e4ed70 = sub_140b4f380
data_143e4ed78 = 0
data_143e4ed7c = 1

if (not(cond:0))
    data_143e4cbc6 += 1

sub_140b51460(&data_143e4cb60)
return &data_143e4cb60
