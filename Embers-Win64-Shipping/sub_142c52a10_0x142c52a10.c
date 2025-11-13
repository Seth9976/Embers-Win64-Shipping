// 函数: sub_142c52a10
// 地址: 0x142c52a10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 0xc0)
uint64_t result = zx.q(*(rcx + 0x148))

if (result.d s< 0)
    result = zx.q(*(rcx + 0x18) << 2)

uint64_t result_1 = 0
*(arg2 + 0x60) = 0

if (result.d != 0 && *(*(arg1 + 0xa48) + 0x30) u> sx.q(result.d))
    int512_t zmm2 =
        sub_142c64850(arg1, "Connection cache is full, closing the oldest one.\n", arg3, arg4)
    result = sub_142c5d010(arg1)
    result_1 = result
    
    if (result != 0)
        *result = arg1
        sub_142c5c970(result, 0, zmm2)

result.b = result_1 != arg2
return result
