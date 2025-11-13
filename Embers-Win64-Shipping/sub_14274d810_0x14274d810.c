// 函数: sub_14274d810
// 地址: 0x14274d810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg1 + 0x10)
int32_t* r11 = *(arg1 + 0x20)
uint64_t rdx = zx.q(*rax)
*(arg1 + 0x10) = &rax[1]
uint32_t rax_1 = zx.d(rax[1])
int32_t r9_1 = 0
int64_t r8 = rdx * 0x70
int64_t rdx_1 = *(arg1 + 0x50)
uint32_t r10 = rax_1
*(arg1 + 0x10) = &rax[2]
int32_t rcx = *r11

if (rax_1 s>= rcx)
    int64_t rax_2 = 0
    
    do
        r10 -= rcx
        rax_2 += 1
        rcx = r11[rax_2]
        r9_1 += 1
    while (r10 s>= rcx)

int32_t r9_3 = *(sx.q(r10) + *(*(arg1 + 0x18) + (sx.q(r9_1) << 3)))
uint32_t rcx_2 = zx.d(rax[2])
*(arg1 + 0x10) = &rax[3]
int32_t i_3 = *(arg1 + 0x40)
int32_t* result = zx.q(rcx_2 * *(arg1 + 0x80)) + *(arg1 + 0x70)

if (i_3 s> 0)
    uint64_t i_2 = zx.q(i_3)
    
    if (r9_3 != 0)
        uint64_t i
        
        do
            int32_t* result_2 = result
            result = &result[1]
            int32_t rcx_3 = *(r8 + rdx_1 + 0x10)
            *(r8 + rdx_1 + 0x10) += 1
            *result_2 = rcx_3 + 1
            i = i_2
            i_2 -= 1
        while (i != 1)
        return result
    
    uint64_t i_1
    
    do
        int32_t* result_1 = result
        result = &result[1]
        *result_1 = 0xffffffff
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)

return result
