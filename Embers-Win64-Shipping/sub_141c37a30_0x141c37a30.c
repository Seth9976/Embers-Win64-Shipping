// 函数: sub_141c37a30
// 地址: 0x141c37a30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_37
int32_t rbp_1
int32_t rsi_1
int32_t r14_1

if (arg1[1].d != *(arg1 + 0x34))
    rsi_1 = arg3[1]
    rbp_1 = arg3[2]
    r14_1 = *arg3
    int32_t r9_3 = (r14_1 - rsi_1) ^ rsi_1 u>> 0xd
    int32_t rcx_2 = (0x9e3779b9 - r9_3 - rsi_1) ^ r9_3 << 8
    int32_t r10_4 = (rsi_1 - rcx_2 - r9_3) ^ rcx_2 u>> 0xd
    int32_t r9_6 = (r9_3 - rcx_2 - r10_4) ^ r10_4 u>> 0xc
    int32_t rcx_5 = (rcx_2 - r9_6 - r10_4) ^ r9_6 << 0x10
    int32_t r10_7 = (r10_4 - rcx_5 - r9_6) ^ rcx_5 u>> 5
    int32_t r9_9 = (r9_6 - rcx_5 - r10_7) ^ r10_7 u>> 3
    int32_t rcx_8 = (rcx_5 - r9_9 - r10_7) ^ r9_9 << 0xa
    int32_t r10_12 = (((r10_7 - rcx_8 - r9_9) ^ rcx_8 u>> 0xf) - rbp_1) ^ rbp_1 u>> 0xd
    int32_t r11_3 = (0x9e3779b9 - r10_12 - rbp_1) ^ r10_12 << 8
    int32_t rcx_13 = (rbp_1 - r11_3 - r10_12) ^ r11_3 u>> 0xd
    int32_t r10_15 = (r10_12 - r11_3 - rcx_13) ^ rcx_13 u>> 0xc
    int32_t r11_6 = (r11_3 - r10_15 - rcx_13) ^ r10_15 << 0x10
    int32_t rcx_16 = (rcx_13 - r11_6 - r10_15) ^ r11_6 u>> 5
    void* rdx = arg1[8]
    void* r8 = &arg1[7]
    int32_t r10_18 = (r10_15 - r11_6 - rcx_16) ^ rcx_16 u>> 3
    int32_t r11_9 = (r11_6 - r10_18 - rcx_16) ^ r10_18 << 0xa
    
    if (rdx != 0)
        r8 = rdx
    
    rax_37 = *(r8
        + (((sx.q(rcx_16 - r11_9 - r10_18) ^ zx.q(r11_9) u>> 0xf) & (sx.q(arg1[9].d) - 1)) << 2))

if (arg1[1].d == *(arg1 + 0x34) || rax_37 == 0xffffffff)
label_141c37bc5:
    *arg2 = 0xffffffff
else
    int64_t r8_1 = *arg1
    
    while (true)
        int64_t rdx_1 = sx.q(rax_37) * 3
        
        if (*(r8_1 + (rdx_1 << 3)) == r14_1 && *(r8_1 + (rdx_1 << 3) + 4) == rsi_1
                && *(r8_1 + (rdx_1 << 3) + 8) == rbp_1)
            *arg2 = rax_37
            break
        
        rax_37 = *(r8_1 + (rdx_1 << 3) + 0x10)
        
        if (rax_37 == 0xffffffff)
            goto label_141c37bc5

return arg2
