// 函数: sub_142bfb1a0
// 地址: 0x142bfb1a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r10 = 0
uint32_t r9_4 =
    (zx.d(arg1[1]) << 0x10) + (zx.d(arg1[2]) << 8) + (zx.d(*arg1) << 0x18) + zx.d(arg1[3])
int32_t r9_5 = r9_4 - 1

if (r9_4 - 1 s>= 0)
    int32_t r11_1 = *arg2
    
    do
        uint64_t rax_6 = zx.q((r9_5 + r10) u>> 1)
        uint64_t rdx = zx.q(rax_6.d)
        void* rcx = &arg1[4 + (rax_6 << 2)]
        uint32_t r8_3 = (zx.d(*(rcx + rax_6 + 1)) << 8) + (zx.d(*(rcx + rax_6)) << 0x10)
            + zx.d(*(rcx + rdx + 2))
        int32_t rax_10
        
        if (r11_1 u>= r8_3)
            rax_10.b = r11_1 != r8_3
        
        if (r11_1 u< r8_3 || rax_10 s< 0)
            r9_5 = (rdx - 1).d
        else
            if (rax_10 s<= 0)
                return &arg1[4 + rdx * 5]
            
            r10 = (rdx + 1).d
    while (r10 s<= r9_5)

return arg3
