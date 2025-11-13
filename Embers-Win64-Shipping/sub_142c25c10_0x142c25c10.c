// 函数: sub_142c25c10
// 地址: 0x142c25c10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool rax = sub_142c294c0(arg1, arg2, arg3)

if (rax != 0)
    uint16_t rdx = zx.w(*arg1)
    uint64_t r8 = zx.q(arg1[1])
    
    if (0 == rdx * 0x100 + r8.w)
        return true
    
    char* rdi_4 = (zx.q(rdx.b) << 8) + arg3 + r8
    bool rax_1 = sub_142c25ee0(rdi_4, arg2, rdi_4)
    
    if (rax_1 != 0)
        rax = sub_142c230f0(&rdi_4[2], arg2, rdi_4)
    
    if (rax_1 != 0 && rax != 0)
        return true
    
    if (sub_142bf99e0(arg2, arg1, 2) != 0)
        *arg1 = 0
        return true

return false
