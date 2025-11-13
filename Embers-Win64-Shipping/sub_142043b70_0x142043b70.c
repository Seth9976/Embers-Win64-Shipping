// 函数: sub_142043b70
// 地址: 0x142043b70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6
int128_t var_18 = zmm6
void* result

if (arg2 == 0 || arg2[0x53] == 0)
    result.b = 0
else
    result = (*(*arg2 + 0x150))(arg2)
    float zmm1 = *(arg1 + 0x2a0)
    zmm6.d = (*(result + 0x520)).d f- arg3.d
    
    if (zmm1 <= 0f || not(zmm6.d f< zmm1))
        int64_t* rdi_1 = *(arg1 + 0x10)
        void* rcx_1 = rdi_1[0x23]
        
        if (rcx_1 == 0)
            (*(*rdi_1 + 0x390))(rdi_1, zmm1)
            rcx_1 = rdi_1[0x23]
        
        if (zmm6.d f>= *(rcx_1 + 0x26c) f/ _mm_cvtepi32_ps(zx.o(*(arg2[0x53] + 0x38))).d)
            result.b = 0
        else
            result.b = 1
    else
        result.b = 1

return result
