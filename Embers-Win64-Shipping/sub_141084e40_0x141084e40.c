// 函数: sub_141084e40
// 地址: 0x141084e40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = data_143e4c887

if ((rax & 2) != 0)
    return &data_143e4c820

data_143e4c887 = rax | 2
data_143e4c828 = u"TBasePassPixelShaderBaseType"
data_143e4c840 = sub_140b4ede0
data_143e4c868 = sub_140594890
char rax_1 = data_143e4f3ef
data_143e4c848 = sub_140b4ed00
data_143e4c850 = sub_140b4e800
data_143e4c858 = sub_140b4ead0
data_143e4c860 = sub_140b4eb90
data_143e4c878 = 0x148
data_143e4c880 = 8
data_143e4c884 = 0
data_143e4c87c = 0xffffffff
data_143e4eed8 = u"BASE"
data_143e4ef02 = 4

if ((rax_1 & 2) == 0)
    data_143e4f3a8 = sub_140b4ede0
    data_143e4f3ef = rax_1 | 2
    data_143e4f3b0 = sub_140b4ed00
    data_143e4f390 = u"TBasePassPixelShaderPolicyParamType"
    data_143e4f3d0 = sub_140594890
    data_143e4f3b8 = sub_140b4e800
    data_143e4f3c0 = sub_140b4ead0
    data_143e4f3c8 = sub_140b4eb90
    data_143e4f3e0 = 0x148
    data_143e4f3e8 = 8
    data_143e4f3ec = 0
    data_143e4f3e4 = 0xffffffff
    data_143e4ff38 = u"ReflectionCaptureBuffer"
    data_143e4ff62 = sub_140b4fdf0(u"ReflectionCaptureBuffer")
    sub_1419db3a0()
    data_143e4ff40 = &data_143f21520
    data_143e4ff48 = data_143e4f398
    data_143e4f398 = &data_143e4ff38
    data_143e4ff50 = sub_140b4f380
    data_143e4ff58 = 0x146
    data_143e4ff5c = 1
    data_143e4ff60 = 0
    data_143e50b38 = u"BASE"
    data_143e50b62 = 4
    sub_141245460()
    int64_t rcx_1 = data_143e4f398
    data_143e4f3ed += 1
    data_143e50b48 = rcx_1
    data_143e4f398 = &data_143e50b38
    data_143e50b40 = &data_143e85cb0
    data_143e50b50 = sub_140b4f380
    data_143e50b58 = 0x140
    data_143e50b5c = 1
    
    if (data_143e85d14 != 0)
        data_143e4f3ee += 1
    
    data_143e50538 = u"BASE"
    data_143e50562 = 4
    sub_141462970()
    int64_t rcx_2 = data_143e4f398
    data_143e4f3ed += 1
    data_143e50548 = rcx_2
    data_143e4f398 = &data_143e50538
    data_143e50540 = &data_143ed82c8
    data_143e50550 = sub_140b4f380
    data_143e50558 = 0
    data_143e5055c = 1
    
    if (data_143ed832c != 0)
        data_143e4f3ee += 1
    
    sub_140b51460(&data_143e4f388)

int64_t rax_4 = data_143e4c830
data_143e4c885 += 1
bool cond:0 = data_143e4f3ec == 0
data_143e4eee8 = rax_4
data_143e4eee0 = &data_143e4f388
data_143e4c830 = &data_143e4eed8
data_143e4eef0 = sub_140b4f380
data_143e4eef8 = 0
data_143e4eefc = 1

if (not(cond:0))
    data_143e4c886 += 1

sub_140b51460(&data_143e4c820)
return &data_143e4c820
