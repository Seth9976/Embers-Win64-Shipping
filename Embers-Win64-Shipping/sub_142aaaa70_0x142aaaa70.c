// 函数: sub_142aaaa70
// 地址: 0x142aaaa70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm6 = zx.o(0)
void* rax = sub_142aa8560(arg1, arg3)

if (*arg3 s<= 0)
    int32_t rcx
    
    if (arg2 == 0)
        rcx = *(rax + 4)
    label_142aaaab1:
        int64_t rdx_1 = sx.q(*rax)
        
        if (rdx_1.d u> 9)
            *arg3 = 3
        else if (rcx s>= 2)
            int64_t temp0_1 = _mm_cvtepi32_pd(zx.q(*(&data_1436516c0 + (rdx_1 << 2))))
            zmm6.q = _mm_cvtepi32_pd(zx.q(rcx)).q f/ temp0_1
    else
        if (arg2 == 1)
            rcx = *(rax + 0xc)
            rax += 8
            goto label_142aaaab1
        
        *arg3 = 0x10

return zmm6.q
