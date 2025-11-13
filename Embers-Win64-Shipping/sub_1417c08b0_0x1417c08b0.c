// 函数: sub_1417c08b0
// 地址: 0x1417c08b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t i_1 = 0
int64_t rdi = 0
int32_t i_3 = arg3[1].d
int32_t r9 = 0
int64_t r12 = sx.q(*(*arg2 + 8))
int64_t var_48 = 0
int64_t var_40 = 0

if (i_3 != 0)
    sub_1405dadb0(&var_48, i_3)
    r9 = var_40.d
    rdi = var_48
    
    if (i_3 s> 0)
        uint64_t i_2 = zx.q(i_3)
        uint64_t i
        
        do
            int64_t rsi = sx.q(r9)
            r9 = (rsi + 1).d
            var_40.d = r9
            
            if (r9 s> var_40:4.d)
                sub_1405a4cf0(&var_48)
                r9 = var_40.d
                rdi = var_48
            
            int32_t* rcx_2 = rdi + (rsi << 2)
            
            if (rcx_2 != 0)
                *rcx_2 = 0
            
            i = i_2
            i_2 -= 1
        while (i != 1)

int64_t* rcx_3 = *(arg1 + 0x10)
int64_t var_38 = rdi
int32_t var_30 = r9
int64_t result = (*(*rcx_3 + 0x30))(rcx_3, arg2, &var_38)

if (r12 s>= 4)
    do
        int64_t rdx_3 = sx.q(*(**arg2 + (i_1 << 3) + 4))
        *(*arg3 + (rdx_3 << 2)) = _mm_cvtepi32_ps(zx.o(*(rdi + (rdx_3 << 2)))).d
        int64_t rdx_4 = sx.q(*(**arg2 + (i_1 << 3) + 0xc))
        *(*arg3 + (rdx_4 << 2)) = _mm_cvtepi32_ps(zx.o(*(rdi + (rdx_4 << 2)))).d
        int64_t rdx_5 = sx.q(*(**arg2 + (i_1 << 3) + 0x14))
        *(*arg3 + (rdx_5 << 2)) = _mm_cvtepi32_ps(zx.o(*(rdi + (rdx_5 << 2)))).d
        result = *arg3
        int64_t rdx_6 = sx.q(*(**arg2 + (i_1 << 3) + 0x1c))
        i_1 += 4
        *(result + (rdx_6 << 2)) = _mm_cvtepi32_ps(zx.o(*(rdi + (rdx_6 << 2)))).d
    while (i_1 s< r12 - 3)

while (i_1 s< r12)
    result = *arg3
    int64_t r8_2 = sx.q(*(**arg2 + (i_1 << 3) + 4))
    i_1 += 1
    *(result + (r8_2 << 2)) = _mm_cvtepi32_ps(zx.o(*(rdi + (r8_2 << 2)))).d

if (rdi == 0)
    return result

return sub_140a74f90(rdi)
