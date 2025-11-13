// 函数: sub_140bd3a30
// 地址: 0x140bd3a30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char arg_18 = arg3
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(arg2 - 2)
int64_t* r14 = arg4
uint64_t result = zx.q((temp1 - temp0) s>> 1)
arg_18.d = result.d

if (result.d s>= 0)
    int32_t rcx = ((result << 1) + 1).d
    int32_t arg_10 = rcx
    
    do
        int32_t r12_1 = result.d
        
        if (rcx s< arg2)
            while (true)
                int32_t rbp_1 = r12_1 * 2
                uint64_t rsi_1 = zx.q(rbp_1 + 1)
                
                if ((rsi_1 + 1).d s< arg2)
                    void* rdi_1 = arg1[sx.q(rsi_1.d)]
                    int32_t rax_6 = sub_140be2ed0(arg1[sx.q(rbp_1) + 2] + 4, *r14)
                    int32_t rax_7 = sub_140be2ed0(rdi_1 + 4, *r14)
                    r14 = arg4
                    
                    if (rax_6 s> rax_7)
                        rsi_1 = zx.q(rbp_1)
                    
                    rsi_1 = zx.q(rsi_1.d + 1)
                
                int64_t rax_8 = sx.q(rsi_1.d)
                int64_t* rbp_2 = &arg1[rax_8]
                int64_t rax_9 = sx.q(r12_1)
                int64_t* r12_2 = &arg1[rax_9]
                
                if (sub_140be2ed0(arg1[rax_9] + 4, *r14) s<= sub_140be2ed0(arg1[rax_8] + 4, *r14))
                    break
                
                int64_t rcx_7 = *r12_2
                *r12_2 = *rbp_2
                *rbp_2 = rcx_7
                r12_1 = rsi_1.d
                
                if (((rsi_1 << 1) + 1).d s>= arg2)
                    break
                
                r14 = arg4
            
            r14 = arg4
            result = zx.q(arg_18.d)
            rcx = arg_10
        
        result = zx.q(result.d - 1)
        rcx -= 2
        arg_18.d = result.d
        arg_10 = rcx
    while (result.d s>= 0)

int32_t i_2 = arg2 - 1
int64_t i = sx.q(i_2)
int64_t i_1 = i

if (i_2 s> 0)
    do
        result = arg1[i]
        int32_t r12_3 = 0
        int64_t rcx_8 = *arg1
        *arg1 = result
        arg1[i] = rcx_8
        
        if (i_2 s> 1)
            while (true)
                int32_t rbp_3 = r12_3 * 2
                uint64_t rbx_3 = zx.q(rbp_3 + 1)
                
                if ((rbx_3 + 1).d s< i_2)
                    void* rsi_2 = arg1[sx.q(rbx_3.d)]
                    int32_t rax_17 = sub_140be2ed0(arg1[sx.q(rbp_3) + 2] + 4, *r14)
                    int32_t rax_18 = sub_140be2ed0(rsi_2 + 4, *r14)
                    r14 = arg4
                    
                    if (rax_17 s> rax_18)
                        rbx_3 = zx.q(rbp_3)
                    
                    rbx_3 = zx.q(rbx_3.d + 1)
                
                int64_t rax_19 = sx.q(rbx_3.d)
                void* rsi_3 = arg1[rax_19]
                uint64_t* rbp_4 = &arg1[rax_19]
                int64_t rax_20 = sx.q(r12_3)
                uint64_t* r12_4 = &arg1[rax_20]
                int32_t rax_21 = sub_140be2ed0(arg1[rax_20] + 4, *r14)
                result = sub_140be2ed0(rsi_3 + 4, *r14)
                
                if (rax_21 s<= result.d)
                    break
                
                uint64_t rcx_15 = *r12_4
                result = *rbp_4
                *r12_4 = result
                r12_3 = rbx_3.d
                *rbp_4 = rcx_15
                
                if (((rbx_3 << 1) + 1).d s>= i_2)
                    break
                
                r14 = arg4
            
            r14 = arg4
            i = i_1
        
        i -= 1
        i_2 -= 1
        i_1 = i
    while (i s> 0)

return result
