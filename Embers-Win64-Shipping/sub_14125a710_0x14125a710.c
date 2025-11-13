// 函数: sub_14125a710
// 地址: 0x14125a710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = data_143eaf1d7

if ((rax & 2) != 0)
    return &data_143eaf170

data_143eaf1d7 = rax | 2
data_143eaf178 = u"TMobileBasePassVSBaseType"
data_143eaf190 = sub_140b4ede0
data_143eaf1b8 = sub_140594890
char rax_1 = data_143eafee7
data_143eaf198 = sub_140b4ed00
data_143eaf1a0 = sub_140b4e800
data_143eaf1a8 = sub_140b4ead0
data_143eaf1b0 = sub_140b4eb90
data_143eaf1c8 = 0x148
data_143eaf1d0 = 8
data_143eaf1d4 = 0
data_143eaf1cc = 0xffffffff
data_143eafb58 = u"BASE"
data_143eafb82 = 4

if ((rax_1 & 2) == 0)
    data_143eafea0 = sub_140b4ede0
    data_143eafee7 = rax_1 | 2
    data_143eafe88 = u"TMobileBasePassVSPolicyParamType"
    data_143eafec8 = sub_140594890
    data_143eafea8 = sub_140b4ed00
    data_143eafeb0 = sub_140b4e800
    data_143eafeb8 = sub_140b4ead0
    data_143eafec0 = sub_140b4eb90
    data_143eafed8 = 0x148
    data_143eafee0 = 8
    data_143eafee4 = 0
    data_143eafedc = 0xffffffff
    data_143eb2338 = u"BASE"
    data_143eb2362 = 4
    sub_141245460()
    int64_t rcx_1 = data_143eafe90
    data_143eafee5 += 1
    data_143eb2348 = rcx_1
    data_143eafe90 = &data_143eb2338
    data_143eb2340 = &data_143e85cb0
    data_143eb2350 = sub_140b4f380
    data_143eb2358 = 0x140
    data_143eb235c = 1
    
    if (data_143e85d14 != 0)
        data_143eafee6 += 1
    
    data_143eb1f18 = u"BASE"
    data_143eb1f42 = 4
    sub_141462970()
    int64_t rcx_2 = data_143eafe90
    data_143eafee5 += 1
    data_143eb1f28 = rcx_2
    data_143eafe90 = &data_143eb1f18
    data_143eb1f20 = &data_143ed82c8
    data_143eb1f30 = sub_140b4f380
    data_143eb1f38 = 0
    data_143eb1f3c = 1
    
    if (data_143ed832c != 0)
        data_143eafee6 += 1
    
    sub_140b51460(&data_143eafe80)

int64_t rax_2 = data_143eaf180
data_143eaf1d5 += 1
bool cond:0 = data_143eafee4 == 0
data_143eafb68 = rax_2
data_143eafb60 = &data_143eafe80
data_143eaf180 = &data_143eafb58
data_143eafb70 = sub_140b4f380
data_143eafb78 = 0
data_143eafb7c = 1

if (not(cond:0))
    data_143eaf1d6 += 1

sub_140b51460(&data_143eaf170)
return &data_143eaf170
