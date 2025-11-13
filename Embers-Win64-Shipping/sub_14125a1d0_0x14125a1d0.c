// 函数: sub_14125a1d0
// 地址: 0x14125a1d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = data_143eaf377

if ((rax & 2) != 0)
    return &data_143eaf310

data_143eaf377 = rax | 2
data_143eaf318 = u"TMobileBasePassVSBaseType"
data_143eaf330 = sub_140b4ede0
data_143eaf358 = sub_140594890
char rax_1 = data_143eb0087
data_143eaf338 = sub_140b4ed00
data_143eaf340 = sub_140b4e800
data_143eaf348 = sub_140b4ead0
data_143eaf350 = sub_140b4eb90
data_143eaf368 = 0x148
data_143eaf370 = 8
data_143eaf374 = 0
data_143eaf36c = 0xffffffff
data_143eafa98 = u"BASE"
data_143eafac2 = 4

if ((rax_1 & 2) == 0)
    data_143eb0040 = sub_140b4ede0
    data_143eb0087 = rax_1 | 2
    data_143eb0028 = u"TMobileBasePassVSPolicyParamType"
    data_143eb0068 = sub_140594890
    data_143eb0048 = sub_140b4ed00
    data_143eb0050 = sub_140b4e800
    data_143eb0058 = sub_140b4ead0
    data_143eb0060 = sub_140b4eb90
    data_143eb0078 = 0x148
    data_143eb0080 = 8
    data_143eb0084 = 0
    data_143eb007c = 0xffffffff
    data_143eb23f8 = u"BASE"
    data_143eb2422 = 4
    sub_141245460()
    int64_t rcx_1 = data_143eb0030
    data_143eb0085 += 1
    data_143eb2408 = rcx_1
    data_143eb0030 = &data_143eb23f8
    data_143eb2400 = &data_143e85cb0
    data_143eb2410 = sub_140b4f380
    data_143eb2418 = 0x140
    data_143eb241c = 1
    
    if (data_143e85d14 != 0)
        data_143eb0086 += 1
    
    data_143eb1fd8 = u"BASE"
    data_143eb2002 = 4
    sub_141462970()
    int64_t rcx_2 = data_143eb0030
    data_143eb0085 += 1
    data_143eb1fe8 = rcx_2
    data_143eb0030 = &data_143eb1fd8
    data_143eb1fe0 = &data_143ed82c8
    data_143eb1ff0 = sub_140b4f380
    data_143eb1ff8 = 0
    data_143eb1ffc = 1
    
    if (data_143ed832c != 0)
        data_143eb0086 += 1
    
    sub_140b51460(&data_143eb0020)

int64_t rax_2 = data_143eaf320
data_143eaf375 += 1
bool cond:0 = data_143eb0084 == 0
data_143eafaa8 = rax_2
data_143eafaa0 = &data_143eb0020
data_143eaf320 = &data_143eafa98
data_143eafab0 = sub_140b4f380
data_143eafab8 = 0
data_143eafabc = 1

if (not(cond:0))
    data_143eaf376 += 1

sub_140b51460(&data_143eaf310)
return &data_143eaf310
