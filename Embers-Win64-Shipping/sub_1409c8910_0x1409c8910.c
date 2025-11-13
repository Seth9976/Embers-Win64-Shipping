// 函数: sub_1409c8910
// 地址: 0x1409c8910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = sx.q(arg1[1].d)
int64_t rsi = sx.q(arg2)

if (rsi.d s< rbp.d)
    return 

int32_t rax_1 = (rsi + 1).d
arg1[1].d = rax_1

if (rax_1 s> *(arg1 + 0xc))
    sub_1406105e0(arg1)

int32_t r9_1 = rbp.d
int32_t* r8 = *arg1 + (rbp << 2)

if (rbp.d s> rsi.d)
    return 

if (rsi.d - rbp.d + 1 u>= 4 && (&r8[rbp] u> arg3 || &r8[rsi] u< arg3))
    int32_t rcx_3 = (rsi.d - rbp.d + 1) & 0x80000003
    
    if (rcx_3 s< 0)
        rcx_3 = ((rcx_3 - 1) | 0xfffffffc) + 1
    
    int32_t rax_3 = rsi.d - rcx_3
    
    do
        r9_1 += 4
    while (r9_1 s<= rax_3)
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(rax_3 - rbp.d + 4)
    int64_t rcx_8
    int64_t rdi_3
    rdi_3, rcx_8 = __memfill_u32(r8, *arg3, sx.q((temp3_1 + (temp2_1 & 3)) s>> 2) << 4 u>> 2)
    r8 = &r8[sx.q((temp3_1 + (temp2_1 & 3)) s>> 2) * 4]

if (r9_1 s> rsi.d)
    return 

if (rsi.d - r9_1 + 1 s>= 4)
    uint64_t rax_15 = zx.q(((rsi.d - r9_1 - 3) u>> 2) + 1)
    uint64_t i_2 = zx.q(rax_15.d)
    r9_1 += (rax_15 << 2).d
    uint64_t i
    
    do
        *r8 = *arg3
        r8[1] = *arg3
        r8[2] = *arg3
        r8[3] = *arg3
        r8 = &r8[4]
        i = i_2
        i_2 -= 1
    while (i != 1)

if (r9_1 s> rsi.d)
    return 

int64_t i_3 = sx.q(rsi.d - r9_1 + 1)
int64_t i_1

do
    *r8 = *arg3
    r8 = &r8[1]
    i_1 = i_3
    i_3 -= 1
while (i_1 != 1)
