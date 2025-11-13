// 函数: sub_141ad1a00
// 地址: 0x141ad1a00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax_1 = sub_141e1eab0(sub_141e23160(arg1), arg2)
void* r8 = *(arg1 + 0x30)

if (r8 != 0)
    uint32_t zmm0_1[0x4] = *(arg1 + 0x38)
    float zmm3_1[0x4]
    
    if (zmm0_1[0] f>= 0f)
        zmm3_1 = _mm_min_ss((*(r8 + 0x90))[0], zmm0_1[0])
    else
        zmm3_1 = zx.o(0)
    
    bool cond:0_1 = *(arg1 + 0x3d) == 0
    *(arg1 + 0x38) = zmm3_1[0]
    
    if (cond:0_1 || *(arg1 + 0x10) != 0xffffffff)
        rax_1 = *arg2
        int64_t rcx_1 = *(rax_1 + 0xb0)
        
        if (rcx_1 != 0 && *(r8 + 0x38) == rcx_1)
            uint32_t zmm1_1[0x4]
            
            if (*(arg1 + 0x3f) == 0)
                zmm0_1 = *(arg1 + 0x1c)
            else
                uint32_t rcx_2 = zx.d(*(arg1 + 0x3e))
                
                if (rcx_2 == 1)
                    *(arg1 + 0x1c) = *(arg1 + 0x40)
                else if (rcx_2 == 2)
                    *(arg1 + 0x1c) = zmm3_1[0]
                
                zmm1_1 = *(arg1 + 0x1c)
                
                if (zmm1_1[0] f>= 0f)
                    zmm0_1 = _mm_min_ss((*(r8 + 0x90))[0], zmm1_1[0])
                    *(arg1 + 0x1c) = zmm0_1[0]
                else
                    zmm0_1 = zx.o(0)
                    *(arg1 + 0x1c) = 0
            
            char r9 = *(arg1 + 0x3c)
            float zmm2[0x4] = zmm3_1
            zmm2[0] = zmm2[0] f- zmm0_1[0]
            uint32_t zmm5_1[0x4]
            
            if (r9 != 0)
                zmm5_1 = *(r8 + 0x90)
                uint32_t temp0_4[0x4] = __andps_xmmxud_memxud(zmm2, data_142d3f770)
                zmm5_1[0] = zmm5_1[0] f* 0.5f
                
                if (not(temp0_4[0] f<= zmm5_1[0]))
                    if (zmm2[0] <= 0f)
                        zmm2[0] = zmm2[0] f+ zmm5_1[0]
                    else
                        zmm2[0] = zmm2[0] f- zmm5_1[0]
            
            if (not(zmm2[0] != 0f))
                *(arg1 + 0x1c) = zmm3_1[0]
            
            zmm5_1 = arg2[3].d
            uint32_t temp0_5[0x4] = __andps_xmmxud_memxud(zmm5_1, data_142d3f770)
            uint32_t temp0_6[0x4]
            
            if (not(temp0_5[0] f<= 9.99999994e-09f))
                zmm1_1 = *(r8 + 0x94)
                temp0_6 = __andps_xmmxud_memxud(zmm1_1, data_142d3f770)
            
            if (temp0_5[0] f<= 9.99999994e-09f || temp0_6[0] f<= 9.99999994e-09f)
                zmm2 = zx.o(0)
            else
                zmm1_1[0] = zmm1_1[0] f* zmm5_1[0]
                zmm2[0] = zmm2[0] f/ zmm1_1[0]
            
            int64_t rax_3 = sub_141e1b5d0(arg1, arg2, r8, r9, zmm2[0])
            *(arg1 + 0x3f) = 0
            return rax_3
    
    *(arg1 + 0x1c) = zmm3_1[0]

*(arg1 + 0x3f) = 0
return rax_1
