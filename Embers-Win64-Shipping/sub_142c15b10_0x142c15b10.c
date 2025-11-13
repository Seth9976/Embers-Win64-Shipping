// 函数: sub_142c15b10
// 地址: 0x142c15b10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = 0
uint32_t rsi_2 = (zx.d(*arg1) << 8) + zx.d(arg1[1])
uint32_t rdi_1 = zx.d(arg1[4]) << 8
uint32_t result = zx.d(arg1[5])
uint32_t rdi_2 = rdi_1 + result

if (rdi_1 != neg.d(result))
    do
        int128_t* const rax_2
        
        if (rbx u< (zx.d(arg1[4]) << 8) + zx.d(arg1[5]))
            rax_2 = &arg1[(zx.q(rbx) + 3) << 1]
        else
            rax_2 = &data_14369a5d0
        
        uint16_t rdx = zx.w(*rax_2)
        uint64_t r8_1 = zx.q(*(rax_2 + 1))
        void* rcx_5
        
        if (0 != rdx * 0x100 + r8_1.w)
            rcx_5 = &arg1[(zx.q(rdx.b) << 8) + r8_1]
        else
            rcx_5 = &data_14369a5d0
        
        result, arg3 = sub_142c16910(rcx_5, arg2, rsi_2, arg3)
        
        if (result.b != 0)
            return result
        
        rbx += 1
    while (rbx u< rdi_2)

result.b = 0
return result
