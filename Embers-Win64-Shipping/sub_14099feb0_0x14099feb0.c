// 函数: sub_14099feb0
// 地址: 0x14099feb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_3 = 0
int64_t r10 = sx.q(*(*(*arg2 + 0x90) + (sx.q(arg2[1].d * 2) << 2)))
arg3[4].d = r10.d
arg3[3] = 2
*(arg3 + 0x24) = 1
float arg_8
float zmm1

if ((*arg1 & 0x180) == 0x80 && r10.d == 2)
    void* rbx_1 = *arg2
    int64_t rdi_1 = sx.q(arg2[1].d * 2)
    int32_t* rdx = *(rbx_1 + 0x90)
    int32_t i_4 = rdx[rdi_1]
    
    if (i_4 s> 0)
        int64_t rbx_2 = *(rbx_1 + 0x18)
        int32_t* r11_2 = *(rbx_1 + 0xa8) + (sx.q(rdx[rdi_1 + 1]) << 2) - &arg_8
        rdx = &arg_8
        uint64_t i_2 = zx.q(i_4)
        uint64_t i
        
        do
            *rdx = *(rbx_2 + (sx.q(*(r11_2 + rdx) * 2) << 2))
            rdx = &rdx[1]
            i = i_2
            i_2 -= 1
        while (i != 1)
    
    int32_t rax_12 = (arg_8.q).d
    rdx.b = rax_12 == 3
    int64_t rcx
    rcx.b = arg4 == 3
    
    if (rax_12 == 3 || rcx.b != 0)
        uint128_t zmm0 = 0x3e70a3d7
        
        zmm1 = rdx.b == 0 ? 0.125f : 0.234999999f
        
        if (rcx.b == 0)
            zmm0 = 0x3e000000
        
        zmm1 = zmm1 f+ zmm0.d
        zmm0.d = 0.5f - zmm1
        **arg3 = zmm0.d
        *(*arg3 + 4) = zmm0.d
        *arg3[2] = zmm1
        void* rax_16 = arg3[2]
        *(rax_16 + 4) = zmm1
        return rax_16

**arg3 = 0x3e800000
int64_t rax_18 = *arg3
*(rax_18 + 4) = 0x3e800000

if (r10.d == 2)
    *arg3[2] = 0x3e800000
    void* rax_20 = arg3[2]
    *(rax_20 + 4) = 0x3e800000
    return rax_20

zmm1 = 0.5f f/ _mm_cvtepi32_ps(zx.o(r10.d)).d
arg_8 = zmm1

if (r10.d s> 0 && r10.d u>= 4)
    int64_t rdi_2 = arg3[2]
    rax_18 = rdi_2 + (sx.q((r10 - 1).d) << 2)
    
    if (rdi_2 u> &arg3[2] || rax_18 u< &arg3[2])
        int32_t rax_23 = r10.d & 0x80000003
        
        if (rax_23 s< 0)
            rax_23 = ((rax_23 - 1) | 0xfffffffc) + 1
        
        int32_t rcx_3 = r10.d - rax_23
        
        do
            i_3 += 4
        while (i_3 s< rcx_3)
        
        int32_t temp1_1
        int32_t temp2_1
        temp1_1:temp2_1 = sx.q(rcx_3 + 3)
        rax_18 = sx.q(arg_8)
        int64_t rcx_7
        int64_t rdi_3
        rdi_3, rcx_7 =
            __memfill_u32(rdi_2, rax_18.d, sx.q((temp2_1 + (temp1_1 & 3)) s>> 2) << 4 u>> 2)

int64_t i_1 = sx.q(i_3)

if (i_1 s< r10)
    rax_18 = r10 - i_1
    
    if (rax_18 s>= 4)
        do
            *(arg3[2] + (i_1 << 2)) = zmm1
            *(arg3[2] + (i_1 << 2) + 4) = zmm1
            *(arg3[2] + (i_1 << 2) + 8) = zmm1
            rax_18 = arg3[2]
            *(rax_18 + (i_1 << 2) + 0xc) = zmm1
            i_1 += 4
        while (i_1 s< r10 - 3)
    
    for (; i_1 s< r10; i_1 += 1)
        rax_18 = arg3[2]
        *(rax_18 + (i_1 << 2)) = zmm1

return rax_18
