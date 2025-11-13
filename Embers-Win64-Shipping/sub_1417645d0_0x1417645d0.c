// 函数: sub_1417645d0
// 地址: 0x1417645d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = *(arg2 + 0x90)
int64_t rcx = sx.q(arg4)
float zmm4 = arg3
int32_t zmm3 = *(result + (rcx << 2))

if (not(zmm3 f== 0f))
    result = *(arg2 + 0x60)
    int64_t r8_1 = rcx * 3
    int64_t rcx_1 = *(arg2 + 0x48)
    arg3 = *(result + (r8_1 << 2) + 8) f* zmm3 * zmm4 f+ *(rcx_1 + (r8_1 << 2) + 8)
    int32_t zmm0 = zmm3 f* *(result + (r8_1 << 2)) f* zmm4 f+ *(rcx_1 + (r8_1 << 2))
    *(rcx_1 + (r8_1 << 2) + 4) =
        *(result + (r8_1 << 2) + 4) f* zmm3 * zmm4 f+ *(rcx_1 + (r8_1 << 2) + 4)
    *(rcx_1 + (r8_1 << 2) + 8) = arg3
    *(rcx_1 + (r8_1 << 2)) = zmm0

return result
