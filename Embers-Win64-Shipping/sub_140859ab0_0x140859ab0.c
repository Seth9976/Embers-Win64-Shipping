// 函数: sub_140859ab0
// 地址: 0x140859ab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = *(arg1 + 0x28)

if (result != 0 && *(result + 0x408) != 0)
    int64_t var_200_1 = 0
    *(arg1 + 0x660) = (*(arg1 + 0x660) & 0xfffffffd) | 1
    __builtin_memset(arg1 + 0x210, 0, 0x30)
    *(arg1 + 0x240) = 0.o
    *(arg1 + 0x250) = zx.o(0)
    int64_t var_200_2 = 0
    *(arg1 + 0x260) = 0.o
    void var_1f8
    memset(&var_1f8, 0, 0x1f0)
    int128_t* rax_3 = sub_140842bd0(&var_1f8)
    int64_t i_4 = 3
    void* rcx_2 = arg1 + 0x270
    int64_t i_3 = 3
    int64_t i
    
    do
        rcx_2 += 0x80
        int128_t zmm0_1 = *rax_3
        rax_3 = &rax_3[8]
        *(rcx_2 - 0x80) = zmm0_1
        *(rcx_2 - 0x70) = rax_3[-7]
        *(rcx_2 - 0x60) = rax_3[-6]
        *(rcx_2 - 0x50) = rax_3[-5]
        *(rcx_2 - 0x40) = rax_3[-4]
        *(rcx_2 - 0x30) = rax_3[-3]
        *(rcx_2 - 0x20) = rax_3[-2]
        *(rcx_2 - 0x10) = rax_3[-1]
        i = i_3
        i_3 -= 1
    while (i != 1)
    *rcx_2 = *rax_3
    *(rcx_2 + 0x10) = rax_3[1]
    *(rcx_2 + 0x20) = rax_3[2]
    *(rcx_2 + 0x30) = rax_3[3]
    *(rcx_2 + 0x40) = rax_3[4]
    *(rcx_2 + 0x50) = rax_3[5]
    *(rcx_2 + 0x60) = rax_3[6]
    memset(&var_1f8, i_3.d, 0x1f0)
    int128_t* rax_4 = sub_140842bd0(&var_1f8)
    void* rcx_5 = arg1 + 0x460
    int64_t i_1
    
    do
        rcx_5 += 0x80
        int128_t zmm0_2 = *rax_4
        rax_4 = &rax_4[8]
        *(rcx_5 - 0x80) = zmm0_2
        *(rcx_5 - 0x70) = rax_4[-7]
        *(rcx_5 - 0x60) = rax_4[-6]
        *(rcx_5 - 0x50) = rax_4[-5]
        *(rcx_5 - 0x40) = rax_4[-4]
        *(rcx_5 - 0x30) = rax_4[-3]
        *(rcx_5 - 0x20) = rax_4[-2]
        *(rcx_5 - 0x10) = rax_4[-1]
        i_1 = i_4
        i_4 -= 1
    while (i_1 != 1)
    *rcx_5 = *rax_4
    *(rcx_5 + 0x10) = rax_4[1]
    *(rcx_5 + 0x20) = rax_4[2]
    *(rcx_5 + 0x30) = rax_4[3]
    *(rcx_5 + 0x40) = rax_4[4]
    *(rcx_5 + 0x50) = rax_4[5]
    *(rcx_5 + 0x60) = rax_4[6]
    int32_t rdx_2 = *(arg1 + 0xa8) * 2
    *(arg1 + 0x658) = 0
    
    if (rdx_2 s> *(arg1 + 0x65c))
        sub_1405a51b0(arg1 + 0x650, rdx_2)
    
    int64_t r14_1 = sx.q(*(arg1 + 0x658))
    int32_t i_5 = *(arg1 + 0xa8) * 2
    int32_t rax_5 = r14_1.d + i_5
    *(arg1 + 0x658) = rax_5
    
    if (rax_5 s> *(arg1 + 0x65c))
        sub_1405c4e40(arg1 + 0x650)
    
    result = (r14_1 << 5) + *(arg1 + 0x650)
    
    if (i_5 != 0)
        int32_t i_2
        
        do
            *result = 0
            *(result + 8) = 0x3f800000
            *(result + 0x10) = 0
            result += 0x20
            i_2 = i_5
            i_5 -= 1
        while (i_2 != 1)
    
    *(arg1 + 0x730) = data_143dbb0c0
    *(arg1 + 0x740) = data_143dbb0d0
    *(arg1 + 0x750) = data_143dbb0e0
    __builtin_memset(arg1 + 0x760, 0, 0x1c)

return result
