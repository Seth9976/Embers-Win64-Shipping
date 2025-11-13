// 函数: sub_1421b4290
// 地址: 0x1421b4290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t i_2 = zx.q(arg4)
int64_t* result = arg5
int128_t zmm7
zmm7.d = arg2.d f/ _mm_cvtepi32_ps(zx.o(arg3)).d

if ((*(*(*(arg1 + 0x28) + 0x30) + 0x59) & 1) != 0)
    result = &data_143dbb1f8

int32_t r13 = result[1].d
uint128_t zmm6 = zx.o(*result)

if (arg3 != 0 && *(arg1 + 0x254) == 0 && arg3 s> 0)
    result = sub_140775c70(arg1 + 0x248, arg3)

int32_t rbp = 0
uint128_t var_78
int128_t var_68
int64_t var_58

if (arg3 s> 0)
    do
        int32_t rax_1 = arg6[1].d
        int64_t rdi_1 = sx.q(*(arg1 + 0x250))
        uint64_t var_88_1 = *arg6
        uint128_t zmm0 = _mm_cvtepi32_ps(zx.o(rbp))
        int32_t var_80_1 = rax_1
        int32_t rax_2 = (rdi_1 + 1).d
        int32_t var_90_1 = r13
        *(arg1 + 0x250) = rax_2
        zmm0.d = zmm0.d f* zmm7.d
        int32_t var_8c_1 = zmm0.d
        
        if (rax_2 s> *(arg1 + 0x254))
            sub_140775520(arg1 + 0x248)
        
        result = *(arg1 + 0x248)
        int64_t rcx_2 = rdi_1 * 9
        rbp += 1
        *(result + (rcx_2 << 3)) = zmm6.q.o
        *(result + (rcx_2 << 3) + 0x10) = var_88_1.o
        *(result + (rcx_2 << 3) + 0x20) = var_78
        *(result + (rcx_2 << 3) + 0x30) = var_68
        result[rcx_2 + 8] = var_58
    while (rbp s< arg3)

if (i_2.d != 0)
    result = zx.q(*(arg1 + 0x264))
    
    if (result.d != 0)
    label_1421b441c:
        
        if (i_2.d s> 0)
            uint64_t i_1 = i_2
            uint64_t i
            
            do
                int64_t rdi_2 = sx.q(*(arg1 + 0x260))
                int32_t var_80_2 = arg6[1].d
                int32_t rax_4 = (rdi_2 + 1).d
                int32_t var_90_2 = r13
                uint64_t var_88_2 = *arg6
                int32_t var_8c_2 = 0
                *(arg1 + 0x260) = rax_4
                
                if (rax_4 s> *(arg1 + 0x264))
                    sub_140775520(arg1 + 0x258)
                
                result = *(arg1 + 0x258)
                int64_t rcx_5 = rdi_2 * 9
                *(result + (rcx_5 << 3)) = zmm6.q.o
                *(result + (rcx_5 << 3) + 0x10) = var_88_2.o
                *(result + (rcx_5 << 3) + 0x20) = var_78
                *(result + (rcx_5 << 3) + 0x30) = var_68
                result[rcx_5 + 8] = var_58
                i = i_1
                i_1 -= 1
            while (i != 1)
    else if (i_2.d s> 0)
        if (i_2.d s> result.d)
            result = sub_140775c70(arg1 + 0x258, i_2.d)
        
        goto label_1421b441c

return result
