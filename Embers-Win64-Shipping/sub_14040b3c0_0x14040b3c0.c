// 函数: sub_14040b3c0
// 地址: 0x14040b3c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6 = arg5
int64_t rbx = sx.q(arg3)
uint32_t r9 = 0
int32_t r11_1 = arg2 - rbx.d
float zmm5 = arg4
int32_t* r10 = arg1
float zmm2
float zmm4

if (r11_1 s>= 4)
    int64_t rax_1 = rbx << 2
    void* r8_1 = &arg1[1 + rbx]
    int64_t rdi_2 = neg.q(rbx)
    uint64_t i_3 = zx.q(((r11_1 - 4) u>> 2) + 1)
    r9 = (i_3 << 2).d
    uint64_t i
    
    do
        arg4 = *r10
        zmm2 = *(r8_1 - 4)
        r8_1 += 0x10
        r10 = &r10[4]
        *(r8_1 - 0x14) = zmm2 * zmm5 + arg4 f* zmm6.d
        r10[-4] = arg4 * zmm5 - zmm2 f* zmm6.d
        arg4 = *(r8_1 + (rdi_2 << 2) - 0x10)
        zmm2 = *(r8_1 - 0x10)
        *(r8_1 - 0x10) = zmm2 * zmm5 + arg4 f* zmm6.d
        zmm4 = *(4 - rax_1 + r8_1 - 0x10)
        *(r8_1 + (rdi_2 << 2) - 0x10) = arg4 * zmm5 - zmm2 f* zmm6.d
        zmm2 = *(r8_1 - 0xc)
        *(r8_1 - 0xc) = zmm2 * zmm5 + zmm4 f* zmm6.d
        arg4 = *(r8_1 + ((2 - rbx) << 2) - 0x10)
        *(4 - rax_1 + r8_1 - 0x10) = zmm4 * zmm5 - zmm2 f* zmm6.d
        zmm2 = *(r8_1 - 8)
        *(r8_1 - 8) = zmm2 * zmm5 + arg4 f* zmm6.d
        *(r8_1 + ((2 - rbx) << 2) - 0x10) = arg4 * zmm5 - zmm2 f* zmm6.d
        i = i_3
        i_3 -= 1
    while (i != 1)

if (r9 s< r11_1)
    uint64_t i_4 = zx.q(r11_1 - r9)
    uint64_t i_1
    
    do
        arg4 = *r10
        zmm2 = r10[rbx]
        r10 = &r10[1]
        r10[rbx - 1] = zmm2 * zmm5 + arg4 f* zmm6.d
        r10[-1] = arg4 * zmm5 - zmm2 f* zmm6.d
        i_1 = i_4
        i_4 -= 1
    while (i_1 != 1)

int32_t result_1 = arg2 - (rbx * 2).d - 1
int64_t result = sx.q(result_1)
float* rdx_1 = &arg1[result]

if (result_1 s>= 0)
    if (result_1 + 1 s>= 4)
        int64_t rax_5 = rbx << 2
        uint64_t i_5 = zx.q(result_1 + 1) u>> 2
        void* r9_2 = rax_5 - 4 + rdx_1
        int64_t r10_2 = neg.q(rbx)
        result = zx.q(neg.d(i_5.d))
        result_1 += (result << 2).d
        uint64_t i_2
        
        do
            arg4 = *rdx_1
            zmm2 = *(r9_2 + 4)
            r9_2 -= 0x10
            rdx_1 -= 0x10
            *(r9_2 + 0x14) = zmm2 * zmm5 + arg4 f* zmm6.d
            rdx_1[4] = arg4 * zmm5 - zmm2 f* zmm6.d
            arg4 = *(r9_2 + (r10_2 << 2) + 0x10)
            zmm2 = *(r9_2 + 0x10)
            *(r9_2 + 0x10) = zmm2 * zmm5 + arg4 f* zmm6.d
            zmm4 = *(-4 - rax_5 + r9_2 + 0x10)
            *(r9_2 + (r10_2 << 2) + 0x10) = arg4 * zmm5 - zmm2 f* zmm6.d
            zmm2 = *(r9_2 + 0xc)
            *(r9_2 + 0xc) = zmm2 * zmm5 + zmm4 f* zmm6.d
            arg4 = *(r9_2 + ((-2 - rbx) << 2) + 0x10)
            *(-4 - rax_5 + r9_2 + 0x10) = zmm4 * zmm5 - zmm2 f* zmm6.d
            zmm2 = *(r9_2 + 8)
            *(r9_2 + 8) = zmm2 * zmm5 + arg4 f* zmm6.d
            *(r9_2 + ((-2 - rbx) << 2) + 0x10) = arg4 * zmm5 - zmm2 f* zmm6.d
            i_2 = i_5
            i_5 -= 1
        while (i_2 != 1)
    
    if (result_1 s>= 0)
        int32_t result_2
        
        do
            arg4 = *rdx_1
            zmm2 = rdx_1[rbx]
            rdx_1 -= 4
            result_2 = result_1
            result_1 -= 1
            rdx_1[rbx + 1] = zmm2 * zmm5 + arg4 f* zmm6.d
            rdx_1[1] = arg4 * zmm5 - zmm2 f* zmm6.d
        while (result_2 - 1 s>= 0)

return result
