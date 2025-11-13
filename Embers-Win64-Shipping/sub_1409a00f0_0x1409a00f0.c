// 函数: sub_1409a00f0
// 地址: 0x1409a00f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = 0
int64_t r10 = sx.q(*(*(*arg2 + 0x90) + (sx.q(arg2[1].d * 2) << 2)))
arg3[4].d = r10.d
arg3[3] = 2
*(arg3 + 0x24) = 0
**arg3 = 0x3ec00000
int64_t rax_4 = *arg3
*(rax_4 + 4) = 0x3ec00000

if (r10.d == 2)
    *arg3[2] = 0x3e000000
    void* rax_6 = arg3[2]
    *(rax_6 + 4) = 0x3e000000
    return rax_6

float zmm1 = 0.25f f/ _mm_cvtepi32_ps(zx.o(r10.d)).d

if (r10.d s> 0 && r10.d u>= 4)
    int64_t rdi_1 = arg3[2]
    rax_4 = rdi_1 + (sx.q((r10 - 1).d) << 2)
    
    if (rdi_1 u> &arg3[2] || rax_4 u< &arg3[2])
        int32_t rax_9 = r10.d & 0x80000003
        
        if (rax_9 s< 0)
            rax_9 = ((rax_9 - 1) | 0xfffffffc) + 1
        
        int32_t rcx_3 = r10.d - rax_9
        
        do
            i_1 += 4
        while (i_1 s< rcx_3)
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rcx_3 + 3)
        rax_4 = sx.q(zmm1)
        int64_t rcx_7
        int64_t rdi_2
        rdi_2, rcx_7 =
            __memfill_u32(rdi_1, rax_4.d, sx.q((temp1_1 + (temp0_1 & 3)) s>> 2) << 4 u>> 2)

int64_t i = sx.q(i_1)

if (i s< r10)
    rax_4 = r10 - i
    
    if (rax_4 s>= 4)
        do
            *(arg3[2] + (i << 2)) = zmm1
            *(arg3[2] + (i << 2) + 4) = zmm1
            *(arg3[2] + (i << 2) + 8) = zmm1
            rax_4 = arg3[2]
            *(rax_4 + (i << 2) + 0xc) = zmm1
            i += 4
        while (i s< r10 - 3)
    
    for (; i s< r10; i += 1)
        rax_4 = arg3[2]
        *(rax_4 + (i << 2)) = zmm1

return rax_4
