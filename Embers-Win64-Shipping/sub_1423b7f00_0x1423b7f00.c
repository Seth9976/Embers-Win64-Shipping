// 函数: sub_1423b7f00
// 地址: 0x1423b7f00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1].d = 0xffffffff
int64_t* rcx = *arg1

if (rcx == 0)
    *(arg1 + 0xb4) &= 0xfffffffc
    *(arg1 + 0xc) = 0
    *(arg1 + 0x14) = 0
    arg1[0x14].d = 0
    *(arg1 + 0x6c) = 0
    arg1[0x16].w = 0x103
    arg1[3] = 0x3f800000
    __builtin_memset(&arg1[4], 0, 0x34)
    return 

int32_t rax_1 = (*(*rcx + 0x260))(rcx)
int64_t* rcx_1 = *arg1
*(arg1 + 0xc) = rax_1
int32_t rax_3 = (*(*rcx_1 + 0x270))(rcx_1)
int64_t* rcx_2 = *arg1
arg1[2].d = rax_3
int32_t rax_5 = (*(*rcx_2 + 0x268))(rcx_2)
char rcx_3 = arg1[0x16].b
int64_t rsi = 0
*(arg1 + 0x14) = rax_5
arg1[0x14].d = 0
uint64_t rdx_4
int32_t r8
float zmm1
float zmm0

if (rcx_3 != 0)
    *(arg1 + 0xb4) &= 0xfffffffc
    r8 = rax_5 - 1
    void* rdx_5 = *arg1
    int32_t rax_9 = 0
    zmm1 = 0.5f
    arg1[3].d = 0x3f800000
    
    if (rcx_3 != 1)
        rdx_4 = *(rdx_5 + 0xd8)
        
        if (r8 s>= 0)
            rax_9 = r8
        
        int32_t rax_26 = 0
        *(arg1 + 0x3c) = *(sx.q(rax_9) * 0xb8 + rdx_4) * 0.5f
        int32_t rcx_22 = *(arg1 + 0x14)
        
        if (rcx_22 - 2 s>= 0)
            rax_26 = rcx_22 - 2
        
        int32_t rax_28 = 0
        arg1[8].d = *(sx.q(rax_26) * 0xb8 + rdx_4) * 0.5f
        int32_t rcx_25 = *(arg1 + 0x14)
        
        if (rcx_25 - 3 s>= 0)
            rax_28 = rcx_25 - 3
        
        int32_t rax_30 = 0
        *(arg1 + 0x44) = *(sx.q(rax_28) * 0xb8 + rdx_4) * 0.5f
        int32_t rcx_28 = *(arg1 + 0x14)
        
        if (rcx_28 - 4 s>= 0)
            rax_30 = rcx_28 - 4
        
        int32_t rax_32 = 0
        arg1[9].d = *(sx.q(rax_30) * 0xb8 + rdx_4) * 0.5f
        int32_t rcx_31 = *(arg1 + 0x14)
        
        if (rcx_31 - 5 s>= 0)
            rax_32 = rcx_31 - 5
        
        int32_t rax_34 = 0
        *(arg1 + 0x4c) = *(sx.q(rax_32) * 0xb8 + rdx_4) * 0.5f
        int32_t rcx_34 = *(arg1 + 0x14)
        
        if (rcx_34 - 6 s>= 0)
            rax_34 = rcx_34 - 6
        
        int32_t rax_36 = 0
        arg1[0xa].d = *(sx.q(rax_34) * 0xb8 + rdx_4) * 0.5f
        int32_t rcx_37 = *(arg1 + 0x14)
        
        if (rcx_37 - 7 s>= 0)
            rax_36 = rcx_37 - 7
        
        int32_t rax_38 = 0
        *(arg1 + 0x54) = *(sx.q(rax_36) * 0xb8 + rdx_4) * 0.5f
        int32_t rcx_40 = *(arg1 + 0x14)
        
        if (rcx_40 - 8 s>= 0)
            rax_38 = rcx_40 - 8
        
        zmm0 = *(sx.q(rax_38) * 0xb8 + rdx_4)
    else
        rdx_4 = *(rdx_5 + 0x50)
        
        if (r8 s>= 0)
            rax_9 = r8
        
        int32_t rax_11 = 0
        *(arg1 + 0x3c) = *(rdx_4 + (sx.q(rax_9) << 2) + 0x20) * 0.5f
        int32_t rcx_7 = *(arg1 + 0x14)
        
        if (rcx_7 - 2 s>= 0)
            rax_11 = rcx_7 - 2
        
        int32_t rax_13 = 0
        arg1[8].d = *(rdx_4 + (sx.q(rax_11) << 2) + 0x20) * 0.5f
        int32_t rcx_9 = *(arg1 + 0x14)
        
        if (rcx_9 - 3 s>= 0)
            rax_13 = rcx_9 - 3
        
        int32_t rax_15 = 0
        *(arg1 + 0x44) = *(rdx_4 + (sx.q(rax_13) << 2) + 0x20) * 0.5f
        int32_t rcx_11 = *(arg1 + 0x14)
        
        if (rcx_11 - 4 s>= 0)
            rax_15 = rcx_11 - 4
        
        int32_t rax_17 = 0
        arg1[9].d = *(rdx_4 + (sx.q(rax_15) << 2) + 0x20) * 0.5f
        int32_t rcx_13 = *(arg1 + 0x14)
        
        if (rcx_13 - 5 s>= 0)
            rax_17 = rcx_13 - 5
        
        int32_t rax_19 = 0
        *(arg1 + 0x4c) = *(rdx_4 + (sx.q(rax_17) << 2) + 0x20) * 0.5f
        int32_t rcx_15 = *(arg1 + 0x14)
        
        if (rcx_15 - 6 s>= 0)
            rax_19 = rcx_15 - 6
        
        int32_t rax_21 = 0
        arg1[0xa].d = *(rdx_4 + (sx.q(rax_19) << 2) + 0x20) * 0.5f
        int32_t rcx_17 = *(arg1 + 0x14)
        
        if (rcx_17 - 7 s>= 0)
            rax_21 = rcx_17 - 7
        
        int32_t rax_23 = 0
        *(arg1 + 0x54) = *(rdx_4 + (sx.q(rax_21) << 2) + 0x20) * 0.5f
        int32_t rcx_19 = *(arg1 + 0x14)
        
        if (rcx_19 - 8 s>= 0)
            rax_23 = rcx_19 - 8
        
        zmm0 = *(rdx_4 + (sx.q(rax_23) << 2) + 0x20)
    
    arg1[0xb].d = zmm0 * 0.5f
else
    r8 = *(arg1 + 0xc)
    int32_t rcx_4 = 0xe
    
    if (rax_5 s<= 0xe)
        rcx_4 = rax_5
    
    *(arg1 + 0x14) = rcx_4
    
    if (*(arg2 + 0x25) == 0)
        zmm1 = 1f
    else
        zmm1 = 0.709999979f
    
    if (r8 - 0x18 u<= 1)
        zmm0 = zmm1
    else if (r8 == 0x11)
        zmm0 = _mm_min_ss(data_143a2ffa4, zmm1)
    else if (r8 != 0x16)
        zmm0 = zmm1
    else
        zmm0 = _mm_min_ss(data_143a2ffa8, zmm1)
    
    arg1[3].d = zmm0
    int32_t rcx_5
    rcx_5.b = r8 - 3 u<= 2
    int32_t rcx_6 = 2
    
    if (r8 - 0x18 u> 1)
        rcx_6 = 0
    
    rdx_4 = (((zx.q(*(arg1 + 0xb4)) & 0xfffffffe) | zx.q(rcx_5)) & 0xfffffffd) | zx.q(rcx_6)
    *(arg1 + 0xb4) = rdx_4.d
int64_t* rcx_43 = *arg1
int32_t rbx_1 = *(arg1 + 0x14)
int64_t rbp = 8
int32_t rcx_45 = rbx_1 - (*(*rcx_43 + 0x278))(rcx_43, rdx_4, zmm1, r8)
*(arg1 + 0x6c) = rcx_45
int32_t rbx_2 = 1
int32_t rax_41
rax_41.b = rcx_45 == rbx_1
bool cond:3 = arg1[0x16].b == 0
*(arg1 + 0xb1) = rax_41.b

if (cond:3)
    rbp = 0xe

void* r14 = arg1 + 0x1c

do
    int32_t rdx_6 = *(arg1 + 0x14)
    int64_t* rcx_46 = *arg1
    
    if (rbx_2 s<= rdx_6)
        rdx_6 = rbx_2
    
    rbx_2 += 1
    *r14 = (*(*rcx_46 + 0x280))(rcx_46, rdx_6)
    rsi += 1
    r14 += 4
while (rsi s< rbp)

arg1[1].d = *(arg1 + 0x14) - *(arg1 + 0x6c) - 1
