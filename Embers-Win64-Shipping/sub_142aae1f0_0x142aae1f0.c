// 函数: sub_142aae1f0
// 地址: 0x142aae1f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

int64_t* rcx = *(arg1 + 0x278)

if (rcx != 0)
    (**rcx)(rcx, 1)

void* rsi_1 = *(arg1 + 0x280)
int32_t i = 0
*(arg1 + 0x278) = arg2
int32_t arg_10 = 0

if (rsi_1 != 0)
    sub_142b324e0(rsi_1)
    sub_142a47920(rsi_1)

*(arg1 + 0x280) = 0
sub_142ab0690(arg1, &arg_10)
void* rsi_2 = *(arg1 + 0x288)

if (rsi_2 != 0)
    sub_142b324e0(rsi_2)
    sub_142a47920(rsi_2)

*(arg1 + 0x288) = 0
sub_142ab07e0(arg1, &arg_10)

if (*(arg1 + 0x170) == 0 || *(arg1 + 0x180) s<= 0)
    return 

void** rsi_3 = nullptr

do
    sub_142b369a0(*(rsi_3 + *(arg1 + 0x170)), arg2, &arg_10)
    i += 1
    rsi_3 = &rsi_3[1]
while (i s< *(arg1 + 0x180))
