// 函数: sub_1417be610
// 地址: 0x1417be610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r15 = *arg2
int64_t rsi = 0
int64_t rbx = sx.q(r15[1].d)
float zmm0
float zmm1
float zmm2

if (rbx s>= 4)
    int64_t r11_1 = *arg3
    void* r9_1 = *r15
    int32_t* rdx = r9_1 + 4
    int32_t* r9_2 = r9_1 + 0x14
    int64_t rdi_1 = *arg2[1]
    int64_t i_3 = ((rbx - 4) u>> 2) + 1
    rsi = i_3 << 2
    int64_t i
    
    do
        *(r11_1 + (sx.q(*rdx) << 2)) = *(arg1 + 0x1c)
        int64_t rcx_1 = sx.q(rdx[-1]) * 3
        zmm2 = *(arg1 + 0x28) f- *(rdi_1 + (rcx_1 << 2) + 4)
        zmm1 = *(arg1 + 0x24) f- *(rdi_1 + (rcx_1 << 2))
        zmm0 = *(arg1 + 0x2c) f- *(rdi_1 + (rcx_1 << 2) + 8)
        zmm2 = zmm2 * zmm2 + zmm1 * zmm1
        zmm1 = *(arg1 + 0x20)
        int32_t temp0_1 = _mm_sqrt_ss((zx.o(0)).d, zmm2 + zmm0 * zmm0)
        
        if (not(temp0_1 f>= zmm1))
            zmm1 = zmm1 f- temp0_1
            *(r11_1 + (sx.q(*rdx) << 2)) = zmm1 f* *(arg1 + 0x10) * zmm1
        
        *(r11_1 + (sx.q(r9_2[-2]) << 2)) = *(arg1 + 0x1c)
        int64_t rcx_3 = sx.q(rdx[1]) * 3
        zmm2 = *(arg1 + 0x28) f- *(rdi_1 + (rcx_3 << 2) + 4)
        zmm1 = *(arg1 + 0x24) f- *(rdi_1 + (rcx_3 << 2))
        zmm0 = *(arg1 + 0x2c) f- *(rdi_1 + (rcx_3 << 2) + 8)
        zmm2 = zmm2 * zmm2 + zmm1 * zmm1
        zmm1 = *(arg1 + 0x20)
        int32_t temp0_2 = _mm_sqrt_ss(0, zmm2 + zmm0 * zmm0)
        
        if (not(temp0_2 f>= zmm1))
            zmm1 = zmm1 f- temp0_2
            *(r11_1 + (sx.q(r9_2[-2]) << 2)) = zmm1 f* *(arg1 + 0x10) * zmm1
        
        *(r11_1 + (sx.q(*r9_2) << 2)) = *(arg1 + 0x1c)
        int64_t rcx_5 = sx.q(rdx[3]) * 3
        zmm2 = *(arg1 + 0x28) f- *(rdi_1 + (rcx_5 << 2) + 4)
        zmm1 = *(arg1 + 0x24) f- *(rdi_1 + (rcx_5 << 2))
        zmm0 = *(arg1 + 0x2c) f- *(rdi_1 + (rcx_5 << 2) + 8)
        zmm2 = zmm2 * zmm2 + zmm1 * zmm1
        zmm1 = *(arg1 + 0x20)
        int32_t temp0_3 = _mm_sqrt_ss(0, zmm2 + zmm0 * zmm0)
        
        if (not(temp0_3 f>= zmm1))
            zmm1 = zmm1 f- temp0_3
            *(r11_1 + (sx.q(*r9_2) << 2)) = zmm1 f* *(arg1 + 0x10) * zmm1
        
        *(r11_1 + (sx.q(r9_2[2]) << 2)) = *(arg1 + 0x1c)
        int64_t rcx_7 = sx.q(rdx[5]) * 3
        zmm2 = *(arg1 + 0x28) f- *(rdi_1 + (rcx_7 << 2) + 4)
        zmm1 = *(arg1 + 0x24) f- *(rdi_1 + (rcx_7 << 2))
        zmm0 = *(arg1 + 0x2c) f- *(rdi_1 + (rcx_7 << 2) + 8)
        zmm2 = zmm2 * zmm2 + zmm1 * zmm1
        zmm1 = *(arg1 + 0x20)
        int32_t temp0_4 = _mm_sqrt_ss(0, zmm2 + zmm0 * zmm0)
        
        if (not(temp0_4 f>= zmm1))
            zmm1 = zmm1 f- temp0_4
            *(r11_1 + (sx.q(r9_2[2]) << 2)) = zmm1 f* *(arg1 + 0x10) * zmm1
        
        rdx = &rdx[8]
        r9_2 = &r9_2[8]
        i = i_3
        i_3 -= 1
    while (i != 1)

if (rsi s>= rbx)
    return 

int64_t i_2 = rbx - rsi
int64_t r8_2 = *arg3
int64_t r9_3 = *arg2[1]
void* rdx_1 = *r15 + (rsi << 3)
int64_t i_1

do
    *(r8_2 + (sx.q(*(rdx_1 + 4)) << 2)) = *(arg1 + 0x1c)
    int64_t rcx_9 = sx.q(*rdx_1) * 3
    zmm2 = *(arg1 + 0x28) f- *(r9_3 + (rcx_9 << 2) + 4)
    zmm1 = *(arg1 + 0x24) f- *(r9_3 + (rcx_9 << 2))
    zmm0 = *(arg1 + 0x2c) f- *(r9_3 + (rcx_9 << 2) + 8)
    zmm2 = zmm2 * zmm2 + zmm1 * zmm1
    zmm1 = *(arg1 + 0x20)
    int32_t temp0_5 = _mm_sqrt_ss((zx.o(0)).d, zmm2 + zmm0 * zmm0)
    
    if (not(temp0_5 f>= zmm1))
        zmm1 = zmm1 f- temp0_5
        *(r8_2 + (sx.q(*(rdx_1 + 4)) << 2)) = zmm1 f* *(arg1 + 0x10) * zmm1
    
    rdx_1 += 8
    i_1 = i_2
    i_2 -= 1
while (i_1 != 1)
