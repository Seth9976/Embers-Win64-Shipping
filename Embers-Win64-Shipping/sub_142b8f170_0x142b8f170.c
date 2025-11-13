// 函数: sub_142b8f170
// 地址: 0x142b8f170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r10 = *(arg1 + 0x1c40)
int64_t r9_1 = arg2 & 0xffffffffffff3fff

if (r10 == 0)
    return zx.q(*(*(arg1 + 0x1c58) - 2))

int32_t r8 = 0
int32_t rax_6

while (true)
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r8 + r10)
    rax_6 = (temp1_1 - temp0_1) s>> 1
    int64_t rdx_1 = *(*(arg1 + 0x1c50) + (sx.q(rax_6) << 3))
    int32_t rax_7
    
    if (r9_1 u>= rdx_1)
        if (r9_1 u<= rdx_1)
            break
        
        if (rax_6 == r8)
            rax_7 = r8 + 1
        else
            r8 = rax_6
            continue
    else if (rax_6 == r8)
        rax_7 = r8
    else
        r10 = rax_6
        continue
    
    rax_6 = not.d(rax_7)
    break

return zx.q(*(*(arg1 + 0x1c58) + (sx.q(rax_6) << 1)))
