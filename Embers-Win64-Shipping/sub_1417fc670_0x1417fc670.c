// 函数: sub_1417fc670
// 地址: 0x1417fc670
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg2)

if (arg2 != 0)
    if (rbx.d u> 0x20)
        int64_t rax = sub_140a846a0(rbx, 0)
        
        if (rbx.d s> rax.d)
            rax = 0x7fffffff
        
        rbx = zx.q(rax.d)
    else
        rbx = 0x20

if (rbx.d s<= arg3)
    *(arg1 + 0x2c) = arg3
    return 

int64_t rcx_1 = *(arg1 + 0x20)

if (rbx.d u> 0x20)
    if (rcx_1 != 0 || rbx.d != 0)
        *(arg1 + 0x20) = sub_140a84c80(rcx_1, sx.q(rbx.d), 0)
else if (rcx_1 != 0)
    *(arg1 + 0x20) = sub_140a84c80(rcx_1, 0, 0)
    *(arg1 + 0x2c) = rbx.d
    return 

*(arg1 + 0x2c) = rbx.d
