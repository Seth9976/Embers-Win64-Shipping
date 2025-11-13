// 函数: sub_14125ac50
// 地址: 0x14125ac50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = data_143eaf037

if ((rax & 2) != 0)
    return &data_143eaefd0

data_143eaf037 = rax | 2
data_143eaefd8 = u"TMobileBasePassVSBaseType"
data_143eaeff0 = sub_140b4ede0
data_143eaf018 = sub_140594890
char rax_1 = data_143eafd47
data_143eaeff8 = sub_140b4ed00
data_143eaf000 = sub_140b4e800
data_143eaf008 = sub_140b4ead0
data_143eaf010 = sub_140b4eb90
data_143eaf028 = 0x148
data_143eaf030 = 8
data_143eaf034 = 0
data_143eaf02c = 0xffffffff
data_143eafc18 = u"BASE"
data_143eafc42 = 4

if ((rax_1 & 2) == 0)
    data_143eafd00 = sub_140b4ede0
    data_143eafd47 = rax_1 | 2
    data_143eafce8 = u"TMobileBasePassVSPolicyParamType"
    data_143eafd28 = sub_140594890
    data_143eafd08 = sub_140b4ed00
    data_143eafd10 = sub_140b4e800
    data_143eafd18 = sub_140b4ead0
    data_143eafd20 = sub_140b4eb90
    data_143eafd38 = 0x148
    data_143eafd40 = 8
    data_143eafd44 = 0
    data_143eafd3c = 0xffffffff
    data_143eb2278 = u"BASE"
    data_143eb22a2 = 4
    sub_141245460()
    int64_t rcx_1 = data_143eafcf0
    data_143eafd45 += 1
    data_143eb2288 = rcx_1
    data_143eafcf0 = &data_143eb2278
    data_143eb2280 = &data_143e85cb0
    data_143eb2290 = sub_140b4f380
    data_143eb2298 = 0x140
    data_143eb229c = 1
    
    if (data_143e85d14 != 0)
        data_143eafd46 += 1
    
    data_143eb1e58 = u"BASE"
    data_143eb1e82 = 4
    sub_141462970()
    int64_t rcx_2 = data_143eafcf0
    data_143eafd45 += 1
    data_143eb1e68 = rcx_2
    data_143eafcf0 = &data_143eb1e58
    data_143eb1e60 = &data_143ed82c8
    data_143eb1e70 = sub_140b4f380
    data_143eb1e78 = 0
    data_143eb1e7c = 1
    
    if (data_143ed832c != 0)
        data_143eafd46 += 1
    
    sub_140b51460(&data_143eafce0)

int64_t rax_2 = data_143eaefe0
data_143eaf035 += 1
bool cond:0 = data_143eafd44 == 0
data_143eafc28 = rax_2
data_143eafc20 = &data_143eafce0
data_143eaefe0 = &data_143eafc18
data_143eafc30 = sub_140b4f380
data_143eafc38 = 0
data_143eafc3c = 1

if (not(cond:0))
    data_143eaf036 += 1

sub_140b51460(&data_143eaefd0)
return &data_143eaefd0
