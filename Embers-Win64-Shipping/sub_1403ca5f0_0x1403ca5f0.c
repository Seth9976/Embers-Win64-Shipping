// 函数: sub_1403ca5f0
// 地址: 0x1403ca5f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x11) != 8)
    return 

uint64_t r10_1 = zx.q(*arg1)
uint64_t rax
rax.b = arg1[4].b

if (arg3 == 0 || rax.b != 2)
    if (arg3 != 0 && rax.b == 6)
        if (r10_1.d == 0)
            goto label_1403ca6b1
        
        int64_t rsi_3 = 0
        
        do
            uint64_t rax_8 = zx.q(arg2[(rsi_3 << 2) + 2]) u>> 3 | ((
                zx.q(zx.d(arg2[rsi_3 << 2]) << 7) & 0x7c00)
                + ((zx.q(arg2[(rsi_3 << 2) + 1]) & 0xf8) << 2))
            arg2[rsi_3] = *(arg3 + rax_8)
            rsi_3 += 1
        while (r10_1.d != rsi_3.d)
        
    label_1403ca6ac:
        arg2.b = *(arg1 + 0x11)
        goto label_1403ca6b3
    
    if (arg4 != 0 && rax.b == 3 && r10_1.d != 0)
        int32_t rsi_5 = r10_1.d & 3
        
        if (r10_1.d - 1 u>= 3)
            rax = zx.q(rsi_5 - r10_1.d)
            int32_t i
            
            do
                *arg2 = *(arg4 + zx.q(*arg2))
                arg2[1] = *(arg4 + zx.q(arg2[1]))
                arg2[2] = *(arg4 + zx.q(arg2[2]))
                arg2[3] = *(arg4 + zx.q(arg2[3]))
                arg2 = &arg2[4]
                i = rax.d
                rax = zx.q(rax.d + 4)
            while (i != 0xfffffffc)
        
        if (rsi_5 != 0)
            rax = 0
            
            do
                arg2[rax] = *(arg4 + zx.q(arg2[rax]))
                rax += 1
            while ((r10_1.d & 3) != rax.d)
else
    if (r10_1.d != 0)
        int64_t r9 = 0
        char* r11_1 = arg2
        
        do
            arg2[r9] = *(arg3 + (zx.q(r11_1[2]) u>> 3
                | ((zx.q(zx.d(*r11_1) << 7) & 0x7c00) + ((zx.q(r11_1[1]) & 0xf8) << 2))))
            r9 += 1
            r11_1 = &r11_1[3]
        while (r10_1.d != r9.d)
        
        goto label_1403ca6ac
    
label_1403ca6b1:
    arg2.b = 8
label_1403ca6b3:
    arg1[4].b = 3
    *(arg1 + 0x12) = 1
    *(arg1 + 0x13) = arg2.b
    uint64_t rax_10 = zx.q(arg2.b)
    
    if (arg2.b u< 8)
        rax = (rax_10 * r10_1 + 7) u>> 3
    else
        rax = (rax_10 u>> 3) * r10_1
    
    *(arg1 + 8) = rax
