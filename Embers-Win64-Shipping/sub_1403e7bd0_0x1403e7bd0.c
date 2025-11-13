// 函数: sub_1403e7bd0
// 地址: 0x1403e7bd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t result = 0
int32_t r11 = 0
int32_t rbx = 0
int64_t r10 = 0
int64_t rdi = sx.q(arg4 - 1)

if (arg4 - 1 s> 0)
    do
        int32_t rdx = sx.d(*(arg3 + (r10 << 1)))
        int32_t rcx = sx.d(*(arg3 + (r10 << 1) + 2))
        int32_t rcx_1 = rcx * rcx
        int32_t rax = result + rdx * rdx
        result = rax + rcx_1
        
        if (rax + rcx_1 s< 0)
            result u>>= 2
            r11 = 2
            break
        
        r10 += 2
        rbx += 2
    while (r10 s< rdi)

int64_t r8 = sx.q(rbx)

if (r8 s< rdi)
    rbx = rbx + ((rdi - r8 - 1) u>> 1 << 1).d + 2
    
    do
        int32_t rcx_6 = sx.d(*(arg3 + (r8 << 1) + 2))
        int32_t rdx_2 = sx.d(*(arg3 + (r8 << 1)))
        uint32_t rdx_5 = (rdx_2 * rdx_2 + rcx_6 * rcx_6) u>> r11.b
        uint32_t result_1 = result
        result += rdx_5
        
        if (result_1 + rdx_5 s< 0)
            result u>>= 2
            r11 += 2
        
        r8 += 2
    while (r8 s< rdi)

if (rbx == arg4 - 1)
    int32_t rdx_6 = sx.d(*(arg3 + (sx.q(rbx) << 1)))
    result += (rdx_6 * rdx_6) s>> r11.b

if ((result & 0xc0000000) != 0)
    result u>>= 2
    r11 += 2

*arg2 = r11
*arg1 = result
return result
