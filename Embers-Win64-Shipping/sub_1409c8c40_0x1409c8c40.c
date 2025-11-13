// 函数: sub_1409c8c40
// 地址: 0x1409c8c40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = sx.q(arg1[1].d)
int64_t rbx = sx.q(arg2)

if (rbx.d s< rbp.d)
    return 

uint64_t rax = zx.q((rbx + 1).d)
arg1[1].d = rax.d

if (rax.d s> *(arg1 + 0xc))
    sub_140679a80(arg1)

char* r8_1 = *arg1 + rbp
int32_t r9_1 = rbp.d

if (rbp.d s> rbx.d)
    return 

if (rbx.d - rbp.d + 1 u>= 0x10 && (&r8_1[rbp] u> arg3 || &r8_1[rbx] u< arg3))
    int32_t rcx_3 = (rbx.d - rbp.d + 1) & 0x8000000f
    
    if (rcx_3 s< 0)
        rcx_3 = ((rcx_3 - 1) | 0xfffffff0) + 1
    
    int32_t rax_2 = rbx.d - rcx_3
    
    do
        r9_1 += 0x10
    while (r9_1 s<= rax_2)
    
    int32_t temp1_1
    int32_t temp2_1
    temp1_1:temp2_1 = sx.q(rax_2 - rbp.d + 0x10)
    int64_t rdx_4 = sx.q((temp2_1 + (temp1_1 & 0xf)) s>> 4) << 4
    int64_t rcx_7
    int64_t rdi_3
    rdi_3, rcx_7 = __memfill_u8(r8_1, *arg3, rdx_4)
    r8_1 = &r8_1[rdx_4]

if (r9_1 s> rbx.d)
    return 

int64_t i_1 = sx.q(rbx.d - r9_1 + 1)
int64_t i

do
    *r8_1 = *arg3
    r8_1 = &r8_1[1]
    i = i_1
    i_1 -= 1
while (i != 1)
