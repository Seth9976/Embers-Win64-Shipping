// 函数: sub_142c1ea80
// 地址: 0x142c1ea80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rbx_2 = (zx.d(arg1[4]) << 8) + zx.d(arg1[5])

if (rbx_2 - 1 u<= 2)
    uint32_t rdx_2 = (zx.d(*arg1) << 8) + zx.d(arg1[1])
    
    if (arg2 u>= rdx_2 && arg2 u<= (zx.d(arg1[2]) << 8) + zx.d(arg1[3]))
        int32_t rdi_1 = arg2 - rdx_2
        int128_t* const r11 = &data_14369a5d0
        void* rdx_3 = &arg1[6 + (zx.q(rdi_1) u>> (4 - rbx_2.b) << 1)]
        
        if (rdx_3 u>= &arg1[6])
            r11 = rdx_3
        
        uint32_t rsi = 0xffff u>> (0x10 - (1 << rbx_2.b).b)
        uint32_t rdx_9 = ((zx.d(*r11) << 8) + zx.d(*(r11 + 1)))
            u>> (0x10 - (((((1 << (4 - rbx_2.b)) - 1) & rdi_1.w) + 1) << rbx_2.b).b) & rsi
        
        if (rdx_9 u>= (rsi + 1) u>> 1)
            rdx_9 += 0xffffffff - rsi
        
        return zx.q(rdx_9)

return 0
