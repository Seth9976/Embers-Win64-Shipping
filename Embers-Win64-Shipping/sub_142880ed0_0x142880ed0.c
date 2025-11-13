// 函数: sub_142880ed0
// 地址: 0x142880ed0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int64_t rdx = *(arg2 + 8)

if ((*(*(*(arg1 + 8) + 0xc0) + 0x60) & 1) != 0)
    if (arg4 + 1 + arg3 u> rdx)
        return 0
    
    *(arg2 + 0x20) += arg3
    rdx -= arg3
    *(arg2 + 0x28) += arg3
    *(arg2 + 0x10) -= arg3
    *(arg2 + 8) = rdx
else if (arg4 + 1 u> rdx)
    return 0

uint64_t rdi = zx.q(*(*(arg2 + 0x20) + rdx - 1))
int32_t rax_4 = sub_142890eb0(sub_140687ad0(*(arg1 + 0x430)))
int64_t r8 = *(arg2 + 8)
uint64_t result
int64_t r8_2

if ((rax_4 & 0x200000) == 0)
    int64_t rcx_2 = rdi + arg4 + 1
    int64_t rbp_1 = 0x100
    int64_t r9_7 = (((((r8 - rcx_2) ^ rcx_2) | (r8 ^ rcx_2)) ^ r8) u>> 0x3f) - 1
    
    if (r8 u< 0x100)
        rbp_1 = r8
    
    int64_t r10_1 = 0
    
    if (rbp_1 != 0)
        void* r11_3 = *(arg2 + 0x20) - 1 + r8
        
        do
            r11_3 -= 1
            uint8_t rax_10 = (r10_1 u>> 0x3f).b
            int64_t rcx_4 = rdi - r10_1
            r10_1 += 1
            r9_7 &= not.q(zx.q((((rcx_4 u>> 0x3f).b ^ rax_10) | (rax_10 ^ (rdi u>> 0x3f).b)) - 1)
                & (rdi ^ zx.q(*(r11_3 + 1))))
        while (r10_1 u< rbp_1)
    
    int64_t rcx_11 = neg.q((zx.q((not.q(r9_7)).b) - 1) u>> 0x3f)
    r8_2 = r8 - ((rdi + 1) & rcx_11)
    result = (zx.q(rcx_11.d) & 1) | zx.q(not.d(rcx_11.d))
else
    result = 1
    r8_2 = r8 - rdi - 1

*(arg2 + 8) = r8_2
return result
