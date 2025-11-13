// 函数: sub_142c1c5e0
// 地址: 0x142c1c5e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t result = zx.d(arg1[1])
uint32_t rbp_1 = zx.d(*arg1) << 8
int32_t rbx = 0
uint32_t rbp_2 = rbp_1 + result

if (rbp_1 == neg.d(result))
label_142c1c6ed:
    result.b = 0
else
    while (true)
        int128_t* const rax_1
        
        if (rbx u< (zx.d(*arg1) << 8) + zx.d(arg1[1]))
            rax_1 = &arg1[(zx.q(rbx) + 1) << 1]
        else
            rax_1 = &data_14369a5d0
        
        uint16_t rdx = zx.w(*rax_1)
        uint64_t r8 = zx.q(*(rax_1 + 1))
        void* rax_4
        
        if (0 != rdx * 0x100 + r8.w)
            rax_4 = &arg1[(zx.q(rdx.b) << 8) + r8]
        else
            rax_4 = &data_14369a5d0
        
        uint16_t r11_1 = zx.w(*rax_4)
        uint32_t rsi_1 = zx.d(*(rax_4 + 1))
        int32_t rcx_6
        
        if (r11_1 * 0x100 == neg.w(rsi_1.w))
            rcx_6 = 0
        else
            rcx_6 = rsi_1 - 1 + (zx.d(r11_1.b) << 8)
        
        result = sub_142c1d9c0(arg2, (zx.d(r11_1.b) << 8) + rsi_1, rax_4 + 4, 
            (zx.d(*(rax_4 + 2)) << 8) + zx.d(*(rax_4 + 3)), zx.q(rcx_6 * 2) + rax_4 + 4, arg3)
        
        if (result.b != 0)
            result.b = 1
            break
        
        rbx += 1
        
        if (rbx u>= rbp_2)
            goto label_142c1c6ed

return result
