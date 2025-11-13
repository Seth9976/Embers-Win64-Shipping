// 函数: sub_142774560
// 地址: 0x142774560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rcx = *(arg1 + 0x28)

if (rcx == 0)
    int64_t rax
    rax.b = 0
    return rax

int32_t rax_1
rax_1.b = opus_encoder_ctl(rcx, 0xfa6, zx.q(arg2)) == 0
return rax_1
