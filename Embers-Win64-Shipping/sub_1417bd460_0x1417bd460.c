// 函数: sub_1417bd460
// 地址: 0x1417bd460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t result_1[0x4] = *(arg1 + 0x20)
uint32_t result[0x4] = zx.o(0)
result_1[0] = result_1[0] f* result_1[0]

if (not(result_1[0] f<= 0f))
    uint32_t zmm4[0x4] = *(arg1 + 0x18)
    zmm4[0] = zmm4[0] f- *(arg1 + 0x14)
    int64_t* r15_1 = *arg2
    zmm4[0] = zmm4[0] f- 1f
    int64_t rbx_1 = sx.q(r15_1[1].d)
    result = __andps_xmmxud_memxud(zmm4, data_142d3f770)
    bool r11 = result[0] f> 9.99999975e-05f
    int64_t rbp_1 = 0
    float zmm1
    float zmm3
    
    if (rbx_1 s>= 4)
        void* rcx = *r15_1
        int64_t rdx = *arg3
        int32_t* r10_1 = rcx + 4
        int64_t i_3 = ((rbx_1 - 4) u>> 2) + 1
        int64_t rdi_1 = *arg2[1]
        int32_t* r8 = rcx + 0x14
        rbp_1 = i_3 << 2
        int64_t i
        
        do
            *(rdx + (sx.q(*r10_1) << 2)) = *(arg1 + 0x1c)
            result = *(arg1 + 0x2c)
            int64_t rcx_2 = sx.q(r10_1[-1]) * 3
            zmm3 = *(arg1 + 0x28) f- *(rdi_1 + (rcx_2 << 2) + 4)
            zmm1 = *(arg1 + 0x24) f- *(rdi_1 + (rcx_2 << 2))
            result[0] = result[0] f- *(rdi_1 + (rcx_2 << 2) + 8)
            result[0] = result[0] f* result[0]
            zmm3 = zmm3 * zmm3 + zmm1 * zmm1 f+ result[0]
            
            if (not(zmm3 f>= result_1[0]))
                int64_t rax_4 = sx.q(*r10_1)
                result_1[0] = result_1[0] f- zmm3
                result_1[0] = result_1[0] f* *(arg1 + 0x10)
                result_1[0] = result_1[0] f/ result_1[0]
                *(rdx + (rax_4 << 2)) = result_1[0]
                
                if (r11 != 0)
                    int64_t rax_5 = sx.q(*r10_1)
                    zmm4[0] = zmm4[0] f* *(rdx + (rax_5 << 2))
                    *(rdx + (rax_5 << 2)) = zmm4[0]
                    int64_t rax_6 = sx.q(*r10_1)
                    result = *(rdx + (rax_6 << 2))
                    result[0] = result[0] f+ *(arg1 + 0x14)
                    *(rdx + (rax_6 << 2)) = result[0]
            
            *(rdx + (sx.q(r8[-2]) << 2)) = *(arg1 + 0x1c)
            result = *(arg1 + 0x2c)
            int64_t rcx_4 = sx.q(r10_1[1]) * 3
            zmm3 = *(arg1 + 0x28) f- *(rdi_1 + (rcx_4 << 2) + 4)
            zmm1 = *(arg1 + 0x24) f- *(rdi_1 + (rcx_4 << 2))
            result[0] = result[0] f- *(rdi_1 + (rcx_4 << 2) + 8)
            result[0] = result[0] f* result[0]
            zmm3 = zmm3 * zmm3 + zmm1 * zmm1 f+ result[0]
            
            if (not(zmm3 f>= result_1[0]))
                int64_t rax_9 = sx.q(r8[-2])
                result_1[0] = result_1[0] f- zmm3
                result_1[0] = result_1[0] f* *(arg1 + 0x10)
                result_1[0] = result_1[0] f/ result_1[0]
                *(rdx + (rax_9 << 2)) = result_1[0]
                
                if (r11 != 0)
                    int64_t rax_10 = sx.q(r8[-2])
                    zmm4[0] = zmm4[0] f* *(rdx + (rax_10 << 2))
                    *(rdx + (rax_10 << 2)) = zmm4[0]
                    int64_t rax_11 = sx.q(r8[-2])
                    result = *(rdx + (rax_11 << 2))
                    result[0] = result[0] f+ *(arg1 + 0x14)
                    *(rdx + (rax_11 << 2)) = result[0]
            
            *(rdx + (sx.q(*r8) << 2)) = *(arg1 + 0x1c)
            result = *(arg1 + 0x2c)
            int64_t rcx_6 = sx.q(r10_1[3]) * 3
            zmm3 = *(arg1 + 0x28) f- *(rdi_1 + (rcx_6 << 2) + 4)
            zmm1 = *(arg1 + 0x24) f- *(rdi_1 + (rcx_6 << 2))
            result[0] = result[0] f- *(rdi_1 + (rcx_6 << 2) + 8)
            result[0] = result[0] f* result[0]
            zmm3 = zmm3 * zmm3 + zmm1 * zmm1 f+ result[0]
            
            if (not(zmm3 f>= result_1[0]))
                int64_t rax_14 = sx.q(*r8)
                result_1[0] = result_1[0] f- zmm3
                result_1[0] = result_1[0] f* *(arg1 + 0x10)
                result_1[0] = result_1[0] f/ result_1[0]
                *(rdx + (rax_14 << 2)) = result_1[0]
                
                if (r11 != 0)
                    int64_t rax_15 = sx.q(*r8)
                    zmm4[0] = zmm4[0] f* *(rdx + (rax_15 << 2))
                    *(rdx + (rax_15 << 2)) = zmm4[0]
                    int64_t rax_16 = sx.q(*r8)
                    result = *(rdx + (rax_16 << 2))
                    result[0] = result[0] f+ *(arg1 + 0x14)
                    *(rdx + (rax_16 << 2)) = result[0]
            
            *(rdx + (sx.q(r8[2]) << 2)) = *(arg1 + 0x1c)
            result = *(arg1 + 0x2c)
            int64_t rcx_8 = sx.q(r10_1[5]) * 3
            zmm3 = *(arg1 + 0x28) f- *(rdi_1 + (rcx_8 << 2) + 4)
            zmm1 = *(arg1 + 0x24) f- *(rdi_1 + (rcx_8 << 2))
            result[0] = result[0] f- *(rdi_1 + (rcx_8 << 2) + 8)
            result[0] = result[0] f* result[0]
            zmm3 = zmm3 * zmm3 + zmm1 * zmm1 f+ result[0]
            
            if (not(zmm3 f>= result_1[0]))
                int64_t rax_19 = sx.q(r8[2])
                result = result_1
                result[0] = result[0] f- zmm3
                result[0] = result[0] f* *(arg1 + 0x10)
                result[0] = result[0] f/ result_1[0]
                *(rdx + (rax_19 << 2)) = result[0]
                
                if (r11 != 0)
                    int64_t rax_20 = sx.q(r8[2])
                    zmm4[0] = zmm4[0] f* *(rdx + (rax_20 << 2))
                    *(rdx + (rax_20 << 2)) = zmm4[0]
                    int64_t rax_21 = sx.q(r8[2])
                    result = *(arg1 + 0x14)
                    result[0] = result[0] f+ *(rdx + (rax_21 << 2))
                    *(rdx + (rax_21 << 2)) = result[0]
            
            r10_1 = &r10_1[8]
            r8 = &r8[8]
            i = i_3
            i_3 -= 1
        while (i != 1)
    
    if (rbp_1 s< rbx_1)
        int64_t i_2 = rbx_1 - rbp_1
        int64_t r8_1 = *arg3
        int64_t r10_2 = *arg2[1]
        int32_t* rdx_1 = *r15_1 + (rbp_1 << 3)
        int64_t i_1
        
        do
            *(r8_1 + (sx.q(rdx_1[1]) << 2)) = *(arg1 + 0x1c)
            result = *(arg1 + 0x2c)
            int64_t rcx_10 = sx.q(*rdx_1) * 3
            zmm3 = *(arg1 + 0x28) f- *(r10_2 + (rcx_10 << 2) + 4)
            zmm1 = *(arg1 + 0x24) f- *(r10_2 + (rcx_10 << 2))
            result[0] = result[0] f- *(r10_2 + (rcx_10 << 2) + 8)
            result[0] = result[0] f* result[0]
            zmm3 = zmm3 * zmm3 + zmm1 * zmm1 f+ result[0]
            
            if (not(zmm3 f>= result_1[0]))
                int64_t rax_26 = sx.q(rdx_1[1])
                result = result_1
                result[0] = result[0] f- zmm3
                result[0] = result[0] f* *(arg1 + 0x10)
                result[0] = result[0] f/ result_1[0]
                *(r8_1 + (rax_26 << 2)) = result[0]
                
                if (r11 != 0)
                    int64_t rax_27 = sx.q(rdx_1[1])
                    zmm4[0] = zmm4[0] f* *(r8_1 + (rax_27 << 2))
                    *(r8_1 + (rax_27 << 2)) = zmm4[0]
                    int64_t rax_28 = sx.q(rdx_1[1])
                    result = *(r8_1 + (rax_28 << 2))
                    result[0] = result[0] f+ *(arg1 + 0x14)
                    *(r8_1 + (rax_28 << 2)) = result[0]
            
            rdx_1 = &rdx_1[2]
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)

return result
