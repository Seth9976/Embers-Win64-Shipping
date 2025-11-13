// 函数: sub_14040c0d0
// 地址: 0x14040c0d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = arg1 - 1
int64_t i_1 = sx.q(i)
void* rbx = arg2 + (i_1 << 2)
int32_t rax = *(arg2 + (i_1 << 2))
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(rax)
int32_t r10
r10.b = rax s< 0
int32_t r9_2 = (temp1 ^ temp0) - temp0
int32_t rcx = arg1 - i

do
    int32_t r8_1 = *(rbx - 4)
    rcx += 1
    int32_t rax_2 = r9_2
    int32_t rdx_1 = r9_2
    i -= 1
    
    if (rcx s< r9_2)
        rax_2 = rcx
    
    if (rcx s> r9_2)
        rdx_1 = rcx
    
    rbx -= 4
    r10 += *((&data_143701ca0)[sx.q(rax_2)] + (sx.q(rdx_1) << 2))
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r8_1)
    r9_2 += (temp3_1 ^ temp2_1) - temp2_1
    
    if (r8_1 s< 0)
        int32_t r8_2 = r9_2 + 1
        int32_t rdx_4 = r8_2
        
        if (rcx s< r8_2)
            rdx_4 = rcx
        
        if (rcx s> r8_2)
            r8_2 = rcx
        
        r10 += *((&data_143701ca0)[sx.q(rdx_4)] + (sx.q(r8_2) << 2))
while (i s> 0)

return zx.q(r10)
