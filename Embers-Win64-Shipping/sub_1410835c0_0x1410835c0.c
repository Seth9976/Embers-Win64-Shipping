// 函数: sub_1410835c0
// 地址: 0x1410835c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = data_143e4cf07

if ((rax & 2) != 0)
    return &data_143e4cea0

data_143e4cf07 = rax | 2
data_143e4cea8 = u"TBasePassPixelShaderBaseType"
data_143e4cec0 = sub_140b4ede0
data_143e4cee8 = sub_140594890
char rax_1 = data_143e4fa6f
data_143e4cec8 = sub_140b4ed00
data_143e4ced0 = sub_140b4e800
data_143e4ced8 = sub_140b4ead0
data_143e4cee0 = sub_140b4eb90
data_143e4cef8 = 0x148
data_143e4cf00 = 8
data_143e4cf04 = 0
data_143e4cefc = 0xffffffff
data_143e4ebd8 = u"BASE"
data_143e4ec02 = 4

if ((rax_1 & 2) == 0)
    data_143e4fa28 = sub_140b4ede0
    data_143e4fa6f = rax_1 | 2
    data_143e4fa30 = sub_140b4ed00
    data_143e4fa10 = u"TBasePassPixelShaderPolicyParamType"
    data_143e4fa50 = sub_140594890
    data_143e4fa38 = sub_140b4e800
    data_143e4fa40 = sub_140b4ead0
    data_143e4fa48 = sub_140b4eb90
    data_143e4fa60 = 0x148
    data_143e4fa68 = 8
    data_143e4fa6c = 0
    data_143e4fa64 = 0xffffffff
    data_143e50238 = u"ReflectionCaptureBuffer"
    data_143e50262 = sub_140b4fdf0(u"ReflectionCaptureBuffer")
    sub_1419db3a0()
    data_143e50240 = &data_143f21520
    data_143e50248 = data_143e4fa18
    data_143e4fa18 = &data_143e50238
    data_143e50250 = sub_140b4f380
    data_143e50258 = 0x146
    data_143e5025c = 1
    data_143e50260 = 0
    data_143e50e38 = u"BASE"
    data_143e50e62 = 4
    sub_141245460()
    int64_t rcx_1 = data_143e4fa18
    data_143e4fa6d += 1
    data_143e50e48 = rcx_1
    data_143e4fa18 = &data_143e50e38
    data_143e50e40 = &data_143e85cb0
    data_143e50e50 = sub_140b4f380
    data_143e50e58 = 0x140
    data_143e50e5c = 1
    
    if (data_143e85d14 != 0)
        data_143e4fa6e += 1
    
    data_143e50838 = u"BASE"
    data_143e50862 = 4
    sub_141462970()
    int64_t rcx_2 = data_143e4fa18
    data_143e4fa6d += 1
    data_143e50848 = rcx_2
    data_143e4fa18 = &data_143e50838
    data_143e50840 = &data_143ed82c8
    data_143e50850 = sub_140b4f380
    data_143e50858 = 0
    data_143e5085c = 1
    
    if (data_143ed832c != 0)
        data_143e4fa6e += 1
    
    sub_140b51460(&data_143e4fa08)

int64_t rax_4 = data_143e4ceb0
data_143e4cf05 += 1
bool cond:0 = data_143e4fa6c == 0
data_143e4ebe8 = rax_4
data_143e4ebe0 = &data_143e4fa08
data_143e4ceb0 = &data_143e4ebd8
data_143e4ebf0 = sub_140b4f380
data_143e4ebf8 = 0
data_143e4ebfc = 1

if (not(cond:0))
    data_143e4cf06 += 1

sub_140b51460(&data_143e4cea0)
return &data_143e4cea0
