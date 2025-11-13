// 函数: sub_142a3c6e0
// 地址: 0x142a3c6e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = arg2 + arg3
int64_t rdi = arg2
int64_t rbx = arg2
int64_t r13 = 0
int64_t r15 = 0

if (arg2 s< rsi)
    int32_t arg_10
    int32_t rax_6
    
    do
        uint64_t rax_1 = sub_142a3e160(arg4, rbx, &arg_10, arg5)
        
        if (rax_1 s< 0)
            return 0xfffffffe
        
        int64_t rbx_1 = rbx + sx.q(arg_10)
        
        if (rsi s>= 0 && rbx_1 s>= rsi)
            return 0xfffffffe
        
        int64_t rax_3 = sub_142a3e270(arg4, rbx_1, &arg_10, arg5)
        
        if (rax_3 s< 0)
            return 0xfffffffe
        
        int64_t rcx_2 = sx.q(arg_10)
        
        if ((rcx_2 - 1).d u> 7)
            return 0xfffffffe
        
        int64_t rbx_2 = rbx_1 + rcx_2
        
        if (rbx_2 u> 0x7fffffffffffffff || (rsi s>= 0 && rbx_2 s> rsi))
            return 0xfffffffe
        
        int32_t rax_5 = (r13 + 1).d
        
        if (rax_1 != 0x5034)
            rax_5 = r13.d
        
        r13 = sx.q(rax_5)
        rax_6 = (r15 + 1).d
        
        if (rax_1 != 0x5035)
            rax_6 = r15.d
        
        rbx = rbx_2 + rax_3
        r15 = sx.q(rax_6)
        
        if (rbx s> rsi)
            return 0xfffffffe
    while (rbx s< rsi)
    
    if (r13.d s> 0)
        int64_t rax_8 = 8 * r13
        
        if (mulu.dp.q(8, r13) u>> 0x40 != zx.o(0))
            rax_8 = -1
        
        int64_t rax_9 = j_sub_140a82f30(rax_8)
        *arg1 = rax_9
        
        if (rax_9 == 0)
            return 0xffffffff
        
        arg1[1] = rax_9
        
        if (r15.d s<= 0)
            goto label_142a3c868
        
        goto label_142a3c82f
    
    if (rax_6 s> 0)
    label_142a3c82f:
        int64_t rax_10 = 8 * r15
        
        if (mulu.dp.q(8, r15) u>> 0x40 != zx.o(0))
            rax_10 = -1
        
        int64_t rax_11 = j_sub_140a82f30(rax_10)
        arg1[2] = rax_11
        
        if (rax_11 == 0)
            j_sub_140a74f90(*arg1)
            return 0xffffffff
        
        arg1[3] = rax_11
    label_142a3c868:
        
        while (true)
            if (rsi s>= 0 && rdi s>= rsi)
                return 0xfffffffe
            
            uint64_t rax_12 = sub_142a3e160(arg4, rdi, &arg_10, arg5)
            
            if (rax_12 s< 0)
                return 0xfffffffe
            
            int64_t rdi_1 = rdi + sx.q(arg_10)
            
            if (rsi s>= 0 && rdi_1 s>= rsi)
                return 0xfffffffe
            
            int64_t rax_14 = sub_142a3e270(arg4, rdi_1, &arg_10, arg5)
            
            if (rax_14 s< 0)
                return 0xfffffffe
            
            int64_t rcx_8 = sx.q(arg_10)
            
            if ((rcx_8 - 1).d u> 7)
                return 0xfffffffe
            
            int64_t rdi_2 = rdi_1 + rcx_8
            
            if (rdi_2 u> 0x7fffffffffffffff)
                return 0xfffffffe
            
            if (rsi s>= 0 && rdi_2 s> rsi)
                return 0xfffffffe
            
            int32_t r13_1
            
            if (rax_12 == 0x5031)
                arg1[4] = sub_142a3ea30(arg4, rdi_2, rax_14)
                r13_1 = 0
            else if (rax_12 == 0x5032)
                int64_t rax_17 = sub_142a3ea30(arg4, rdi_2, rax_14)
                arg1[5] = rax_17
                
                if (rax_17 u< 1)
                    return 0xffffffff
                
                r13_1 = 0
            else if (rax_12 == 0x5033)
                arg1[6] = sub_142a3ea30(arg4, rdi_2, rax_14)
                r13_1 = 0
            else
                int64_t* arg_18
                
                if (rax_12 == 0x5034)
                    int64_t* rax_19 = j_sub_140a82f30(0x18)
                    arg_18 = rax_19
                    
                    if (rax_19 == 0)
                        return 0xffffffff
                    
                    r13_1 = 0
                    __builtin_memset(rax_19, 0, 0x18)
                    int32_t rax_20
                    rax_20, arg5 = sub_142a3c460(arg1, rdi_2, rax_14, arg4, arg5, rax_19)
                    
                    if (rax_20 != 0)
                        j_sub_140a74f90(rax_19[1])
                        j_sub_140a74f90(rax_19)
                        return zx.q(rax_20)
                    
                    *arg1[1] = rax_19
                    arg1[1] += 8
                else if (rax_12 != 0x5035)
                    r13_1 = 0
                else
                    int64_t* rax_22 = j_sub_140a82f30(0x50)
                    arg_18 = rax_22
                    
                    if (rax_22 == 0)
                        return 0xffffffff
                    
                    r13_1 = 0
                    __builtin_memset(rax_22, 0, 0x48)
                    rax_22[9] = 1
                    int32_t rax_23
                    rax_23, arg5 = sub_142a3ce30(arg1, rdi_2, rax_14, arg4, arg5, rax_22)
                    
                    if (rax_23 != 0)
                        j_sub_140a74f90(rax_22[1])
                        j_sub_140a74f90(rax_22[3])
                        j_sub_140a74f90(rax_22[5])
                        j_sub_140a74f90(rax_22)
                        return zx.q(rax_23)
                    
                    *arg1[3] = rax_22
                    arg1[3] += 8
            
            rdi = rdi_2 + rax_14
            
            if (rdi s> rsi)
                return 0xfffffffe
            
            if (rdi s>= rsi)
                if (rdi != rsi)
                    r13_1 = -2
                
                return zx.q(r13_1)

return 0xffffffff
