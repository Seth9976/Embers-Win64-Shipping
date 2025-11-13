// 函数: sub_141c5c310
// 地址: 0x141c5c310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_21
int32_t rsi_1

if (arg1[1].d != *(arg1 + 0x34))
    int32_t r11_1 = *(arg3 + 4)
    rsi_1 = arg3[1].d
    void* rdx = arg1[8]
    void* r8 = &arg1[7]
    int32_t r10_3 = (rsi_1 - r11_1) ^ r11_1 u>> 0xd
    int32_t r9_3 = (0x9e3779b9 - r10_3 - r11_1) ^ r10_3 << 8
    int32_t r11_4 = (r11_1 - r9_3 - r10_3) ^ r9_3 u>> 0xd
    int32_t r10_6 = (r10_3 - r9_3 - r11_4) ^ r11_4 u>> 0xc
    int32_t r9_6 = (r9_3 - r10_6 - r11_4) ^ r10_6 << 0x10
    int32_t r11_7 = (r11_4 - r9_6 - r10_6) ^ r9_6 u>> 5
    int32_t r10_9 = (r10_6 - r9_6 - r11_7) ^ r11_7 u>> 3
    int32_t r9_9 = (r9_6 - r10_9 - r11_7) ^ r10_9 << 0xa
    
    if (rdx != 0)
        r8 = rdx
    
    rax_21 =
        *(r8 + (((sx.q(r11_7 - r9_9 - r10_9) ^ zx.q(r9_9) u>> 0xf) & (sx.q(arg1[9].d) - 1)) << 2))

if (arg1[1].d == *(arg1 + 0x34) || rax_21 == 0xffffffff)
label_141c5c41c:
    *arg2 = 0xffffffff
else
    int64_t rdx_1 = *arg1
    
    while (true)
        int64_t rcx_4 = sx.q(rax_21) << 6
        
        if (*(rcx_4 + rdx_1) == *arg3 && *(rcx_4 + rdx_1 + 8) == rsi_1)
            *arg2 = rax_21
            break
        
        rax_21 = *(rcx_4 + rdx_1 + 0x38)
        
        if (rax_21 == 0xffffffff)
            goto label_141c5c41c

return arg2
