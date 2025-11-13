// 函数: sub_142b961f0
// 地址: 0x142b961f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r8 = *(arg1 + 0x80)
int16_t* r9_2 = (zx.q(arg2) << 4) + *(arg1 + 0x30)
*(r8 + 0x18) = ((*(r9_2 + 8) + 0x20) s>> 6).w
*(r8 + 0x1a) = ((*(r9_2 + 0xc) + 0x20) s>> 6).w

if ((*(arg1 + 8) & 1) == 0)
    *(r8 + 0x1c) = 0x10000
    *(r8 + 0x20) = 0x10000
    *(r8 + 0x24) = *(r9_2 + 0xc)
    *(r8 + 0x28) = 0
    *(r8 + 0x2c) = sx.d(*r9_2) << 6
    int32_t result = *(r9_2 + 8)
    *(r8 + 0x30) = result
    return result

int64_t rax_6 = sx.q(*(r9_2 + 8))
int32_t r11 = 1
int64_t rdx = rax_6
uint64_t rbx = zx.q(*(arg1 + 0x68))
int32_t rdi = 1

if (rax_6.d s< 0)
    rdx = neg.q(rdx)
    rdi = -1

uint32_t rcx = 0x7fffffff
uint32_t rax_10

if (rbx == 0)
    rax_10 = 0x7fffffff
else
    rax_10 = (divu.dp.q(0:((rbx u>> 1) + (rdx << 0x10)), rbx)).d

if (rdi s< 0)
    rax_10 = neg.d(rax_10)

*(r8 + 0x1c) = rax_10
int64_t rax_11 = sx.q(*(r9_2 + 0xc))
uint64_t r9_3 = zx.q(*(arg1 + 0x68))
int64_t rdx_4 = rax_11

if (rax_11.d s< 0)
    rdx_4 = neg.q(rdx_4)
    r11 = -1

if (r9_3 != 0)
    rcx = (divu.dp.q(0:((r9_3 u>> 1) + (rdx_4 << 0x10)), r9_3)).d

if (r11 s< 0)
    rcx = neg.d(rcx)

*(r8 + 0x20) = rcx
return sub_142b9a2e0(arg1, r8 + 0x18) __tailcall
