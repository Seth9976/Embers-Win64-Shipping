// 函数: sub_14125b430
// 地址: 0x14125b430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = data_143eaf517

if ((rax & 2) != 0)
    return &data_143eaf4b0

data_143eaf517 = rax | 2
data_143eaf4b8 = u"TMobileBasePassVSBaseType"
data_143eaf4d0 = sub_140b4ede0
data_143eaf4f8 = sub_140594890
char rax_1 = data_143eb0227
data_143eaf4d8 = sub_140b4ed00
data_143eaf4e0 = sub_140b4e800
data_143eaf4e8 = sub_140b4ead0
data_143eaf4f0 = sub_140b4eb90
data_143eaf508 = 0x148
data_143eaf510 = 8
data_143eaf514 = 0
data_143eaf50c = 0xffffffff
data_143eaf9d8 = u"BASE"
data_143eafa02 = 4

if ((rax_1 & 2) == 0)
    data_143eb01e0 = sub_140b4ede0
    data_143eb0227 = rax_1 | 2
    data_143eb01c8 = u"TMobileBasePassVSPolicyParamType"
    data_143eb0208 = sub_140594890
    data_143eb01e8 = sub_140b4ed00
    data_143eb01f0 = sub_140b4e800
    data_143eb01f8 = sub_140b4ead0
    data_143eb0200 = sub_140b4eb90
    data_143eb0218 = 0x148
    data_143eb0220 = 8
    data_143eb0224 = 0
    data_143eb021c = 0xffffffff
    data_143eb24b8 = u"BASE"
    data_143eb24e2 = 4
    sub_141245460()
    int64_t rcx_1 = data_143eb01d0
    data_143eb0225 += 1
    data_143eb24c8 = rcx_1
    data_143eb01d0 = &data_143eb24b8
    data_143eb24c0 = &data_143e85cb0
    data_143eb24d0 = sub_140b4f380
    data_143eb24d8 = 0x140
    data_143eb24dc = 1
    
    if (data_143e85d14 != 0)
        data_143eb0226 += 1
    
    data_143eb2098 = u"BASE"
    data_143eb20c2 = 4
    sub_141462970()
    int64_t rcx_2 = data_143eb01d0
    data_143eb0225 += 1
    data_143eb20a8 = rcx_2
    data_143eb01d0 = &data_143eb2098
    data_143eb20a0 = &data_143ed82c8
    data_143eb20b0 = sub_140b4f380
    data_143eb20b8 = 0
    data_143eb20bc = 1
    
    if (data_143ed832c != 0)
        data_143eb0226 += 1
    
    sub_140b51460(&data_143eb01c0)

int64_t rax_2 = data_143eaf4c0
data_143eaf515 += 1
bool cond:0 = data_143eb0224 == 0
data_143eaf9e8 = rax_2
data_143eaf9e0 = &data_143eb01c0
data_143eaf4c0 = &data_143eaf9d8
data_143eaf9f0 = sub_140b4f380
data_143eaf9f8 = 0
data_143eaf9fc = 1

if (not(cond:0))
    data_143eaf516 += 1

sub_140b51460(&data_143eaf4b0)
return &data_143eaf4b0
