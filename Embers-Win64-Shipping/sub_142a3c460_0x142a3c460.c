// 函数: sub_142a3c460
// 地址: 0x142a3c460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = arg2 + arg3
int64_t r12
r12.b = 0
int64_t rbx = arg2

if (arg2 s< rsi)
    while (true)
        int32_t arg_10
        uint64_t rax_1 = sub_142a3e160(arg4, rbx, &arg_10, arg5)
        
        if (rax_1 s< 0)
            break
        
        int64_t rbx_1 = rbx + sx.q(arg_10)
        
        if (rsi s>= 0 && rbx_1 s>= rsi)
            break
        
        int64_t rax_2 = sub_142a3e270(arg4, rbx_1, &arg_10, arg5)
        
        if (rax_2 s< 0)
            break
        
        int64_t rax_3 = sx.q(arg_10)
        
        if ((rax_3 - 1).d u> 7)
            break
        
        int64_t rbx_2 = rbx_1 + rax_3
        
        if (rbx_2 u> 0x7fffffffffffffff)
            break
        
        if (rsi s>= 0 && rbx_2 s> rsi)
            break
        
        if (rax_1 == 0x4254)
            int64_t rax_4 = sub_142a3ea30(arg4, rbx_2, rax_2)
            
            if (rax_4 s< 0)
                break
            
            *arg6 = rax_4
            r12.b = 1
            goto label_142a3c58b
        
        if (rax_1 != 0x4255)
            goto label_142a3c58b
        
        if (rax_2 s<= 0)
            break
        
        int64_t rax_5
        
        if (rax_2 u<= 0x80000000)
            rax_5 = j_sub_140a82f30(rax_2)
        
        if (rax_2 u> 0x80000000 || rax_5 == 0)
            return 0xffffffff
        
        if ((**arg4)(arg4, rbx_2, zx.q(rax_2.d), rax_5) != 0)
            j_sub_140a74f90(rax_5)
        else
            arg6[1] = rax_5
            arg6[2] = rax_2
        label_142a3c58b:
            rbx = rbx_2 + rax_2
            
            if (rbx s> rsi)
                break
            
            if (rbx s< rsi)
                continue
            else if (r12.b == 0)
                break
        
        return 0

return 0xfffffffe
