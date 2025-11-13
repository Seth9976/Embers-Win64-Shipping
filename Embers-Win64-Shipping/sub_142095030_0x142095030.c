// 函数: sub_142095030
// 地址: 0x142095030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg2)

if (rdi.d s< *(arg1 + 0x668))
    int64_t* rbx_1 = arg5
    
    if (sub_14238f3f0(arg1, rdi.d, arg3, arg4, rbx_1, arg6) != 0)
        rbx_1[0xf] = *(*(arg1 + 0x660) + (rdi << 3))
        int64_t* rax_4 = rbx_1[0xd]
        int32_t rdx_1 = *(*(*(arg1 + 0x650) + 0x28) + 0x40)
        
        if (rax_4 != 0)
            rbx_1 = rax_4
        
        *(rbx_1 + 0x64) &= 0xfffffef0
        *(rbx_1 + 0x64) |= rdi.d & 0xf
        rbx_1[4] = arg1 + 0x680
        rbx_1[0xb].d = 0
        *rbx_1 = *(arg1 + 0x140)
        int64_t result
        result.b = 1
        rbx_1[9].d = rdx_1
        return result

return 0
