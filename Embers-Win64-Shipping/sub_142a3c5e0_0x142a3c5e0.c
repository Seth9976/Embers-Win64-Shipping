// 函数: sub_142a3c5e0
// 地址: 0x142a3c5e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = arg2 + arg3
int64_t rbx = arg2

if (arg2 s< rdi)
    do
        int32_t arg_10
        uint64_t rax_1 = sub_142a3e160(arg4, rbx, &arg_10, arg5)
        
        if (rax_1 s< 0)
            return 0xfffffffe
        
        int64_t rbx_1 = rbx + sx.q(arg_10)
        
        if (rdi s>= 0 && rbx_1 s>= rdi)
            return 0xfffffffe
        
        int64_t rax_2 = sub_142a3e270(arg4, rbx_1, &arg_10, arg5)
        
        if (rax_2 s< 0)
            return 0xfffffffe
        
        int64_t rdx_2 = sx.q(arg_10)
        
        if ((rdx_2 - 1).d u> 7)
            return 0xfffffffe
        
        int64_t rbx_2 = rbx_1 + rdx_2
        
        if (rbx_2 u> 0x7fffffffffffffff || (rdi s>= 0 && rbx_2 s> rdi))
            return 0xfffffffe
        
        int64_t rax_3
        
        if (rax_1 == 0x47e8)
            rax_3 = sub_142a3ea30(arg4, rbx_2, rax_2)
            *arg6 = rax_3
        
        if (rax_1 == 0x47e8 && rax_3 != 1)
            return 0xfffffffe
        
        rbx = rbx_2 + rax_2
        
        if (rbx s> rdi)
            return 0xfffffffe
    while (rbx s< rdi)

return 0
