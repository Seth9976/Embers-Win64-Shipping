// 函数: sub_142a3e960
// 地址: 0x142a3e960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

j_sub_140a74f90(*arg4)
*arg4 = 0

if (arg3 u> 0x1312d00)
    return 0xfffffffe

int32_t rdi_1 = (arg3 + 1).d
int64_t rcx_1 = sx.q(rdi_1)

if (rdi_1 != 0 && rcx_1 u<= 0x80000000)
    int64_t rax_1 = j_sub_140a82f30(rcx_1)
    *arg4 = rax_1
    
    if (rax_1 != 0)
        int32_t rax_4 = (**arg1)(arg1, arg2, zx.q(arg3.d), rax_1)
        
        if (rax_4 == 0)
            *(sx.q(rdi_1 - 1) + *arg4) = 0
            return 0
        
        j_sub_140a74f90(*arg4)
        *arg4 = 0
        return zx.q(rax_4)
else
    *arg4 = 0

return 0xfffffffe
