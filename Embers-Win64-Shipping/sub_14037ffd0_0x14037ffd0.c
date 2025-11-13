// 函数: sub_14037ffd0
// 地址: 0x14037ffd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r14 = sx.q(arg5)
int64_t rdi = arg2
int64_t rsi = 0
int32_t r15 = arg4
int64_t r10 = arg3
int64_t r13 = arg1
int64_t var_c8 = 0
uint64_t result = zx.q(divs.dp.d(0:0xbb80, arg7))
int64_t rbp = sx.q(result.d)

if (r14 s> 0)
    int64_t r11_1 = r14 << 2
    int64_t var_c0_1 = r11_1
    float* r12_1 = r11_1 + rdi
    float* var_b8_1 = r12_1
    
    do
        uint32_t r8_3 = 0
        uint64_t rcx = 0
        float zmm1
        
        if (r15 s>= 4)
            float* r9 = arg6 + (rbp << 3)
            float* rdx_1 = r12_1
            void* rax_6 = r11_1 - rdi
            void* rax_9 = (r14 << 3) - rdi
            int64_t rcx_4 = neg.q(r11_1)
            uint64_t rax_23 = zx.q(((r15 - 4) u>> 2) + 1)
            uint64_t i_3 = zx.q(rax_23.d)
            result = arg1 - rdi
            uint64_t i
            
            do
                zmm1 = r9[neg.q(rbp) * 2]
                zmm1 = zmm1 * zmm1
                *(rcx_4 - rdi + r10 + rdx_1) =
                    (1f - zmm1) f* *(rcx_4 - rdi + arg1 + rdx_1) + zmm1 * rdx_1[neg.q(r14)]
                float zmm2 = r9[neg.q(rbp)]
                zmm2 = zmm2 * zmm2
                *(r10 - rdi + rdx_1) = (1f - zmm2) f* *(result + rdx_1) + zmm2 * *rdx_1
                zmm1 = *r9
                zmm1 = zmm1 * zmm1
                *(rax_6 + r10 + rdx_1) =
                    (1f - zmm1) f* *(rax_6 + arg1 + rdx_1) + zmm1 f* *(var_c0_1 + rdx_1)
                zmm2 = r9[rbp]
                r9 = &r9[rbp * 4]
                zmm2 = zmm2 * zmm2
                *(rdx_1 + rax_9 + r10) =
                    (1f - zmm2) f* *(rax_9 + arg1 + rdx_1) + zmm2 * rdx_1[r14 * 2]
                r11_1 = var_c0_1
                rdx_1 = &rdx_1[r14 * 4]
                i = i_3
                i_3 -= 1
            while (i != 1)
            rdi = arg2
            rsi = var_c8
            r8_3 = (rax_23 << 2).d
            r14 = sx.q(arg5)
            r15 = arg4
            rcx = rax_23 << 2
            r12_1 = var_b8_1
            r10 = arg3
            r13 = arg1
        
        if (r8_3 s< r15)
            float* rdx_3 = arg6 + ((rbp * rcx) << 2)
            float* rcx_8 = rdi + ((r14 * rcx + rsi) << 2)
            result = zx.q(r15 - r8_3)
            uint64_t i_2 = zx.q(result.d)
            uint64_t i_1
            
            do
                zmm1 = *rdx_3
                rdx_3 = &rdx_3[rbp]
                zmm1 = zmm1 * zmm1
                *(r10 - rdi + rcx_8) = (1f - zmm1) f* *(r13 - rdi + rcx_8) + zmm1 * *rcx_8
                rcx_8 += r11_1
                i_1 = i_2
                i_2 -= 1
            while (i_1 != 1)
        
        r10 = arg3
        rsi += 1
        r12_1 = &r12_1[1]
        var_c8 = rsi
        var_b8_1 = r12_1
    while (rsi s< r14)

return result
