// 函数: sub_1410d8810
// 地址: 0x1410d8810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = data_143e4fc77

if ((rax & 2) != 0)
    return &data_143e4fc10

data_143e4fc77 = rax | 2
data_143e4fc18 = u"TBasePassPixelShaderPolicyParamType"
data_143e4fc50 = sub_140b4eb90
data_143e4fc58 = sub_140594890
data_143e4fc30 = sub_140b4ede0
data_143e4fc38 = sub_140b4ed00
data_143e4fc40 = sub_140b4e800
data_143e4fc48 = sub_140b4ead0
data_143e4fc68 = 0x150
data_143e4fc70 = 8
data_143e4fc74 = 0
data_143e4fc6c = 0xffffffff
data_143e50328 = u"ReflectionCaptureBuffer"
data_143e50352 = sub_140b4fdf0(u"ReflectionCaptureBuffer")
sub_1419db3a0()
char rcx = data_143e2e1e7
data_143e50330 = &data_143f21520
data_143e50338 = data_143e4fc20
int64_t* rax_3 = &data_143e50328
data_143e4fc20 = &data_143e50328
data_143e50340 = sub_140b4f380
data_143e50348 = 0x148
data_143e5034c = 1
data_143e50350 = 0
data_143e50f28 = u"BASE"
data_143e50f52 = 4

if ((rcx & 2) == 0)
    data_143e2e1a0 = sub_140b4ede0
    data_143e2e188 = u"PixelParametersType"
    data_143e2e1e7 = rcx | 2
    data_143e2e1c0 = sub_140b4eb90
    data_143e2e198 = sub_140594850
    data_143e2e1c8 = sub_140594890
    data_143e2e1a8 = sub_140b4ed00
    data_143e2e1b0 = sub_140b4e800
    data_143e2e1b8 = sub_140b4ead0
    data_143e2e1d8 = 8
    data_143e2e1e0 = 2
    data_143e2e1e4 = 0
    data_143e2e1dc = 0xffffffff
    data_143e4e840 = u"BASE"
    data_143e4e86a = 4
    sub_141089990()
    int64_t rcx_1 = data_143e2e190
    data_143e2e1e5 += 1
    data_143e4e850 = rcx_1
    data_143e2e190 = &data_143e4e840
    data_143e4e848 = &data_143e2e0e8
    data_143e4e858 = sub_140b4f380
    data_143e4e860 = 6
    data_143e4e864 = 1
    
    if (data_143e2e14c != 0)
        data_143e2e1e6 += 1
    
    data_143e4c338 = u"BASE"
    data_143e4c362 = 4
    sub_141245460()
    int64_t rcx_2 = data_143e2e190
    data_143e2e1e5 += 1
    data_143e4c348 = rcx_2
    data_143e2e190 = &data_143e4c338
    data_143e4c340 = &data_143e85cb0
    data_143e4c350 = sub_140b4f380
    data_143e4c358 = 0
    data_143e4c35c = 1
    
    if (data_143e85d14 != 0)
        data_143e2e1e6 += 1
    
    sub_140b51460(&data_143e2e180)
    rax_3 = data_143e4fc20

data_143e4fc75 += 1
bool cond:0 = data_143e2e1e4 == 0
data_143e50f38 = rax_3
data_143e50f30 = &data_143e2e180
data_143e4fc20 = &data_143e50f28
data_143e50f40 = sub_140b4f380
data_143e50f48 = 0x140
data_143e50f4c = 1

if (not(cond:0))
    data_143e4fc76 += 1

data_143e50928 = u"BASE"
data_143e50952 = 4
sub_141462970()
int64_t rcx_3 = data_143e4fc20
data_143e4fc75 += 1
data_143e50938 = rcx_3
data_143e4fc20 = &data_143e50928
data_143e50930 = &data_143ed82c8
data_143e50940 = sub_140b4f380
data_143e50948 = 0
data_143e5094c = 1

if (data_143ed832c != 0)
    data_143e4fc76 += 1

sub_140b51460(&data_143e4fc10)
return &data_143e4fc10
