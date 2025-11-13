// 函数: sub_142432b00
// 地址: 0x142432b00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x238)
void var_28
int32_t arg_8

if (rcx != 0)
    if ((*(*rcx + 0x6b0))(rcx, arg2, &arg_8, &var_28) != 0)
        int32_t zmm1 = arg_8
        
        if (arg4 != 0)
            *arg4 = _mm_sqrt_ss(0, zmm1)
        
        if (not(zmm1 f< (zx.o(0)).d))
            int128_t zmm6
            zmm6.d = arg3.d f* arg3.d
            
            if (not(zmm1 f> zmm6.d))
                return 1
    else if (arg4 != 0)
        *arg4 = 0xbf800000
return 0
