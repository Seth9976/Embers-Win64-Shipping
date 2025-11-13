// 函数: sub_1426f63f0
// 地址: 0x1426f63f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rdi = arg2
char rax

if (arg4 != 0 || arg5 == arg4)
    rax = 0
else
    rax = 0x40

*(arg1 + 0x275) &= 0xbf
*(arg1 + 0x275) |= rax

if (arg1[0x4f].b == 0 && arg1[0x37].b == 3 && arg1[0x1d] != 0)
    void* rax_1 = arg1[0x4c]
    
    if (rax_1 == 0 || *(rax_1 + 0x168) != 3)
        rax_1.b = 1
    else
        rax_1.b = 0
    
    if ((*(arg1 + 0x274) & 1) != 0 || rax_1.b != 0)
        int64_t zmm0_1
        int128_t zmm6_1
        zmm0_1, zmm6_1 = sub_142716e90(arg1, arg2, arg3, arg4)
        int64_t* rcx = arg1[0x1d]
        
        if ((*(rcx + 0x124) & 2) == 0)
            (*(*rcx + 0x518))(rcx, rdi, 0)
        else
            int128_t var_18_1 = zmm6_1
            (*(arg1[0x4b] + 0x28))(&arg1[0x4b])
            float zmm5_1 = rdi[1]
            float zmm4_1 = *rdi
            zmm6_1 = rdi[2]
            float zmm1_1 = (zx.o(0)).d
            float zmm3_1 = zmm4_1 * zmm4_1 + zmm5_1 * zmm5_1 + zmm6_1.d f* zmm6_1.d
            float temp0_1 = _mm_sqrt_ss(zmm3_1, zmm3_1)
            float zmm2_1 = temp0_1 f/ zmm0_1.d
            
            if (not(zmm2_1 < 0f))
                zmm1_1 = _mm_min_ss(zmm2_1, 0x3f800000)
            
            float var_38
            int32_t var_30_1
            
            if (temp0_1 > 9.99999994e-09f)
                zmm0_1.d = 1f / temp0_1
                zmm6_1.d = zmm6_1.d f* zmm0_1.d
                zmm6_1.d = zmm6_1.d f* zmm1_1
                var_38 = zmm4_1 f* zmm0_1.d * zmm1_1
                float var_34_1 = zmm5_1 f* zmm0_1.d * zmm1_1
                var_30_1 = zmm6_1.d
            else
                var_38.q = data_143dbb1f8.q
                var_30_1 = data_143dbb200
            
            int64_t* rcx_2 = arg1[0x1d]
            int64_t var_28 = var_38.q
            int32_t var_20_1 = var_30_1
            (*(*rcx_2 + 0x520))(rcx_2, &var_28)

jump(*(*arg1 + 0x538))
