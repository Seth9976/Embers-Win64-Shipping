// 函数: sub_142c1c710
// 地址: 0x142c1c710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rbx_2 = (zx.d(*arg1) << 8) + zx.d(arg1[1])

if (rbx_2 == 1)
    sub_142c22da0(arg2, (zx.d(arg1[2]) << 8) + zx.d(arg1[3]))
    return zx.q(rbx_2.b)

if (rbx_2 == 0)
    sub_142bf4ee0(*(arg2 + 0x90))
    uint64_t rax_3
    rax_3.b = 1
    return rax_3

void* rdx_3 = *(arg2 + 0x90)
int32_t rbp = 0
uint32_t r14
r14.w = *(*(rdx_3 + 0x70) + zx.q(*(rdx_3 + 0x5c)) * 0x14 + 0xc) u>> 2

if (rbx_2 != 0)
    void* rsi_1 = &arg1[2]
    
    do
        void* rdx_4 = *(arg2 + 0x90)
        *(*(rdx_4 + 0x70) + zx.q(*(rdx_4 + 0x5c)) * 0x14 + 0xe) = rbp.b & 0xf
        sub_142c22830(arg2, zx.d(*(rsi_1 + 1)) + (zx.d(*rsi_1) << 8), (r14 & 1) * 2)
        rbp += 1
        rsi_1 += 2
    while (rbp u< rbx_2)

void* rax_10 = *(arg2 + 0x90)
*(rax_10 + 0x5c) += 1
rax_10.b = 1
return rax_10
