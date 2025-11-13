// 函数: sub_142c13dd0
// 地址: 0x142c13dd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t result = zx.d(*(arg1 + 3))
uint32_t rbp_1 = zx.d(*(arg1 + 2)) << 8
int32_t i = 0

if (rbp_1 != neg.d(result))
    do
        void* rcx_3
        
        if (i u< (zx.d(*(arg1 + 2)) << 8) + zx.d(*(arg1 + 3)))
            rcx_3 = arg1 + 2 + ((zx.q(i) * 3 + 1) << 1)
        else
            rcx_3 = &data_14369a5ac
        
        uint32_t r8_3 = (zx.d(*(rcx_3 + 2)) << 8) + zx.d(*(rcx_3 + 3))
        uint32_t rdx_2 = (zx.d(*rcx_3) << 8) + zx.d(*(rcx_3 + 1))
        uint32_t r11_2 = r8_3 u>> 4
        uint32_t rcx_7 = rdx_2 u>> 4
        
        if (r11_2 - rcx_7 u< 0x1f)
            int32_t r10_1 = 1 << (rcx_7.b & 0x1f)
            int32_t r9_1 = 1 << (r11_2.b & 0x1f)
            int32_t rax_6
            rax_6.b = r9_1 u< r10_1
            *arg2 |= r9_1 * 2 - rax_6 - r10_1
        else
            *arg2 = 0xffffffff
        
        sub_142c192e0(&arg2[1], rdx_2, r8_3)
        i += 1
    while (i u< rbp_1 + result)

result.b = 1
return result
