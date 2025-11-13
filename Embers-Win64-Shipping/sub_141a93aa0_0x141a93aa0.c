// 函数: sub_141a93aa0
// 地址: 0x141a93aa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_18 = arg3
int64_t r10 = arg5
int64_t rcx = 0
int64_t rax_1
int32_t rdx
rdx:rax_1 = sx.o(r10)
int64_t var_68 = 0
int64_t rbx = 0
uint64_t result
int32_t rdx_2
rdx_2:result = sx.o(arg4)
int64_t i_3 = ((zx.q(rdx) & 3) + rax_1) & 0xfffffffffffffffc
int64_t i_4 = i_3
int64_t r11_1 = ((zx.q(rdx_2) & 3) + result) & 0xfffffffffffffffc
int64_t var_58 = r11_1

if (i_3 s> 0)
    int64_t rbp_1 = 8
    int64_t var_60_1 = 8
    
    do
        int64_t r9 = arg3[1]
        int64_t r10_1 = *arg3
        int64_t r8 = r10_1 + ((r9 * rcx) << 2)
        int64_t r12_1 = 0
        result = (rbp_1 - 4) * r9 + r10_1
        int64_t rdx_6 = (rbp_1 + 4) * r9 + r10_1
        int64_t rcx_3 = r9 * rbp_1 + r10_1
        
        if (r11_1 s> 0)
            void* r14_2 = arg2 + 0x20 + (rbx << 2)
            int128_t* result_1 = result
            int64_t i_6 = ((var_58 - 1) u>> 2) + 1
            rbx += i_6 << 4
            r12_1 = i_6 << 2
            int64_t i
            
            do
                r14_2 += 0x40
                float zmm0[0x4] = *result_1
                float zmm1[0x4] = *(rdx_6 - result + result_1)
                float zmm4[0x4] = *(r8 - result + result_1)
                float zmm2[0x4] = *(rcx_3 - result + result_1)
                result_1 = &result_1[1]
                float temp0_1[0x4] = _mm_shuffle_ps(zmm4, zmm0, 0xee)
                float temp0_2[0x4] = _mm_shuffle_ps(zmm4, zmm0, 0x44)
                float temp0_3[0x4] = _mm_shuffle_ps(zmm2, zmm1, 0x44)
                float temp0_4[0x4] = _mm_shuffle_ps(zmm2, zmm1, 0xee)
                float temp0_5[0x4] = _mm_shuffle_ps(temp0_2, temp0_3, 0x88)
                float temp0_6[0x4] = _mm_shuffle_ps(temp0_2, temp0_3, 0xdd)
                float temp0_7[0x4] = _mm_shuffle_ps(temp0_1, temp0_4, 0x88)
                float temp0_8[0x4] = _mm_shuffle_ps(temp0_1, temp0_4, 0xdd)
                *(r14_2 - 0x60) = temp0_5
                *(r14_2 - 0x50) = temp0_6
                *(r14_2 - 0x40) = temp0_7
                *(r14_2 - 0x30) = temp0_8
                i = i_6
                i_6 -= 1
            while (i != 1)
            i_3 = i_4
        
        if (r12_1 s< arg4)
            if (arg4 - r12_1 s>= 4)
                void* r11_3 = arg2 + 8 + (rbx << 2)
                void* r10_6 = result + ((r12_1 + 1) << 2)
                int64_t i_5 = ((arg4 - r12_1 - 4) u>> 2) + 1
                int64_t rbp_3 = r8 - result
                int64_t r14_4 = rcx_3 - result
                int64_t r15_4 = rdx_6 - result
                r12_1 += i_5 << 2
                rbx += i_5 << 4
                int64_t i_1
                
                do
                    int32_t r9_12 = *(r10_6 + rbp_3 - 4)
                    r10_6 += 0x10
                    *(r11_3 - 8) = r9_12
                    r11_3 += 0x40
                    *(r11_3 - 0x44) = *(r10_6 - 0x14)
                    *(r11_3 - 0x40) = *(r10_6 + r14_4 - 0x14)
                    *(r11_3 - 0x3c) = *(r10_6 + r15_4 - 0x14)
                    *(r11_3 - 0x38) = *(r10_6 + rbp_3 - 0x10)
                    *(r11_3 - 0x34) = *(r10_6 - 0x10)
                    *(r11_3 - 0x30) = *(r10_6 + r14_4 - 0x10)
                    *(r11_3 - 0x2c) = *(r10_6 + r15_4 - 0x10)
                    *(r11_3 - 0x28) = *(r10_6 + rbp_3 - 0xc)
                    *(r11_3 - 0x24) = *(r10_6 - 0xc)
                    *(r11_3 - 0x20) = *(r10_6 + r14_4 - 0xc)
                    *(r11_3 - 0x1c) = *(r10_6 + r15_4 - 0xc)
                    *(r11_3 - 0x18) = *(r10_6 + rbp_3 - 8)
                    *(r11_3 - 0x14) = *(r10_6 - 8)
                    *(r11_3 - 0x10) = *(r10_6 + r14_4 - 8)
                    *(r11_3 - 0xc) = *(r10_6 + r15_4 - 8)
                    i_1 = i_5
                    i_5 -= 1
                while (i_1 != 1)
                i_3 = i_4
                rbp_1 = var_60_1
            
            if (r12_1 s< arg4)
                int64_t r8_1 = r8 - result
                int64_t rcx_4 = rcx_3 - result
                void* r10_8 = arg2 + 8 + (rbx << 2)
                int64_t rdx_7 = rdx_6 - result
                int32_t* r9_28 = result + (r12_1 << 2)
                int64_t i_7 = arg4 - r12_1
                rbx += i_7 << 2
                int64_t i_2
                
                do
                    int32_t rax_7 = *(r9_28 + r8_1)
                    r9_28 = &r9_28[1]
                    *(r10_8 - 8) = rax_7
                    r10_8 += 0x10
                    *(r10_8 - 0x14) = r9_28[-1]
                    *(r10_8 - 0x10) = *(r9_28 + rcx_4 - 4)
                    result = zx.q(*(r9_28 + rdx_7 - 4))
                    *(r10_8 - 0xc) = result.d
                    i_2 = i_7
                    i_7 -= 1
                while (i_2 != 1)
        
        rbp_1 += 0x10
        arg3 = arg_18
        rcx = var_68 + 4
        r11_1 = var_58
        var_68 = rcx
        var_60_1 = rbp_1
    while (rcx s< i_3)
    
    r10 = arg5

for (; i_3 s< r10; i_3 += 1)
    int64_t r9_29 = 0
    result = *arg3 + ((arg3[1] * i_3) << 2)
    
    if (arg4 s>= 4)
        int64_t j_1 = ((arg4 - 4) u>> 2) + 1
        void* rdx_9 = arg2 + 8 + (rbx << 2)
        void* r8_2 = result + 8
        r9_29 = j_1 << 2
        rbx += r9_29
        int64_t j
        
        do
            int32_t rcx_8 = *(r8_2 - 8)
            r8_2 += 0x10
            *(rdx_9 - 8) = rcx_8
            rdx_9 += 0x10
            *(rdx_9 - 0x14) = *(r8_2 - 0x14)
            *(rdx_9 - 0x10) = *(r8_2 - 0x10)
            *(rdx_9 - 0xc) = *(r8_2 - 0xc)
            j = j_1
            j_1 -= 1
        while (j != 1)
        arg3 = arg_18
        r10 = arg5
    
    while (r9_29 s< arg4)
        int32_t rcx_12 = *(result + (r9_29 << 2))
        r9_29 += 1
        *(arg2 + (rbx << 2)) = rcx_12
        rbx += 1

return result
