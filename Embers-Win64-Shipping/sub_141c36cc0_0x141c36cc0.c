// 函数: sub_141c36cc0
// 地址: 0x141c36cc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* arg_20 = arg4
void* arg_18 = arg3
uint64_t result = zx.q(arg5)
int32_t* rbp = arg4
int64_t j_2 = sx.q(arg2)
void* r14 = arg3
int64_t rsi = sx.q(arg1)
int64_t j_1 = j_2

if (result.d s> 0)
    int64_t count = j_2 << 2
    int64_t r12_1 = arg6
    uint64_t var_48_1 = result
    uint64_t i
    
    do
        result = memset(rbp, 0, count)
        int32_t rdi_1 = 0
        
        if (j_1 s> 0)
            int32_t* r8_1 = rbp
            int64_t j
            
            do
                uint32_t r11_1 = 0
                result = 0
                float zmm0_1
                float zmm1
                
                if (rsi.d s>= 4)
                    zmm1 = *r8_1
                    int64_t rdx = sx.q(rdi_1 + (j_2 << 1).d)
                    void* r9 = r14 + 8
                    float* r10_1 = arg6 + (rdx << 2)
                    uint64_t rax_6 = zx.q(((rsi - 4).d u>> 2) + 1)
                    uint64_t k_2 = zx.q(rax_6.d)
                    r11_1 = (rax_6 << 2).d
                    result = rax_6 << 2
                    uint64_t k
                    
                    do
                        zmm0_1 = r10_1[sx.q(rdi_1) - rdx] f* *(r9 - 8) + zmm1
                        zmm1 = r10_1[sx.q(rdi_1 + j_2.d) - rdx]
                        *r8_1 = zmm0_1
                        zmm1 = zmm1 f* *(r9 - 4) + zmm0_1
                        *r8_1 = zmm1
                        zmm0_1 = *r9 * *r10_1 + zmm1
                        zmm1 = r10_1[sx.q(rdi_1 + (j_2 << 1).d + j_2.d) - rdx]
                        r10_1 = &r10_1[sx.q((j_2 << 2).d)]
                        *r8_1 = zmm0_1
                        zmm1 = zmm1 f* *(r9 + 4)
                        r9 += 0x10
                        zmm1 = zmm1 + zmm0_1
                        *r8_1 = zmm1
                        k = k_2
                        k_2 -= 1
                    while (k != 1)
                    j_2 = zx.q(arg2)
                    r14 = arg_18
                    r12_1 = arg6
                
                if (r11_1 s< rsi.d)
                    zmm1 = *r8_1
                    float* rcx_5 = r14 + (result << 2)
                    result = sx.q(r11_1 * j_2.d + rdi_1)
                    uint64_t k_3 = zx.q(rsi.d - r11_1)
                    float* rdx_1 = r12_1 + (result << 2)
                    uint64_t k_1
                    
                    do
                        zmm0_1 = *rdx_1
                        rdx_1 = &rdx_1[j_2]
                        zmm0_1 = zmm0_1 * *rcx_5
                        rcx_5 = &rcx_5[1]
                        zmm1 = zmm1 + zmm0_1
                        *r8_1 = zmm1
                        k_1 = k_3
                        k_3 -= 1
                    while (k_1 != 1)
                
                rdi_1 += 1
                r8_1 = &r8_1[1]
                j = j_1
                j_1 -= 1
            while (j != 1)
            rbp = arg_20
            j_1 = sx.q(j_2.d)
        
        r14 += rsi << 2
        rbp = &rbp[j_2]
        i = var_48_1
        var_48_1 -= 1
        arg_20 = rbp
        arg_18 = r14
    while (i != 1)

return result
