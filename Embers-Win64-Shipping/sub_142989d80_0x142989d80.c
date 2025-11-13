// 函数: sub_142989d80
// 地址: 0x142989d80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t i_2 = sx.q(arg2)
float zmm0[0x4] = sub_14298aaf0(*arg3)
float zmm7[0x4] = zmm0
float zmm10[0x4] = zmm0
uint64_t result
float zmm0_1[0x4]
result, zmm0_1 = sub_14298aaf0(arg3[2])
int32_t rdi = 0
float zmm6[0x4] = zmm0_1
float zmm11[0x4] = zmm0_1
int64_t i_1 = i_2

if (i_2.d s> 0)
    void* rbx = arg4 + 4
    float zmm8[0x4] = 0x3f800000
    result = -4 - arg4
    float zmm12[0x4]
    float var_a8_1[0x4] = zmm12
    float (* rbp_1)[0x4] = arg1
    uint64_t result_1 = result
    int64_t i
    
    do
        float zmm3_1 = zmm10[0]
        zmm12 = zmm11
        zmm10 = zmm7
        zmm11 = zmm6
        float zmm1_1[0x4]
        float zmm2_1
        float zmm4_1
        float zmm5
        
        if (rdi s< (i_2 - 1).d)
            void* r14_1 = rbx + 4 - arg4
            int16_t* r10_2 = *arg3 + r14_1
            uint64_t r8 = zx.q(r10_2[1])
            uint64_t rdx = zx.q(r10_2[2])
            void* r9 = &r10_2[2]
            int16_t rax = rdx.w
            zmm4_1 = *(&data_1436bbc50 + (r8 << 2))
            zmm5 = *(&data_1436bbc50 + (rdx << 2))
            
            if (zmm5 <= zmm4_1)
                rax = r8.w
            
            uint64_t rcx_2 = zx.q(rax)
            uint64_t rax_1 = zx.q(*r10_2)
            zmm1_1 = *(&data_1436bbc50 + (rax_1 << 2))
            
            if ((*(&data_1436bbc50 + (rcx_2 << 2)))[0] <= zmm1_1[0])
                rcx_2.w = rax_1.w
            
            zmm2_1 = *(&data_1436bbc50 + (zx.q(rcx_2.w) << 2))
            
            if (zmm4_1 <= zmm5)
                rdx.w = r8.w
            
            if (zmm1_1[0] f<= *(&data_1436bbc50 + (zx.q(rdx.w) << 2)))
                r9 = r10_2
            else if (zmm4_1 <= zmm5)
                r9 = &r10_2[1]
            
            if (zmm2_1 <= 0f)
                zmm7 = zx.o(0)
            else
                zmm7 = zmm8
                zmm0_1 = *(&data_1436bbc50 + (zx.q(*r9) << 2))
                zmm0_1[0] = zmm0_1[0] / zmm2_1
                zmm7[0] = zmm7[0] - zmm0_1[0]
            
            int16_t* r10_4 = arg3[2] + r14_1
            uint64_t r8_1 = zx.q(r10_4[1])
            uint64_t rdx_1 = zx.q(r10_4[2])
            void* r9_1 = &r10_4[2]
            int16_t rax_5 = rdx_1.w
            zmm4_1 = *(&data_1436bbc50 + (r8_1 << 2))
            zmm5 = *(&data_1436bbc50 + (rdx_1 << 2))
            
            if (zmm5 <= zmm4_1)
                rax_5 = r8_1.w
            
            uint64_t rcx_3 = zx.q(rax_5)
            uint64_t rax_6 = zx.q(*r10_4)
            zmm1_1 = *(&data_1436bbc50 + (rax_6 << 2))
            
            if ((*(&data_1436bbc50 + (rcx_3 << 2)))[0] <= zmm1_1[0])
                rcx_3.w = rax_6.w
            
            zmm2_1 = *(&data_1436bbc50 + (zx.q(rcx_3.w) << 2))
            
            if (zmm4_1 <= zmm5)
                rdx_1.w = r8_1.w
            
            if (zmm1_1[0] f<= *(&data_1436bbc50 + (zx.q(rdx_1.w) << 2)))
                r9_1 = r10_4
            else if (zmm4_1 <= zmm5)
                r9_1 = &r10_4[1]
            
            rbp_1 = arg1
            
            if (zmm2_1 <= 0f)
                zmm6 = zx.o(0)
            else
                zmm6 = zmm8
                zmm0_1 = *(&data_1436bbc50 + (zx.q(*r9_1) << 2))
                zmm0_1[0] = zmm0_1[0] / zmm2_1
                zmm6[0] = zmm6[0] - zmm0_1[0]
            
            result = result_1
        
        void* r10_6 = result + rbx + arg3[1]
        uint64_t r8_2 = zx.q(*(r10_6 + 2))
        uint64_t rdx_2 = zx.q(*(r10_6 + 4))
        zmm2_1 = *(&data_1436bbc50 + (r8_2 << 2))
        uint64_t r11_3 = zx.q(*r10_6)
        zmm1_1 = *(&data_1436bbc50 + (rdx_2 << 2))
        int16_t rax_10 = rdx_2.w
        
        if (zmm1_1[0] <= zmm2_1)
            rax_10 = r8_2.w
        
        uint64_t rcx_4 = zx.q(rax_10)
        zmm4_1 = *(&data_1436bbc50 + (r11_3 << 2))
        bool cond:1_1 = (*(&data_1436bbc50 + (rcx_4 << 2)))[0] <= zmm4_1
        float temp0_1 = _mm_min_ss((zmm3_1 + zmm7[0] + zmm12[0] + zmm6[0]) * 0.25f, zmm8[0])
        
        if (cond:1_1)
            rcx_4.w = r11_3.w
        
        zmm2_1 - zmm1_1[0]
        zmm5 = *(&data_1436bbc50 + (zx.q(rcx_4.w) << 2))
        void* rcx_5 = r10_6 + 4
        
        if (zmm2_1 <= zmm1_1[0])
            rdx_2.w = r8_2.w
        
        if (zmm2_1 <= zmm1_1[0])
            rcx_5 = r10_6 + 2
        
        if (zmm5 <= 0f)
            zmm2_1 = (zx.o(0)).d
        else
            zmm2_1 = zmm8[0]
            
            if (zmm4_1 f<= *(&data_1436bbc50 + (zx.q(rdx_2.w) << 2)))
                rcx_5 = r10_6
            
            zmm0_1 = *(&data_1436bbc50 + (zx.q(*rcx_5) << 2))
            zmm0_1[0] = zmm0_1[0] / zmm5
            zmm2_1 = zmm2_1 - zmm0_1[0]
        
        float temp0_2[0x4]
        
        if (not(zmm2_1 <= temp0_1))
            zmm8[0] = zmm8[0] - temp0_1
            zmm8[0] = zmm8[0] * 0.25f
            zmm8[0] = zmm8[0] - zmm8[0]
            temp0_2 = _mm_min_ss(zmm8[0], zmm8[0])
        
        if (zmm2_1 <= temp0_1 || zmm2_1 <= temp0_2[0])
            *(rbx - 4) = r11_3.w
            *(rbx - 2) = *(r10_6 + 2)
            *rbx = *(r10_6 + 4)
            *(rbx + 2) = *(r10_6 + 6)
        else
            temp0_2[0] = temp0_2[0] / zmm2_1
            zmm6, zmm7, zmm8 = sub_142989b40(r10_6, temp0_2, rbp_1, rbx - 4)
        
        result = result_1
        rdi += 1
        rbx += 8
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
