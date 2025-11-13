// 函数: sub_1414fdf10
// 地址: 0x1414fdf10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r10 = *arg2
int64_t rax_3 = (r10 u>> 0x21 ^ r10) * -0xae502812aa7333
int64_t r8_3 = (rax_3 u>> 0x21 ^ rax_3) * -0x3b314601e57a13ad
uint64_t r8_5 = (zx.q((r8_3 u>> 0x21).w) ^ zx.q(r8_3.w)) & 0x1ff
uint64_t result = zx.q(*(arg1 + (r8_5 << 1) + 0x6e00))

while (result.w != 0xffff)
    uint64_t rcx = zx.q(result.w)
    
    if (r10 == *(*(arg1 + 0xb010) + (rcx << 3)))
        return result
    
    result = zx.q(*(arg1 + (rcx << 1) + 0x7200))

uint64_t rdx_1 = zx.q(*(arg1 + 0xb034))

if (rdx_1.d u< 0x1f00)
    uint64_t rcx_1 = zx.q(rdx_1.w)
    *(arg1 + 0xb034) = (rdx_1 + 1).d
    *(arg1 + (rcx_1 << 1) + 0x7200) = *(arg1 + (r8_5 << 1) + 0x6e00)
    *(arg1 + (r8_5 << 1) + 0x6e00) = rcx_1.w
    result = *arg2
    *(*(arg1 + 0xb010) + (rdx_1 << 3)) = result

return result
