// 函数: sub_141bb05d0
// 地址: 0x141bb05d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg1 + 0x68)

if (rbx == 0)
    *arg2 = *(arg1 + 0x40)
    arg2[1] = *(arg1 + 0x44)
    return arg2

if (*(rbx + 0x40) != 0)
    int64_t* rcx = *(rbx + 0x38)
    
    if (rcx != 0 && (*(*rcx + 0x28))(rcx) != 0)
        int64_t* rcx_1
        
        if (*(rbx + 0x40) == 0)
            rcx_1 = nullptr
        else
            rcx_1 = *(rbx + 0x38)
        
        float var_18[0x4]
        (*(*rcx_1 + 0x48))(rcx_1, &var_18)
        *(rbx + 0x20) = var_18

float zmm1[0x4] = *(rbx + 0x20)
float temp0[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xaa)
arg2[1] = _mm_shuffle_ps(zmm1, zmm1, 0xff)[0]
*arg2 = temp0[0]
return arg2
