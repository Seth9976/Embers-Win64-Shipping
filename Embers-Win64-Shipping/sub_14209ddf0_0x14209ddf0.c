// 函数: sub_14209ddf0
// 地址: 0x14209ddf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(*(arg1 + 0x40))
int32_t i_1 = 0
int32_t temp0 = result.d

if (temp0 == 0)
    int128_t zmm8
    zmm8.d = arg2.d f- 0.000500000024f
    int128_t zmm7
    zmm7.d = arg3.d f+ 0.000500000024f
    int128_t zmm6
    zmm6.d = arg4.d f* 0.00999999978f
    int32_t var_64_1 = zmm8.d
    int32_t var_60_1 = zmm7.d
    int32_t var_68_1 = zmm6.d
    int64_t var_b8
    __builtin_memset(&var_b8, 0, 0x11)
    int32_t var_a4_1 = 0
    int64_t var_a0_1 = 0
    int32_t var_98_1 = 0
    int64_t var_90
    __builtin_memset(&var_90, 0, 0x28)
    sub_142073ad0(&var_b8, arg1 + 0x70)
    result = sub_142073ad0(&var_b8, arg1 + 0x88)
    
    if (var_98_1 s> 0)
        sub_142074240(&var_b8, arg1 + 0x70, 3, 0)
        sub_14209d680(&var_b8, sub_142074240(&var_b8, arg1 + 0x88, 3, 3))
        sub_1420735e0(&var_b8, arg1 + 0x70, 3, 0)
        result = sub_1420735e0(&var_b8, arg1 + 0x88, 3, 3)
    
    *(arg1 + 0xa8) = 0
    
    if (*(arg1 + 0xac) != 0)
        result = sub_14083ad30(arg1 + 0xa0, 0)
    
    int32_t r12_1 = *(arg1 + 0x78)
    int32_t r15_1 = 0
    int64_t arg_8 = 0
    
    if (r12_1 != 0)
        do
            int32_t rdx_8 = 0
            int64_t rdi_1 = 0
            int32_t i = *(sx.q(r15_1) * 0x2c + *(arg1 + 0x70))
            int64_t rax_2 = sx.q(*(arg1 + 0xa8))
            
            if (rax_2.d s> 0)
                int32_t* rax_4 = *(arg1 + 0xa0) + 8
                
                while (not(i f<= *rax_4))
                    rdx_8 += 1
                    rdi_1 += 1
                    rax_4 = &rax_4[3]
                    
                    if (rdi_1 s>= rax_2)
                        break
            
            sub_142075310(arg1 + 0xa0, rdx_8, 1)
            int64_t rcx_11 = rdi_1 * 3
            r15_1 += 1
            *(*(arg1 + 0xa0) + (rcx_11 << 2) + 8) = i
            result = *(arg1 + 0xa0)
            *(result + (rcx_11 << 2)) = 0
        while (r15_1 u< r12_1)
    
    int64_t rcx_12 = var_90
    
    if (rcx_12 != 0)
        result = sub_140a74f90(rcx_12)
    
    if (var_a0_1 != 0)
        result = sub_140a74f90(var_a0_1)
    
    int64_t rcx_14 = var_b8
    
    if (rcx_14 != 0)
        return sub_140a74f90(rcx_14)
else if (temp0 s> 0)
    int64_t* rdi_2 = nullptr
    
    do
        int64_t* rcx_15 = *(rdi_2 + *(arg1 + 0x38))
        result = (*(*rcx_15 + 0x348))(rcx_15, arg2, arg3, arg4)
        i_1 += 1
        rdi_2 = &rdi_2[1]
    while (i_1 s< *(arg1 + 0x40))

return result
