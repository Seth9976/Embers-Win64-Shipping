// 函数: sub_142bff250
// 地址: 0x142bff250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r11 = zx.q(arg2)
uint64_t result

if (arg2 u< *(arg1 + 4))
    int128_t* rax = *(arg1 + 8)
    int128_t* const result_1 = &data_14369a5d0
    int128_t* const rcx = &data_14369a5d0
    int32_t rdx_3
    
    if (*arg1 == 0)
        if (rax != 0)
            rcx = rax
        
        int64_t r8_1 = rcx[1].q
        char* rcx_5 = r8_1 + (r11 << 2)
        uint64_t rax_8 = zx.q((r11 + 1).d)
        *arg3 = (zx.d(rcx_5[1]) << 0x10) + (zx.d(*(r8_1 + (r11 << 2) + 2)) << 8)
            + (zx.d(*rcx_5) << 0x18) + zx.d(rcx_5[3])
        uint64_t rcx_6 = zx.q(rax_8.d)
        uint32_t rdx_12 = (zx.d(*(r8_1 + (rax_8 << 2) + 1)) << 0x10)
            + (zx.d(*(r8_1 + (rax_8 << 2) + 2)) << 8) + (zx.d(*(r8_1 + (rcx_6 << 2))) << 0x18)
        rdx_3 = rdx_12 + zx.d(*(r8_1 + (rcx_6 << 2) + 3))
    else
        if (rax != 0)
            rcx = rax
        
        int64_t r8 = rcx[1].q
        uint64_t rax_2 = zx.q((r11 + 1).d)
        *arg3 = ((zx.d(*(r8 + (r11 << 1))) << 8) + zx.d(*(r8 + (r11 << 1) + 1))) * 2
        rdx_3 = ((zx.d(*(r8 + (rax_2 << 1))) << 8) + zx.d(*(r8 + (rax_2 << 1) + 1))) * 2
    
    *arg4 = rdx_3
    
    if (*arg3 u<= rdx_3)
        result = *(arg1 + 0x10)
        
        if (result != 0)
            result_1 = result
        
        if (rdx_3 u<= *(result_1 + 0x18))
            result.b = 1
            return result

result.b = 0
return result
