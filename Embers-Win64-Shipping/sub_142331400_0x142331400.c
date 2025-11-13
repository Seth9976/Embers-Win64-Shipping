// 函数: sub_142331400
// 地址: 0x142331400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x2c0) != 0)
    int64_t* rcx = *(arg1 + 0x2b8)
    
    if (rcx != 0 && (*(*rcx + 0x28))(rcx) != 0)
        int64_t* rcx_1
        
        if (*(arg1 + 0x2c0) == 0)
            rcx_1 = nullptr
        else
            rcx_1 = *(arg1 + 0x2b8)
        
        *(arg1 + 0x2a8) = (*(*rcx_1 + 0x48))(rcx_1)

void* rcx_2 = *(arg1 + 0x2a8)

if (rcx_2 == 0)
    *arg2 = data_143dbb1f0
    return arg2

void arg_8
int64_t rcx_4 = *(*(*(rcx_2 + 8) + 0x18))(rcx_2 + 8, &arg_8)
*arg2 = _mm_cvtepi32_ps(zx.o(rcx_4.d)).d
arg2[1] = _mm_cvtepi32_ps(zx.o((rcx_4 u>> 0x20).d)).d
return arg2
