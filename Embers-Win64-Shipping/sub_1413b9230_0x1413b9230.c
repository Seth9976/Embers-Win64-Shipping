// 函数: sub_1413b9230
// 地址: 0x1413b9230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char r8
char arg_18 = r8
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(arg2 - 2)
uint64_t result = zx.q((temp1 - temp0) s>> 1)
arg_18.d = result.d

if (result.d s>= 0)
    int32_t rcx = ((result << 1) + 1).d
    int32_t arg_10 = rcx
    
    do
        int32_t r12_1 = result.d
        
        if (rcx s< arg2)
            uint64_t rsi_1
            
            do
                int32_t rbp_1 = r12_1 * 2
                rsi_1 = zx.q(rbp_1 + 1)
                
                if ((rsi_1 + 1).d s< arg2)
                    void* rbx_1 = arg1[sx.q(rsi_1.d)]
                    int64_t* rcx_2 = *(arg1[sx.q(rbp_1) + 2] + 8)
                    int64_t rax_7 = (*(*rcx_2 + 8))(rcx_2)
                    int64_t* rcx_3 = *(rbx_1 + 8)
                    int64_t rdx_1 = *rcx_3
                    
                    if (rax_7 u< (*(rdx_1 + 8))(rcx_3, rdx_1))
                        rsi_1 = zx.q(rbp_1)
                    
                    rsi_1 = zx.q(rsi_1.d + 1)
                
                int64_t rax_9 = sx.q(rsi_1.d)
                int64_t* r15_1 = &arg1[rax_9]
                int64_t rax_10 = sx.q(r12_1)
                int64_t* rcx_5 = *(arg1[rax_9] + 8)
                int64_t* rbp_2 = &arg1[rax_10]
                int64_t* rdi_2 = *(arg1[rax_10] + 8)
                int64_t rax_13 = (*(*rcx_5 + 8))(rcx_5)
                int64_t rdx_2 = *rdi_2
                
                if ((*(rdx_2 + 8))(rdi_2, rdx_2) u>= rax_13)
                    break
                
                r12_1 = rsi_1.d
                int64_t rcx_7 = *rbp_2
                *rbp_2 = *r15_1
                *r15_1 = rcx_7
            while (((rsi_1 << 1) + 1).d s< arg2)
            result = zx.q(arg_18.d)
            rcx = arg_10
        
        result = zx.q(result.d - 1)
        rcx -= 2
        arg_18.d = result.d
        arg_10 = rcx
    while (result.d s>= 0)

int32_t j = arg2 - 1
int64_t i = sx.q(j)

if (j s> 0)
    do
        result = arg1[i]
        int32_t r12_2 = 0
        uint64_t rcx_8 = *arg1
        *arg1 = result
        arg1[i] = rcx_8
        
        if (j s> 1)
            uint64_t rbx_3
            
            do
                int32_t r15_2 = r12_2 * 2
                rbx_3 = zx.q(r15_2 + 1)
                
                if ((rbx_3 + 1).d s< j)
                    void* rdi_3 = arg1[sx.q(rbx_3.d)]
                    int64_t* rcx_10 = *(arg1[sx.q(r15_2) + 2] + 8)
                    int64_t rax_21 = (*(*rcx_10 + 8))(rcx_10)
                    int64_t* rcx_11 = *(rdi_3 + 8)
                    int64_t rdx_3 = *rcx_11
                    
                    if (rax_21 u< (*(rdx_3 + 8))(rcx_11, rdx_3))
                        rbx_3 = zx.q(r15_2)
                    
                    rbx_3 = zx.q(rbx_3.d + 1)
                
                int64_t rax_23 = sx.q(rbx_3.d)
                uint64_t* r15_3 = &arg1[rax_23]
                int64_t rax_24 = sx.q(r12_2)
                int64_t* rsi_3 = *(arg1[rax_23] + 8)
                uint64_t* r12_3 = &arg1[rax_24]
                int64_t* rcx_12 = *(arg1[rax_24] + 8)
                int64_t rax_27 = (*(*rcx_12 + 8))(rcx_12)
                int64_t rdx_5 = *rsi_3
                result = (*(rdx_5 + 8))(rsi_3, rdx_5)
                
                if (rax_27 u>= result)
                    break
                
                uint64_t rcx_14 = *r12_3
                result = *r15_3
                *r12_3 = result
                r12_2 = rbx_3.d
                *r15_3 = rcx_14
            while (((rbx_3 << 1) + 1).d s< j)
        
        j -= 1
        i -= 1
    while (i s> 0)

return result
