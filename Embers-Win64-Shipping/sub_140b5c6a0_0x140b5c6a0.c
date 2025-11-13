// 函数: sub_140b5c6a0
// 地址: 0x140b5c6a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r8 = arg2[1]
uint64_t rax_1 = zx.q(zx.d(*arg1) u>> 6)
uint64_t rsi = zx.q(rax_1.d)

if (r8 + (rax_1 << 1) u>= arg2[2])
    sub_140b38e20(arg2, zx.q(rsi.d))
    r8 = arg2[1]

int64_t rdx_1 = *arg2
arg2[1] = r8 + (rsi << 1)
int64_t rbx_1 = rdx_1 + (sx.q(((r8 - rdx_1) s>> 1).d) << 1)
uint32_t rax_4 = zx.d(*arg1)
uint32_t count = rax_4 u>> 6

if ((rax_4.b & 1) != 0)
    return memcpy(rbx_1, &arg1[1], count * 2) __tailcall

memcpy(rbx_1, &arg1[1], count)
uint64_t result = zx.q(zx.d(*arg1) u>> 6)

if (result.d != 0)
    void* rdx_4 = result + rbx_1
    void* r8_6 = rbx_1 + (result << 1)
    int32_t i
    
    do
        int16_t rcx_4 = sx.w(*(rdx_4 - 1))
        rdx_4 -= 1
        *(r8_6 - 2) = rcx_4
        r8_6 -= 2
        i = result.d
        result = zx.q(result.d - 1)
    while (i != 1)

return result
