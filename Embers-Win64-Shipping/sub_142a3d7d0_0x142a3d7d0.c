// 函数: sub_142a3d7d0
// 地址: 0x142a3d7d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r12 = *arg3
int64_t* r14 = **arg1
int64_t rdi = r12 + arg2
int64_t arg_10
void arg_18
int64_t rax_2 = (*(*r14 + 8))(r14, &arg_18, &arg_10)

if (rax_2.d s>= 0)
    int64_t rdx_1 = *arg3
    
    if (rdx_1 + 1 s> arg_10)
        *arg4 = 1
        return 0xfffffffd
    
    rax_2 = sub_142a38740(r14, rdx_1, arg4)
    
    if (rax_2 s>= 0)
        if (rax_2 s> 0)
            return 0xfffffffd
        
        int64_t rdx_2 = *arg3
        int64_t rcx_3 = sx.q(*arg4) + rdx_2
        
        if (rcx_3 s> rdi)
            return 0xfffffffe
        
        if (rcx_3 s> arg_10)
            return 0xfffffffd
        
        rax_2 = sub_142a3e270(r14, rdx_2, arg4, arg5)
        
        if (rax_2 s>= 0)
            if (rax_2 == 0)
                return 0xfffffffe
            
            *arg3 += sx.q(*arg4)
            int64_t rdx_4 = *arg3 + 2
            
            if (rdx_4 s> rdi)
                return 0xfffffffe
            
            int64_t rax_7 = arg_10
            
            if (rdx_4 s> rax_7)
                *arg4 = 2
                return 0xfffffffd
            
            *arg3 = rdx_4
            
            if (rdx_4 + 1 s> rdi)
                return 0xfffffffe
            
            if (rdx_4 + 1 s> rax_7)
                *arg4 = 1
                return 0xfffffffd
            
            char arg_8
            int32_t rax_10 = (**r14)(r14, rdx_4, 1, &arg_8)
            
            if (rax_10 s< 0)
                *arg4 = 1
                return rax_10
            
            *arg3 += 1
            
            if (*arg3 s>= rdi)
                return 0xfffffffe
            
            if ((arg_8 & 6) != 0 && rdi s> arg_10)
                *arg4 = rdi.d - *arg3
                return 0xfffffffd
            
            rax_2 = sub_142a36cc0(arg1, 0xa3, r12, arg2, arg5, 0)
            
            if (rax_2.d == 0)
                arg1[3] = rdi

return rax_2
