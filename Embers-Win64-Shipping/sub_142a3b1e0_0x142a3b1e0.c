// 函数: sub_142a3b1e0
// 地址: 0x142a3b1e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = arg1[1]
int64_t* r13 = arg1
int32_t i_2 = 0
int64_t rdi_1 = arg1[2] + rbx
int32_t rbp = 0
bool cond:0 = rbx != rdi_1
bool cond:2 = rbx s>= rdi_1
int64_t* rsi = **arg1
int64_t* arg_18 = rsi

while (true)
    int32_t arg_10
    
    if (cond:2)
        if (not(cond:0))
            void* const rax_4
            
            if (i_2 s> 0)
                int64_t i_1 = sx.q(i_2)
                int64_t rax_3 = 0x20 * i_1
                
                if (mulu.dp.q(0x20, i_1) u>> 0x40 != zx.o(0))
                    rax_3 = -1
                
                rax_4 = j_sub_140a82f30(rax_3)
                arg_10.q = rax_4
                
                if (rax_4 == 0)
                    rax_4 = nullptr
                else if (i_2 != 0)
                    void* rcx_5 = rax_4 + 0x10
                    int64_t i
                    
                    do
                        *(rcx_5 - 0x10) = 0
                        *(rcx_5 - 8) = 0
                        *rcx_5 = 0
                        *(rcx_5 + 8) = 0
                        rcx_5 += 0x20
                        i = i_1
                        i_1 -= 1
                    while (i != 1)
                
                r13[5] = rax_4
            
            if (i_2 s> 0 && rax_4 == 0)
                return 0xffffffff
            
            if (rbp s> 0)
                int64_t rcx_6 = sx.q(rbp)
                int64_t rax_5 = 0x10 * rcx_6
                
                if (mulu.dp.q(0x10, rcx_6) u>> 0x40 != zx.o(0))
                    rax_5 = -1
                
                int64_t rax_6 = j_sub_140a82f30(rax_5)
                r13[7] = rax_6
                
                if (rax_6 == 0)
                    return 0xffffffff
            
            int64_t rbx_3 = r13[1]
            int64_t* r14_1 = r13[5]
            int64_t* r12_1 = r13[7]
            bool cond:1_1 = rbx_3 != rdi_1
            
            if (rbx_3 s< rdi_1)
                while (true)
                    uint64_t rax_8 = sub_142a3e160(rsi, rbx_3, &arg_10, arg2)
                    
                    if (rax_8 s< 0)
                        return 0xfffffffe
                    
                    int64_t rbx_4 = rbx_3 + sx.q(arg_10)
                    
                    if (rdi_1 s>= 0 && rbx_4 s>= rdi_1)
                        return 0xfffffffe
                    
                    int64_t rax_9 = sub_142a3e270(rsi, rbx_4, &arg_10, arg2)
                    
                    if (rax_9 s< 0)
                        return 0xfffffffe
                    
                    int64_t rax_10 = sx.q(arg_10)
                    
                    if ((rax_10 - 1).d u> 7)
                        return 0xfffffffe
                    
                    int64_t rbx_5 = rbx_4 + rax_10
                    
                    if (rbx_5 u> 0x7fffffffffffffff)
                        return 0xfffffffe
                    
                    if (rdi_1 s>= 0 && rbx_5 s> rdi_1)
                        return 0xfffffffe
                    
                    if (rax_8 != 0x4dbb)
                        if (rax_8 == 0xec && sx.q(rbp) s> 0)
                            int64_t* rcx_14 = r12_1
                            r12_1 = &r12_1[2]
                            rcx_14[1] = rax_9 - rbx_3 + rbx_5
                            *rcx_14 = rbx_3
                    else if (sx.q(i_2) s> 0
                            && sub_142a3d100(arg_18, rbx_5, rax_9, r14_1, arg2) != 0)
                        int64_t* rcx_13 = r14_1
                        r14_1 = &r14_1[4]
                        rcx_13[3] = rax_9 - rbx_3 + rbx_5
                        rcx_13[2] = rbx_3
                    
                    rbx_3 = rbx_5 + rax_9
                    
                    if (rbx_3 s> rdi_1)
                        return 0xfffffffe
                    
                    if (rbx_3 s>= rdi_1)
                        break
                    
                    rsi = arg_18
                
                r13 = arg1
                cond:1_1 = rbx_3 != rdi_1
            
            if (not(cond:1_1))
                r13[6].d = ((r14_1 - r13[5]) s>> 5).d
                r13[8].d = ((r12_1 - r13[7]) s>> 4).d
                return 0
        
        break
    
    uint64_t rax_1 = sub_142a3e160(rsi, rbx, &arg_10, arg2)
    
    if (rax_1 s< 0)
        break
    
    int64_t rbx_1 = rbx + sx.q(arg_10)
    
    if (rdi_1 s>= 0 && rbx_1 s>= rdi_1)
        break
    
    int64_t rax_2 = sub_142a3e270(arg_18, rbx_1, &arg_10, arg2)
    
    if (rax_2 s< 0)
        break
    
    int64_t rdx_3 = sx.q(arg_10)
    
    if ((rdx_3 - 1).d u> 7)
        break
    
    int64_t rbx_2 = rbx_1 + rdx_3
    
    if (rbx_2 u> 0x7fffffffffffffff)
        break
    
    if (rdi_1 s>= 0 && rbx_2 s> rdi_1)
        break
    
    if (rax_1 == 0x4dbb)
        i_2 += 1
    else if (rax_1 == 0xec)
        rbp += 1
    
    rbx = rbx_2 + rax_2
    cond:0 = rbx != rdi_1
    cond:2 = rbx s>= rdi_1
    
    if (rbx s> rdi_1)
        break
    
    rsi = arg_18

return 0xfffffffe
