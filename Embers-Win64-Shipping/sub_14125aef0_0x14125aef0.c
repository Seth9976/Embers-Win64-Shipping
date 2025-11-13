// 函数: sub_14125aef0
// 地址: 0x14125aef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = data_143eaf6b7

if ((rax & 2) != 0)
    return &data_143eaf650

data_143eaf6b7 = rax | 2
data_143eaf658 = u"TMobileBasePassVSBaseType"
data_143eaf670 = sub_140b4ede0
data_143eaf698 = sub_140594890
char rax_1 = data_143eb03c7
data_143eaf678 = sub_140b4ed00
data_143eaf680 = sub_140b4e800
data_143eaf688 = sub_140b4ead0
data_143eaf690 = sub_140b4eb90
data_143eaf6a8 = 0x148
data_143eaf6b0 = 8
data_143eaf6b4 = 0
data_143eaf6ac = 0xffffffff
data_143eaf918 = u"BASE"
data_143eaf942 = 4

if ((rax_1 & 2) == 0)
    data_143eb0380 = sub_140b4ede0
    data_143eb03c7 = rax_1 | 2
    data_143eb0368 = u"TMobileBasePassVSPolicyParamType"
    data_143eb03a8 = sub_140594890
    data_143eb0388 = sub_140b4ed00
    data_143eb0390 = sub_140b4e800
    data_143eb0398 = sub_140b4ead0
    data_143eb03a0 = sub_140b4eb90
    data_143eb03b8 = 0x148
    data_143eb03c0 = 8
    data_143eb03c4 = 0
    data_143eb03bc = 0xffffffff
    data_143eb2578 = u"BASE"
    data_143eb25a2 = 4
    sub_141245460()
    int64_t rcx_1 = data_143eb0370
    data_143eb03c5 += 1
    data_143eb2588 = rcx_1
    data_143eb0370 = &data_143eb2578
    data_143eb2580 = &data_143e85cb0
    data_143eb2590 = sub_140b4f380
    data_143eb2598 = 0x140
    data_143eb259c = 1
    
    if (data_143e85d14 != 0)
        data_143eb03c6 += 1
    
    data_143eb2158 = u"BASE"
    data_143eb2182 = 4
    sub_141462970()
    int64_t rcx_2 = data_143eb0370
    data_143eb03c5 += 1
    data_143eb2168 = rcx_2
    data_143eb0370 = &data_143eb2158
    data_143eb2160 = &data_143ed82c8
    data_143eb2170 = sub_140b4f380
    data_143eb2178 = 0
    data_143eb217c = 1
    
    if (data_143ed832c != 0)
        data_143eb03c6 += 1
    
    sub_140b51460(&data_143eb0360)

int64_t rax_2 = data_143eaf660
data_143eaf6b5 += 1
bool cond:0 = data_143eb03c4 == 0
data_143eaf928 = rax_2
data_143eaf920 = &data_143eb0360
data_143eaf660 = &data_143eaf918
data_143eaf930 = sub_140b4f380
data_143eaf938 = 0
data_143eaf93c = 1

if (not(cond:0))
    data_143eaf6b6 += 1

sub_140b51460(&data_143eaf650)
return &data_143eaf650
