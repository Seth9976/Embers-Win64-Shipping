// 函数: sub_14141ea70
// 地址: 0x14141ea70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_21
int64_t rbp_1
int32_t rsi_1

if (arg1[1].d != *(arg1 + 0x34))
    rsi_1 = *arg3
    rbp_1 = *(arg3 + 8)
    void* rdx = arg1[8]
    void* r8 = &arg1[7]
    int32_t r10_4 = ((rbp_1 u>> 4).d - rsi_1) ^ rsi_1 u>> 0xd
    int32_t r9_3 = (0x9e3779b9 - r10_4 - rsi_1) ^ r10_4 << 8
    int32_t rcx_3 = (rsi_1 - r9_3 - r10_4) ^ r9_3 u>> 0xd
    int32_t r10_7 = (r10_4 - r9_3 - rcx_3) ^ rcx_3 u>> 0xc
    int32_t r9_6 = (r9_3 - r10_7 - rcx_3) ^ r10_7 << 0x10
    int32_t rcx_6 = (rcx_3 - r9_6 - r10_7) ^ r9_6 u>> 5
    int32_t r10_10 = (r10_7 - r9_6 - rcx_6) ^ rcx_6 u>> 3
    int32_t r9_9 = (r9_6 - r10_10 - rcx_6) ^ r10_10 << 0xa
    
    if (rdx != 0)
        r8 = rdx
    
    rax_21 =
        *(r8 + (((sx.q(rcx_6 - r9_9 - r10_10) ^ zx.q(r9_9) u>> 0xf) & (sx.q(arg1[9].d) - 1)) << 2))

if (arg1[1].d == *(arg1 + 0x34) || rax_21 == 0xffffffff)
label_14141eb98:
    *arg2 = 0xffffffff
else
    int64_t r8_1 = *arg1
    
    while (true)
        int64_t rdx_2 = sx.q(rax_21) * 6
        
        if (*(r8_1 + (rdx_2 << 3)) == rsi_1 && *(r8_1 + (rdx_2 << 3) + 8) == rbp_1
                && *(r8_1 + (rdx_2 << 3) + 0x10) == arg3[4]
                && *(r8_1 + (rdx_2 << 3) + 0x14) == arg3[5].b)
            *arg2 = rax_21
            break
        
        rax_21 = *(r8_1 + (rdx_2 << 3) + 0x28)
        
        if (rax_21 == 0xffffffff)
            goto label_14141eb98

return arg2
