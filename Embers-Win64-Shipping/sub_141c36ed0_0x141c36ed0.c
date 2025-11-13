// 函数: sub_141c36ed0
// 地址: 0x141c36ed0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1e8
int64_t result = __security_cookie ^ &var_1e8
int64_t result_3 = result
int64_t r14 = arg6
int32_t i = 0
uint64_t i_3 = zx.q(arg5)
float* rbx = arg4
int64_t result_4 = sx.q(arg2)
void* r12 = arg3
float* var_1a0 = rbx
int32_t rsi = arg1
void* var_1a8 = arg3
int32_t result_5 = result_4.d
int64_t var_170 = r14
int32_t i_2 = 0
void var_148
float zmm1
float zmm2

if (arg2 s> 0)
    int64_t rbx_1 = result_4 << 2
    int64_t r12_1 = arg7
    int32_t* rdi_1 = rbx_1 + r14
    result = result_4
    int32_t* var_1b0_1 = rdi_1
    int64_t result_2 = result
    int64_t result_6 = result_4
    int64_t result_1 = result
    int64_t var_178_1 = rbx_1
    
    do
        uint32_t r11_2 = 0
        uint128_t zmm0
        
        if (rsi s>= 4)
            int32_t* rdx = rdi_1
            int64_t rax_4 = ((sx.q(i + (result_4 << 1).d) - result_6) << 2) - r14
            zmm2 = 1f f/ _mm_cvtepi32_ps(zx.o(i_3.d)).d
            int64_t rax_11 = ((sx.q(i + (result_4 << 1).d + result_4.d) - result_6) << 2) - r14
            int64_t rax_17 = ((0 - result_2) << 2) - r14
            uint64_t rax_21 = zx.q(((rsi - 4) u>> 2) + 1)
            uint64_t j_3 = zx.q(rax_21.d)
            r11_2 = (rax_21 << 2).d
            result = rax_4 + arg7
            uint64_t j
            
            do
                zmm0.d = (*(rdx + rax_17 + arg7)).d f- rdx[0 - result_2]
                zmm0.d = zmm0.d f* zmm2
                zmm1 = (*(arg7 - r14 + rdx) f- *rdx) * zmm2
                *(rdx + rax_17 + &var_148) = zmm0.d
                zmm0.d = (*(rdx + result)).d f- rdx[sx.q(i + (result_4 << 1).d) - result_6]
                *(&var_148 - r14 + rdx) = zmm1
                zmm0.d = zmm0.d f* zmm2
                zmm1 = (*(rdx + rax_11 + arg7)
                    f- rdx[sx.q(i + (result_4 << 1).d + result_4.d) - result_6]) * zmm2
                *(rdx + rax_4 + &var_148) = zmm0.d
                *(rdx + rax_11 + &var_148) = zmm1
                rdx = &rdx[sx.q((result_4 << 2).d)]
                j = j_3
                j_3 -= 1
            while (j != 1)
            rsi = arg1
            r14 = var_170
            result_4 = zx.q(result_5)
            i = i_2
            rbx_1 = var_178_1
            result_6 = result_1
            rdi_1 = var_1b0_1
            i_3 = zx.q(arg5)
            r12_1 = arg7
        
        if (r11_2 s< rsi)
            result = sx.q(result_4.d * r11_2 + i)
            zmm1 = 1f f/ _mm_cvtepi32_ps(zx.o(i_3.d)).d
            uint64_t j_4 = zx.q(rsi - r11_2)
            int32_t* rcx_5 = r14 + (result << 2)
            uint64_t j_1
            
            do
                zmm0.d = (*(r12_1 - r14 + rcx_5)).d f- *rcx_5
                zmm0.d = zmm0.d f* zmm1
                *(&var_148 - r14 + rcx_5) = zmm0.d
                rcx_5 += rbx_1
                j_1 = j_4
                j_4 -= 1
            while (j_1 != 1)
        
        i += 1
        result_6 += 1
        rdi_1 = &rdi_1[1]
        i_2 = i
        result_1 = result_6
        var_1b0_1 = rdi_1
    while (i s< result_4.d)
    
    r12 = var_1a8
    rbx = var_1a0

int64_t j_7 = sx.q(result_4.d)

if (i_3.d s> 0)
    int64_t count = j_7 << 2
    int64_t rax_26 = sx.q(rsi) << 2
    int64_t count_1 = count
    uint64_t i_4 = i_3
    uint64_t i_1
    
    do
        result = memset(rbx, 0, count)
        int32_t r11_3 = 0
        
        if (j_7 s> 0)
            float* r9_3 = rbx
            int64_t j_6 = j_7
            int64_t j_5 = j_7
            int64_t j_2
            
            do
                uint32_t rbx_3 = 0
                result = 0
                float zmm0_1
                
                if (rsi s>= 4)
                    float zmm3 = *r9_3
                    void* r10_1 = r12 + 8
                    int64_t rdx_2 = sx.q(result_4.d + r11_3)
                    float* r8_5 = r14 + (rdx_2 << 2)
                    float* r15_1 = (sx.q(r11_3 + (result_4 << 1).d + result_4.d) - rdx_2) << 2
                    uint64_t rax_47 = zx.q(((rsi - 4) u>> 2) + 1)
                    uint64_t k_2 = zx.q(rax_47.d)
                    rbx_3 = (rax_47 << 2).d
                    result = rax_47 << 2
                    uint64_t k
                    
                    do
                        zmm0_1 = r8_5[sx.q(r11_3) - rdx_2]
                        zmm2 = zmm0_1 f* *(r10_1 - 8) + zmm3
                        r8_5[sx.q(r11_3) - rdx_2] =
                            zmm0_1 f+ *(((sx.q(r11_3) - rdx_2) << 2) - r14 + &var_148 + r8_5)
                        zmm1 = *r8_5
                        *r9_3 = zmm2
                        zmm3 = zmm1 f* *(r10_1 - 4) + zmm2
                        *r8_5 = zmm1 f+ *(r8_5 + &var_148 - r14)
                        zmm0_1 = r8_5[sx.q(r11_3 + (result_4 << 1).d) - rdx_2]
                        *r9_3 = zmm3
                        zmm2 = zmm0_1 f* *r10_1 + zmm3
                        r8_5[sx.q(r11_3 + (result_4 << 1).d) - rdx_2] = zmm0_1 f+ *(
                            ((sx.q(r11_3 + (result_4 << 1).d) - rdx_2) << 2) - r14 +
                            &var_148 + r8_5)
                        zmm1 = *(r15_1 + r8_5)
                        *r9_3 = zmm2
                        zmm3 = zmm1 f* *(r10_1 + 4)
                        r10_1 += 0x10
                        zmm3 = zmm3 + zmm2
                        *(r15_1 + r8_5) = zmm1 f+ *(r15_1 - r14 + &var_148 + r8_5)
                        r8_5 = &r8_5[sx.q((result_4 << 2).d)]
                        *r9_3 = zmm3
                        k = k_2
                        k_2 -= 1
                    while (k != 1)
                    count = count_1
                    rsi = arg1
                    r14 = var_170
                    result_4 = zx.q(result_5)
                    j_5 = j_6
                
                r12 = var_1a8
                
                if (rbx_3 s< rsi)
                    zmm2 = *r9_3
                    void* rdx_4 = r12 + (result << 2)
                    result = sx.q(result_4.d * rbx_3 + r11_3)
                    uint64_t k_3 = zx.q(rsi - rbx_3)
                    float* rcx_9 = r14 + (result << 2)
                    uint64_t k_1
                    
                    do
                        zmm1 = *rcx_9
                        zmm0_1 = zmm1 f* *rdx_4
                        rdx_4 += 4
                        zmm2 = zmm2 + zmm0_1
                        *rcx_9 = zmm1 f+ *(rcx_9 + &var_148 - r14)
                        rcx_9 += count
                        *r9_3 = zmm2
                        k_1 = k_3
                        k_3 -= 1
                    while (k_1 != 1)
                
                r11_3 += 1
                r9_3 = &r9_3[1]
                j_2 = j_5
                j_5 -= 1
                j_6 = j_5
            while (j_2 != 1)
            rbx = var_1a0
            i_3 = i_4
            j_7 = sx.q(result_4.d)
        
        r12 += rax_26
        rbx += count
        i_1 = i_3
        i_3 -= 1
        var_1a0 = rbx
        i_4 = i_3
        var_1a8 = r12
    while (i_1 != 1)

__security_check_cookie(result_3 ^ &var_1e8)
return result
