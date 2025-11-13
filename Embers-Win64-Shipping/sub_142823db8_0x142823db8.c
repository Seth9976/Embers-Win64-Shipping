// 函数: sub_142823db8
// 地址: 0x142823db8
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdx = *(arg1 + 0x28)
char* r8_2

if (*(arg1 + 0x20) != rdx)
    r8_2 = ***(*(arg1 + 0x28) - 8)

int64_t rsi

if (*(arg1 + 0x20) == rdx || *r8_2 == 0 || *(r8_2 + 0x10) != 4
        || (*(arg1 + 0x58) - *(arg1 + 0x50)) s>> 4 u>= *(arg1 + 0x68))
    rsi.b = 0
else
    rsi.b = 1

int64_t arg_8 = arg2

if (rdx == *(arg1 + 0x30))
    sub_14281c4cc(arg1 + 0x20, rdx, &arg_8)
else
    *rdx = arg2
    *(arg1 + 0x28) += 8

if (rsi.b == 0)
    return 

arg_8.b = 0
int128_t* rdx_1 = *(arg1 + 0x58)
int64_t arg_10 = arg2

if (rdx_1 == *(arg1 + 0x60))
    sub_1428234e8(arg1 + 0x50, rdx_1, &arg_10, &arg_8)
    return 

*rdx_1 = arg2
*(rdx_1 + 8) = 0
*(arg1 + 0x58) += 0x10
