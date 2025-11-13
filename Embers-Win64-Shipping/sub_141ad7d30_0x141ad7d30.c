// 函数: sub_141ad7d30
// 地址: 0x141ad7d30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r9 = *(*(arg1 + 0x30) + 0x28)
int64_t r11 = *(arg1 + 0x28)
uint32_t (* r10)[0x4] = *(arg1 + 8)
int64_t rax_2
int32_t rdx
rdx:rax_2 = sx.o(r9)
int64_t rax_4
int32_t rdx_2
rdx_2:rax_4 = sx.o(r9)
int64_t rcx_1 = ((zx.q(rdx_2) & 7) + rax_4) & 0xfffffffffffffff8
int64_t i_2 = ((zx.q(rdx) & 3) + rax_2) & 0xfffffffffffffffc
uint32_t zmm0[0x4]
uint32_t zmm1[0x4]
uint32_t zmm2[0x4]
uint32_t zmm4[0x4]

if (i_2 == 0)
    int64_t i = 1
    zmm2 = _mm_and_ps((*r10)[r11], 0x7fffffff)
    
    if (r9 s> 1)
        if (r9 - 1 u>= 8)
            uint32_t zmm5[0x4] = data_142d3f770
            int32_t rax_22
            int32_t rdx_12
            rdx_12:rax_22 = sx.o(r9 - 1)
            uint64_t rdx_13 = zx.q(rdx_12) & 7
            zmm4 = zx.o(0)
            zmm1 = zx.o(0)
            void* rdx_14 = (r11 << 2) + 0x14
            
            do
                int64_t rax_26 = r11 + i
                i += 8
                zmm4 = _mm_add_ps(zmm4, _mm_and_ps(*(r10 + (rax_26 << 2)), zmm5))
                zmm0 = *(r10 + rdx_14)
                rdx_14 += 0x20
                zmm1 = _mm_add_ps(zmm1, _mm_and_ps(zmm0, zmm5))
            while (i s< r9 - ((zx.q(rax_22 + rdx_13.d) & 7) - rdx_13))
            
            zmm4 = _mm_add_ps(zmm4, zmm1)
            zmm4[0].q = zmm4 u>> 0x40
            zmm1 = _mm_add_ps(zmm4, zmm4)
            zmm0 = _mm_shuffle_ps(zmm1, zmm1, 0xf5)
            zmm1[0] = zmm1[0] f+ zmm0[0]
            zmm2[0] = zmm2[0] f+ zmm1[0]
        
        if (i s< r9)
            if (r9 - i s>= 4)
                void* rdx_15 = ((r11 + i) << 2) + 0xc
                
                do
                    int64_t rax_30 = r11 + i
                    i += 4
                    zmm0 = (*r10)[rax_30]
                    uint32_t temp0_31[0x4] = _mm_and_ps((*r10)[rax_30 + 1], 0x7fffffff)
                    uint32_t temp0_32[0x4] = _mm_and_ps(zmm0, 0x7fffffff)
                    temp0_32[0] = temp0_32[0] f+ zmm2[0]
                    zmm2 = temp0_31
                    uint32_t temp0_33[0x4] = _mm_and_ps(*(r10 + rdx_15), 0x7fffffff)
                    zmm2[0] = zmm2[0] f+ temp0_32[0]
                    uint32_t temp0_34[0x4] = _mm_and_ps(*(r10 + rdx_15 - 4), 0x7fffffff)
                    rdx_15 += 0x10
                    zmm2[0] = zmm2[0] f+ temp0_34[0]
                    zmm2[0] = zmm2[0] f+ temp0_33[0]
                while (i s< r9 - 3)
            
            while (i s< r9)
                int64_t rax_31 = r11 + i
                i += 1
                uint32_t temp0_35[0x4] = _mm_and_ps((*r10)[rax_31], 0x7fffffff)
                zmm2[0] = zmm2[0] f+ temp0_35[0]
    
    return zmm2

uint32_t zmm3[0x4] = data_142d3f770
zmm1 = _mm_and_ps(*(r10 + (r11 << 2)), zmm3)

if (i_2 s> 4)
    zmm2 = _mm_and_ps(*(r10 + (r11 << 2) + 0x10), zmm3)
    
    if (rcx_1 s> 8)
        int64_t i_3 = ((rcx_1 - 9) u>> 3) + 1
        int128_t* rdx_5 = &(*r10)[r11 + 8]
        uint32_t (* rdi_2)[0x4] = &(*r10)[r11 + 0xc]
        int64_t i_1
        
        do
            zmm0 = *rdx_5
            rdx_5 = &rdx_5[2]
            zmm1 = _mm_add_ps(zmm1, _mm_and_ps(zmm0, zmm3))
            zmm0 = *rdi_2
            rdi_2 = &rdi_2[2]
            zmm2 = _mm_add_ps(zmm2, _mm_and_ps(zmm0, zmm3))
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)
    
    zmm1 = _mm_add_ps(zmm1, zmm2)
    
    if (i_2 s> rcx_1)
        zmm1 = _mm_add_ps(zmm1, _mm_and_ps(*(r10 + ((r11 + rcx_1) << 2)), zmm3))

zmm1[0].q = zmm1 u>> 0x40
int64_t rax_9 = r9 - i_2
zmm3 = _mm_add_ps(zmm1, zmm1)
zmm0 = _mm_shuffle_ps(zmm3, zmm3, 1)
zmm3[0] = zmm3[0] f+ zmm0[0]

if (i_2 s< r9)
    if (rax_9 u>= 8)
        zmm4 = data_142d3f770
        int32_t rax_10
        int32_t rdx_6
        rdx_6:rax_10 = sx.o(rax_9)
        uint64_t rdx_7 = zx.q(rdx_6) & 7
        zmm2 = zx.o(0)
        zmm1 = zx.o(0)
        void* rcx_2 = ((r11 + i_2) << 2) + 0x10
        
        do
            int64_t rax_15 = r11 + i_2
            i_2 += 8
            zmm2 = _mm_add_ps(zmm2, _mm_and_ps(*(r10 + (rax_15 << 2)), zmm4))
            zmm0 = *(r10 + rcx_2)
            rcx_2 += 0x20
            zmm1 = _mm_add_ps(zmm1, _mm_and_ps(zmm0, zmm4))
        while (i_2 s< r9 - ((zx.q(rax_10 + rdx_7.d) & 7) - rdx_7))
        
        zmm2 = _mm_add_ps(zmm2, zmm1)
        zmm2[0].q = zmm2 u>> 0x40
        zmm1 = _mm_add_ps(zmm2, zmm2)
        zmm0 = _mm_shuffle_ps(zmm1, zmm1, 0xf5)
        zmm1[0] = zmm1[0] f+ zmm0[0]
        zmm1[0] = zmm1[0] f+ zmm3[0]
        zmm3 = zmm1
    
    if (i_2 s< r9)
        if (r9 - i_2 s>= 4)
            uint32_t (* rcx_3)[0x4] = *(arg1 + 8)
            void* rdx_10 = ((r11 + i_2) << 2) + 0xc
            
            do
                int64_t rax_19 = r11 + i_2
                zmm0 = (*rcx_3)[rax_19]
                uint32_t temp0_18[0x4] = _mm_and_ps(*(rcx_3 + rdx_10), 0x7fffffff)
                zmm2 = (*rcx_3)[rax_19 + 1]
                uint32_t temp0_19[0x4] = _mm_and_ps(zmm0, 0x7fffffff)
                temp0_19[0] = temp0_19[0] f+ zmm3[0]
                uint32_t temp0_20[0x4] = _mm_and_ps(zmm2, 0x7fffffff)
                i_2 += 4
                temp0_20[0] = temp0_20[0] f+ temp0_19[0]
                uint32_t temp0_21[0x4] = _mm_and_ps(*(rcx_3 + rdx_10 - 4), 0x7fffffff)
                rdx_10 += 0x10
                temp0_20[0] = temp0_20[0] f+ temp0_21[0]
                temp0_20[0] = temp0_20[0] f+ temp0_18[0]
                zmm3 = temp0_20
            while (i_2 s< r9 - 3)
        
        if (i_2 s< r9)
            int64_t rcx_4 = *(arg1 + 0x28)
            int64_t rdx_11 = *(arg1 + 8)
            
            do
                int64_t rax_20 = rcx_4 + i_2
                i_2 += 1
                uint32_t temp0_22[0x4] = _mm_and_ps(*(rdx_11 + (rax_20 << 2)), 0x7fffffff)
                zmm3[0] = zmm3[0] f+ temp0_22[0]
            while (i_2 s< r9)

return zmm3
