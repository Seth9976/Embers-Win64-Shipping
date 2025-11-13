// 函数: sub_14209e060
// 地址: 0x14209e060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_74 = 0
float var_4c = arg4 * 0.00999999978f
float var_48 = arg2 - 0.000500000024f
float var_44 = arg3 + 0.000500000024f
int64_t var_88
__builtin_memset(&var_88, 0, 0x11)
int64_t var_70 = 0
int32_t var_68 = 0
int64_t var_60 = 0
int64_t var_58 = 0
void** result
int128_t zmm6
result, zmm6 = sub_142073d80(&var_88, arg1 + 0x70)

if (var_68 s> 0)
    zmm6 = sub_14209d8e0(&var_88, sub_142074be0(&var_88, arg1 + 0x70, 1, 0, var_88.d))
    result = sub_142073870(&var_88, arg1 + 0x70, 1)

*(arg1 + 0xa0) = 0

if (*(arg1 + 0xa4) != 0)
    result = sub_14083ad30(arg1 + 0x98, 0)

int32_t r12 = *(arg1 + 0x78)
int32_t r14 = 0
int64_t arg_8 = 0

if (r12 != 0)
    int128_t var_38_1 = zmm6
    
    do
        int32_t rdx_4 = 0
        int64_t rdi_1 = 0
        zmm6 = *(*(arg1 + 0x70) + sx.q(r14) * 0x14)
        int64_t rax_2 = sx.q(*(arg1 + 0xa0))
        
        if (rax_2.d s> 0)
            void* rax_4 = &(*(arg1 + 0x98))[1]
            
            while (not(zmm6.d f<= *rax_4))
                rdx_4 += 1
                rdi_1 += 1
                rax_4 += 0xc
                
                if (rdi_1 s>= rax_2)
                    break
        
        sub_142075310(arg1 + 0x98, rdx_4, 1)
        int64_t rcx_8 = rdi_1 * 3
        r14 += 1
        *(*(arg1 + 0x98) + (rcx_8 << 2) + 8) = zmm6.d
        result = *(arg1 + 0x98)
        *(result + (rcx_8 << 2)) = 0
    while (r14 u< r12)

if (var_60 != 0)
    result = sub_140a74f90(var_60)

if (var_70 != 0)
    result = sub_140a74f90(var_70)

int64_t rcx_11 = var_88

if (rcx_11 == 0)
    return result

return sub_140a74f90(rcx_11)
