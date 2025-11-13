// 函数: sub_142bd8d60
// 地址: 0x142bd8d60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = *arg1
int32_t r9 = *arg2
int32_t rax_1 = r8 & 0x7fffffff
int32_t rcx_1 = r9 & 0x7fffffff

if (rax_1 == rcx_1)
    bool c_1 = r8 u< r9
    
    if (r8 == r9 || c_1)
        return zx.q(sbb.d(rax_1, rax_1, c_1))
else if (rax_1 u<= rcx_1)
    return zx.q(sbb.d(rax_1, rax_1, rax_1 u< rcx_1))

return 1
