// 函数: sub_141ef51f0
// 地址: 0x141ef51f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = arg2[1].d
arg1[0x84] = *arg2
arg1[0x85].d = rax
(*(*arg1 + 0x498))()
sub_141ee8490(arg1)
int32_t rax_3 = (*(*arg1 + 0x860))(arg1)

if ((arg1[0x11].b & 4) != 0)
    float zmm1_1[0x4] = *(arg1 + 0x1e0)
    float var_18 = zmm1_1[0]
    float temp0_1[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
    float var_10_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xaa)[0]
    float var_14_1 = temp0_1[0]
    rax_3 = sub_142226370(&arg1[0x55], &var_18, 1)
    
    if (arg3 != 0)
        int64_t r8_1
        rax_3, r8_1 = (*(*arg1 + 0x4c8))(arg1)
        
        if (rax_3 != 0 && arg1[0x14] != 0)
            if (arg1[0x2f].d s> 0)
                int64_t rax_5 = arg1[0x2e]
                void* rdx_1 = *(rax_5 + (sx.q(arg1[0x2f].d) << 3) - 8)
                *(rdx_1 + 0x350) |= 2
                *(rdx_1 + 0x10) = 3
                *(rdx_1 + 0x74) = 0xffffffff
                return rax_5
            
            if (data_143a2d7b4 != 1 || (*(arg1 + 0x14c) & 2) == 0)
                r8_1.b = 1
                rax_3 = (*(*arg1 + 0x468))(arg1, 0, r8_1, 0)
                *(arg1 + 0x14c) &= 0xfd
                rax_3.b &= 1
                rax_3.b *= 2
                *(arg1 + 0x14c) |= rax_3.b

return rax_3
