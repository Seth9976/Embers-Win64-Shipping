// 函数: sub_142bea320
// 地址: 0x142bea320
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = *(arg2 + 0xa0)
uint64_t r14 = zx.q(*(*(arg2 + 0x478) + (zx.q(arg3) << 2)))

if (*(arg2 + 0x4cc) == 0)
    return 0x8e

int32_t result = sub_142b97060(rsi, *(arg2 + 0x4c8), arg5)

if (result != 0)
    return result

*arg1 = arg2
arg1[1] = rsi
int64_t rax_2 = *(arg2 + 0x78) + 0x68
arg1[3] = arg4
arg1[2] = rax_2
arg1[4].w = result.w
*(arg1 + 0x24) = *(arg2 + 0x4c8)
arg1[5].d = *(arg2 + 0x4cc)
arg1[7] = *(arg2 + 0x460)
uint32_t rcx_2 = (r14 * 3).d << 4
arg1[8] = zx.q(*(arg2 + 0x468)) + *(arg2 + 0x460)

if (rcx_2 + 0x37 u<= *(arg2 + 0x468))
    void* rdx_2 = zx.q(rcx_2) + arg1[7]
    uint32_t rcx_9 =
        ((zx.d(*(rdx_2 + 8)) << 8 | zx.d(*(rdx_2 + 9))) << 8 | zx.d(*(rdx_2 + 0xa))) << 8
        | zx.d(*(rdx_2 + 0xb))
    *(arg1 + 0x2c) = rcx_9
    uint32_t r9_6 =
        ((zx.d(*(rdx_2 + 0x10)) << 8 | zx.d(*(rdx_2 + 0x11))) << 8 | zx.d(*(rdx_2 + 0x12))) << 8
        | zx.d(*(rdx_2 + 0x13))
    arg1[6].d = r9_6
    *(arg1 + 0x22) = *(rdx_2 + 0x36)
    int32_t rax_16 = *(arg2 + 0x468)
    
    if (rcx_9 u<= rax_16 && r9_6 u<= (rax_16 - rcx_9) u>> 3)
        return result

return 3
