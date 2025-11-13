// 函数: sub_1418c6000
// 地址: 0x1418c6000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi = arg4

if (arg2 u>= arg1[5].d)
    return 

int64_t r15_1 = *arg3
int32_t r10_1 = *(arg1[4] + (sx.q(arg2) << 2))
uint64_t rax = zx.q(r10_1 u>> 0x10)
uint64_t rdx_1 = zx.q(rax.d)
uint64_t rbx_2 = zx.q(zx.d(r10_1.w) + rax.d)

if (rdx_1 u>= rbx_2)
    return 

uint64_t r11_2 = rax * 0xa
uint64_t i_1 = rbx_2 - rdx_1
uint64_t i

do
    arg4.b = 0
    int16_t* rdi_2 = arg1[2] + r11_2
    uint64_t rdx_4 = zx.q(*rdi_2)
    int32_t* r8 = *(*arg1 + zx.q(*(rdi_2 + 3)) * 0x10) + (zx.q(rdi_2[3]) << 2)
    int32_t* rax_5 = r15_1 + (rdx_4 << 2)
    int64_t r10_2 = r15_1 + ((zx.q(rdi_2[4]) + rdx_4) << 2)
    
    do
        int32_t rdx_5 = *rax_5
        bool cond:0_1 = *r8 != rdx_5
        *r8 = rdx_5
        r8 = &r8[1]
        uint64_t rcx_2
        rcx_2.b = cond:0_1
        rax_5 = &rax_5[1]
        arg4.b |= rcx_2.b
    while (rax_5 != r10_2)
    
    int64_t rax_6
    rax_6.b = arg4.b != 0
    r11_2 += 0xa
    *rsi |= rax_6 << *(rdi_2 + 3)
    i = i_1
    i_1 -= 1
while (i != 1)
