// 函数: sub_140385370
// 地址: 0x140385370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r14 = sx.q(arg7)
void* rbx = arg2
uint32_t rbp = 0
int64_t r10 = arg1
uint64_t r11 = 0
float zmm4 = 1f - arg4
int128_t zmm6
zmm6.d = 1f - arg3
int64_t r8 = sx.q(divs.dp.d(0:0xbb80, arg9))
uint64_t result = zx.q(divs.dp.d(sx.q(arg5), r8.d))
int64_t rdx_1 = sx.q(result.d)
float zmm0
float zmm1

if (rdx_1 s>= 4)
    int64_t rdi_1 = r14 << 2
    float* r15_2 = arg1 - rbx
    float* r8_2 = rbx + 4 + rdi_1
    int64_t rsi_2 = neg.q(r14)
    void* rax_9 = rdi_1 - rbx + arg1
    float* rax_12 = (r14 << 3) - rbx + arg1
    float* rcx_1 = arg1 - rdi_1 - rbx
    float* rdx_2 = arg8 + (r8 << 3)
    result = ((rdx_1 - 4) u>> 2) + 1
    uint32_t rbp_1 = (result << 2).d
    uint64_t r11_1 = result << 2
    uint64_t i
    
    do
        zmm0 = rdx_2[neg.q(r8) * 2]
        zmm0 = zmm0 * zmm0
        zmm1 =
            ((1f - zmm0) f* zmm6.d + zmm0 * zmm4) * (*(r8_2 + rcx_1 - 4) f- *(rcx_1 + r8_2)) * 0.5f
        zmm0 = *(r8_2 + -4 - rdi_1) - zmm1
        r8_2[rsi_2] = zmm1 + r8_2[rsi_2]
        *(r8_2 + -4 - rdi_1) = zmm0
        zmm0 = rdx_2[neg.q(r8)]
        zmm0 = zmm0 * zmm0
        zmm1 =
            ((1f - zmm0) f* zmm6.d + zmm0 * zmm4) * (*(r15_2 + r8_2 - 4) f- *(r15_2 + r8_2)) * 0.5f
        r8_2[-1] = r8_2[-1] - zmm1
        *r8_2 = zmm1 + *r8_2
        zmm0 = *rdx_2
        zmm0 = zmm0 * zmm0
        zmm1 =
            ((1f - zmm0) f* zmm6.d + zmm0 * zmm4) * (*(r8_2 + rax_9 - 4) f- *(r8_2 + rax_9)) * 0.5f
        r8_2[r14 - 1] = r8_2[r14 - 1] - zmm1
        r8_2[r14] = zmm1 + r8_2[r14]
        zmm0 = rdx_2[r8]
        rdx_2 = &rdx_2[r8 * 4]
        zmm0 = zmm0 * zmm0
        zmm1 = ((1f - zmm0) f* zmm6.d + zmm0 * zmm4) * (*(r8_2 + rax_12 - 4) f- *(rax_12 + r8_2))
            * 0.5f
        r8_2[r14 * 2 - 1] = r8_2[r14 * 2 - 1] - zmm1
        r8_2[r14 * 2] = zmm1 + r8_2[r14 * 2]
        r8_2 = &r8_2[r14 * 4]
        i = result
        result -= 1
    while (i != 1)
    r10 = arg1
    rbx = arg2
    r11 = r11_1
    rbp = rbp_1
    r14 = zx.q(arg7)

if (r11 s< rdx_1)
    int64_t rax_19 = sx.q(r14.d)
    float* r8_3 = arg8 + ((r8 * r11) << 2)
    int64_t i_4 = rdx_1 - r11
    void* rcx_3 = rbx + ((rax_19 * r11 + 1) << 2)
    result = r10 - rbx
    rbp += i_4.d
    int64_t i_1
    
    do
        zmm0 = *r8_3
        r8_3 = &r8_3[r8]
        zmm0 = zmm0 * zmm0
        zmm1 = ((1f - zmm0) f* zmm6.d + zmm0 * zmm4) * (*(result + rcx_3 - 4) f- *(result + rcx_3))
            * 0.5f
        zmm0 = *(rcx_3 - 4) - zmm1
        *rcx_3 = zmm1 f+ *rcx_3
        *(rcx_3 - 4) = zmm0
        rcx_3 += rax_19 << 2
        i_1 = i_4
        i_4 -= 1
    while (i_1 != 1)

int64_t r11_3 = sx.q(arg6)
int64_t rsi_4 = sx.q(rbp)

if (rsi_4 s< r11_3)
    result = r11_3 - rsi_4
    
    if (result s>= 4)
        int64_t r8_4 = sx.q(r14.d)
        float* r9_2 = rbx + ((r8_4 * (rsi_4 + 1) + 1) << 2)
        int64_t rbp_3 = 0
        void* r14_4 = r8_4 * 4 - rbx + r10
        void* rdx_7 = ((r8_4 * (0 - 1)) << 2) - rbx + r10
        void* r15_5 = r8_4 * 8 - rbx + r10
        result = ((r11_3 - rsi_4 - 4) u>> 2) + 1
        rsi_4 += result << 2
        uint64_t i_2
        
        do
            zmm1 = (*(r9_2 + rdx_7 - 4) f- *(r9_2 + rdx_7)) * 0.5f * zmm4
            zmm0 = r9_2[r8_4 * (0 - 1) - 1] - zmm1
            r9_2[r8_4 * (0 - 1)] = zmm1 + r9_2[r8_4 * (0 - 1)]
            r9_2[r8_4 * (0 - 1) - 1] = zmm0
            zmm1 = (*(r9_2 + rbp_3 - rbx - 4 + r10) f- *(r9_2 + r10 - rbx)) * 0.5f * zmm4
            *(r9_2 + rbp_3 - 4) = *(r9_2 + rbp_3 - 4) - zmm1
            *r9_2 = zmm1 + *r9_2
            arg3 = (*(r9_2 + r14_4 - 4) f- *(r9_2 + r14_4)) * 0.5f * zmm4
            r9_2[r8_4 - 1] = r9_2[r8_4 - 1] - arg3
            r9_2[r8_4] = arg3 + r9_2[r8_4]
            zmm1 = (*(r9_2 + r15_5 - 4) f- *(r9_2 + r15_5)) * 0.5f * zmm4
            r9_2[r8_4 * 2 - 1] = r9_2[r8_4 * 2 - 1] - zmm1
            r9_2[r8_4 * 2] = zmm1 + r9_2[r8_4 * 2]
            r9_2 = &r9_2[r8_4 * 4]
            i_2 = result
            result -= 1
        while (i_2 != 1)
        r10 = arg1
        r14 = zx.q(arg7)
    
    if (rsi_4 s< r11_3)
        int64_t rax_41 = sx.q(r14.d)
        void* r10_3 = r10 - rbx
        result = rax_41 * rsi_4
        int64_t i_5 = r11_3 - rsi_4
        float* rcx_7 = rbx + ((result + 1) << 2)
        int64_t i_3
        
        do
            zmm1 = (*(r10_3 + rcx_7 - 4) f- *(r10_3 + rcx_7)) * 0.5f * zmm4
            zmm0 = rcx_7[-1] - zmm1
            *rcx_7 = zmm1 + *rcx_7
            rcx_7[-1] = zmm0
            rcx_7 = &rcx_7[rax_41]
            i_3 = i_5
            i_5 -= 1
        while (i_3 != 1)

return result
