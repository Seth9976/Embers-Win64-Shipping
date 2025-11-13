// 函数: sub_141a93660
// 地址: 0x141a93660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_18 = arg3
int64_t r10 = arg5
int64_t rbp = arg6
int64_t rcx = 0
int64_t rax_1
int32_t rdx
rdx:rax_1 = sx.o(r10)
int64_t var_78 = 0
int64_t r11 = 0
uint64_t result
int32_t rdx_2
rdx_2:result = sx.o(arg4)
int64_t rsi_1 = ((zx.q(rdx) & 3) + rax_1) & 0xfffffffffffffffc
int64_t arg_20 = rsi_1
int64_t rbx_1 = ((zx.q(rdx_2) & 3) + result) & 0xfffffffffffffffc
int64_t var_68 = rbx_1

if (rsi_1 s> 0)
    int64_t r14_1 = 8
    int64_t r9 = arg7 << 2
    int64_t var_48_1 = r9
    int64_t var_70_1 = 8
    
    do
        int64_t r10_1 = *arg3
        int64_t r11_1 = r11 + r9
        int64_t r12_1 = 0
        int64_t r9_1 = arg3[1]
        int64_t rdx_7 = (r14_1 + 4) * r9_1 + r10_1
        int64_t r8 = r10_1 + ((r9_1 * rcx) << 2)
        int64_t rcx_3 = r9_1 * r14_1 + r10_1
        result = (r14_1 - 4) * r9_1 + r10_1
        
        if (rbx_1 s> 0)
            void* rbp_2 = arg2 + 0x20 + (r11_1 << 2)
            int128_t* result_1 = result
            int64_t i_6 = ((var_68 - 1) u>> 2) + 1
            r11_1 += i_6 << 4
            r12_1 = i_6 << 2
            int64_t i
            
            do
                rbp_2 += 0x40
                float zmm0[0x4] = *result_1
                float zmm1[0x4] = *(rdx_7 - result + result_1)
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
                *(rbp_2 - 0x60) = temp0_5
                *(rbp_2 - 0x50) = temp0_6
                *(rbp_2 - 0x40) = temp0_7
                *(rbp_2 - 0x30) = temp0_8
                i = i_6
                i_6 -= 1
            while (i != 1)
            rsi_1 = arg_20
        
        if (r12_1 s< arg4)
            if (arg4 - r12_1 s>= 4)
                void* rbx_3 = arg2 + 8 + (r11_1 << 2)
                void* r10_6 = result + ((r12_1 + 1) << 2)
                int64_t i_5 = ((arg4 - r12_1 - 4) u>> 2) + 1
                int64_t rbp_4 = r8 - result
                int64_t r14_3 = rcx_3 - result
                int64_t r15_4 = rdx_7 - result
                r12_1 += i_5 << 2
                r11_1 += i_5 << 4
                int64_t i_1
                
                do
                    int32_t r9_13 = *(r10_6 + rbp_4 - 4)
                    r10_6 += 0x10
                    *(rbx_3 - 8) = r9_13
                    rbx_3 += 0x40
                    *(rbx_3 - 0x44) = *(r10_6 - 0x14)
                    *(rbx_3 - 0x40) = *(r10_6 + r14_3 - 0x14)
                    *(rbx_3 - 0x3c) = *(r10_6 + r15_4 - 0x14)
                    *(rbx_3 - 0x38) = *(r10_6 + rbp_4 - 0x10)
                    *(rbx_3 - 0x34) = *(r10_6 - 0x10)
                    *(rbx_3 - 0x30) = *(r10_6 + r14_3 - 0x10)
                    *(rbx_3 - 0x2c) = *(r10_6 + r15_4 - 0x10)
                    *(rbx_3 - 0x28) = *(r10_6 + rbp_4 - 0xc)
                    *(rbx_3 - 0x24) = *(r10_6 - 0xc)
                    *(rbx_3 - 0x20) = *(r10_6 + r14_3 - 0xc)
                    *(rbx_3 - 0x1c) = *(r10_6 + r15_4 - 0xc)
                    *(rbx_3 - 0x18) = *(r10_6 + rbp_4 - 8)
                    *(rbx_3 - 0x14) = *(r10_6 - 8)
                    *(rbx_3 - 0x10) = *(r10_6 + r14_3 - 8)
                    *(rbx_3 - 0xc) = *(r10_6 + r15_4 - 8)
                    i_1 = i_5
                    i_5 -= 1
                while (i_1 != 1)
                rsi_1 = arg_20
                r14_1 = var_70_1
            
            if (r12_1 s< arg4)
                int64_t r8_1 = r8 - result
                int64_t rcx_4 = rcx_3 - result
                void* r10_8 = arg2 + 8 + (r11_1 << 2)
                int64_t rdx_8 = rdx_7 - result
                int32_t* r9_29 = result + (r12_1 << 2)
                int64_t i_4 = arg4 - r12_1
                r11_1 += i_4 << 2
                int64_t i_2
                
                do
                    int32_t rax_11 = *(r9_29 + r8_1)
                    r9_29 = &r9_29[1]
                    *(r10_8 - 8) = rax_11
                    r10_8 += 0x10
                    *(r10_8 - 0x14) = r9_29[-1]
                    *(r10_8 - 0x10) = *(r9_29 + rcx_4 - 4)
                    result = zx.q(*(r9_29 + rdx_8 - 4))
                    *(r10_8 - 0xc) = result.d
                    i_2 = i_4
                    i_4 -= 1
                while (i_2 != 1)
        
        r14_1 += 0x10
        r11 = r11_1 + ((rbp - arg4 - arg7) << 2)
        rcx = var_78 + 4
        arg3 = arg_18
        rbx_1 = var_68
        r9 = var_48_1
        var_78 = rcx
        var_70_1 = r14_1
    while (rcx s< rsi_1)
    
    r10 = arg5
    rbp = arg6

if (rsi_1 s< r10)
    int64_t rdx_9 = arg7
    
    do
        int64_t r11_2 = r11 + rdx_9
        int64_t r9_30 = 0
        void* rax_15 = *arg3 + ((arg3[1] * rsi_1) << 2)
        
        if (arg4 s>= 4)
            int64_t i_7 = ((arg4 - 4) u>> 2) + 1
            void* rdx_11 = arg2 + 8 + (r11_2 << 2)
            void* r8_2 = rax_15 + 8
            r9_30 = i_7 << 2
            r11_2 += r9_30
            int64_t i_3
            
            do
                int32_t rcx_8 = *(r8_2 - 8)
                r8_2 += 0x10
                *(rdx_11 - 8) = rcx_8
                rdx_11 += 0x10
                *(rdx_11 - 0x14) = *(r8_2 - 0x14)
                *(rdx_11 - 0x10) = *(r8_2 - 0x10)
                *(rdx_11 - 0xc) = *(r8_2 - 0xc)
                i_3 = i_7
                i_7 -= 1
            while (i_3 != 1)
            arg3 = arg_18
            rdx_9 = arg7
            r10 = arg5
        
        while (r9_30 s< arg4)
            int32_t rcx_12 = *(rax_15 + (r9_30 << 2))
            r9_30 += 1
            *(arg2 + (r11_2 << 2)) = rcx_12
            r11_2 += 1
        
        rsi_1 += 1
        result = rbp - arg4 - rdx_9
        r11 = r11_2 + result
    while (rsi_1 s< r10)

return result
