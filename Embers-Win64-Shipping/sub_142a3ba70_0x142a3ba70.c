// 函数: sub_142a3ba70
// 地址: 0x142a3ba70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = arg1[1]
int32_t r14 = 0
int64_t rdi_1 = arg1[2] + rbx
int32_t rsi = 0
int64_t* r13 = **arg1
bool cond:0 = rbx != rdi_1
int32_t arg_8

if (rbx s< rdi_1)
    do
        uint64_t rax_1 = sub_142a3e160(r13, rbx, &arg_8, arg2)
        
        if (rax_1 s< 0)
            return -2
        
        int64_t rbx_1 = rbx + sx.q(arg_8)
        
        if (rdi_1 s>= 0 && rbx_1 s>= rdi_1)
            return -2
        
        int64_t rax_3 = sub_142a3e270(r13, rbx_1, &arg_8, arg2)
        
        if (rax_3 s< 0)
            return -2
        
        int64_t rdx_3 = sx.q(arg_8)
        
        if ((rdx_3 - 1).d u> 7)
            return -2
        
        rbx = rbx_1 + rdx_3
        
        if (rbx u> 0x7fffffffffffffff)
            return -2
        
        if (rdi_1 s>= 0 && rbx s> rdi_1)
            return -2
        
        if (rax_3 != 0)
            rbx += rax_3
            int32_t rax_5 = rsi + 1
            
            if (rax_1 != 0xae)
                rax_5 = rsi
            
            rsi = rax_5
            
            if (rbx s> rdi_1)
                return -2
    while (rbx s< rdi_1)
    
    cond:0 = rbx != rdi_1

if (cond:0)
    return -2

if (rsi s<= 0)
    return 0

int64_t rcx_3 = sx.q(rsi)
int64_t rax_7 = 8 * rcx_3

if (mulu.dp.q(8, rcx_3) u>> 0x40 != zx.o(0))
    rax_7 = -1

int64_t rax_8 = j_sub_140a82f30(rax_7)
arg1[5] = rax_8

if (rax_8 == 0)
    return -1

int64_t rbx_2 = arg1[1]
arg1[6] = rax_8

if (rbx_2 s< rdi_1)
    do
        int64_t r12_1 = rbx_2
        uint64_t rax_9 = sub_142a3e160(r13, rbx_2, &arg_8, arg2)
        
        if (rax_9 s< 0)
            return -2
        
        int64_t rbx_3 = rbx_2 + sx.q(arg_8)
        
        if (rdi_1 s>= 0 && rbx_3 s>= rdi_1)
            return -2
        
        int64_t rax_11 = sub_142a3e270(r13, rbx_3, &arg_8, arg2)
        
        if (rax_11 s< 0)
            return -2
        
        int64_t rcx_7 = sx.q(arg_8)
        
        if ((rcx_7 - 1).d u> 7)
            return -2
        
        rbx_2 = rbx_3 + rcx_7
        
        if (rbx_2 u> 0x7fffffffffffffff)
            return -2
        
        if (rdi_1 s>= 0 && rbx_2 s> rdi_1)
            return -2
        
        if (rax_11 != 0)
            int64_t rsi_1 = rax_11 + rbx_2
            
            if (rax_9 == 0xae)
                int64_t* r14_1 = arg1[6]
                *r14_1 = 0
                int32_t rax_6
                rax_6, arg2 = sub_142a3d970(arg1, rbx_2, rax_11, r12_1, rsi_1 - r12_1, r14_1)
                
                if (rax_6 != 0)
                    return rax_6
                
                if (*r14_1 != 0)
                    arg1[6] += 8
            
            rbx_2 = rsi_1
            
            if (rsi_1 s> rdi_1)
                return -2
    while (rbx_2 s< rdi_1)
    
    r14 = 0

if (rbx_2 != rdi_1)
    return -2

return r14
