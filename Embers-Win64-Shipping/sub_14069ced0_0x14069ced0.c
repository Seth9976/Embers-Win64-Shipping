// 函数: sub_14069ced0
// 地址: 0x14069ced0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float temp0[0x4] = _mm_shuffle_ps(arg2, arg2, 0)
*(arg1 + 0x58) = 1
int512_t zmm0
zmm0.o = temp0
float var_38[0x4] = temp0
*(arg1 + 0x48) = temp0
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
