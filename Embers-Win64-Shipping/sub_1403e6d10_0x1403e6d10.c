// 函数: sub_1403e6d10
// 地址: 0x1403e6d10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx
int32_t r8

if (*(arg2 + 0x6c) s>= 0x3e8)
    rbx = 0
else
    rbx = divs.dp.d(0:0x7fff, (r8 s>> 4) + 1)
void* r10 = arg2 + 0x4c
int64_t i_1 = 4
int32_t result
int64_t i

do
    uint64_t rcx_1 = zx.q(*(r10 - 0x10))
    int32_t r8_4 = *(arg1 - arg2 - 0x4c + r10) + *(r10 + 0x10)
    
    if (test_bit(r8_4, 0x1f))
        r8_4 = 0x7fffffff
    
    int32_t temp0_2 = divs.dp.d(0:0x7fffffff, r8_4)
    int32_t rcx_2
    
    if (r8_4 s> (rcx_1 << 3).d)
        rcx_2 = 0x80
    else if (r8_4 s>= rcx_1.d)
        int32_t rdx_2 = sx.d(rcx_1.w)
        int32_t rdx_4 = rdx_2 * (temp0_2 s>> 0x10) + (((rcx_1.d s>> 0xf) + 1) s>> 1) * temp0_2
            + ((zx.d(temp0_2.w) * rdx_2) s>> 0x10)
        rcx_2 = (zx.d(rdx_4.w) << 0xb s>> 0x10) + (rdx_4 s>> 0x10 << 0xb)
    else
        rcx_2 = 0x400
    
    int16_t rax_8 = rbx.w
    
    if (rcx_2 s> rbx)
        rax_8 = rcx_2.w
    
    int32_t r9_2 = temp0_2 - *r10
    int32_t rcx_11 = sx.d(rax_8)
    int32_t rcx_13 = rcx_11 * (r9_2 s>> 0x10) + ((zx.d(r9_2.w) * rcx_11) s>> 0x10) + *r10
    *r10 = rcx_13
    result = divs.dp.d(0:0x7fffffff, rcx_13)
    int32_t result_1 = 0xffffff
    
    if (result s< 0xffffff)
        result_1 = result
    
    r10 += 4
    *(r10 - 0x14) = result_1
    i = i_1
    i_1 -= 1
while (i != 1)
*(arg2 + 0x6c) += 1
return result
