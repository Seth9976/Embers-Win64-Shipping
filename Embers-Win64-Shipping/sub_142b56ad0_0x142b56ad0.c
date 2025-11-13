// 函数: sub_142b56ad0
// 地址: 0x142b56ad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rbx = arg7

if (*rbx s<= 0)
    int32_t rcx = 1 - arg3
    
    if (arg2 != 0)
        rcx = arg3
    
    int64_t rdx_1
    uint64_t zmm0_1
    zmm0_1, rdx_1 = sub_142acc900(rcx, arg4, arg5)
    _mm_cvtepi32_pd(zx.q(arg6))
    int32_t var_18
    sub_142b56c10(arg1, rdx_1, 1, 3, 1, &var_18, &arg7, rbx)
    
    if (*rbx s<= 0)
        return zx.q(var_18 + arg7.d)

return 0
