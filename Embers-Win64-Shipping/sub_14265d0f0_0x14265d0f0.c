// 函数: sub_14265d0f0
// 地址: 0x14265d0f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg1 + 0x30)
int128_t* r9 = *(arg1 + 0x28)
int32_t r8 = rax - 1
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(rax)
int32_t i_7 = (temp1 - temp0) s>> 1
int128_t zmm2
int128_t zmm3

if (i_7 s> 0)
    int128_t* rcx = r9
    uint64_t i_4 = zx.q(i_7)
    uint64_t i
    
    do
        int128_t* rax_5 = &r9[sx.q(r8) * 2]
        
        if (rcx != rax_5)
            zmm2 = *rcx
            zmm3 = rcx[1]
            *rcx = *rax_5
            rcx[1] = rax_5[1]
            *rax_5 = zmm2
            rax_5[1] = zmm3
        
        rcx = &rcx[2]
        r8 -= 1
        i = i_4
        i_4 -= 1
    while (i != 1)

int64_t rcx_1 = sx.q(*(arg1 + 0x108))
int64_t r8_1 = 0
int64_t r10 = *(arg1 + 0x100)
int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(rcx_1.d)
int32_t rax_9 = (temp3 - temp2) s>> 1

if (rax_9 s> 0)
    int64_t i_1 = 0
    int64_t* r9_2 = r10 + ((rcx_1 - 1) << 3)
    
    do
        int64_t rax_10 = *r9_2
        r9_2 = &r9_2[-1]
        int64_t rcx_2 = *(r10 + (i_1 << 3))
        *(r10 + (i_1 << 3)) = rax_10
        i_1 += 1
        r9_2[1] = rcx_2
    while (i_1 s< sx.q(rax_9))

int32_t rax_11 = *(arg1 + 0x118)
void* r9_3 = *(arg1 + 0x110)
int32_t rdi = rax_11 - 1
int32_t temp4
int32_t temp5
temp4:temp5 = sx.q(rax_11)
uint64_t result = zx.q((temp5 - temp4) s>> 1)
int64_t r10_1 = sx.q(result.d)
int128_t zmm0

if (r10_1 s>= 4)
    void* rdx_3 = r9_3 + 8
    int64_t i_6 = ((r10_1 - 4) u>> 2) + 1
    void* rcx_5 = r9_3 + ((sx.q(rdi) - 2) << 2)
    r8_1 = i_6 << 2
    rdi += neg.d(i_6.d) << 2
    int64_t i_2
    
    do
        zmm0 = *(rdx_3 - 8)
        rdx_3 += 0x10
        int32_t rax_16 = *(rcx_5 + 8)
        rcx_5 -= 0x10
        *(rdx_3 - 0x18) = rax_16
        int32_t rax_17 = *(rcx_5 + 0x14)
        *(rcx_5 + 0x18) = zmm0.d
        int128_t zmm1 = *(rdx_3 - 0x14)
        *(rdx_3 - 0x14) = rax_17
        int32_t rax_18 = *(rcx_5 + 0x10)
        *(rcx_5 + 0x14) = zmm1.d
        zmm0 = *(rdx_3 - 0x10)
        *(rdx_3 - 0x10) = rax_18
        result = zx.q(*(rcx_5 + 0xc))
        *(rcx_5 + 0x10) = zmm0.d
        zmm1 = *(rdx_3 - 0xc)
        *(rdx_3 - 0xc) = result.d
        *(rcx_5 + 0xc) = zmm1.d
        i_2 = i_6
        i_6 -= 1
    while (i_2 != 1)

if (r8_1 s< r10_1)
    int32_t* rcx_6 = r9_3 + (sx.q(rdi) << 2)
    
    do
        zmm0 = *(r9_3 + (r8_1 << 2))
        result = zx.q(*rcx_6)
        rcx_6 = &rcx_6[-1]
        *(r9_3 + (r8_1 << 2)) = result.d
        r8_1 += 1
        rcx_6[1] = zmm0.d
    while (r8_1 s< r10_1)

if ((*(arg1 + 0x140) & 1) != 0)
    int32_t rax_20 = *(arg1 + 0x138)
    int128_t* r9_4 = *(arg1 + 0x130)
    int32_t r8_2 = rax_20 - 1
    int32_t temp8_1
    int32_t temp9_1
    temp8_1:temp9_1 = sx.q(rax_20)
    result = zx.q((temp9_1 - temp8_1) s>> 1)
    
    if (result.d s> 0)
        int128_t* rcx_7 = r9_4
        uint64_t i_5 = zx.q(result.d)
        uint64_t i_3
        
        do
            result = &r9_4[sx.q(r8_2) * 2]
            
            if (rcx_7 != result)
                zmm2 = *rcx_7
                zmm3 = rcx_7[1]
                *rcx_7 = *result
                rcx_7[1] = *(result + 0x10)
                *result = zmm2
                *(result + 0x10) = zmm3
            
            rcx_7 = &rcx_7[2]
            r8_2 -= 1
            i_3 = i_5
            i_5 -= 1
        while (i_3 != 1)

return result
