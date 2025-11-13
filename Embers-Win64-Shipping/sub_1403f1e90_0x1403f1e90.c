// 函数: sub_1403f1e90
// 地址: 0x1403f1e90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = 0
int64_t r14 = sx.q(arg4)
int32_t i = 0
uint128_t i_5
int32_t zmm1[0x4]

if (arg4 s> 0 && r14.d u>= 4)
    zmm1 = data_142e11d00
    int32_t rax_2 = r14.d & 0x80000003
    
    if (rax_2 s< 0)
        rax_2 = ((rax_2 - 1) | 0xfffffffc) + 1
    
    do
        i_5 = zx.o(i)
        int64_t i_3 = sx.q(i)
        i += 4
        *(arg2 + (i_3 << 2)) = _mm_add_epi32(_mm_shuffle_epi32(i_5, 0), zmm1)
    while (i s< r14.d - rax_2)

uint64_t result = sx.q(i)

if (i s< r14.d)
    result = arg2 + (result << 2)
    
    do
        *result = i
        i += 1
        result += 4
    while (i s< r14.d)

if (r14.d s> 1)
    int32_t i_4 = 0
    uint128_t* rbp_1 = arg1 + 4
    
    do
        i_5 = *rbp_1
        int32_t i_1 = i_4
        int64_t rcx = rsi
        
        if (i_4 s>= 0)
            if (i_4 + 1 s>= 4)
                do
                    zmm1 = *(arg1 + (rcx << 2))
                    
                    if (i_5.d f<= zmm1[0])
                        goto label_1403f201f
                    
                    *(arg1 + (rcx << 2) + 4) = zmm1[0]
                    int32_t rax_6 = *(arg2 + (rcx << 2))
                    rcx -= 1
                    *(arg2 + (rcx << 2) + 8) = rax_6
                    zmm1 = *(arg1 + (rcx << 2))
                    
                    if (i_5.d f<= zmm1[0])
                        goto label_1403f201f
                    
                    *(arg1 + (rcx << 2) + 4) = zmm1[0]
                    int32_t rax_7 = *(arg2 + (rcx << 2))
                    rcx -= 1
                    *(arg2 + (rcx << 2) + 8) = rax_7
                    zmm1 = *(arg1 + (rcx << 2))
                    
                    if (i_5.d f<= zmm1[0])
                        goto label_1403f201f
                    
                    *(arg1 + (rcx << 2) + 4) = zmm1[0]
                    int32_t rax_8 = *(arg2 + (rcx << 2))
                    rcx -= 1
                    *(arg2 + (rcx << 2) + 8) = rax_8
                    zmm1 = *(arg1 + (rcx << 2))
                    
                    if (i_5.d f<= zmm1[0])
                        goto label_1403f201f
                    
                    *(arg1 + (rcx << 2) + 4) = zmm1[0]
                    i_1 -= 4
                    *(arg2 + (rcx << 2) + 4) = *(arg2 + (rcx << 2))
                    rcx -= 1
                while (i_1 s>= 3)
            
            if (i_1 s>= 0)
                void* r8_3 = arg2 + 4 + (rcx << 2)
                void* r11_2 = arg1 - arg2
                int32_t i_6
                
                do
                    zmm1 = *(r11_2 + r8_3 - 4)
                    
                    if (i_5.d f<= zmm1[0])
                        break
                    
                    *(r11_2 + r8_3) = zmm1[0]
                    int32_t rax_10 = *(r8_3 - 4)
                    r8_3 -= 4
                    *(r8_3 + 4) = rax_10
                    rcx -= 1
                    i_6 = i_1
                    i_1 -= 1
                while (i_6 - 1 s>= 0)
        
    label_1403f201f:
        i_4 += 1
        rbp_1 += 4
        rsi += 1
        result = zx.q(i_4 + 1)
        *(arg1 + (rcx << 2) + 4) = i_5.d
        *(arg2 + (rcx << 2) + 4) = i_4
    while (result.d s< r14.d)

int32_t rbx = r14.d

if (r14.d s< arg3)
    void* rdi_1 = arg1 + (r14 << 2)
    
    do
        i_5 = *rdi_1
        
        if (not(i_5.d f<= *(arg1 + (r14 << 2) - 4)))
            int32_t i_2 = (r14 - 2).d
            int64_t rcx_1 = r14 - 2
            
            if (i_2 s>= 0)
                result = zx.q(i_2 + 1)
                
                if (result.d s>= 4)
                    do
                        zmm1 = *(arg1 + (rcx_1 << 2))
                        
                        if (i_5.d f<= zmm1[0])
                            goto label_1403f214f
                        
                        *(arg1 + (rcx_1 << 2) + 4) = zmm1[0]
                        result = zx.q(*(arg2 + (rcx_1 << 2)))
                        rcx_1 -= 1
                        *(arg2 + (rcx_1 << 2) + 8) = result.d
                        zmm1 = *(arg1 + (rcx_1 << 2))
                        
                        if (i_5.d f<= zmm1[0])
                            goto label_1403f214f
                        
                        *(arg1 + (rcx_1 << 2) + 4) = zmm1[0]
                        result = zx.q(*(arg2 + (rcx_1 << 2)))
                        rcx_1 -= 1
                        *(arg2 + (rcx_1 << 2) + 8) = result.d
                        zmm1 = *(arg1 + (rcx_1 << 2))
                        
                        if (i_5.d f<= zmm1[0])
                            goto label_1403f214f
                        
                        *(arg1 + (rcx_1 << 2) + 4) = zmm1[0]
                        result = zx.q(*(arg2 + (rcx_1 << 2)))
                        rcx_1 -= 1
                        *(arg2 + (rcx_1 << 2) + 8) = result.d
                        zmm1 = *(arg1 + (rcx_1 << 2))
                        
                        if (i_5.d f<= zmm1[0])
                            goto label_1403f214f
                        
                        *(arg1 + (rcx_1 << 2) + 4) = zmm1[0]
                        result = zx.q(*(arg2 + (rcx_1 << 2)))
                        i_2 -= 4
                        *(arg2 + (rcx_1 << 2) + 4) = result.d
                        rcx_1 -= 1
                    while (i_2 s>= 3)
                
                if (i_2 s>= 0)
                    int32_t* r8_5 = arg2 + 4 + (rcx_1 << 2)
                    void* r11_4 = arg1 - arg2
                    int32_t i_7
                    
                    do
                        zmm1 = *(r8_5 + r11_4 - 4)
                        
                        if (i_5.d f<= zmm1[0])
                            break
                        
                        *(r8_5 + r11_4) = zmm1[0]
                        result = zx.q(r8_5[-1])
                        r8_5 -= 4
                        r8_5[1] = result.d
                        rcx_1 -= 1
                        i_7 = i_2
                        i_2 -= 1
                    while (i_7 - 1 s>= 0)
            
        label_1403f214f:
            *(arg1 + (rcx_1 << 2) + 4) = i_5.d
            *(arg2 + (rcx_1 << 2) + 4) = rbx
        
        rbx += 1
        rdi_1 += 4
    while (rbx s< arg3)

return result
