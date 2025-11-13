// 函数: sub_141259c90
// 地址: 0x141259c90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = data_143eaf857

if ((rax & 2) != 0)
    return &data_143eaf7f0

data_143eaf857 = rax | 2
data_143eaf7f8 = u"TMobileBasePassVSBaseType"
data_143eaf810 = sub_140b4ede0
data_143eaf838 = sub_140594890
char rax_1 = data_143eb0567
data_143eaf818 = sub_140b4ed00
data_143eaf820 = sub_140b4e800
data_143eaf828 = sub_140b4ead0
data_143eaf830 = sub_140b4eb90
data_143eaf848 = 0x148
data_143eaf850 = 8
data_143eaf854 = 0
data_143eaf84c = 0xffffffff
data_143eaf858 = u"BASE"
data_143eaf882 = 4

if ((rax_1 & 2) == 0)
    data_143eb0520 = sub_140b4ede0
    data_143eb0567 = rax_1 | 2
    data_143eb0508 = u"TMobileBasePassVSPolicyParamType"
    data_143eb0548 = sub_140594890
    data_143eb0528 = sub_140b4ed00
    data_143eb0530 = sub_140b4e800
    data_143eb0538 = sub_140b4ead0
    data_143eb0540 = sub_140b4eb90
    data_143eb0558 = 0x148
    data_143eb0560 = 8
    data_143eb0564 = 0
    data_143eb055c = 0xffffffff
    data_143eb2638 = u"BASE"
    data_143eb2662 = 4
    sub_141245460()
    int64_t rcx_1 = data_143eb0510
    data_143eb0565 += 1
    data_143eb2648 = rcx_1
    data_143eb0510 = &data_143eb2638
    data_143eb2640 = &data_143e85cb0
    data_143eb2650 = sub_140b4f380
    data_143eb2658 = 0x140
    data_143eb265c = 1
    
    if (data_143e85d14 != 0)
        data_143eb0566 += 1
    
    data_143eb2218 = u"BASE"
    data_143eb2242 = 4
    sub_141462970()
    int64_t rcx_2 = data_143eb0510
    data_143eb0565 += 1
    data_143eb2228 = rcx_2
    data_143eb0510 = &data_143eb2218
    data_143eb2220 = &data_143ed82c8
    data_143eb2230 = sub_140b4f380
    data_143eb2238 = 0
    data_143eb223c = 1
    
    if (data_143ed832c != 0)
        data_143eb0566 += 1
    
    sub_140b51460(&data_143eb0500)

int64_t rax_2 = data_143eaf800
data_143eaf855 += 1
bool cond:0 = data_143eb0564 == 0
data_143eaf868 = rax_2
data_143eaf860 = &data_143eb0500
data_143eaf800 = &data_143eaf858
data_143eaf870 = sub_140b4f380
data_143eaf878 = 0
data_143eaf87c = 1

if (not(cond:0))
    data_143eaf856 += 1

sub_140b51460(&data_143eaf7f0)
return &data_143eaf7f0
