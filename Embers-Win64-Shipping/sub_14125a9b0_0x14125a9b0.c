// 函数: sub_14125a9b0
// 地址: 0x14125a9b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = data_143eaf107

if ((rax & 2) != 0)
    return &data_143eaf0a0

data_143eaf107 = rax | 2
data_143eaf0a8 = u"TMobileBasePassVSBaseType"
data_143eaf0c0 = sub_140b4ede0
data_143eaf0e8 = sub_140594890
char rax_1 = data_143eafe17
data_143eaf0c8 = sub_140b4ed00
data_143eaf0d0 = sub_140b4e800
data_143eaf0d8 = sub_140b4ead0
data_143eaf0e0 = sub_140b4eb90
data_143eaf0f8 = 0x148
data_143eaf100 = 8
data_143eaf104 = 0
data_143eaf0fc = 0xffffffff
data_143eafbb8 = u"BASE"
data_143eafbe2 = 4

if ((rax_1 & 2) == 0)
    data_143eafdd0 = sub_140b4ede0
    data_143eafe17 = rax_1 | 2
    data_143eafdb8 = u"TMobileBasePassVSPolicyParamType"
    data_143eafdf8 = sub_140594890
    data_143eafdd8 = sub_140b4ed00
    data_143eafde0 = sub_140b4e800
    data_143eafde8 = sub_140b4ead0
    data_143eafdf0 = sub_140b4eb90
    data_143eafe08 = 0x148
    data_143eafe10 = 8
    data_143eafe14 = 0
    data_143eafe0c = 0xffffffff
    data_143eb22d8 = u"BASE"
    data_143eb2302 = 4
    sub_141245460()
    int64_t rcx_1 = data_143eafdc0
    data_143eafe15 += 1
    data_143eb22e8 = rcx_1
    data_143eafdc0 = &data_143eb22d8
    data_143eb22e0 = &data_143e85cb0
    data_143eb22f0 = sub_140b4f380
    data_143eb22f8 = 0x140
    data_143eb22fc = 1
    
    if (data_143e85d14 != 0)
        data_143eafe16 += 1
    
    data_143eb1eb8 = u"BASE"
    data_143eb1ee2 = 4
    sub_141462970()
    int64_t rcx_2 = data_143eafdc0
    data_143eafe15 += 1
    data_143eb1ec8 = rcx_2
    data_143eafdc0 = &data_143eb1eb8
    data_143eb1ec0 = &data_143ed82c8
    data_143eb1ed0 = sub_140b4f380
    data_143eb1ed8 = 0
    data_143eb1edc = 1
    
    if (data_143ed832c != 0)
        data_143eafe16 += 1
    
    sub_140b51460(&data_143eafdb0)

int64_t rax_2 = data_143eaf0b0
data_143eaf105 += 1
bool cond:0 = data_143eafe14 == 0
data_143eafbc8 = rax_2
data_143eafbc0 = &data_143eafdb0
data_143eaf0b0 = &data_143eafbb8
data_143eafbd0 = sub_140b4f380
data_143eafbd8 = 0
data_143eafbdc = 1

if (not(cond:0))
    data_143eaf106 += 1

sub_140b51460(&data_143eaf0a0)
return &data_143eaf0a0
