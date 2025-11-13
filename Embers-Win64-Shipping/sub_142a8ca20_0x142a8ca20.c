// 函数: sub_142a8ca20
// 地址: 0x142a8ca20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = 0
int64_t r8 = sx.q(arg2)
char* rbx = arg1

if (arg1 == 0)
    return 0

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q((r8 - 0x20).d)
void* rsi = &arg1[r8]

if (arg1 u>= rsi)
    return 0

int32_t rcx_2

do
    uint32_t rcx_1 = zx.d(sub_142a86220(zx.d(*rbx)))
    rbx = &rbx[sx.q(((temp1 + (temp0 & 0x1f)) s>> 5) + 1)]
    rcx_2 = rcx_1 + rdi * 0x25
    rdi = rcx_2
while (rbx u< rsi)

return zx.q(rcx_2)
