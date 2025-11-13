// 函数: sub_141528d20
// 地址: 0x141528d20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (sub_141528ec0(arg1, arg2, arg3, arg4, arg5) == 0)
    return 0

int64_t rdi_1 = sx.q(*arg2)
int32_t rcx = *(*(arg1 + 0xc0) + (rdi_1 << 2))

if (*(*(arg1 + 0xb8) + (rdi_1 << 2)) == rcx)
    int32_t r15_1 = rcx * 2
    int64_t rcx_1 = sx.q(r15_1)
    int64_t rax_3 = 4 * rcx_1
    
    if (mulu.dp.q(4, rcx_1) u>> 0x40 != zx.o(0))
        rax_3 = -1
    
    int64_t rax_4 = j_sub_140a82f30(rax_3)
    int32_t i_1 = 0
    int32_t i = 0
    
    if (*(*(arg1 + 0xb8) + (rdi_1 << 2)) s> 0)
        int64_t r8 = 0
        
        do
            r8 += 4
            i += 1
            *(r8 + rax_4 - 4) = *(r8 + *(*(arg1 + 0xa8) + (rdi_1 << 3)) - 4)
        while (i s< *(*(arg1 + 0xb8) + (rdi_1 << 2)))
    
    int64_t rcx_5 = sx.q(arg1[0x32] * r15_1)
    int64_t rax_9 = 8 * rcx_5
    
    if (mulu.dp.q(8, rcx_5) u>> 0x40 != zx.o(0))
        rax_9 = -1
    
    int64_t rax_10 = j_sub_140a82f30(rax_9)
    
    if (*(*(arg1 + 0xb8) + (rdi_1 << 2)) * arg1[0x32] s> 0)
        int64_t rdx_3 = 0
        
        do
            rdx_3 += 8
            i_1 += 1
            *(rdx_3 + rax_10 - 8) = *(rdx_3 + *(*(arg1 + 0xb0) + (rdi_1 << 3)) - 8)
        while (i_1 s< *(*(arg1 + 0xb8) + (rdi_1 << 2)) * arg1[0x32])
    
    *(*(arg1 + 0xc0) + (rdi_1 << 2)) = r15_1
    j_sub_140a74f90(*(*(arg1 + 0xa8) + (rdi_1 << 3)))
    *(*(arg1 + 0xa8) + (rdi_1 << 3)) = rax_4
    j_sub_140a74f90(*(*(arg1 + 0xb0) + (rdi_1 << 3)))
    *(*(arg1 + 0xb0) + (rdi_1 << 3)) = rax_10

int64_t result
result.b = 1
return result
