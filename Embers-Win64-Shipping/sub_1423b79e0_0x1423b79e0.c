// 函数: sub_1423b79e0
// 地址: 0x1423b79e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s>= 0 && arg2 s< *(arg1 + 0x130))
    void* r9_1 = *(*(arg1 + 0x128) + (sx.q(arg2) << 3))
    
    if (r9_1 != 0)
        int32_t zmm0 = *(r9_1 + 0x270)
        int32_t temp0
        int32_t temp1
        temp0:temp1 = sx.q(arg2)
        int32_t rdx_1 = temp0 & 3
        int32_t rax_2 = temp1 + rdx_1
        int64_t rcx_3 = sx.q((rax_2 & 3) - rdx_1)
        int64_t rdx_3 = sx.q(rax_2 s>> 2) * 0xf0 + *(arg1 + 0x10)
        *(rdx_3 + (rcx_3 << 2)) = *(r9_1 + 0x100)
        *(rdx_3 + (rcx_3 << 2) + 0x10) = *(r9_1 + 0x104)
        *(rdx_3 + (rcx_3 << 2) + 0x20) = *(r9_1 + 0x108)
        *(rdx_3 + (rcx_3 << 2) + 0x30) = *(r9_1 + 0x100)
        *(rdx_3 + (rcx_3 << 2) + 0x40) = *(r9_1 + 0x104)
        *(rdx_3 + (rcx_3 << 2) + 0x50) = *(r9_1 + 0x108)
        *(rdx_3 + (rcx_3 << 2) + 0x60) = *(r9_1 + 0x10c)
        *(rdx_3 + (rcx_3 << 2) + 0x70) = *(r9_1 + 0x110)
        *(rdx_3 + (rcx_3 << 2) + 0x80) = *(r9_1 + 0x114)
        *(rdx_3 + (rcx_3 << 2) + 0x90) = *(r9_1 + 0x118)
        *(rdx_3 + (rcx_3 << 2) + 0xb0) = 0
        *(rdx_3 + (rcx_3 << 2) + 0xc0) = 0
        int64_t rax_15
        rax_15.b = 1
        *(rdx_3 + (rcx_3 << 2) + 0xe0) = zmm0
        *(rdx_3 + (rcx_3 << 2) + 0xa0) = 0xffff0000
        *(rdx_3 + (rcx_3 << 2) + 0xd0) = 0x7f7fffff
        return 1

int64_t result
result.b = 0
return result
