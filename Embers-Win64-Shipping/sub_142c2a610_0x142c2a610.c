// 函数: sub_142c2a610
// 地址: 0x142c2a610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t result = zx.d(arg1[1])
uint32_t rdi_1 = zx.d(*arg1) << 8
int32_t rbx = 0
uint32_t rdi_2 = rdi_1 + result

if (rdi_1 == neg.d(result))
label_142c2a6a6:
    result.b = 0
else
    int128_t* const rax
    
    if (0 u>= rdi_2)
        rax = &data_14369a5d0
        goto label_142c2a667
    
    while (true)
        rax = &arg1[(zx.q(rbx) + 1) << 1]
    label_142c2a667:
        uint16_t rdx = zx.w(*rax)
        uint64_t r8_1 = zx.q(*(rax + 1))
        void* rcx_2
        
        if (0 != rdx * 0x100 + r8_1.w)
            rcx_2 = &arg1[(zx.q(rdx.b) << 8) + r8_1]
        else
            rcx_2 = &data_14369a5d0
        
        if (sub_142c2a570(rcx_2, arg2).b != 0)
            result.b = 1
            break
        
        rbx += 1
        
        if (rbx u>= rdi_2)
            goto label_142c2a6a6

return result
