// 函数: sub_1403f1940
// 地址: 0x1403f1940
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t j_8 = zx.q(arg5)
int64_t r9 = sx.q(j_8.d)
void* r10 = arg3
float* rdi = arg2
int128_t zmm7 = arg4
void* result = r9 * r9
int32_t i = 0
int32_t i_1 = 0
void* rbp = -fffffffffffffffe
float zmm4 = (arg2[result - 1] + *arg2) * 9.99999994e-09f

do
    int64_t r8 = 0
    float zmm2 = (zx.o(0)).d
    float zmm0
    float zmm1
    
    if (r9 s>= 4)
        result = r10 + 4
        float* rcx_1 = arg1 - r10
        int64_t j_6 = ((r9 - 4) u>> 2) + 1
        r8 = j_6 << 2
        int64_t j
        
        do
            zmm1 = *(rcx_1 + result - 4)
            zmm0 = *(rcx_1 + result)
            result += 0x10
            zmm2 = zmm1 f* *(result - 0x14) + zmm2 + zmm0 f* *(result - 0x10)
                + *(rcx_1 + result - 0xc) f* *(result - 0xc)
                + *(rcx_1 + result - 8) f* *(result - 8)
            j = j_6
            j_6 -= 1
        while (j != 1)
    
    if (r8 s< r9)
        result = r10 + (r8 << 2)
        int64_t j_5 = r9 - r8
        int64_t j_1
        
        do
            zmm0 = *(result + arg1 - r10)
            result += 4
            zmm2 = zmm2 + zmm0 f* *(result - 4)
            j_1 = j_5
            j_5 -= 1
        while (j_1 != 1)
    
    arg4.d = zmm7.d f- zmm2 * 2f
    
    if (j_8.d s> 0)
        int64_t r11_1 = r9 << 2
        int64_t r8_1 = r9 * 3
        int64_t r10_1 = 1
        void* r15_1 = arg1
        float* r13_1 = rdi
        int64_t r12_1 = r9 - 1
        int64_t rsi = r11_1 + 4
        int64_t var_70_1 = r8_1
        uint64_t j_9 = j_8
        uint64_t j_2
        
        do
            zmm2 = (zx.o(0)).d
            int64_t rcx_3 = r10_1
            
            if (r10_1 s< r9)
                if (r12_1 s>= 4)
                    void* rdx_4 = r15_1 + 0xc
                    void* r8_2 = &rdi[r10_1 - 1 + r8_1]
                    result = ((r9 - (r10_1 - 1) - 5) u>> 2) + 1
                    rcx_3 = r10_1 + (result << 2)
                    void* k
                    
                    do
                        rdx_4 += 0x10
                        zmm2 = *(r8_2 - r9 * 8) f* *(rdx_4 - 0x18) + zmm2
                            + *(r8_2 + (((rbp + 1) * r9) << 2)) f* *(rdx_4 - 0x14)
                        zmm0 = *(r8_2 + (((rbp + 3) * r9) << 2))
                        zmm1 = *r8_2 f* *(rdx_4 - 0x10)
                        r8_2 += r9 << 4
                        zmm2 = zmm2 + zmm1 + zmm0 f* *(rdx_4 - 0xc)
                        k = result
                        result -= 1
                    while (k != 1)
                    r8_1 = var_70_1
                    j_8 = j_9
                    rdi = arg2
                    rsi = r11_1 + 4
                    rbp = result - 2
                
                if (rcx_3 s< r9)
                    void* rdx_9 = &rdi[r9 * rcx_3 - 1 + r10_1]
                    
                    do
                        zmm0 = *(arg1 + (rcx_3 << 2))
                        rcx_3 += 1
                        zmm0 = zmm0 f* *rdx_9
                        rdx_9 += r11_1
                        zmm2 = zmm2 + zmm0
                    while (rcx_3 s< r9)
            
            zmm0 = *r15_1
            r8_1 += r9
            r12_1 -= 1
            r10_1 += 1
            r15_1 += 4
            var_70_1 = r8_1
            zmm1 = zmm0 * *r13_1
            r13_1 += rsi
            j_2 = j_8
            j_8 -= 1
            j_9 = j_8
            arg4.d = arg4.d f+ (zmm1 + zmm2 * 2f) * zmm0
        while (j_2 != 1)
        i = i_1
    
    if (arg4.d f> 0f)
        break
    
    int64_t rbx_2 = 0
    
    if (r9 s>= 4)
        int64_t r11_2 = r9 << 2
        int64_t j_7 = ((r9 - 4) u>> 2) + 1
        result = &rdi[(r9 + 1) * 2]
        float* rcx_5 = rdi
        rbx_2 = j_7 << 2
        int64_t j_3
        
        do
            *rcx_5 = zmm4 + *rcx_5
            rcx_5 = &rcx_5[(r9 + 1) * 4]
            *(result + -4 - r11_2) = zmm4 f+ *(result + -4 - r11_2)
            *result = zmm4 f+ *result
            *(result + r11_2 + 4) = zmm4 f+ *(result + r11_2 + 4)
            result += (r9 + 1) << 4
            j_3 = j_7
            j_7 -= 1
        while (j_3 != 1)
    
    if (rbx_2 s< r9)
        void* rcx_6 = &rdi[(r9 + 1) * rbx_2]
        result = r9 - rbx_2
        void* j_4
        
        do
            *rcx_6 = zmm4 f+ *rcx_6
            rcx_6 += (r9 << 2) + 4
            j_4 = result
            result -= 1
        while (j_4 != 1)
    
    r10 = arg3
    j_8 = zx.q(arg5)
    i += 1
    zmm4 = zmm4 * 2f
    i_1 = i
while (i s< 0xa)

return result
