// 函数: sub_1417bedc0
// 地址: 0x1417bedc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm3 = *(arg1 + 0x20)
int32_t result = (zx.o(0)).d
zmm3 = zmm3 * zmm3

if (not(zmm3 <= 0f))
    int64_t rsi_1 = 0
    int64_t* r14_1 = *arg2
    int64_t r11_1 = sx.q(r14_1[1].d)
    float zmm1
    float zmm2
    
    if (r11_1 s>= 4)
        void* rcx = *r14_1
        int64_t r8 = *arg3
        int32_t* r10_1 = rcx + 4
        int64_t rbx_1 = *arg2[1]
        void* rdx = rcx + 0x14
        int64_t i_2 = ((r11_1 - 4) u>> 2) + 1
        rsi_1 = i_2 << 2
        int64_t i
        
        do
            *(r8 + (sx.q(*r10_1) << 2)) = *(arg1 + 0x1c)
            int64_t rcx_2 = sx.q(r10_1[-1]) * 3
            zmm2 = *(arg1 + 0x28) f- *(rbx_1 + (rcx_2 << 2) + 4)
            zmm1 = *(arg1 + 0x24) f- *(rbx_1 + (rcx_2 << 2))
            result = *(arg1 + 0x2c) f- *(rbx_1 + (rcx_2 << 2) + 8)
            
            if (not(zmm2 * zmm2 + zmm1 * zmm1 f+ result f* result >= zmm3))
                *(r8 + (sx.q(*r10_1) << 2)) = *(arg1 + 0x10)
            
            *(r8 + (sx.q(*(rdx - 8)) << 2)) = *(arg1 + 0x1c)
            int64_t rcx_5 = sx.q(r10_1[1]) * 3
            zmm2 = *(arg1 + 0x28) f- *(rbx_1 + (rcx_5 << 2) + 4)
            zmm1 = *(arg1 + 0x24) f- *(rbx_1 + (rcx_5 << 2))
            result = *(arg1 + 0x2c) f- *(rbx_1 + (rcx_5 << 2) + 8)
            
            if (not(zmm2 * zmm2 + zmm1 * zmm1 f+ result f* result >= zmm3))
                *(r8 + (sx.q(*(rdx - 8)) << 2)) = *(arg1 + 0x10)
            
            *(r8 + (sx.q(*rdx) << 2)) = *(arg1 + 0x1c)
            int64_t rcx_8 = sx.q(r10_1[3]) * 3
            zmm2 = *(arg1 + 0x28) f- *(rbx_1 + (rcx_8 << 2) + 4)
            zmm1 = *(arg1 + 0x24) f- *(rbx_1 + (rcx_8 << 2))
            result = *(arg1 + 0x2c) f- *(rbx_1 + (rcx_8 << 2) + 8)
            
            if (not(zmm2 * zmm2 + zmm1 * zmm1 f+ result f* result >= zmm3))
                *(r8 + (sx.q(*rdx) << 2)) = *(arg1 + 0x10)
            
            *(r8 + (sx.q(*(rdx + 8)) << 2)) = *(arg1 + 0x1c)
            int64_t rcx_11 = sx.q(r10_1[5]) * 3
            zmm2 = *(arg1 + 0x28) f- *(rbx_1 + (rcx_11 << 2) + 4)
            zmm1 = *(arg1 + 0x24) f- *(rbx_1 + (rcx_11 << 2))
            result = *(arg1 + 0x2c) f- *(rbx_1 + (rcx_11 << 2) + 8)
            result = result f* result
            
            if (not(zmm2 * zmm2 + zmm1 * zmm1 f+ result >= zmm3))
                *(r8 + (sx.q(*(rdx + 8)) << 2)) = *(arg1 + 0x10)
            
            r10_1 = &r10_1[8]
            rdx += 0x20
            i = i_2
            i_2 -= 1
        while (i != 1)
    
    if (rsi_1 s< r11_1)
        int64_t i_3 = r11_1 - rsi_1
        int64_t r8_1 = *arg3
        int64_t r10_2 = *arg2[1]
        int32_t* rdx_1 = *r14_1 + (rsi_1 << 3)
        int64_t i_1
        
        do
            *(r8_1 + (sx.q(rdx_1[1]) << 2)) = *(arg1 + 0x1c)
            int64_t rcx_14 = sx.q(*rdx_1) * 3
            zmm2 = *(arg1 + 0x28) f- *(r10_2 + (rcx_14 << 2) + 4)
            zmm1 = *(arg1 + 0x24) f- *(r10_2 + (rcx_14 << 2))
            result = *(arg1 + 0x2c) f- *(r10_2 + (rcx_14 << 2) + 8)
            result = result f* result
            
            if (not(zmm2 * zmm2 + zmm1 * zmm1 f+ result >= zmm3))
                *(r8_1 + (sx.q(rdx_1[1]) << 2)) = *(arg1 + 0x10)
            
            rdx_1 = &rdx_1[2]
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)

return result
