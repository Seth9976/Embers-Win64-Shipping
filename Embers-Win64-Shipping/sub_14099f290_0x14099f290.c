// 函数: sub_14099f290
// 地址: 0x14099f290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r10 = sx.q(*(arg2 + 0x1c))
int32_t* rax = *arg3
arg3[3].d = 1
*(arg3 + 0x24) = 0

if (r10.d == 2)
    *(arg3 + 0x1c) = 0
    *rax = 0x3f800000
    return rax

*(arg3 + 0x1c) = r10.d
arg3[4].d = r10.d

if (r10.d == 4)
    *rax = 0x3ee38e39
    *arg3[1] = 0x3de38e39
    *(arg3[1] + 4) = 0x3de38e39
    *(arg3[1] + 8) = 0x3de38e39
    *(arg3[1] + 0xc) = 0x3de38e39
    *arg3[2] = 0x3ce38e39
    *(arg3[2] + 4) = 0x3ce38e39
    *(arg3[2] + 8) = 0x3ce38e39
    void* rax_8 = arg3[2]
    *(rax_8 + 0xc) = 0x3ce38e39
    return rax_8

int32_t i_1 = 0
uint128_t zmm2 = _mm_cvtepi32_ps(zx.o(r10.d))
float zmm3 = 1f / ((zmm2.d + 5f) f* zmm2.d)
float zmm4 = zmm3 * 4f
*rax = 1f - (zmm4 + zmm3) f* zmm2.d

if (r10.d s> 0 && r10.d u>= 4)
    int64_t r11_1 = arg3[1]
    int64_t rcx = sx.q((r10 - 1).d)
    int64_t rbx_1 = arg3[2]
    rax = rbx_1 + (rcx << 2)
    int64_t rcx_1 = r11_1 + (rcx << 2)
    
    if ((rbx_1 u> rcx_1 || rax u< r11_1) && (rbx_1 u> &arg3[1] || rax u< &arg3[1])
            && (rbx_1 u> &arg3[2] || rax u< &arg3[2]) && (r11_1 u> &arg3[1] || rcx_1 u< &arg3[1])
            && (r11_1 u> &arg3[2] || rcx_1 u< &arg3[2]))
        int32_t rax_11 = r10.d & 0x80000003
        
        if (rax_11 s< 0)
            rax_11 = ((rax_11 - 1) | 0xfffffffc) + 1
        
        int32_t rcx_3 = r10.d - rax_11
        
        do
            i_1 += 4
        while (i_1 s< rcx_3)
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rcx_3 + 3)
        int64_t rdx_4 = sx.q((temp1_1 + (temp0_1 & 3)) s>> 2) << 4
        int64_t rcx_6
        int64_t rdi_3
        rdi_3, rcx_6 = __memfill_u32(r11_1, zmm4, rdx_4 u>> 2)
        rax = sx.q(zmm3)
        int64_t rcx_8
        int64_t rdi_5
        rdi_5, rcx_8 = __memfill_u32(rbx_1, rax.d, rdx_4 u>> 2)

int64_t i = sx.q(i_1)

if (i s< r10)
    rax = r10 - i
    
    if (rax s>= 4)
        do
            *(arg3[1] + (i << 2)) = zmm4
            *(arg3[2] + (i << 2)) = zmm3
            *(arg3[1] + (i << 2) + 4) = zmm4
            *(arg3[2] + (i << 2) + 4) = zmm3
            *(arg3[1] + (i << 2) + 8) = zmm4
            *(arg3[2] + (i << 2) + 8) = zmm3
            *(arg3[1] + (i << 2) + 0xc) = zmm4
            rax = arg3[2]
            rax[i + 3] = zmm3
            i += 4
        while (i s< r10 - 3)
    
    for (; i s< r10; i += 1)
        *(arg3[1] + (i << 2)) = zmm4
        rax = arg3[2]
        rax[i] = zmm3

return rax
