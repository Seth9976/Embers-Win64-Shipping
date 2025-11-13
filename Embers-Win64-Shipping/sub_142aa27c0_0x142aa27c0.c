// 函数: sub_142aa27c0
// 地址: 0x142aa27c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

while (true)
    int64_t r9_1 = sx.q(arg2[3].d)
    uint32_t rbx_1
    
    if (r9_1.d s< 0)
        rbx_1 = (*(*arg2 + 0x10))(arg2)
    else if (r9_1.d != *(arg2 + 0x1c))
        int64_t rcx_3 = arg2[1]
        rbx_1 = zx.d(*(rcx_3 + (r9_1 << 1)))
        arg2[3].d = r9_1.d + 1
        
        if ((rbx_1 & 0xfffffc00) == 0xd800)
            arg2[3].d = r9_1.d + 2
            rbx_1 = ((rbx_1 - 0xd7f7) << 0xa) + zx.d(*(rcx_3 + (sx.q(r9_1.d + 1) << 1)))
    else
        arg2[3].d = 0xffffffff
        rbx_1 = (*(*arg2 + 0x10))(arg2)
    
    int64_t rcx_1 = sx.q(arg3[3].d)
    uint32_t rdi_1
    
    if (rcx_1.d s< 0)
        rdi_1 = (*(*arg3 + 0x10))(arg3)
    else if (rcx_1.d != *(arg3 + 0x1c))
        int64_t r8 = arg3[1]
        int32_t rdx = (rcx_1 + 1).d
        rdi_1 = zx.d(*(r8 + (rcx_1 << 1)))
        arg3[3].d = rdx
        
        if ((rdi_1 & 0xfffffc00) == 0xd800)
            arg3[3].d = rdx + 1
            rdi_1 = ((rdi_1 - 0xd7f7) << 0xa) + zx.d(*(r8 + (sx.q(rdx) << 1)))
    else
        arg3[3].d = 0xffffffff
        rdi_1 = (*(*arg3 + 0x10))(arg3)
    
    if (rbx_1 != rdi_1)
        int32_t rbx_4
        
        if (rbx_1 s< 0)
            rbx_4 = -2
        else if (rbx_1 != 0xfffe)
            rbx_4 = sub_142aa5180(arg2, arg1, rbx_1)
        else
            rbx_4 = -1
        
        int32_t rax_15
        
        if (rdi_1 s< 0)
            rax_15 = -2
        else if (rdi_1 != 0xfffe)
            rax_15 = sub_142aa5180(arg3, arg1, rdi_1)
        else
            rax_15 = -1
        
        if (rbx_4 s< rax_15)
            return 0xffffffff
        
        if (rbx_4 s> rax_15)
            break
    else
        if (rbx_1 s< 0)
            return 0

return 1
