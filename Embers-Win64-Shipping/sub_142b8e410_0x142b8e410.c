// 函数: sub_142b8e410
// 地址: 0x142b8e410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 0

if (arg2 == 0x101000100)
    return 1

int32_t rax_2 = sub_142b8f170(arg1, arg2)
int32_t rbx = rax_2

if (rax_2 != 1)
    if (rax_2 u>= 0x1000)
        rbx |= (arg2.d u>> 0xb & 0x18) + 8
    
    if (arg3 == 0)
        return zx.q(rbx)
    
    int32_t rax_3 = sub_142b8f170(arg1, arg3)
    int32_t rcx_1 = rax_3
    
    if (rax_3 != 1)
        int32_t rdi_1 = arg3.d & 0xc000
        
        if (rbx u>= 0x1000 && (rbx & 0x3e0) == 0xa0)
            int32_t rax_7 = rcx_1 & 0x3e0
            
            if (rax_7 u>= 0x180 && rdi_1 == 0 && (rcx_1.b & 7) == 0)
                return zx.q(rax_7) | (zx.q(rbx) & 0xfffffc1f)
        
        if (rcx_1 - 0x3e1 u> 0xc1e)
            rcx_1 |= (rdi_1 u>> 0xb) + 8
        
        return zx.q(rbx << 0x10) | zx.q(rcx_1)

return 1
