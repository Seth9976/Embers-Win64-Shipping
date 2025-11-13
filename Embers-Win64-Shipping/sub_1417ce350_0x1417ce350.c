// 函数: sub_1417ce350
// 地址: 0x1417ce350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141f2e780(arg1, arg2)
*arg1 = &data_142fcb330
arg1[5] = &data_142fcb850
arg1[0x3e] = 0
arg1[0x3f] = 0
arg1[0x40].d = 0x101
arg1[0x41] = 0
arg1[0x42] = 0
*(arg1 + 0x218) = data_14399f5f0
arg1[0x47].d = 0x40400000
*(arg1 + 0x228) = data_14399f610
int32_t* rax = j_sub_140a82f30(0xe0)
int32_t* rax_1

if (rax == 0)
    rax_1 = nullptr
else
    rax_1 = sub_1417cd620(rax)

*(arg1 + 0x3a) |= 6
*(arg1 + 0x89) |= 0x80
arg1[0x49] = rax_1
arg1[0x4a] = 0
arg1[0x4b].d = 0
*(arg1 + 0x25c) = 4
arg1[7].b = 0
int64_t rsi = sx.q(arg1[0x42].d)
int32_t rax_2 = (rsi + 1).d
arg1[0x42].d = rax_2

if (rax_2 s> *(arg1 + 0x214))
    sub_1406105e0(&arg1[0x41])

*(arg1[0x41] + (rsi << 2)) = data_14399f640
int64_t rsi_1 = sx.q(arg1[0x42].d)
int32_t rax_4 = (rsi_1 + 1).d
arg1[0x42].d = rax_4

if (rax_4 s> *(arg1 + 0x214))
    sub_1406105e0(&arg1[0x41])

*(arg1[0x41] + (rsi_1 << 2)) = data_14399f638
int64_t rsi_2 = sx.q(arg1[0x42].d)
int32_t rax_6 = (rsi_2 + 1).d
arg1[0x42].d = rax_6

if (rax_6 s> *(arg1 + 0x214))
    sub_1406105e0(&arg1[0x41])

*(arg1[0x41] + (rsi_2 << 2)) = data_14399f63c
int64_t rsi_3 = sx.q(arg1[0x42].d)
int32_t rax_8 = (rsi_3 + 1).d
arg1[0x42].d = rax_8

if (rax_8 s> *(arg1 + 0x214))
    sub_1406105e0(&arg1[0x41])

*(arg1[0x41] + (rsi_3 << 2)) = data_14399f644
int64_t rsi_4 = sx.q(arg1[0x42].d)
int32_t rax_10 = (rsi_4 + 1).d
arg1[0x42].d = rax_10

if (rax_10 s> *(arg1 + 0x214))
    sub_1406105e0(&arg1[0x41])

*(arg1[0x41] + (rsi_4 << 2)) = data_14399f648
int64_t rsi_5 = sx.q(arg1[0x42].d)
int32_t rax_12 = (rsi_5 + 1).d
arg1[0x42].d = rax_12

if (rax_12 s> *(arg1 + 0x214))
    sub_1406105e0(&arg1[0x41])

*(arg1[0x41] + (rsi_5 << 2)) = data_14399f64c
return arg1
