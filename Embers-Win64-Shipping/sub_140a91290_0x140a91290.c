// 函数: sub_140a91290
// 地址: 0x140a91290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142e656b8
sub_140b0b2f0(&arg1[1])
int64_t* rcx_1 = &arg1[0x106]
*arg1 = &data_142e656f8
arg1[1] = &data_142e65710
arg1[0x102] = 0
arg1[0x103].d = 0
*(arg1 + 0x81c) = 0x100
arg1[0x104] = 0
arg1[0x105] = 0
rcx_1[2] = 0
rcx_1[3].d = 0
*(rcx_1 + 0x1c) = 0x80
int64_t* rax = rcx_1[2]

if (rax != 0)
    rcx_1 = rax

*rcx_1 = 0
rcx_1[1] = 0
void* rcx_2 = &arg1[0x110]
arg1[0x10a].d = 0xffffffff
*(arg1 + 0x854) = 0
arg1[0x10c] = 0
arg1[0x10d].d = 0
arg1[0x10e] = 0
arg1[0x10f] = 0
*(rcx_2 + 0x10) = 0
*(rcx_2 + 0x18) = 0
*(rcx_2 + 0x1c) = 0x80
void* rax_1 = *(rcx_2 + 0x10)

if (rax_1 != 0)
    rcx_2 = rax_1

*rcx_2 = 0
*(rcx_2 + 8) = 0
void* result_1 = &arg1[0x11a]
arg1[0x114].d = 0xffffffff
*(arg1 + 0x8a4) = 0
arg1[0x116] = 0
arg1[0x117].d = 0
arg1[0x118] = 0
arg1[0x119] = 0
*(result_1 + 0x10) = 0
*(result_1 + 0x18) = 0
*(result_1 + 0x1c) = 0x80
void* result = *(result_1 + 0x10)

if (result != 0)
    result_1 = result

*result_1 = 0
*(result_1 + 8) = 0
arg1[0x11e].d = 0xffffffff
*(arg1 + 0x8f4) = 0
arg1[0x120] = 0
arg1[0x121].d = 0
arg1[0x122].b = 0
return result
