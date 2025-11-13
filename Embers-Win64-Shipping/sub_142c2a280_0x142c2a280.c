// 函数: sub_142c2a280
// 地址: 0x142c2a280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t result = zx.d(arg1[1])
uint32_t rsi_1 = zx.d(*arg1) << 8
int32_t rbx = 0

if (rsi_1 == neg.d(result))
label_142c2a330:
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
        void* rcx_5
        
        if (0 != rdx * 0x100 + r8.w)
            rcx_5 = &arg1[(zx.q(rdx.b) << 8) + r8]
        else
            rcx_5 = &data_14369a5d0
        
        if (sub_142c2a1a0(rcx_5, arg2, arg3).b != 0)
            result.b = 1
            break
        
        rbx += 1
        
        if (rbx u>= rsi_1 + result)
            goto label_142c2a330

return result
