// 函数: sub_142b73be0
// 地址: 0x142b73be0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg2)

if (*(arg1 + rdi + 0x40) == 1)
    return zx.q(*(*arg1 + (rdi << 2)))

if (rdi.d s>= 0x1000)
    int64_t rsi_1 = 0x10
    int32_t rax_8 = sub_142b71f60(arg1, 0x10)
    int64_t r8_2 = sx.q(rax_8)
    
    if (rax_8 s>= 0)
        int64_t r9_1 = 0
        int32_t r10_1 = *(*arg1 + (rdi << 2))
        int32_t* rdx_1 = arg1[2] + (r8_2 << 2)
        
        if (rdx_1 u> &rdx_1[0x10])
            rsi_1 = 0
        
        if (rsi_1 != 0)
            do
                r9_1 += 1
                *rdx_1 = r10_1
                rdx_1 = &rdx_1[1]
            while (r9_1 u< rsi_1)
        
        *(arg1 + rdi + 0x40) = 1
        *(*arg1 + (rdi << 2)) = r8_2.d
    
    return r8_2.d

int32_t result = sub_142b71f60(arg1, 0x40)
int32_t result_1 = result

if (result s< 0)
    return result

int32_t i_1 = rdi.d & 0xfffffffc
int64_t i = sx.q(i_1)

do
    int64_t r8_1 = 0x10
    int64_t rdx = 0
    int32_t rdi_1 = *(*arg1 + (i << 2))
    int32_t* rax_5 = arg1[2] + (sx.q(result_1) << 2)
    
    if (rax_5 u> &rax_5[0x10])
        r8_1 = 0
    
    if (r8_1 != 0)
        do
            rdx += 1
            *rax_5 = rdi_1
            rax_5 = &rax_5[1]
        while (rdx u< r8_1)
    
    *(arg1 + i + 0x40) = 1
    *(*arg1 + (i << 2)) = result_1
    i += 1
    result_1 += 0x10
while (i s< sx.q(i_1 + 4))

return *(*arg1 + (rdi << 2))
