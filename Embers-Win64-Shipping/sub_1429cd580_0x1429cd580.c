// 函数: sub_1429cd580
// 地址: 0x1429cd580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg2)
*(arg1 + 4) = rdi.d
sub_14058d4e0(arg1 + 0x90, sx.q((rdi * 2).d))
sub_140897a60(arg1 + 0xd8, rdi)
int64_t result = sub_1429cd3a0(arg1 + 0xf0, rdi)

if (rdi.d s<= 0)
    return result

return memset(*(arg1 + 0xf0), 0, sx.q(*(arg1 + 4)))
