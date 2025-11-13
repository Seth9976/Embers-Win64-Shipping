// 函数: sub_14151c0b0
// 地址: 0x14151c0b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *(arg1 + 0x70)
uint64_t rbx = zx.q(arg3)
int64_t* r15 = rax + (rbx << 3)
uint32_t rsi = zx.d(arg3)

if (*(rax + (rbx << 3)) != 0)
    int64_t r8_3 = (*r15 u>> 0x21 ^ *r15) * -0xae502812aa7333
    int64_t rcx_3 = (r8_3 u>> 0x21 ^ r8_3) * -0x3b314601e57a13ad
    sub_14150ebd0(arg1 + 0x50, (rcx_3 u>> 0x21).w ^ rcx_3.w, rsi)
    *r15 = 0

int64_t result = *(arg1 + 0x80)
int32_t r8_5 = *(result + rbx * 0xc + 4)

if (r8_5 != rsi)
    int32_t rbx_1
    
    do
        rbx_1 = *(*(arg1 + 0x80) + sx.q(r8_5) * 0xc + 4)
        result = sub_14151c430(arg1, arg2, r8_5, arg4)
        r8_5 = rbx_1
    while (rbx_1 != rsi)

return result
