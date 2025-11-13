// 函数: sub_140bab6f0
// 地址: 0x140bab6f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_143e1a350 != 0)
    int32_t rbx_2 = arg1[1].d - 1
    int32_t rax = sub_140baa830(rbx_2)
    
    if (rax s< 0)
        rbx_2 = 0
    else if (rax s< rbx_2)
        rbx_2 = rax
    
    int64_t r10 = sx.q(rbx_2) << 2
    *arg2 = *(r10 + *arg1)
    int32_t rax_3 = arg1[1].d
    int32_t rcx_3 = rax_3 - rbx_2
    
    if (rcx_3 != 1)
        int64_t r9_1 = *arg1
        memmove(r9_1 + r10, r9_1 + (sx.q(rbx_2 + 1) << 2), (rcx_3 - 1) << 2)
        rax_3 = arg1[1].d
    
    arg1[1].d = rax_3 - 1
    return rax_3 - 1

*arg2 = **arg1
int32_t r9_2 = arg1[1].d
int64_t result = zx.q(r9_2 - 1)

if (result.d s>= 1)
    result = 1

if (result.d != 0)
    int64_t rcx_8 = *arg1
    result = memcpy(rcx_8, rcx_8 + (sx.q(r9_2 - result.d) << 2), result.d << 2)
    r9_2 = arg1[1].d

int32_t i = r9_2 - 1
arg1[1].d = i

if (arg3 != 0)
    result = sub_1405dac90(arg1)
    i = arg1[1].d

int64_t r10_1 = *arg1
int32_t result_1 = 0

if (i s> 1)
    do
        int32_t r8_4 = result_1 * 2
        uint64_t rdx_2 = zx.q(r8_4 + 1)
        
        if ((rdx_2 + 1).d s< i)
            if (*(r10_1 + (sx.q(rdx_2.d) << 2)) s< *(r10_1 + (sx.q(r8_4) << 2) + 8))
                rdx_2 = zx.q(r8_4)
            
            rdx_2 = zx.q(rdx_2.d + 1)
        
        int64_t rax_11 = sx.q(rdx_2.d)
        int32_t r8_5 = *(r10_1 + (rax_11 << 2))
        result = sx.q(result_1)
        int32_t r11_1 = *(r10_1 + (result << 2))
        
        if (r8_5 s>= r11_1)
            break
        
        *(r10_1 + (result << 2)) = r8_5
        result_1 = rdx_2.d
        result = zx.q(((rdx_2 << 1) + 1).d)
        *(r10_1 + (rax_11 << 2)) = r11_1
    while (result.d s< i)

return result
