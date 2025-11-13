// 函数: sub_1413f6990
// 地址: 0x1413f6990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg2)

if (arg2 != 0)
    if (rbx.d u> 6)
        uint64_t rax = sub_140a846a0(rbx << 4, 0) u>> 4
        
        if (rbx.d s> rax.d)
            rax = 0x7fffffff
        
        rbx = zx.q(rax.d)
    else
        rbx = 6

if (rbx.d s<= arg3)
    *(arg1 + 0x74) = arg3
    return 

int64_t rcx_2 = *(arg1 + 0x60)

if (rbx.d u> 6)
    if (rcx_2 != 0 || rbx.d != 0)
        *(arg1 + 0x60) = sub_140a84c80(rcx_2, sx.q(rbx.d) << 4, 0)
else if (rcx_2 != 0)
    *(arg1 + 0x60) = sub_140a84c80(rcx_2, 0, 0)
    *(arg1 + 0x74) = rbx.d
    return 

*(arg1 + 0x74) = rbx.d
