// 函数: sub_142c27d70
// 地址: 0x142c27d70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (sub_142c236c0(arg1 + 2, arg2, arg1) != 0)
    void* rbx_2 = &(arg1 + 2)[(((zx.q(*(arg1 + 2)) << 8) + zx.q(*(arg1 + 3))) << 1) + 2]
    
    if (sub_142c236c0(rbx_2, arg2, arg1) != 0)
        uint16_t rdx_1 = zx.w(*rbx_2)
        uint64_t r8_2 = zx.q(*(rbx_2 + 1))
        
        if (rdx_1 * 0x100 != neg.w(r8_2.w)
                && sub_142c236c0(rbx_2 + (((zx.q(rdx_1.b) << 8) + r8_2) << 1) + 2, arg2, arg1)
                != 0)
            int64_t rcx_13 = (zx.q(*(rbx_2 + (((zx.q(rdx_1.b) << 8) + r8_2) << 1) + 2)) << 8)
                + zx.q(*(rbx_2 + (((zx.q(rdx_1.b) << 8) + r8_2) << 1) + 3)) + 1
            return sub_142c047e0(&(rbx_2 + (((zx.q(rdx_1.b) << 8) + r8_2) << 1) + 2)[rcx_13 << 1], 
                arg2) __tailcall

return 0
