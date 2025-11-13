// 函数: sub_1408499d0
// 地址: 0x1408499d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r10 = *(arg4 + 0xa0)
int32_t* r9 = *arg2
void* rbx = &r9[sx.q(arg2[1].d) * 2]

while (r9 != rbx)
    uint64_t rdx_1 = zx.q(r9[1] * *(r10 + 0xb8))
    int64_t r8 = sx.q(*r9)
    r9 = &r9[2]
    *(rdx_1 + (zx.q(arg5) << 2) + *(r10 + 0x18)) = *(r8 + arg3)

int32_t* r8_1 = arg2[2]
int64_t result = sx.q(arg2[3].d)
void* r9_1 = &r8_1[result * 2]

while (r8_1 != r9_1)
    uint64_t rcx_2 = zx.q(r8_1[1] * *(r10 + 0xbc))
    int64_t rdx_3 = sx.q(*r8_1)
    r8_1 = &r8_1[2]
    result = zx.q(*(rdx_3 + arg3))
    *(rcx_2 + *(r10 + 0x28) + (zx.q(arg5) << 2)) = result.d

return result
