// 函数: sub_140405650
// 地址: 0x140405650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 s<= 0)
    return 

int64_t r10_1 = 0
int64_t rbx_2 = sx.q(arg2) s>> 1
int64_t r9_1 = sx.q(arg3)

do
    int64_t r11_1 = 0
    int64_t i_2
    float zmm1
    float zmm2
    
    if (rbx_2 s>= 4)
        int32_t* rdx = arg1 + ((r10_1 + (r9_1 << 2)) << 2)
        i_2 = arg1 + ((r9_1 * 3 + r10_1) << 2)
        int64_t r8_2 = neg.q(r9_1) * 2
        int64_t rdi_2 = neg.q(r9_1)
        int64_t rbp_2 = r9_1 * 2
        int64_t i_3 = ((rbx_2 - 4) u>> 2) + 1
        r11_1 = i_3 << 2
        int64_t i
        
        do
            zmm1 = *(i_2 + (rdi_2 << 3)) * 0.707106769f
            zmm2 = rdx[r8_2 * 2] f* 0.707106769f
            rdx[r8_2 * 2] = zmm1 + zmm2
            *(i_2 + (rdi_2 << 3)) = zmm2 - zmm1
            zmm1 = *i_2 * 0.707106769f
            zmm2 = rdx[rdi_2 * 2] f* 0.707106769f
            rdx[rdi_2 * 2] = zmm1 + zmm2
            *i_2 = zmm2 - zmm1
            zmm1 = *(i_2 + (r9_1 << 3)) * 0.707106769f
            float zmm3 = *rdx * 0.707106769f
            *rdx = zmm1 + zmm3
            *(i_2 + (r9_1 << 3)) = zmm3 - zmm1
            zmm1 = *(i_2 + (rbp_2 << 3)) * 0.707106769f
            zmm2 = rdx[r9_1 * 2] f* 0.707106769f
            rdx[r9_1 * 2] = zmm1 + zmm2
            *(i_2 + (rbp_2 << 3)) = zmm2 - zmm1
            i_2 += r9_1 << 5
            rdx = &rdx[r9_1 * 8]
            i = i_3
            i_3 -= 1
        while (i != 1)
    
    if (r11_1 s< rbx_2)
        float* rcx_4 = arg1 + ((r10_1 + ((r9_1 * r11_1) << 1)) << 2)
        float* rdx_1 = ((r11_1 << 3) + 4) * r9_1 + arg1 + (r10_1 << 2)
        i_2 = rbx_2 - r11_1
        int64_t i_1
        
        do
            zmm1 = *rdx_1 * 0.707106769f
            zmm2 = *rcx_4 * 0.707106769f
            *rcx_4 = zmm1 + zmm2
            *rdx_1 = zmm2 - zmm1
            rdx_1 = &rdx_1[r9_1 * 2]
            rcx_4 = &rcx_4[r9_1 * 2]
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
    
    r10_1 += 1
while (r10_1 s< r9_1)
