// 函数: sub_14125b190
// 地址: 0x14125b190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = data_143eaf5e7

if ((rax & 2) != 0)
    return &data_143eaf580

data_143eaf5e7 = rax | 2
data_143eaf588 = u"TMobileBasePassVSBaseType"
data_143eaf5a0 = sub_140b4ede0
data_143eaf5c8 = sub_140594890
char rax_1 = data_143eb02f7
data_143eaf5a8 = sub_140b4ed00
data_143eaf5b0 = sub_140b4e800
data_143eaf5b8 = sub_140b4ead0
data_143eaf5c0 = sub_140b4eb90
data_143eaf5d8 = 0x148
data_143eaf5e0 = 8
data_143eaf5e4 = 0
data_143eaf5dc = 0xffffffff
data_143eaf978 = u"BASE"
data_143eaf9a2 = 4

if ((rax_1 & 2) == 0)
    data_143eb02b0 = sub_140b4ede0
    data_143eb02f7 = rax_1 | 2
    data_143eb0298 = u"TMobileBasePassVSPolicyParamType"
    data_143eb02d8 = sub_140594890
    data_143eb02b8 = sub_140b4ed00
    data_143eb02c0 = sub_140b4e800
    data_143eb02c8 = sub_140b4ead0
    data_143eb02d0 = sub_140b4eb90
    data_143eb02e8 = 0x148
    data_143eb02f0 = 8
    data_143eb02f4 = 0
    data_143eb02ec = 0xffffffff
    data_143eb2518 = u"BASE"
    data_143eb2542 = 4
    sub_141245460()
    int64_t rcx_1 = data_143eb02a0
    data_143eb02f5 += 1
    data_143eb2528 = rcx_1
    data_143eb02a0 = &data_143eb2518
    data_143eb2520 = &data_143e85cb0
    data_143eb2530 = sub_140b4f380
    data_143eb2538 = 0x140
    data_143eb253c = 1
    
    if (data_143e85d14 != 0)
        data_143eb02f6 += 1
    
    data_143eb20f8 = u"BASE"
    data_143eb2122 = 4
    sub_141462970()
    int64_t rcx_2 = data_143eb02a0
    data_143eb02f5 += 1
    data_143eb2108 = rcx_2
    data_143eb02a0 = &data_143eb20f8
    data_143eb2100 = &data_143ed82c8
    data_143eb2110 = sub_140b4f380
    data_143eb2118 = 0
    data_143eb211c = 1
    
    if (data_143ed832c != 0)
        data_143eb02f6 += 1
    
    sub_140b51460(&data_143eb0290)

int64_t rax_2 = data_143eaf590
data_143eaf5e5 += 1
bool cond:0 = data_143eb02f4 == 0
data_143eaf988 = rax_2
data_143eaf980 = &data_143eb0290
data_143eaf590 = &data_143eaf978
data_143eaf990 = sub_140b4f380
data_143eaf998 = 0
data_143eaf99c = 1

if (not(cond:0))
    data_143eaf5e6 += 1

sub_140b51460(&data_143eaf580)
return &data_143eaf580
