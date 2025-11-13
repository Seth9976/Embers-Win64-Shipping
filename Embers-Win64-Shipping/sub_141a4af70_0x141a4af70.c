// 函数: sub_141a4af70
// 地址: 0x141a4af70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_3
int64_t rbx_1
int64_t rbp_1
int64_t rsi_1
int64_t rdi_1

if (arg1[1].d != *(arg1 + 0x34))
    rbp_1 = sx.q(*arg3)
    void* r10_1 = &arg1[7]
    rbx_1 = sx.q(arg3[3])
    rdi_1 = sx.q(arg3[2])
    rsi_1 = sx.q(arg3[1])
    void* r9_1 = *(r10_1 + 8)
    
    if (r9_1 != 0)
        r10_1 = r9_1
    
    rax_3 = *(r10_1 + (((rbp_1 ^ rsi_1 ^ rdi_1 ^ rbx_1) & (sx.q(arg1[9].d) - 1)) << 2))

if (arg1[1].d == *(arg1 + 0x34) || rax_3 == 0xffffffff)
label_141a4b008:
    *arg2 = 0xffffffff
else
    int64_t r9_2 = *arg1
    
    while (true)
        int32_t* rdx = sx.q(rax_3) * 0x38
        int32_t r8_9 = (*(rdx + r9_2 + 4) ^ rsi_1.d) | (*(rdx + r9_2 + 8) ^ rdi_1.d)
            | (*(rdx + r9_2 + 0xc) ^ rbx_1.d) | (*(rdx + r9_2) ^ rbp_1.d)
        
        if (r8_9 == 0)
            *arg2 = rax_3
            break
        
        rax_3 = *(rdx + r9_2 + 0x30)
        
        if (rax_3 == 0xffffffff)
            goto label_141a4b008

return arg2
