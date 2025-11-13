// 函数: sub_142a3cd70
// 地址: 0x142a3cd70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg2

if (arg3 s< 0 || *arg2 s< arg3)
    int32_t arg_18
    uint64_t rax_1 = sub_142a3e160(arg1, *arg2, &arg_18, arg5)
    *arg4 = rax_1
    
    if (rax_1 s>= 0)
        *rbx += sx.q(arg_18)
        int64_t rdx_1 = *rbx
        
        if (arg3 s< 0 || rdx_1 s< arg3)
            int64_t rax_3 = sub_142a3e270(arg1, rdx_1, &arg_18, arg5)
            *arg6 = rax_3
            
            if (rax_3 s>= 0)
                int64_t rcx_2 = sx.q(arg_18)
                
                if ((rcx_2 - 1).d u<= 7 && *rbx + rcx_2 u<= 0x7fffffffffffffff)
                    *rbx += rcx_2
                    
                    if (arg3 s< 0 || *rbx s<= arg3)
                        return 0

return 0xfffffffe
