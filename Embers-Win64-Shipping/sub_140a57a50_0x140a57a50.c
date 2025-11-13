// 函数: sub_140a57a50
// 地址: 0x140a57a50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rdx_1 = *(arg1 + 8)
*arg1 += 1
int32_t r10 = *(rdx_1 + 4)
uint32_t r8 = zx.d(*rdx_1)
*(rdx_1 + 4) = r10 - 1
void* result

if (rdx_1.w != 0)
    result = rdx_1 + zx.q((r10 - 1) * r8)
else
    result = rdx_1 - zx.q(r8 * r10) + 0x10000

void* rcx_2 = *(arg1 + 8)

if (*(rcx_2 + 4) == 0)
    *(arg1 + 8) = *(rcx_2 + 8)

return result
