// 函数: sub_141f793c0
// 地址: 0x141f793c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_142427bf0(arg1)
*arg1 = &data_143285b88
arg1[0x4b] = 0
int64_t r8
r8.b = 1
arg1[0x4c] = 0
int64_t* rcx = arg1[0x47]
(*(*rcx + 0x620))(rcx, data_143f3a590, r8)
void* rax_1 = arg1[0x47]
*(rax_1 + 0x208) |= 0x80
int64_t rsi = sx.q(arg1[0x4c].d)
int32_t rax_2 = (rsi + 1).d
arg1[0x4c].d = rax_2

if (rax_2 s> *(arg1 + 0x264))
    sub_1405a4d70(&arg1[0x4b])

arg1[0x4b][rsi] = 0
int64_t rsi_1 = sx.q(arg1[0x4c].d)
int32_t rax_4 = (rsi_1 + 1).d
arg1[0x4c].d = rax_4

if (rax_4 s> *(arg1 + 0x264))
    sub_1405a4d70(&arg1[0x4b])

arg1[0x4b][rsi_1] = 0x461c4000
arg1[0x4d].d |= 1
return arg1
