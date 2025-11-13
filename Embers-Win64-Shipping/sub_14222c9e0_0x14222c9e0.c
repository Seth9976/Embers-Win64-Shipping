// 函数: sub_14222c9e0
// 地址: 0x14222c9e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_2 = arg1[1].d
int64_t rbx = 0
int64_t rdi = *arg1
int32_t r8 = arg2.d
int32_t r9 = 0
int32_t r10 = arg2:4.d
int32_t i = i_2
uint64_t result

if (i_2 s> 0)
    do
        int32_t rcx_1 = i & 0x80000001
        
        if (rcx_1 s< 0)
            rcx_1 = ((rcx_1 - 1) | 0xfffffffe) + 1
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(i)
        int32_t i_1 = (temp3_1 - temp2_1) s>> 1
        i = i_1
        int32_t rax_3 = i_1 + r9
        int64_t rcx_5 = sx.q(rax_3) * 2
        int32_t rax_4 = *(rdi + (rcx_5 << 3))
        result = zx.q(rax_4 - r8)
        
        if (rax_4 == r8)
            result = zx.q(*(rdi + (rcx_5 << 3) + 4) - r10)
        
        if (result.d s< 0)
            r9 = rax_3 + rcx_1
    while (i s> 0)

if (r9 s< i_2)
    result = sx.q(r9) << 4
    int32_t r8_1 = r8 - *(result + rdi)
    
    if (r8 == *(result + rdi))
        r8_1 = r10 - *(result + rdi + 4)
    
    if (r8_1 s>= 0 && r9 != 0xffffffff)
        rbx = rdi + 8 + result

result.b = rbx != 0
return result
