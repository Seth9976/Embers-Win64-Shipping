// 函数: sub_142a3cad0
// 地址: 0x142a3cad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = arg2 + arg3
int32_t r12 = 0
int64_t rsi = arg2
int64_t rdi = arg2
int64_t r14 = 0
int64_t* r15 = **(arg1 + 8)

if (arg2 s< rbx)
    int32_t arg_10
    int32_t rax_5
    
    do
        uint64_t rax_1 = sub_142a3e160(r15, rdi, &arg_10, arg4)
        
        if (rax_1 s< 0)
            return 0xfffffffe
        
        int64_t rdi_1 = rdi + sx.q(arg_10)
        
        if (rbx s>= 0 && rdi_1 s>= rbx)
            return 0xfffffffe
        
        int64_t rax_3 = sub_142a3e270(r15, rdi_1, &arg_10, arg4)
        
        if (rax_3 s< 0)
            return 0xfffffffe
        
        int64_t rcx_2 = sx.q(arg_10)
        
        if ((rcx_2 - 1).d u> 7)
            return 0xfffffffe
        
        int64_t rdi_2 = rdi_1 + rcx_2
        
        if (rdi_2 u> 0x7fffffffffffffff || (rbx s>= 0 && rdi_2 s> rbx))
            return 0xfffffffe
        
        rax_5 = (r14 + 1).d
        
        if (rax_1 != 0x6240)
            rax_5 = r14.d
        
        rdi = rdi_2 + rax_3
        r14 = sx.q(rax_5)
        
        if (rdi s> rbx)
            return 0xfffffffe
    while (rdi s< rbx)
    
    if (rax_5 s> 0)
        int64_t rax_6 = 8 * r14
        
        if (mulu.dp.q(8, r14) u>> 0x40 != zx.o(0))
            rax_6 = -1
        
        int64_t rax_7 = j_sub_140a82f30(rax_6)
        *(arg1 + 0xa8) = rax_7
        
        if (rax_7 == 0)
            return 0xffffffff
        
        *(arg1 + 0xb0) = rax_7
        
        while (true)
            if (rbx s>= 0 && rsi s>= rbx)
                return 0xfffffffe
            
            uint64_t rax_8 = sub_142a3e160(r15, rsi, &arg_10, arg4)
            
            if (rax_8 s< 0)
                return 0xfffffffe
            
            int64_t rsi_1 = rsi + sx.q(arg_10)
            
            if (rbx s>= 0 && rsi_1 s>= rbx)
                return 0xfffffffe
            
            int64_t rax_10 = sub_142a3e270(r15, rsi_1, &arg_10, arg4)
            
            if (rax_10 s< 0)
                return 0xfffffffe
            
            int64_t rcx_7 = sx.q(arg_10)
            
            if ((rcx_7 - 1).d u> 7)
                return 0xfffffffe
            
            int64_t rsi_2 = rsi_1 + rcx_7
            
            if (rsi_2 u> 0x7fffffffffffffff)
                return 0xfffffffe
            
            if (rbx s>= 0 && rsi_2 s> rbx)
                return 0xfffffffe
            
            if (rax_8 == 0x6240)
                int64_t* rax_12 = j_sub_140a82f30(0x38)
                int64_t* arg_18 = rax_12
                
                if (rax_12 == 0)
                    return 0xffffffff
                
                __builtin_memset(rax_12, 0, 0x28)
                rax_12[5] = 1
                rax_12[6] = 0
                int32_t rax_13
                rax_13, arg4 = sub_142a3c6e0(rax_12, rsi_2, rax_10, r15, arg4)
                
                if (rax_13 != 0)
                    sub_142a35df0(rax_12)
                    j_sub_140a74f90(rax_12)
                    return zx.q(rax_13)
                
                **(arg1 + 0xb0) = rax_12
                *(arg1 + 0xb0) += 8
            
            rsi = rsi_2 + rax_10
            
            if (rsi s> rbx)
                return 0xfffffffe
            
            if (rsi s>= rbx)
                if (rsi != rbx)
                    r12 = -2
                
                return zx.q(r12)

return -1
