// 函数: sub_142a35170
// 地址: 0x142a35170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r11 = sx.q(arg5)
uint64_t j_1 = zx.q(arg6)
int128_t zmm2 = data_142fc92e0
int64_t rbp_1 = r11 & 0xfffffffffffffff0
int64_t r10 = arg1

if (j_1.d s> 0)
    uint64_t i_1 = zx.q(j_1.d)
    uint64_t i
    
    do
        int32_t rbx_1 = 0
        j_1 = 0
        
        if (rbp_1 s> 0)
            int32_t rdi_1 = 0
            int64_t j_2 = ((rbp_1 - 1) u>> 4) + 1
            j_1 = j_2 << 4
            int64_t j
            
            do
                int64_t rcx = sx.q(rdi_1)
                rdi_1 += 0x20
                int64_t rdx = sx.q(rbx_1)
                rbx_1 += 0x10
                *(rdx + arg3) = _mm_packus_epi16(*(rcx + r10) & zmm2, *(rcx + r10 + 0x10) & zmm2)
                j = j_2
                j_2 -= 1
            while (j != 1)
        
        for (; j_1 s< r11; j_1 += 1)
            *(j_1 + arg3) = *(r10 + (j_1 << 1))
        
        r10 += arg2 * 2
        arg3 += arg4
        i = i_1
        i_1 -= 1
    while (i != 1)

return j_1
