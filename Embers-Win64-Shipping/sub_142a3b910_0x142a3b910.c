// 函数: sub_142a3b910
// 地址: 0x142a3b910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = arg1[1]
int64_t rdi_1 = arg1[2] + rbx
int64_t* r12 = **arg1

while (rbx s< rdi_1)
    int32_t arg_8
    uint64_t rax_1 = sub_142a3e160(r12, rbx, &arg_8, arg2)
    
    if (rax_1 s< 0)
        return -2
    
    int64_t rbx_1 = rbx + sx.q(arg_8)
    
    if (rdi_1 s>= 0 && rbx_1 s>= rdi_1)
        return -2
    
    int64_t rax_3 = sub_142a3e270(r12, rbx_1, &arg_8, arg2)
    
    if (rax_3 s< 0)
        return -2
    
    int64_t rcx_2 = sx.q(arg_8)
    
    if ((rcx_2 - 1).d u> 7)
        return -2
    
    rbx = rbx_1 + rcx_2
    
    if (rbx u> 0x7fffffffffffffff || (rdi_1 s>= 0 && rbx s> rdi_1))
        return -2
    
    if (rax_3 != 0)
        if (rax_1 == 0x7373)
            char rax_5
            int512_t zmm1
            rax_5, zmm1 = sub_142a37b40(arg1)
            
            if (rax_5 == 0)
                return -1
            
            int64_t rax_6 = sx.q(*(arg1 + 0x34))
            void (** rcx_6)() = (rax_6 << 4) + arg1[5]
            *(arg1 + 0x34) = rax_6.d + 1
            *rcx_6 = nullptr
            rcx_6[1] = 0
            int32_t result
            result, arg2 = sub_142a3b7c0(rcx_6, **arg1, rbx, rax_3, zmm1)
            
            if (result s< 0)
                return result
        
        rbx += rax_3
        
        if (rbx s> rdi_1)
            return -2

if (rbx != rdi_1)
    return -2

return 0
