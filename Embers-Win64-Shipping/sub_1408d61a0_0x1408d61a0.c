// 函数: sub_1408d61a0
// 地址: 0x1408d61a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(arg2 - 2)
uint64_t result = zx.q((temp1 - temp0) s>> 1)
int32_t r15 = result.d

if (result.d s>= 0)
    int32_t r12_1 = ((result << 1) + 1).d
    int32_t temp2_1
    
    do
        int32_t r14_1 = r15
        
        if (r12_1 s< arg2)
            do
                int32_t rsi_1 = r14_1 * 2
                uint64_t rbx_1 = zx.q(rsi_1 + 1)
                
                if ((rbx_1 + 1).d s< arg2)
                    if (arg4(arg1[sx.q(rsi_1) + 2], arg1[sx.q(rbx_1.d)]) != 0)
                        rbx_1 = zx.q(rsi_1)
                    
                    rbx_1 = zx.q(rbx_1.d + 1)
                
                int64_t rax_7 = sx.q(rbx_1.d)
                void* rsi_2 = &arg1[rax_7]
                int64_t rax_8 = sx.q(r14_1)
                void* r14_2 = &arg1[rax_8]
                result = arg4(arg1[rax_8], arg1[rax_7])
                
                if (result.b == 0)
                    break
                
                int64_t rcx_2 = *r14_2
                *r14_2 = *rsi_2
                result = zx.q(((rbx_1 << 1) + 1).d)
                *rsi_2 = rcx_2
                r14_1 = rbx_1.d
            while (result.d s< arg2)
        
        r12_1 -= 2
        temp2_1 = r15
        r15 -= 1
    while (temp2_1 - 1 s>= 0)

int32_t j = arg2 - 1
int64_t i = sx.q(j)

if (j s> 0)
    do
        result = arg1[i]
        int32_t r14_3 = 0
        uint64_t rcx_3 = *arg1
        *arg1 = result
        arg1[i] = rcx_3
        
        if (j s> 1)
            uint64_t rbx_2
            
            do
                int32_t rsi_3 = r14_3 * 2
                rbx_2 = zx.q(rsi_3 + 1)
                
                if ((rbx_2 + 1).d s< j)
                    if (arg4(arg1[sx.q(rsi_3) + 2], arg1[sx.q(rbx_2.d)]) != 0)
                        rbx_2 = zx.q(rsi_3)
                    
                    rbx_2 = zx.q(rbx_2.d + 1)
                
                int64_t rax_14 = sx.q(rbx_2.d)
                uint64_t* rsi_4 = &arg1[rax_14]
                int64_t rax_15 = sx.q(r14_3)
                uint64_t* r14_4 = &arg1[rax_15]
                result = arg4(arg1[rax_15], arg1[rax_14])
                
                if (result.b == 0)
                    break
                
                uint64_t rcx_6 = *r14_4
                result = *rsi_4
                *r14_4 = result
                r14_3 = rbx_2.d
                *rsi_4 = rcx_6
            while (((rbx_2 << 1) + 1).d s< j)
        
        j -= 1
        i -= 1
    while (i s> 0)

return result
