// 函数: sub_142bf5610
// 地址: 0x142bf5610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rdi = arg4
uint64_t i_2 = zx.q(arg3)
int128_t* result = sub_142bf50b0(arg1, arg2, arg3)

if (result.b != 0)
    int32_t rdx = *(arg1 + 0x5c)
    int32_t r8 = rdx + arg2
    
    if (r8 - rdx u>= 2)
        sub_142bf5140(arg1, rdx, r8)
    
    uint64_t rcx_1 = zx.q(*(arg1 + 0x5c)) * 5
    int64_t rax_3 = *(arg1 + 0x70)
    int32_t r8_1 = *(rax_3 + (rcx_1 << 2) + 0x10)
    int128_t zmm0_1 = *(rax_3 + (rcx_1 << 2))
    result = *(arg1 + 0x78) + zx.q(*(arg1 + 0x64)) * 0x14
    
    if (i_2.d != 0)
        uint64_t i_1 = i_2
        uint64_t i
        
        do
            *result = zmm0_1
            result[1].d = r8_1
            result += 0x14
            int32_t rcx_3 = *rdi
            rdi = &rdi[1]
            *(result - 0x14) = rcx_3
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    *(arg1 + 0x5c) += arg2
    *(arg1 + 0x64) += i_2.d

return result
