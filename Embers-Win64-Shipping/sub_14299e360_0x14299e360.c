// 函数: sub_14299e360
// 地址: 0x14299e360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(arg4)
uint64_t rax_1 = zx.q(temp1)
int32_t r11_1 = arg2.d & 0xf
int32_t rcx_1 = arg3.d & 0xf
uint64_t i_12 = zx.q(((temp0 & 0xf) + rax_1.d) s>> 4)
int32_t zmm0[0x4]
int64_t zmm1
int32_t zmm2[0x4]

if ((arg1.b & 0xf) != 0)
label_14299e58f:
    
    if (i_12.d s> 0)
        rax_1 = arg3
        void* rcx_9 = arg1
        uint64_t i_11 = i_12
        uint64_t i
        
        do
            rcx_9 += 0x20
            zmm2 = *(arg2 - arg3 + rax_1)
            zmm1 = (*rax_1).q
            rax_1 += 0x10
            zmm0 = _mm_unpacklo_epi8(zmm2, zmm1)
            zmm2 = _mm_unpackhi_epi8(zmm2, zmm1)
            *(rcx_9 - 0x20) = zmm0
            *(rcx_9 - 0x10) = zmm2
            i = i_11
            i_11 -= 1
        while (i != 1)
    
    int32_t r8_5 = i_12.d << 4
    
    if (r8_5 s< arg4)
        int64_t rax_17 = sx.q(r8_5)
        uint64_t i_10 = zx.q(arg4 - r8_5)
        void* rcx_10 = &arg3[rax_17]
        void* rdx_10 = arg1 + (rax_17 << 1)
        uint64_t i_1
        
        do
            char rax_18 = *(arg2 - arg3 + rcx_10)
            rcx_10 += 1
            *rdx_10 = rax_18
            rdx_10 += 2
            rax_1 = zx.q(*(rcx_10 - 1))
            *(rdx_10 - 1) = rax_1.b
            i_1 = i_10
            i_10 -= 1
        while (i_1 != 1)
else if (r11_1 != 0)
    if (r11_1 != 8 || rcx_1 != r11_1)
        goto label_14299e58f
    
    int32_t r11_2 = 0
    int32_t r8_2 = 0
    char* rbx_2 = arg2 - arg3
    char* rcx_5 = arg3
    void* rdx_4 = arg1
    
    while (true)
        rax_1 = zx.q(arg4)
        
        if (arg4 s> 8)
            rax_1 = 8
        
        if (r8_2 s>= rax_1.d)
            break
        
        r8_2 += 1
        *rdx_4 = *(rcx_5 + rbx_2)
        char rax_8 = *rcx_5
        rcx_5 = &rcx_5[1]
        *(rdx_4 + 1) = rax_8
        rdx_4 += 2
    
    if (arg4 s> 8)
        int32_t temp6_1
        int32_t temp7_1
        temp6_1:temp7_1 = sx.q(arg4 - 8)
        void* rbp_3 = &arg3[8]
        rax_1 = zx.q((temp7_1 + (temp6_1 & 0xf)) s>> 4)
        int64_t i_13 = sx.q(rax_1.d)
        int64_t i_6 = i_13
        
        if (rax_1.d s> 0)
            int32_t (* r10_2)[0x4] = arg2 - arg3
            int64_t i_2
            
            do
                zmm0 = __punpcklbw_xmmdq_memdq(*(r10_2 + rbp_3), *rbp_3)
                rbp_3 += 0x10
                *(arg1 + sx.q(r11_2) * 0x10 + 0x10) = zmm0
                rax_1 = zx.q(r11_2 + 1)
                r11_2 += 2
                *(arg1 + sx.q(rax_1.d) * 0x10 + 0x10) =
                    __punpckhbw_xmmdq_memdq(*(r10_2 + rbp_3 - 0x10), *(rbp_3 - 0x10))
                i_2 = i_6
                i_6 -= 1
            while (i_2 != 1)
        
        if ((i_13.d << 4) + 8 s< arg4)
            int64_t rax_14 = sx.q((i_13.d << 4) + 8)
            uint64_t i_9 = zx.q(arg4 - ((i_13.d << 4) + 8))
            void* rcx_8 = &arg3[rax_14]
            void* rdx_7 = arg1 + (rax_14 << 1)
            char rax_16
            uint64_t i_3
            
            do
                char rax_15 = *(rbx_2 + rcx_8)
                rcx_8 += 1
                *rdx_7 = rax_15
                rdx_7 += 2
                rax_16 = *(rcx_8 - 1)
                *(rdx_7 - 1) = rax_16
                i_3 = i_9
                i_9 -= 1
            while (i_3 != 1)
            return rax_16
else
    if (rcx_1 != 0)
        goto label_14299e58f
    
    int64_t i_7 = sx.q(i_12.d)
    
    if (i_12.d s> 0)
        int128_t* rdx_2 = arg3
        int64_t i_4
        
        do
            zmm2 = *(rdx_2 + arg2 - arg3)
            zmm1 = (*rdx_2).q
            rdx_2 = &rdx_2[1]
            zmm0 = _mm_unpacklo_epi8(zmm2, zmm1)
            zmm2 = _mm_unpackhi_epi8(zmm2, zmm1)
            *(arg1 + sx.q(r11_1) * 0x10) = zmm0
            rax_1 = zx.q(r11_1 + 1)
            r11_1 += 2
            *(arg1 + sx.q(rax_1.d) * 0x10) = zmm2
            i_4 = i_7
            i_7 -= 1
        while (i_4 != 1)
    
    int32_t r8_1 = i_12.d << 4
    
    if (r8_1 s< arg4)
        int64_t rax_4 = sx.q(r8_1)
        uint64_t i_8 = zx.q(arg4 - r8_1)
        void* rcx_4 = &arg3[rax_4]
        char* rdx_3 = arg1 + (rax_4 << 1)
        char rax_6
        uint64_t i_5
        
        do
            char rax_5 = *(rcx_4 + arg2 - arg3)
            rcx_4 += 1
            *rdx_3 = rax_5
            rdx_3 = &rdx_3[2]
            rax_6 = *(rcx_4 - 1)
            rdx_3[-1] = rax_6
            i_5 = i_8
            i_8 -= 1
        while (i_5 != 1)
        return rax_6
return rax_1
