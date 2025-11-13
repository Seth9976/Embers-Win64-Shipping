// 函数: sub_14241ebf0
// 地址: 0x14241ebf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg2)

if (arg2 != 0)
    uint32_t r8_5 = (sub_140a846a0(rbx * 0x64, 0) u/ 0x64).d
    
    if (rbx.d s> r8_5)
        r8_5 = 0x7fffffff
    
    rbx = zx.q(r8_5)

if (rbx.d == *(arg1 + 0xc))
    return 

*(arg1 + 0xc) = rbx.d
int64_t rcx_1 = *arg1

if (rcx_1 != 0 || rbx.d != 0)
    *arg1 = sub_140a84c80(rcx_1, sx.q(rbx.d) * 0x64, 0)
