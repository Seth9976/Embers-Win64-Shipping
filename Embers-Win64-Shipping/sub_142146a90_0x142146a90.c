// 函数: sub_142146a90
// 地址: 0x142146a90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_35
int64_t rbp_1
int32_t rsi_1

if (arg1[1].d != *(arg1 + 0x34))
    rsi_1 = arg3[1].d
    rbp_1 = *arg3
    uint32_t r9_2 = (rbp_1 u>> 4).d
    int32_t r10_2 = (0x9e3779b9 - r9_2) ^ r9_2 << 8
    int32_t r11_3 = neg.d(r10_2 + r9_2) ^ r10_2 u>> 0xd
    int32_t r9_5 = (r9_2 - r10_2 - r11_3) ^ r11_3 u>> 0xc
    int32_t r10_5 = (r10_2 - r9_5 - r11_3) ^ r9_5 << 0x10
    int32_t r11_6 = (r11_3 - r10_5 - r9_5) ^ r10_5 u>> 5
    int32_t r9_8 = (r9_5 - r10_5 - r11_6) ^ r11_6 u>> 3
    int32_t r10_8 = (r10_5 - r9_8 - r11_6) ^ r9_8 << 0xa
    int32_t r11_11 = (((r11_6 - r10_8 - r9_8) ^ r10_8 u>> 0xf) - rsi_1) ^ rsi_1 u>> 0xd
    int32_t rbx_3 = (0x9e3779b9 - r11_11 - rsi_1) ^ r11_11 << 8
    int32_t rcx_3 = (rsi_1 - rbx_3 - r11_11) ^ rbx_3 u>> 0xd
    int32_t r11_14 = (r11_11 - rbx_3 - rcx_3) ^ rcx_3 u>> 0xc
    int32_t rbx_6 = (rbx_3 - r11_14 - rcx_3) ^ r11_14 << 0x10
    int32_t rcx_6 = (rcx_3 - rbx_6 - r11_14) ^ rbx_6 u>> 5
    int32_t r11_17 = (r11_14 - rbx_6 - rcx_6) ^ rcx_6 u>> 3
    void* rdx = arg1[8]
    void* r8 = &arg1[7]
    int32_t rbx_9 = (rbx_6 - r11_17 - rcx_6) ^ r11_17 << 0xa
    
    if (rdx != 0)
        r8 = rdx
    
    rax_35 = *(r8
        + (((sx.q(rcx_6 - rbx_9 - r11_17) ^ zx.q(rbx_9) u>> 0xf) & (sx.q(arg1[9].d) - 1)) << 2))

if (arg1[1].d == *(arg1 + 0x34) || rax_35 == 0xffffffff)
label_142146c0c:
    *arg2 = 0xffffffff
else
    int64_t rdx_1 = *arg1
    
    while (true)
        int64_t rcx_13 = sx.q(rax_35) << 5
        
        if (*(rcx_13 + rdx_1) == rbp_1 && *(rcx_13 + rdx_1 + 8) == rsi_1)
            *arg2 = rax_35
            break
        
        rax_35 = *(rcx_13 + rdx_1 + 0x18)
        
        if (rax_35 == 0xffffffff)
            goto label_142146c0c

return arg2
