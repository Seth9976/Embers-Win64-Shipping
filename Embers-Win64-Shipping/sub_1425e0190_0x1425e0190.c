// 函数: sub_1425e0190
// 地址: 0x1425e0190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sx.q(arg1[0xc].d)

if (result.d != 0xffffffff)
    int64_t* r15_1 = *((result << 6) + arg1[0x26] + 8)
    int64_t rdx_1
    rdx_1.b = 1
    void* r14_4 = &arg1[(sx.q(arg1[0x29].d) + 0x15) * 2]
    void* r12_2 = result * 0x158 + *(*arg1 + 0xc8)
    void* rax_2
    float* result_10
    rax_2, result_10 = sub_1425d6560(r12_2, rdx_1.b)
    int64_t rbp_1 = 0
    float* result_1
    float zmm0
    float zmm1
    float zmm2
    
    if (rax_2 != 0 && *(rax_2 + 8) != 0)
        int64_t r8_2 = *r15_1
        (*(r8_2 + 0x210))(r15_1, &result_1, r8_2)
        int64_t rdx_3 = *r15_1
        int32_t rax_3
        rax_3, result_10 = (*(rdx_3 + 0x220))(r15_1, rdx_3)
        int64_t r11_1 = sx.q(rax_3)
        int64_t i = 0
        
        if (r11_1 s>= 4)
            void* rax_4 = *r14_4
            result_10 = nullptr
            int32_t* r9_1 = rax_4 + 8
            void* r10_1 = rax_4 + 0x14
            
            do
                result_10 = &result_10[0x10]
                zmm1 = r9_1[-1]
                r10_1 += 0x30
                zmm2 = *r9_1
                r9_1 = &r9_1[0xc]
                float* result_6 = result_1
                zmm0 = *(*rax_2 + (i << 2)) f* *(arg2 + 0x80)
                *(result_10 + result_6 - 0x40) = r9_1[-0xe]
                *(result_10 + result_6 - 0x3c) = zmm1
                *(result_10 + result_6 - 0x38) = zmm2
                *(result_10 + result_6 - 0x34) = zmm0
                zmm1 = *(r10_1 - 0x34)
                zmm2 = *(r10_1 - 0x30)
                float* result_7 = result_1
                zmm0 = *(*rax_2 + (i << 2) + 4) f* *(arg2 + 0x80)
                *(result_10 + result_7 - 0x30) = r9_1[-0xb]
                *(result_10 + result_7 - 0x2c) = zmm1
                *(result_10 + result_7 - 0x28) = zmm2
                *(result_10 + result_7 - 0x24) = zmm0
                zmm1 = *(r10_1 - 0x28)
                zmm2 = *(r10_1 - 0x24)
                float* result_8 = result_1
                zmm0 = *(*rax_2 + (i << 2) + 8) f* *(arg2 + 0x80)
                *(result_10 + result_8 - 0x20) = r9_1[-8]
                *(result_10 + result_8 - 0x1c) = zmm1
                *(result_10 + result_8 - 0x18) = zmm2
                *(result_10 + result_8 - 0x14) = zmm0
                zmm1 = *(r10_1 - 0x1c)
                zmm2 = *(r10_1 - 0x18)
                float* result_9 = result_1
                zmm0 = *(*rax_2 + (i << 2) + 0xc)
                i += 4
                zmm0 = zmm0 f* *(arg2 + 0x80)
                *(result_10 + result_9 - 0x10) = r9_1[-5]
                *(result_10 + result_9 - 0xc) = zmm1
                *(result_10 + result_9 - 8) = zmm2
                *(result_10 + result_9 - 4) = zmm0
            while (i s< r11_1 - 3)
        
        if (i s< r11_1)
            int64_t r9_3 = i << 4
            void* r10_2 = *r14_4 + i * 0xc
            
            do
                r9_3 += 0x10
                zmm1 = *(r10_2 + 4)
                zmm2 = *(r10_2 + 8)
                r10_2 += 0xc
                result_10 = result_1
                zmm0 = *(*rax_2 + (i << 2))
                i += 1
                zmm0 = zmm0 f* *(arg2 + 0x80)
                *(r9_3 + result_10 - 0x10) = *(r10_2 - 0xc)
                *(r9_3 + result_10 - 0xc) = zmm1
                *(r9_3 + result_10 - 8) = zmm2
                *(r9_3 + result_10 - 4) = zmm0
            while (i s< r11_1)
    
    result_10.b = 2
    void* rax_16 = sub_1425d6560(r12_2, result_10.b)
    result = sub_1425d6560(r12_2, 3)
    int64_t result_2 = result
    
    if (rax_16 != 0 && *(rax_16 + 8) != 0 && result != 0 && *(result + 8) != 0)
        int64_t r8_3 = *r15_1
        (*(r8_3 + 0x250))(r15_1, &result_1, r8_3)
        result = (*(*r15_1 + 0x260))(r15_1)
        int64_t r11_2 = sx.q(result.d)
        int64_t i_1 = 0
        float zmm3
        float zmm4_1
        float zmm5_1
        
        if (r11_2 s>= 4)
            void* rax_18 = *r14_4
            void* r9_4 = rax_18 + 8
            float* r13_2 = rax_18 + 0x14
            
            do
                int64_t rcx_8 = arg1[0x2e]
                float* rdx_6 = -8 - rax_18 + r9_4
                zmm4_1 = *(*rax_16 + (i_1 << 2))
                zmm0 = *(r9_4 - 4) - zmm4_1 f* *(rdx_6 + rcx_8 + 4)
                zmm1 = *(*result_2 + (i_1 << 2))
                float* result_3 = result_1
                zmm2 = *r9_4 - *(rdx_6 + rcx_8 + 8) * zmm4_1
                *(result_3 + rbp_1) = *(r9_4 - 8) - zmm4_1 f* *(rdx_6 + rcx_8)
                *(result_3 + rbp_1 + 4) = zmm0
                *(result_3 + rbp_1 + 8) = zmm2
                *(result_3 + rbp_1 + 0xc) = zmm1
                int64_t rcx_9 = arg1[0x2e]
                zmm4_1 = *(*rax_16 + (i_1 << 2) + 4)
                zmm0 = r13_2[-1] - zmm4_1 f* *(rdx_6 + rcx_9 + 0x10)
                zmm1 = *(*result_2 + (i_1 << 2) + 4)
                float* result_4 = result_1
                zmm2 = *r13_2 - *(rdx_6 + rcx_9 + 0x14) * zmm4_1
                *(result_4 + rbp_1 + 0x10) = *(r9_4 + 4) - zmm4_1 f* *(rdx_6 + rcx_9 + 0xc)
                *(result_4 + rbp_1 + 0x14) = zmm0
                *(result_4 + rbp_1 + 0x18) = zmm2
                *(result_4 + rbp_1 + 0x1c) = zmm1
                float* rcx_11 = arg1[0x2e] + 0x10 - rax_18
                zmm4_1 = *(*rax_16 + (i_1 << 2) + 8)
                zmm0 = r13_2[2] - zmm4_1 f* *(rcx_11 + r9_4 + 4)
                zmm1 = *(*result_2 + (i_1 << 2) + 8)
                float* result_5 = result_1
                zmm2 = r13_2[3] - *(rcx_11 + r9_4 + 8) * zmm4_1
                *(result_5 + rbp_1 + 0x20) = *(r9_4 + 0x10) - zmm4_1 f* *(rcx_11 + r9_4)
                *(result_5 + rbp_1 + 0x24) = zmm0
                *(result_5 + rbp_1 + 0x28) = zmm2
                *(result_5 + rbp_1 + 0x2c) = zmm1
                float* rcx_13 = arg1[0x2e] + 0x1c - rax_18
                zmm4_1 = *(*rax_16 + (i_1 << 2) + 0xc)
                zmm5_1 = *(rcx_13 + r9_4 + 8)
                zmm3 = *(r9_4 + 0x1c) - zmm4_1 f* *(rcx_13 + r9_4)
                zmm0 = r13_2[5] - zmm4_1 f* *(rcx_13 + r9_4 + 4)
                r9_4 += 0x30
                zmm2 = r13_2[6]
                r13_2 = &r13_2[0xc]
                zmm1 = *(*result_2 + (i_1 << 2) + 0xc)
                i_1 += 4
                result = result_1
                *(result + rbp_1 + 0x30) = zmm3
                *(result + rbp_1 + 0x34) = zmm0
                *(result + rbp_1 + 0x38) = zmm2 - zmm5_1 * zmm4_1
                *(result + rbp_1 + 0x3c) = zmm1
                rbp_1 += 0x40
            while (i_1 s< r11_2 - 3)
        
        if (i_1 s< r11_2)
            void* rbp_2 = *r14_4
            int64_t r9_5 = i_1 * 0xc
            int64_t rdx_8 = i_1 << 4
            float* r10_5 = rbp_2 + 8 + r9_5
            
            do
                int64_t rcx_14 = arg1[0x2e]
                zmm3 = *(r9_5 + rbp_2)
                zmm2 = *r10_5
                zmm5_1 = *(r9_5 + rcx_14 + 8)
                zmm4_1 = *(*rax_16 + (i_1 << 2))
                zmm0 = zmm4_1 f* *(r9_5 + rcx_14)
                zmm1 = zmm4_1 f* *(r9_5 + rcx_14 + 4)
                r9_5 += 0xc
                zmm3 = zmm3 - zmm0
                zmm0 = r10_5[-1]
                r10_5 = &r10_5[3]
                zmm0 = zmm0 - zmm1
                zmm1 = *(*result_2 + (i_1 << 2))
                result = result_1
                i_1 += 1
                *(result + rdx_8) = zmm3
                *(result + rdx_8 + 4) = zmm0
                *(result + rdx_8 + 8) = zmm2 - zmm5_1 * zmm4_1
                *(result + rdx_8 + 0xc) = zmm1
                rdx_8 += 0x10
            while (i_1 s< r11_2)

return result
