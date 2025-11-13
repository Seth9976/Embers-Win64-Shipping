// 函数: sub_141ef53a0
// 地址: 0x141ef53a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *arg1
int512_t zmm0
zmm0.o = zx.o(0)
int32_t temp0_1 = _mm_max_ss(_mm_max_ss(arg3, 0), arg2)
int32_t temp0_2 = _mm_max_ss(arg2, 0)
arg1[0x84].d = temp0_1
*(arg1 + 0x424) = temp0_2
(*(rax + 0x498))(zmm0, temp0_2)
(*(*arg1 + 0x860))(arg1)
int32_t rax_2 = sub_141ee8490(arg1)

if ((arg1[0x11].b & 4) != 0)
    float zmm1[0x4] = *(arg1 + 0x1e0)
    float var_18 = zmm1[0]
    float temp0_3[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
    float var_10_1 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)[0]
    float var_14_1 = temp0_3[0]
    rax_2 = sub_142226370(&arg1[0x55], &var_18, 1)
    
    if (arg4 != 0)
        int64_t r8_2
        rax_2, r8_2 = (*(*arg1 + 0x4c8))(arg1)
        
        if (rax_2 != 0 && arg1[0x14] != 0)
            if (arg1[0x2f].d s> 0)
                int64_t rax_4 = arg1[0x2e]
                void* rdx_2 = *(rax_4 + (sx.q(arg1[0x2f].d) << 3) - 8)
                *(rdx_2 + 0x350) |= 2
                *(rdx_2 + 0x10) = 3
                *(rdx_2 + 0x74) = 0xffffffff
                return rax_4
            
            if (data_143a2d7b4 != 1 || (*(arg1 + 0x14c) & 2) == 0)
                r8_2.b = 1
                rax_2 = (*(*arg1 + 0x468))(arg1, 0, r8_2, 0)
                *(arg1 + 0x14c) &= 0xfd
                rax_2.b &= 1
                rax_2.b *= 2
                *(arg1 + 0x14c) |= rax_2.b

return rax_2
