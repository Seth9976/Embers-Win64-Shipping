// 函数: sub_141259f30
// 地址: 0x141259f30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = data_143eaf447

if ((rax & 2) != 0)
    return &data_143eaf3e0

data_143eaf447 = rax | 2
data_143eaf3e8 = u"TMobileBasePassVSBaseType"
data_143eaf400 = sub_140b4ede0
data_143eaf428 = sub_140594890
char rax_1 = data_143eb0157
data_143eaf408 = sub_140b4ed00
data_143eaf410 = sub_140b4e800
data_143eaf418 = sub_140b4ead0
data_143eaf420 = sub_140b4eb90
data_143eaf438 = 0x148
data_143eaf440 = 8
data_143eaf444 = 0
data_143eaf43c = 0xffffffff
data_143eafa38 = u"BASE"
data_143eafa62 = 4

if ((rax_1 & 2) == 0)
    data_143eb0110 = sub_140b4ede0
    data_143eb0157 = rax_1 | 2
    data_143eb00f8 = u"TMobileBasePassVSPolicyParamType"
    data_143eb0138 = sub_140594890
    data_143eb0118 = sub_140b4ed00
    data_143eb0120 = sub_140b4e800
    data_143eb0128 = sub_140b4ead0
    data_143eb0130 = sub_140b4eb90
    data_143eb0148 = 0x148
    data_143eb0150 = 8
    data_143eb0154 = 0
    data_143eb014c = 0xffffffff
    data_143eb2458 = u"BASE"
    data_143eb2482 = 4
    sub_141245460()
    int64_t rcx_1 = data_143eb0100
    data_143eb0155 += 1
    data_143eb2468 = rcx_1
    data_143eb0100 = &data_143eb2458
    data_143eb2460 = &data_143e85cb0
    data_143eb2470 = sub_140b4f380
    data_143eb2478 = 0x140
    data_143eb247c = 1
    
    if (data_143e85d14 != 0)
        data_143eb0156 += 1
    
    data_143eb2038 = u"BASE"
    data_143eb2062 = 4
    sub_141462970()
    int64_t rcx_2 = data_143eb0100
    data_143eb0155 += 1
    data_143eb2048 = rcx_2
    data_143eb0100 = &data_143eb2038
    data_143eb2040 = &data_143ed82c8
    data_143eb2050 = sub_140b4f380
    data_143eb2058 = 0
    data_143eb205c = 1
    
    if (data_143ed832c != 0)
        data_143eb0156 += 1
    
    sub_140b51460(&data_143eb00f0)

int64_t rax_2 = data_143eaf3f0
data_143eaf445 += 1
bool cond:0 = data_143eb0154 == 0
data_143eafa48 = rax_2
data_143eafa40 = &data_143eb00f0
data_143eaf3f0 = &data_143eafa38
data_143eafa50 = sub_140b4f380
data_143eafa58 = 0
data_143eafa5c = 1

if (not(cond:0))
    data_143eaf446 += 1

sub_140b51460(&data_143eaf3e0)
return &data_143eaf3e0
