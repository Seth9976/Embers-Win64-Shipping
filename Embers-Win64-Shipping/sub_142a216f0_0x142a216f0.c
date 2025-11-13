// 函数: sub_142a216f0
// 地址: 0x142a216f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = *(arg1 + 0x38)
int32_t i_2 = 0
int64_t rbp = *(arg2 + 0x38)
int32_t i = 0

if (arg1[1] s> 0)
    do
        memcpy(rbp, rsi, *arg1)
        i += 1
        rsi += sx.q(arg1[4])
        rbp += sx.q(*(arg2 + 0x10))
    while (i s< arg1[1])

int32_t i_1 = 0
int64_t rsi_1 = *(arg1 + 0x40)
int64_t rbp_1 = *(arg2 + 0x40)

if (arg1[6] s> 0)
    do
        memcpy(rbp_1, rsi_1, arg1[5])
        i_1 += 1
        rsi_1 += sx.q(arg1[9])
        rbp_1 += sx.q(*(arg2 + 0x24))
    while (i_1 s< arg1[6])

int64_t rsi_2 = *(arg1 + 0x48)
int64_t rbp_2 = *(arg2 + 0x48)

if (arg1[6] s> 0)
    do
        memcpy(rbp_2, rsi_2, arg1[5])
        i_2 += 1
        rsi_2 += sx.q(arg1[9])
        rbp_2 += sx.q(*(arg2 + 0x24))
    while (i_2 s< arg1[6])

return sub_142a217f0(arg2) __tailcall
