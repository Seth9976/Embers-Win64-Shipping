// 函数: sub_142b9e3b0
// 地址: 0x142b9e3b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r11 = 0

if (arg1[6].b == 0)
    int32_t rax_1 = *arg1
    
    if (rax_1 u> arg1[7])
        uint64_t rcx = zx.q(rax_1 - 1)
        int64_t rax_2 = *(arg1 + 8)
        
        if (*(rax_2 + (rcx << 3)) - *arg2 + 1 u<= 2
                && *(rax_2 + (rcx << 3) + 4) - *(arg2 + 4) + 1 u<= 2)
            return 0
    
    int32_t rax_10 = sub_142b9e2d0(arg1, 1)
    r11 = rax_10
    
    if (rax_10 == 0)
        uint64_t r9_2 = zx.q(*arg1)
        int64_t r8 = *(arg1 + 0x10)
        *(*(arg1 + 8) + (r9_2 << 3)) = *arg2
        *(r8 + r9_2) = 1
        *arg1 += 1
else
    *(*(arg1 + 8) + (zx.q(*arg1 - 1) << 3)) = *arg2

arg1[6].b = arg3
return zx.q(r11)
