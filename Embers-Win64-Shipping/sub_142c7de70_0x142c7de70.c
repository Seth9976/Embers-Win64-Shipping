// 函数: sub_142c7de70
// 地址: 0x142c7de70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *arg1
*arg2 = 0
int512_t zmm2 = sub_142c64850(rbx, "Preparing for accepting server on data port\n", arg3, arg4)
sub_142c6f300(rbx, 9)
int64_t rax
int64_t r8
rax, r8 = sub_142c81db0(rbx)

if (rax s< 0)
    sub_142c64760(rbx, "Accept timeout occurred while waiting server connect", r8, zmm2)
    return 0xc

int32_t rax_2
int512_t zmm2_1
rax_2, zmm2_1 = sub_142c7e210(arg1, arg2, zmm2)

if (rax_2 == 0)
    if (*arg2 == rax_2.b)
        int32_t rax_4 = *(rbx + 0x388)
        int32_t rcx_7 = 0xea60
        
        if (rax_4 s> 0)
            rcx_7 = rax_4
        
        sub_142c52ab0(rbx, sx.q(rcx_7), 0, zmm2_1)
        return 0
    
    rax_2 = sub_142c7dd40(arg1)
    
    if (rax_2 == 0)
        int32_t rax_3 = sub_142c7e120(arg1)
        
        if (rax_3 != 0)
            return rax_3
        
        return 0

return rax_2
