// 函数: sub_142b407b0
// 地址: 0x142b407b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r9 = &arg1[8]
int64_t rdi = sx.q(arg3)
int32_t rsi = arg2 + *(arg1 + 0x80)
char rax_1 = *arg1
void* r10

if (rax_1 == 0)
    r10 = r9
else
    r10 = *r9

if (rax_1 != 0)
    r9 = *r9

int64_t r8 = sx.q(*(arg1 + 0x84) - arg2 - rdi.d)

if (r8 != neg.q(r8))
    int64_t rcx = sx.q(rsi)
    memmove(r9 + (rcx << 1), r10 + ((rcx + rdi) << 1), r8.d * 2)

char rcx_2 = *arg1
void* rax_6 = &arg1[0x58]
void* r9_1

if (rcx_2 == 0)
    r9_1 = rax_6
else
    r9_1 = *rax_6

if (rcx_2 != 0)
    rax_6 = *rax_6

int32_t rcx_4 = *(arg1 + 0x84) - arg2

if (rcx_4 != rdi.d)
    int64_t rcx_6 = sx.q(rsi)
    memmove(rcx_6 + rax_6, rcx_6 + rdi + r9_1, rcx_4 - rdi.d)

*(arg1 + 0x84) -= rdi.d
return zx.q(rsi)
