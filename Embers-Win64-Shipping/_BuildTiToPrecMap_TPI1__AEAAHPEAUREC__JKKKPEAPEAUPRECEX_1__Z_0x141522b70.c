// 函数: ?BuildTiToPrecMap@TPI1@@AEAAHPEAUREC@@JKKKPEAPEAUPRECEX@1@@Z
// 地址: 0x141522b70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_4 = 0
int64_t i_8 = sx.q(arg4)
int64_t rdx = *(arg1 + 0x28)
int64_t r11 = sx.q(arg3)
int32_t i_9

if (arg5 == 0)
    i_9 = 0
    
    if (i_8.d != *(rdx + (r11 << 2)) - 1)
        i_9 = (i_8 + 1).d
else
    i_9 = i_8.d

int64_t rax = sx.q(*(rdx + (r11 << 2)))
int64_t r12 = r11
int32_t rdx_1 = (rax - 1).d
arg5.d = rdx_1
int64_t r15 = (rax - 1) << 2

if (*(r15 + *(arg1 + 0x40)) == *(r15 + *(arg1 + 0x38)))
    sub_141521fa0(arg1, arg2, zx.q(rdx_1), *(arg1 + 0x60))
    r11 = zx.q(arg3)
    rdx_1 = arg5.d

int32_t i_7 = 0
*(arg2 + 0xb0) =
    *(*(arg2 + 0xa0) + ((rax - 1) << 3)) + (sx.q((*(arg2 + 0x40))[rax - 1] * rdx_1) << 2)

if (i_9 s> 0)
    int64_t i = 0
    i_7 = i_9
    
    do
        *(*(arg2 + 0xb0) + (i << 2)) = *(*(*(arg2 + 0xa8) + (r12 << 3)) + (i << 2))
        i += 1
    while (i s< sx.q(i_9))

for (int64_t i_1 = sx.q(i_7); i_1 s< rax - 1; i_1 += 1)
    *(*(arg2 + 0xb0) + (i_1 << 2)) = *(*(*(arg2 + 0xa8) + (r12 << 3)) + (i_1 << 2) + 4)

int32_t* r9_2 = *(arg1 + 0x40)
uint64_t r10 = zx.q(arg5.d)
int32_t r8_1 = r9_2[rax - 1]
int64_t rcx_9 = *(*(arg1 + 0x48) + ((rax - 1) << 3))
r9_2[rax - 1] = r8_1 + 1
int32_t r10_1 = 0
int64_t i_6 = i_8
void* r14 = rcx_9 + (sx.q(((r10 << 1) + 1).d * r8_1) << 2)
*(r14 + (sx.q((r10 * 2).d) << 2)) = r11.d

if (i_8.d s> 0)
    void* r8_2 = r14
    int64_t i_2
    
    do
        r8_2 += 4
        *(r8_2 - 4) = *(*(*(arg1 + 0x20) + (r12 << 3)) - r14 + r8_2 - 4)
        int64_t rdx_7 = sx.q(*(*(arg1 + 0x28) + (r12 << 2)) + r10_1)
        r10_1 += 1
        *(r8_2 + r15 - 4) = *(*(*(arg1 + 0x20) + (r12 << 3)) + (rdx_7 << 2))
        i_2 = i_6
        i_6 -= 1
    while (i_2 != 1)

int64_t rax_20 = sx.q(r10_1)

if (rax_20 s< rax - 1)
    void* r11_1 = r14 + (rax_20 << 2)
    int64_t i_5 = rax - 1 - rax_20
    int64_t i_3
    
    do
        r11_1 += 4
        int64_t r9_3 = sx.q(*(*(*(arg1 + 0x20) + (r12 << 3)) - r14 + r11_1))
        *(r11_1 - 4) = r9_3.d
        int64_t rdx_8 = sx.q(*(*(arg1 + 0x28) + (r12 << 2)) + r10_1)
        r10_1 += 1
        int32_t r8_3 = *(*(*(arg1 + 0x20) + (r12 << 3)) + (rdx_8 << 2) + 4)
        *(r11_1 + r15 - 4) = r8_3
        int64_t rdx_9 = sx.q(*(*(arg1 + 0x28) + (r9_3 << 2)) + r8_3)
        int64_t rcx_23 = *(*(arg1 + 0x20) + (r9_3 << 3))
        *(rcx_23 + (rdx_9 << 2)) -= 1
        i_3 = i_5
        i_5 -= 1
    while (i_3 != 1)
    r11 = zx.q(arg3)

int64_t rcx_24 = sx.q(*(*(arg1 + 0x28) + (r12 << 2)))
int64_t rax_27 = *(arg1 + 0x40)
*(rax_27 + (rcx_24 << 2)) -= 1
int64_t r9_4 = *(arg1 + 0x28)
int64_t r8_4 = sx.q(*(r9_4 + (r12 << 2)))
int64_t rbp_1 =
    *(*(arg1 + 0x48) + (r8_4 << 3)) + (sx.q(((r8_4 << 1) + 1).d * *(rax_27 + (rcx_24 << 2))) << 2)

if ((r8_4 * 2).d s>= 0)
    int64_t rdx_12 = 0
    
    do
        rdx_12 += 4
        i_4 += 1
        *(rdx_12 + *(*(arg1 + 0x20) + (r12 << 3)) - 4) = *(rdx_12 + rbp_1 - 4)
        r9_4 = *(arg1 + 0x28)
    while (i_4 s<= *(r9_4 + (r12 << 2)) * 2)

sub_141527910(arg2, r11.d, *(r9_4 + (r12 << 2)))
*(*(arg2 + 0xa8) + (sx.q(*(rbp_1 + (sx.q(*(*(arg1 + 0x28) + (r12 << 2)) * 2) << 2))) << 3)) =
    *(arg2 + 0xb8)
*(*(arg2 + 0xa8) + (r12 << 3)) = *(arg2 + 0xb0)
*(*(arg1 + 0x20) + (sx.q(*(rbp_1 + (sx.q(*(*(arg1 + 0x28) + (r12 << 2)) * 2) << 2))) << 3)) = rbp_1
*(*(arg1 + 0x20) + (r12 << 3)) = r14
*(*(arg1 + 0x28) + (r12 << 2)) = arg5.d
int64_t result
result.b = 1
return result
