// 函数: sub_14069cf40
// 地址: 0x14069cf40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x58) = 1
float temp0[0x4] = _mm_shuffle_ps(arg2, arg2, 0xe1)
temp0[0] = arg3
float temp0_1[0x4] = _mm_shuffle_ps(temp0, temp0, 0xc6)
temp0_1[0] = arg4
float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0x27)
temp0_2[0] = arg5
*(arg1 + 0x48) = _mm_shuffle_ps(temp0_2, temp0_2, 0x39)
void var_20

if (&var_20 != arg1 + 0x60 && *(arg1 + 0x68) != 0)
    int64_t* rcx = *(arg1 + 0x60)
    
    if (rcx != 0)
        (*(*rcx + 0x38))(rcx, 0)
        int64_t rcx_1 = *(arg1 + 0x60)
        
        if (rcx_1 != 0)
            *(arg1 + 0x60) = sub_140a84c80(rcx_1, 0, 0)
        
        *(arg1 + 0x68) = 0

return arg1
