// 函数: sub_142a6c840
// 地址: 0x142a6c840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(arg2)
int32_t rcx = rsi.d
int32_t rax_2
int32_t rcx_10

if (rcx == 5)
    int32_t rax_8 = (*(*arg1 + 0x118))(arg1)
    int64_t r9_1 = *arg1
    rax_2 = (*(r9_1 + 0x108))(arg1, zx.q(rax_8), zx.q(*(arg1 + 0x14)), r9_1)
    rcx_10 = arg1[4].d
label_142a6c931:
    
    if (rcx_10 s>= 1 && rcx_10 s<= rax_2)
        return 
else
    if (rcx == 6)
        int32_t rax_6 = (*(*arg1 + 0x118))(arg1)
        int64_t r8_2 = *arg1
        rax_2 = (*(r8_2 + 0x110))(arg1, zx.q(rax_6), r8_2)
        rcx_10 = *(arg1 + 0x24)
        goto label_142a6c931
    
    if (rcx != 8)
        int32_t rax_1 = (*(*arg1 + 0x70))(arg1, zx.q(rsi.d))
        int64_t r8 = *arg1
        rax_2 = (*(r8 + 0x60))(arg1, zx.q(rsi.d), r8)
        int32_t rdx_2 = *(arg1 + (rsi << 2) + 0xc)
        
        if (rdx_2 s< rax_2 || rdx_2 s> rax_1)
            *arg3 = 1
        
        return 
    
    if (*(arg1 + 0x2c) == 0)
        *arg3 = 1
        return 
    
    int32_t rax_4 = (*(*arg1 + 0x70))(arg1, 8)
    int64_t r8_1 = *arg1
    rax_2 = (*(r8_1 + 0x60))(arg1, 8, r8_1)
    int32_t rcx_7 = *(arg1 + 0x2c)
    
    if (rcx_7 s>= rax_2)
        if (rcx_7 s<= rax_4)
            return 
        
        *arg3 = 1
        return 
*arg3 = 1
