// 函数: sub_141482230
// 地址: 0x141482230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x668) = 0
*(arg1 + 0x630) = 0

if (*(arg1 + 0x634) != 0)
    sub_14083ad10(arg1 + 0x628, 0)

*(arg1 + 0x610) = 0

if (*(arg1 + 0x614) != 0)
    sub_14083ad10(arg1 + 0x608, 0)

*(arg1 + 0x620) = 0

if (*(arg1 + 0x624) != 0)
    sub_14083ad10(arg1 + 0x618, 0)

*(arg1 + 0x640) = 0

if (*(arg1 + 0x644) != 0)
    sub_14149c780(arg1 + 0x638, 0)

*(arg1 + 0x650) = 0

if (*(arg1 + 0x654) != 0)
    sub_14149c780(arg1 + 0x648, 0)

*(arg1 + 0x678) = 0

if (*(arg1 + 0x67c) != 0)
    sub_141105150(arg1 + 0x670, 0)

sub_1412e9820(arg1 + 0x680)
*(arg1 + 0x660) = 0

if (*(arg1 + 0x664) != 0)
    sub_1410b3aa0(arg1 + 0x658, 0)

*(arg1 + 0x888) = 0

if (*(arg1 + 0x88c) s<= 0xffffffff)
    sub_14149c910(arg1 + 0x850, 0)

sub_141095f70(arg1 + 0x890, 0)
*(arg1 + 0x8a0) = 0
int32_t rdx = 0
bool cond:0 = *(arg1 + 0x8d4) == 1
*(arg1 + 0x8d0) = 0

if (not(cond:0))
    sub_1405dadb0(arg1 + 0x8c8, 1)
    rdx = *(arg1 + 0x8d0)

*(arg1 + 0x8d0) = rdx + 1

if (rdx + 1 s> *(arg1 + 0x8d4))
    sub_1405a4cf0(arg1 + 0x8c8)

bool cond:1 = *(arg1 + 0x8e4) == 1
int32_t rsi = 0
*(arg1 + 0x8e0) = 0

if (not(cond:1))
    sub_1405dadb0(arg1 + 0x8d8, 1)
    rsi = *(arg1 + 0x8e0)

*(arg1 + 0x8e0) = rsi + 1

if (rsi + 1 s> *(arg1 + 0x8e4))
    sub_1405a4cf0(arg1 + 0x8d8)

*(*(arg1 + 0x8d8) + (sx.q(rsi) << 2)) = 0x80000000
int64_t result = sub_1412687b0(arg1 + 0x8a8)
*(arg1 + 0x8e8) = 0
return result
