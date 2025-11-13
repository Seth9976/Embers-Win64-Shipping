// 函数: sub_1418c2090
// 地址: 0x1418c2090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r10 = sx.q(arg3)
int64_t rdx = *arg1
int64_t r14 = r10 << 3

if (arg3 == 0)
    int32_t r8 = *arg2
    
    if (*(r14 + rdx) != *(arg2 + 4) + r8)
        int64_t rsi_1 = sx.q(arg1[1].d)
        int32_t rax_2 = (rsi_1 + 1).d
        arg1[1].d = rax_2
        
        if (rax_2 s> *(arg1 + 0xc))
            sub_1405a4d70(arg1)
            rdx = *arg1
        
        int64_t rdx_2 = rdx + r14
        memmove(rdx_2 + 8, rdx_2, (rsi_1 << 3).d)
        *(r14 + *arg1) = *arg2
        return 0
    
    *(r14 + rdx) = r8
    *(r14 + rdx + 4) += *(arg2 + 4)
    return 0

int32_t r11_1 = *(rdx + (r10 << 3) - 4)
void* r8_3 = rdx + (r10 << 3)
int32_t rsi_2 = *(r8_3 - 8)
int32_t rcx_5 = *arg2
int32_t r9_1 = *(arg2 + 4)

if (rsi_2 + r11_1 != rcx_5)
    if (rcx_5 + r9_1 != *(r14 + rdx))
        return sub_1418c2010(arg1, arg2, r10.d)
    
    *(r14 + rdx) = rcx_5
    *(r14 + rdx + 4) += *(arg2 + 4)
else
    int32_t rcx_6 = r11_1 + r9_1
    *(r8_3 - 4) = rcx_6
    
    if (rcx_6 + rsi_2 == *(r14 + rdx))
        *(r8_3 - 4) = rcx_6 + *(r14 + rdx + 4)
        int32_t rcx_8 = arg1[1].d
        int32_t rax_7 = rcx_8 - r10.d
        
        if (rax_7 != 1)
            int64_t r9_2 = *arg1
            memmove(r14 + r9_2, r9_2 + (sx.q((r10 + 1).d) << 3), (rax_7 - 1) << 3)
            rcx_8 = arg1[1].d
        
        arg1[1].d = rcx_8 - 1
        sub_1405c53d0(arg1)
        return zx.q((r10 - 1).d)

return zx.q(r10.d)
