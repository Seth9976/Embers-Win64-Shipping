// 函数: sub_142c27e40
// 地址: 0x142c27e40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rbx = 2

if (sub_142bf7510(arg2, arg1, 2) != 0
        && sub_142bf7510(arg2, &arg1[2], ((zx.d(*arg1) << 8) + zx.d(arg1[1])) * 2) != 0)
    void* rdi_2 = &arg1[(((zx.q(*arg1) << 8) + zx.q(arg1[1])) << 1) + 2]
    
    if (sub_142c29430(rdi_2, arg2) != 0)
        uint16_t rdx_3 = zx.w(*rdi_2)
        uint32_t r8_5 = zx.d(*(rdi_2 + 1))
        
        if (rdx_3 * 0x100 != neg.w(r8_5.w))
            rbx = zx.q(((zx.d(rdx_3.b) << 8) + r8_5) * 2)
        
        void* rbx_4 = rbx + rdi_2
        
        if (sub_142c061d0(rbx_4, arg2) != 0)
            return sub_142c047e0(rbx_4 + (((zx.q(*rbx_4) << 8) + zx.q(*(rbx_4 + 1)) + 1) << 1), 
                arg2) __tailcall

return 0
