// 函数: sub_142467e00
// 地址: 0x142467e00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg2)

if (arg2 != 0)
    uint32_t r9_5 = (sub_140a846a0(rbx * 0xc8, 0) u/ 0xc8).d
    
    if (rbx.d s> r9_5)
        r9_5 = 0x7fffffff
    
    rbx = zx.q(r9_5)

if (rbx.d s<= arg3)
    *(arg1 + 0xc) = arg3
    return 

int64_t rcx_1 = *arg1

if (rcx_1 != 0 || rbx.d != 0)
    *arg1 = sub_140a84c80(rcx_1, sx.q(rbx.d) * 0xc8, 0)

*(arg1 + 0xc) = rbx.d
