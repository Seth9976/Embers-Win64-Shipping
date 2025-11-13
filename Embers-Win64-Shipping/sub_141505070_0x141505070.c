// 函数: sub_141505070
// 地址: 0x141505070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rbp = zx.q(arg2)
int32_t i = *arg1
int16_t rdi = rbp.w
int16_t r14 = *(*(arg1 + 0x10) + (rbp << 1))
uint64_t result
result.w = rbp.w * 2
result.w += 1
int16_t result_1 = (result + 1).w

if (zx.d(result.w) u< i)
    do
        int64_t rbx_1 = *(arg1 + 0x10)
        int64_t r10_1 = *(arg1 + 0x18)
        
        if (zx.d(result_1) u< i)
            if (*(r10_1 + (zx.q(*(rbx_1 + (zx.q(result.w) << 1))) << 2))
                    u< *(r10_1 + (zx.q(*(rbx_1 + (zx.q(result_1) << 1))) << 2)))
                result_1 = result.w
            
            result = zx.q(result_1)
        
        uint64_t r8_2 = zx.q(*(rbx_1 + (zx.q(result.w) << 1)))
        
        if (*(r10_1 + (r8_2 << 2)) u>= *((zx.q(r14) << 2) + r10_1))
            break
        
        int16_t* rdx_1 = zx.q(rdi) * 2
        *(rdx_1 + rbx_1) = r8_2.w
        *(*(arg1 + 0x20) + (zx.q(*(*(arg1 + 0x10) + rdx_1)) << 1)) = rdi
        rdi = result.w
        i = *arg1
        result.w *= 2
        result.w += 1
        result_1 = (result + 1).w
    while (zx.d(result.w) u< i)
    
    if (rdi != rbp.w)
        uint64_t rcx_12 = zx.q(rdi) * 2
        *(rcx_12 + *(arg1 + 0x10)) = r14
        result = *(arg1 + 0x20)
        *(result + (zx.q(*(*(arg1 + 0x10) + rcx_12)) << 1)) = rdi

return result
