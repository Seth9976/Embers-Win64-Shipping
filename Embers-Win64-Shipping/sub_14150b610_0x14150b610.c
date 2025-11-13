// 函数: sub_14150b610
// 地址: 0x14150b610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r9 = *arg2
int64_t rax_3 = (r9 u>> 0x21 ^ r9) * -0xae502812aa7333
int64_t r8_3 = (rax_3 u>> 0x21 ^ rax_3) * -0x3b314601e57a13ad
uint64_t rbp = zx.q((r8_3 u>> 0x21).w) ^ zx.q(r8_3.w)

for (int32_t i = *(*(arg1 + 0x10) + ((zx.q(rbp.d) & zx.q(arg1[1].w)) << 2)); i != 0xffffffff; 
        i = *(*(arg1 + 0x18) + (zx.q(i) << 2)))
    int64_t i_1 = sx.q(i)
    
    if (*(*(arg1 + 0x20) + (i_1 << 3)) == r9)
        int64_t rax_11 = *(arg1 + 0x30)
        *(rax_11 + (i_1 << 1)) += 1
        rax_11.b = 0
        return rax_11

uint64_t rdi

if (arg1[0x12] s<= 0)
    int32_t rax_12 = arg1[0xa] + 1
    arg1[0xa] = rax_12
    
    if (rax_12 s> arg1[0xb])
        sub_1405a4d70(&arg1[8])
    
    rdi = sx.q(arg1[0xe])
    int32_t rax_13 = (rdi + 1).d
    arg1[0xe] = rax_13
    
    if (rax_13 s> arg1[0xf])
        sub_140594770(&arg1[0xc])
    
    *(*(arg1 + 0x30) + (rdi << 1)) = 0
else
    int64_t r8_5 = sx.q(arg1[0x12])
    rdi = zx.q(*(*(arg1 + 0x40) + (r8_5 << 2) - 4))
    arg1[0x12] = (r8_5 - 1).d
    sub_1405dac90(&arg1[0x10])

int64_t rdx_2 = sx.q(rdi.d)
*(*(arg1 + 0x20) + (rdx_2 << 3)) = *arg2
*(*(arg1 + 0x30) + (rdx_2 << 1)) = 1
int32_t temp0 = arg1[2]

if (rdi.d u>= temp0)
    uint64_t rflags_1
    int32_t temp0_1
    temp0_1, rflags_1 = _bit_scan_reverse((rdi + 1).d)
    int32_t rcx_7
    
    if (rdi.d == temp0)
        rcx_7 = 0x20
    else
        rcx_7 = 0x1f - temp0_1
    
    int32_t rcx_9 = rcx_7 << 0x1a s>> 0x1f
    uint64_t rflags_2
    char temp0_2
    temp0_2, rflags_2 = _bit_scan_reverse(rdi.d)
    char rdx_3
    
    if (rcx_9 == 0)
        rdx_3 = 0x20
    else
        rdx_3 = 0x1f - temp0_2
    
    int32_t r8_6 = 1 << ((not.d(rcx_9)).b & (0x20 - rdx_3))
    
    if (r8_6 u<= 0x20)
        r8_6 = 0x20
    
    sub_140a30d10(arg1, r8_6)

uint64_t r8_8 = rbp & zx.q(arg1[1].w)
*(*(arg1 + 0x18) + (zx.q(rdi.d) << 2)) = *(*(arg1 + 0x10) + (r8_8 << 2))
*(*(arg1 + 0x10) + (r8_8 << 2)) = rdi.d
int64_t rax_23
rax_23.b = 1
return rax_23
