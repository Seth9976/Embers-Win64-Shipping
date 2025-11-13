// 函数: sub_142b9b990
// 地址: 0x142b9b990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi = *arg1

if (*(arg2 + 0x60) != 0x62697473)
    return 0x12

arg1[4].d = *(arg2 + 0x90)
*(arg1 + 0x24) = *(arg2 + 0x94)

if ((*(*(arg2 + 0xf0) + 8) & 1) == 0)
    sub_142b9c6b0(&arg1[5])
    return sub_142b9c480(rsi, arg2 + 0x68, &arg1[5]) __tailcall

*(arg1 + 0x28) = *(arg2 + 0x68)
*(arg1 + 0x38) = *(arg2 + 0x78)
arg1[9] = *(arg2 + 0x88)
void* rcx = *(arg2 + 0xf0)
*(rcx + 8) &= 0xfffffffe
return 0
