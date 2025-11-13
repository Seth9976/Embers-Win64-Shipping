// 函数: sub_1403e8d40
// 地址: 0x1403e8d40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = 0
int64_t rdi = sx.q(arg4)
int32_t i = 0

if (arg4 s> 0 && rdi.d u>= 4)
    int32_t zmm1[0x4] = data_142e11d00
    int32_t rax_2 = rdi.d & 0x80000003
    
    if (rax_2 s< 0)
        rax_2 = ((rax_2 - 1) | 0xfffffffc) + 1
    
    do
        uint128_t i_3 = zx.o(i)
        int64_t i_2 = sx.q(i)
        i += 4
        *(arg2 + (i_2 << 2)) = _mm_add_epi32(_mm_shuffle_epi32(i_3, 0), zmm1)
    while (i s< rdi.d - rax_2)

int64_t result = sx.q(i)

if (i s< rdi.d)
    result = arg2 + (result << 2)
    
    do
        *result = i
        i += 1
        result += 4
    while (i s< rdi.d)

int32_t i_1 = 1

if (rdi.d s> 1)
    int32_t* rbx_1 = arg1 + 4
    
    do
        int32_t r11_1 = *rbx_1
        int32_t rdx = i_1 - 1
        int64_t r8 = rsi
        
        if (rdx s>= 0)
            result = arg2 - arg1 + rbx_1
            int32_t* r9_1 = arg1 - arg2
            int32_t temp0_3
            
            do
                int32_t rcx_2 = *(r9_1 + result - 4)
                
                if (r11_1 s>= rcx_2)
                    break
                
                *(r9_1 + result) = rcx_2
                int32_t rcx_3 = *(result - 4)
                result -= 4
                *(result + 4) = rcx_3
                r8 -= 1
                temp0_3 = rdx
                rdx -= 1
            while (temp0_3 - 1 s>= 0)
        
        *(arg1 + (r8 << 2) + 4) = r11_1
        *(arg2 + (r8 << 2) + 4) = i_1
        i_1 += 1
        rbx_1 = &rbx_1[1]
        rsi += 1
    while (i_1 s< rdi.d)

int32_t r10 = rdi.d

if (rdi.d s< arg3)
    void* rbx_2 = arg1 + (rdi << 2)
    
    do
        int32_t r9_2 = *rbx_2
        
        if (r9_2 s< *(arg1 + (rdi << 2) - 4))
            int32_t rdx_1 = (rdi - 2).d
            int64_t r8_1 = rdi - 2
            
            if (rdx_1 s>= 0)
                void* rcx_5 = arg2 + 4 + (r8_1 << 2)
                void* r11_3 = arg1 - arg2
                int32_t temp1_1
                
                do
                    result = zx.q(*(rcx_5 + r11_3 - 4))
                    
                    if (r9_2 s>= result.d)
                        break
                    
                    *(rcx_5 + r11_3) = result.d
                    result = zx.q(*(rcx_5 - 4))
                    rcx_5 -= 4
                    *(rcx_5 + 4) = result.d
                    r8_1 -= 1
                    temp1_1 = rdx_1
                    rdx_1 -= 1
                while (temp1_1 - 1 s>= 0)
            
            *(arg1 + (r8_1 << 2) + 4) = r9_2
            *(arg2 + (r8_1 << 2) + 4) = r10
        
        r10 += 1
        rbx_2 += 4
    while (r10 s< arg3)

return result
