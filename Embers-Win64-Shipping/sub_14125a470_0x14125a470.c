// 函数: sub_14125a470
// 地址: 0x14125a470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = data_143eaf2a7

if ((rax & 2) != 0)
    return &data_143eaf240

data_143eaf2a7 = rax | 2
data_143eaf248 = u"TMobileBasePassVSBaseType"
data_143eaf260 = sub_140b4ede0
data_143eaf288 = sub_140594890
char rax_1 = data_143eaffb7
data_143eaf268 = sub_140b4ed00
data_143eaf270 = sub_140b4e800
data_143eaf278 = sub_140b4ead0
data_143eaf280 = sub_140b4eb90
data_143eaf298 = 0x148
data_143eaf2a0 = 8
data_143eaf2a4 = 0
data_143eaf29c = 0xffffffff
data_143eafaf8 = u"BASE"
data_143eafb22 = 4

if ((rax_1 & 2) == 0)
    data_143eaff70 = sub_140b4ede0
    data_143eaffb7 = rax_1 | 2
    data_143eaff58 = u"TMobileBasePassVSPolicyParamType"
    data_143eaff98 = sub_140594890
    data_143eaff78 = sub_140b4ed00
    data_143eaff80 = sub_140b4e800
    data_143eaff88 = sub_140b4ead0
    data_143eaff90 = sub_140b4eb90
    data_143eaffa8 = 0x148
    data_143eaffb0 = 8
    data_143eaffb4 = 0
    data_143eaffac = 0xffffffff
    data_143eb2398 = u"BASE"
    data_143eb23c2 = 4
    sub_141245460()
    int64_t rcx_1 = data_143eaff60
    data_143eaffb5 += 1
    data_143eb23a8 = rcx_1
    data_143eaff60 = &data_143eb2398
    data_143eb23a0 = &data_143e85cb0
    data_143eb23b0 = sub_140b4f380
    data_143eb23b8 = 0x140
    data_143eb23bc = 1
    
    if (data_143e85d14 != 0)
        data_143eaffb6 += 1
    
    data_143eb1f78 = u"BASE"
    data_143eb1fa2 = 4
    sub_141462970()
    int64_t rcx_2 = data_143eaff60
    data_143eaffb5 += 1
    data_143eb1f88 = rcx_2
    data_143eaff60 = &data_143eb1f78
    data_143eb1f80 = &data_143ed82c8
    data_143eb1f90 = sub_140b4f380
    data_143eb1f98 = 0
    data_143eb1f9c = 1
    
    if (data_143ed832c != 0)
        data_143eaffb6 += 1
    
    sub_140b51460(&data_143eaff50)

int64_t rax_2 = data_143eaf250
data_143eaf2a5 += 1
bool cond:0 = data_143eaffb4 == 0
data_143eafb08 = rax_2
data_143eafb00 = &data_143eaff50
data_143eaf250 = &data_143eafaf8
data_143eafb10 = sub_140b4f380
data_143eafb18 = 0
data_143eafb1c = 1

if (not(cond:0))
    data_143eaf2a6 += 1

sub_140b51460(&data_143eaf240)
return &data_143eaf240
