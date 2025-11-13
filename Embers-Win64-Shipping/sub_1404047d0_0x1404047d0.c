// 函数: sub_1404047d0
// 地址: 0x1404047d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbp = arg6
int64_t r14 = *(arg1 + 0x20)
int32_t r13 = 0
int64_t result = sx.q(*(arg1 + 0x30) * rbp)
int64_t rsi = 0
int64_t r12 = sx.q(arg4)
int64_t result_1 = result
arg6 = 0
int64_t rdi = 0

do
    int64_t rbx_1 = 0
    
    if (r12 s> 0)
        do
            float zmm2 = 1.00000003e-27f
            int32_t rdx_1 = sx.d(*(r14 + (rbx_1 << 1))) * rbp
            int32_t r8_1 = sx.d(*(r14 + (rbx_1 << 1) + 2)) * rbp
            int64_t r10_1 = sx.q(rdx_1)
            double zmm0
            
            if (rdx_1 s< r8_1)
                if (r8_1 - rdx_1 s>= 4)
                    int64_t* rcx = arg2 + ((r10_1 + rdi) << 2)
                    uint64_t rax_9 = zx.q(((r8_1 - rdx_1 - 4) u>> 2) + 1)
                    uint64_t i_3 = zx.q(rax_9.d)
                    rdx_1 += (rax_9 << 2).d
                    r10_1 += rax_9 << 2
                    uint64_t i
                    
                    do
                        zmm0 = *rcx
                        float zmm1 = *(rcx + 4)
                        rcx = &rcx[2]
                        zmm0.d = zmm0.d f* zmm0.d
                        zmm2 = zmm2 f+ zmm0.d
                        zmm0 = rcx[-1].d
                        zmm0.d = zmm0.d f* zmm0.d
                        zmm2 = zmm2 + zmm1 * zmm1
                        zmm1 = *(rcx - 4)
                        zmm2 = zmm2 f+ zmm0.d + zmm1 * zmm1
                        i = i_3
                        i_3 -= 1
                    while (i != 1)
                
                if (rdx_1 s< r8_1)
                    double* rcx_1 = arg2 + ((r10_1 + rdi) << 2)
                    int64_t i_2 = sx.q(r8_1 - rdx_1)
                    int64_t i_1
                    
                    do
                        zmm0 = *rcx_1
                        rcx_1 += 4
                        zmm0.d = zmm0.d f* zmm0.d
                        zmm2 = zmm2 f+ zmm0.d
                        i_1 = i_2
                        i_2 -= 1
                    while (i_1 != 1)
            
            zmm0 = sqrt(fconvert.d(zmm2))
            int64_t rax_13 = sx.q(*(arg1 + 8)) * rsi + rbx_1
            rbx_1 += 1
            *(arg3 + (rax_13 << 2)) = fconvert.s(zmm0)
        while (rbx_1 s< r12)
        
        r13 = arg6
        result = result_1
    
    r13 += 1
    rsi += 1
    rdi += result
    arg6 = r13
while (r13 s< arg5)

return result
