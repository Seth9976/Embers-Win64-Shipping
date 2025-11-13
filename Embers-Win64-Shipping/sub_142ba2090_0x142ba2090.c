// 函数: sub_142ba2090
// 地址: 0x142ba2090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result_1
void** rax = sub_142b99860(*(arg1 + 0x98), ((zx.q(*(arg1 + 0x10)) << 1) + 0x2e0).d, &result_1)
int32_t result = result_1

if (result == 0)
    *rax = arg1
    rax[1].d = *(arg1 + 0x10)
    rax[2] = &rax[0x5c]
    rax[0x5b] = arg3
    rax[0x58].w = 0
    __builtin_memset(rax + 0x2c4, 0, 0x14)
    sub_142ba1b80(rax)
    result_1 = 0
    rax[3].d = 0
    result = result_1

*arg2 = rax
return result
