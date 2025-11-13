// 函数: sub_142625ab0
// 地址: 0x142625ab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *arg2
int32_t rdx_2 = zx.d(*(rax + 0x32)) * zx.d(*(rax + 0x30)) * 2
int64_t rax_3 = (*(*arg1 + 0x10))(arg1, rdx_2)
*(arg3 + 8) = rax_3

if (rax_3 != 0)
    int64_t rax_5 = (*(*arg1 + 0x10))(arg1, zx.q(rdx_2))
    int64_t rbx_1 = rax_5
    
    if (rax_5 != 0)
        sub_142622930(arg2, *(arg3 + 8), arg3)
        int64_t rbp_1 = *(arg3 + 8)
        
        if (sub_142620b40(arg2, 1, rbp_1, rbx_1) != rbp_1)
            *(arg3 + 8) = rbx_1
            rbx_1 = rbp_1
        
        (*(*arg1 + 0x18))(arg1, rbx_1)
        return 0x40000000

return 0x80000004
