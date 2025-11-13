// 函数: sub_142884600
// 地址: 0x142884600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int32_t r8 = 1
void* rcx = *(arg1 + 0x18)

if (rcx != 0)
    r8 = sub_142858d10(rcx, arg2)

void* rcx_1 = *(arg1 + 0x20)

if (rcx_1 != 0)
    r8 = sub_142858d60(rcx_1, arg2)

int64_t result
result.b = r8 s> 0
return result
