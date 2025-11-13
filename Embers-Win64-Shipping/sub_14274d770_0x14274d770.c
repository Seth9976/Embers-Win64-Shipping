// 函数: sub_14274d770
// 地址: 0x14274d770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg1 + 0x10)
int32_t r10 = *(arg1 + 0x80)
uint64_t rdx = zx.q(*rax)
*(arg1 + 0x10) = &rax[1]
uint32_t rdi = zx.d(rax[1])
*(arg1 + 0x10) = &rax[2]
int64_t r8 = rdx * 0x70
int64_t rdx_1 = *(arg1 + 0x50)
int32_t* rdi_2 = zx.q(rdi * r10) + *(arg1 + 0x70)
uint32_t rcx = zx.d(rax[2])
*(arg1 + 0x10) = &rax[3]
uint64_t result = zx.q(*(arg1 + 0x40))
uint64_t result_1 = zx.q(rcx * r10) + *(arg1 + 0x70)

if (result.d s> 0)
    uint64_t i_1 = zx.q(result.d)
    uint64_t i
    
    do
        int32_t rcx_1 = *rdi_2
        rdi_2 = &rdi_2[1]
        result = result_1
        result_1 += 4
        
        if (rcx_1 == 0)
            *result = 0xffffffff
        else
            int32_t rcx_2 = *(r8 + rdx_1 + 0x10)
            *(r8 + rdx_1 + 0x10) += 1
            *result = rcx_2 + 1
        
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
