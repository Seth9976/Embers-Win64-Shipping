// 函数: sub_142a3a8e0
// 地址: 0x142a3a8e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = arg3 + arg4
int64_t rbx = arg3

if (arg3 s< rdi)
    do
        int32_t arg_18
        uint64_t rax_1 = sub_142a3e160(arg2, rbx, &arg_18, arg5)
        
        if (rax_1 s< 0)
            return -2
        
        int64_t rbx_1 = rbx + sx.q(arg_18)
        
        if (rdi s>= 0 && rbx_1 s>= rdi)
            return -2
        
        int64_t rax_3 = sub_142a3e270(arg2, rbx_1, &arg_18, arg5)
        
        if (rax_3 s< 0)
            return -2
        
        int64_t rcx_2 = sx.q(arg_18)
        
        if ((rcx_2 - 1).d u> 7)
            return -2
        
        rbx = rbx_1 + rcx_2
        
        if (rbx u> 0x7fffffffffffffff || (rdi s>= 0 && rbx s> rdi))
            return -2
        
        if (rax_3 != 0)
            if (rax_1 == 0xb6)
                char rax_5
                int512_t zmm1
                rax_5, zmm1 = sub_142a37890(arg1)
                
                if (rax_5 == 0)
                    return -1
                
                int64_t rdx_2 = sx.q(*(arg1 + 0xc))
                int64_t* rcx_6 = rdx_2 * 0x30 + *arg1
                *(arg1 + 0xc) = (rdx_2 + 1).d
                *rcx_6 = 0
                rcx_6[1] = 0
                rcx_6[2] = -1
                rcx_6[3] = -1
                rcx_6[4] = 0
                rcx_6[5] = 0
                int32_t result
                result, arg5 = sub_142a390f0(rcx_6, arg2, rbx, rax_3, zmm1)
                
                if (result s< 0)
                    return result
            
            rbx += rax_3
            
            if (rbx s> rdi)
                return -2
    while (rbx s< rdi)

if (rbx != rdi)
    return -2

return 0
