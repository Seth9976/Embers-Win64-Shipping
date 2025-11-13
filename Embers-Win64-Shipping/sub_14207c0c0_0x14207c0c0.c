// 函数: sub_14207c0c0
// 地址: 0x14207c0c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = *(arg3 + 0x50)

if (rcx != 0)
    void* r8 = *(arg3 + 0x58)
    
    if (r8 != 0)
        int64_t rbx = sx.q(arg1[0xf].d)
        int32_t rcx_1
        rcx_1.b = (*(r8 + 0x7b) & *(zx.q(*(r8 + 0x79)) + rcx)) != 0
        int32_t rax_3 = (rbx + 1).d
        arg4 = rcx_1 | (arg4 & 0xfffffffe)
        arg1[0xf].d = rax_3
        
        if (rax_3 s> *(arg1 + 0x7c))
            sub_1405a4d70(&arg1[0xe])
        
        *(arg1[0xe] + (rbx << 3)) = arg2.q
        int64_t r9 = *arg1
        (*(r9 + 0x2a0))(arg1, zx.q(rbx.d), arg3, r9)
        return zx.q(rbx.d)

return 0xffffffff
