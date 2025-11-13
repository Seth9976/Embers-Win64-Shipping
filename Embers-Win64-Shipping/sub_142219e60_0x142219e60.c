// 函数: sub_142219e60
// 地址: 0x142219e60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1421b9fc0(arg1, arg2, arg3)
int32_t rsi = 0
void* rdx = *(sub_142192ca0(arg2, 0) + 0x48)
*(arg1 + 0x238) = rdx
*(arg1 + 0x1e8) ^= (*(rdx + 0x30) ^ *(arg1 + 0x1e8)) & 1
bool cond:0 = *(arg1 + 0x1fc) == 1
*(arg1 + 0x1f8) = 0

if (not(cond:0))
    sub_1405dadb0(arg1 + 0x1f0, 1)
    rsi = *(arg1 + 0x1f8)

*(arg1 + 0x1f8) = rsi + 1

if (rsi + 1 s> *(arg1 + 0x1fc))
    sub_1406105e0(arg1 + 0x1f0)

int32_t rsi_1 = 0
*(*(arg1 + 0x1f0) + (sx.q(rsi) << 2)) = 0
bool cond:1 = *(arg1 + 0x21c) == 1
*(arg1 + 0x218) = 0

if (not(cond:1))
    sub_1405dadb0(arg1 + 0x210, 1)
    rsi_1 = *(arg1 + 0x218)

*(arg1 + 0x218) = rsi_1 + 1

if (rsi_1 + 1 s> *(arg1 + 0x21c))
    sub_1406105e0(arg1 + 0x210)

int32_t rsi_2 = 0
*(*(arg1 + 0x210) + (sx.q(rsi_1) << 2)) = 0
bool cond:2 = *(arg1 + 0x22c) == 1
*(arg1 + 0x228) = 0

if (not(cond:2))
    sub_1405dadb0(arg1 + 0x220, 1)
    rsi_2 = *(arg1 + 0x228)

*(arg1 + 0x228) = rsi_2 + 1

if (rsi_2 + 1 s> *(arg1 + 0x22c))
    sub_1406105e0(arg1 + 0x220)

int64_t result = *(arg1 + 0x220)
*(result + (sx.q(rsi_2) << 2)) = 0
*(arg1 + 0x1d0) = 0
return result
