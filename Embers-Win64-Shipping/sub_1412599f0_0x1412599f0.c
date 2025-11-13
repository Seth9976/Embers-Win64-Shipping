// 函数: sub_1412599f0
// 地址: 0x1412599f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = data_143eaf787

if ((rax & 2) != 0)
    return &data_143eaf720

data_143eaf787 = rax | 2
data_143eaf728 = u"TMobileBasePassVSBaseType"
data_143eaf740 = sub_140b4ede0
data_143eaf768 = sub_140594890
char rax_1 = data_143eb0497
data_143eaf748 = sub_140b4ed00
data_143eaf750 = sub_140b4e800
data_143eaf758 = sub_140b4ead0
data_143eaf760 = sub_140b4eb90
data_143eaf778 = 0x148
data_143eaf780 = 8
data_143eaf784 = 0
data_143eaf77c = 0xffffffff
data_143eaf8b8 = u"BASE"
data_143eaf8e2 = 4

if ((rax_1 & 2) == 0)
    data_143eb0450 = sub_140b4ede0
    data_143eb0497 = rax_1 | 2
    data_143eb0438 = u"TMobileBasePassVSPolicyParamType"
    data_143eb0478 = sub_140594890
    data_143eb0458 = sub_140b4ed00
    data_143eb0460 = sub_140b4e800
    data_143eb0468 = sub_140b4ead0
    data_143eb0470 = sub_140b4eb90
    data_143eb0488 = 0x148
    data_143eb0490 = 8
    data_143eb0494 = 0
    data_143eb048c = 0xffffffff
    data_143eb25d8 = u"BASE"
    data_143eb2602 = 4
    sub_141245460()
    int64_t rcx_1 = data_143eb0440
    data_143eb0495 += 1
    data_143eb25e8 = rcx_1
    data_143eb0440 = &data_143eb25d8
    data_143eb25e0 = &data_143e85cb0
    data_143eb25f0 = sub_140b4f380
    data_143eb25f8 = 0x140
    data_143eb25fc = 1
    
    if (data_143e85d14 != 0)
        data_143eb0496 += 1
    
    data_143eb21b8 = u"BASE"
    data_143eb21e2 = 4
    sub_141462970()
    int64_t rcx_2 = data_143eb0440
    data_143eb0495 += 1
    data_143eb21c8 = rcx_2
    data_143eb0440 = &data_143eb21b8
    data_143eb21c0 = &data_143ed82c8
    data_143eb21d0 = sub_140b4f380
    data_143eb21d8 = 0
    data_143eb21dc = 1
    
    if (data_143ed832c != 0)
        data_143eb0496 += 1
    
    sub_140b51460(&data_143eb0430)

int64_t rax_2 = data_143eaf730
data_143eaf785 += 1
bool cond:0 = data_143eb0494 == 0
data_143eaf8c8 = rax_2
data_143eaf8c0 = &data_143eb0430
data_143eaf730 = &data_143eaf8b8
data_143eaf8d0 = sub_140b4f380
data_143eaf8d8 = 0
data_143eaf8dc = 1

if (not(cond:0))
    data_143eaf786 += 1

sub_140b51460(&data_143eaf720)
return &data_143eaf720
