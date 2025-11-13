// 函数: sub_140947110
// 地址: 0x140947110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(arg2 - 2)
uint64_t result = zx.q((temp1 - temp0) s>> 1)
int32_t r12 = result.d
int64_t zmm1

if (result.d s>= 0)
    int32_t r13_1 = ((result << 1) + 1).d
    int32_t temp2_1
    
    do
        int32_t r14_1 = r12
        
        if (r13_1 s< arg2)
            do
                int32_t rsi_1 = r14_1 * 2
                uint64_t rbx_1 = zx.q(rsi_1 + 1)
                
                if ((rbx_1 + 1).d s< arg2)
                    int32_t rcx = *(&arg1[sx.q(rsi_1)] + 0x14)
                    int32_t temp4_1 = *(&arg1[sx.q(rbx_1.d)] + 4)
                    int64_t rax_5
                    
                    if (rcx != temp4_1)
                        rax_5.b = rcx s< temp4_1
                    else
                        rax_5 = zx.q(rand()) & 0x80000001
                        
                        if (rax_5.d s< 0)
                            rax_5 = zx.q(((rax_5.d - 1) | 0xfffffffe) + 1)
                        
                        rax_5.b = rax_5.d != 0
                    
                    if (rax_5.b != 0)
                        rbx_1 = zx.q(rsi_1)
                    
                    rbx_1 = zx.q(rbx_1.d + 1)
                
                int64_t* rbp_1 = &arg1[sx.q(r14_1)]
                int64_t* rsi_2 = &arg1[sx.q(rbx_1.d)]
                result = zx.q(*(rbp_1 + 4))
                int32_t temp3_1 = *(rsi_2 + 4)
                
                if (result.d != temp3_1)
                    result.b = result.d s< temp3_1
                else
                    result = zx.q(rand()) & 0x80000001
                    
                    if (result.d s< 0)
                        result = zx.q(((result.d - 1) | 0xfffffffe) + 1)
                    
                    result.b = result.d != 0
                
                if (result.b == 0)
                    break
                
                if (rbp_1 != rsi_2)
                    zmm1 = *rbp_1
                    *rbp_1 = *rsi_2
                    *rsi_2 = zmm1
                
                result = zx.q(((rbx_1 << 1) + 1).d)
                r14_1 = rbx_1.d
            while (result.d s< arg2)
        
        r13_1 -= 2
        temp2_1 = r12
        r12 -= 1
    while (temp2_1 - 1 s>= 0)

int32_t i = arg2 - 1

if (i s> 0)
    result = sx.q(i)
    int64_t* r12_1 = &arg1[result]
    
    do
        if (arg1 != r12_1)
            zmm1 = *arg1
            *arg1 = *r12_1
            *r12_1 = zmm1
        
        int32_t r14_2 = 0
        
        if (i s> 1)
            do
                int32_t rsi_3 = r14_2 * 2
                uint64_t rbx_2 = zx.q(rsi_3 + 1)
                
                if ((rbx_2 + 1).d s< i)
                    int32_t rcx_1 = *(&arg1[sx.q(rsi_3)] + 0x14)
                    int32_t temp6_1 = *(&arg1[sx.q(rbx_2.d)] + 4)
                    int64_t rax_16
                    
                    if (rcx_1 != temp6_1)
                        rax_16.b = rcx_1 s< temp6_1
                    else
                        rax_16 = zx.q(rand()) & 0x80000001
                        
                        if (rax_16.d s< 0)
                            rax_16 = zx.q(((rax_16.d - 1) | 0xfffffffe) + 1)
                        
                        rax_16.b = rax_16.d != 0
                    
                    if (rax_16.b != 0)
                        rbx_2 = zx.q(rsi_3)
                    
                    rbx_2 = zx.q(rbx_2.d + 1)
                
                int64_t* rbp_2 = &arg1[sx.q(r14_2)]
                void* rsi_4 = &arg1[sx.q(rbx_2.d)]
                result = zx.q(*(rbp_2 + 4))
                int32_t temp5_1 = *(rsi_4 + 4)
                
                if (result.d != temp5_1)
                    result.b = result.d s< temp5_1
                else
                    result = zx.q(rand()) & 0x80000001
                    
                    if (result.d s< 0)
                        result = zx.q(((result.d - 1) | 0xfffffffe) + 1)
                    
                    result.b = result.d != 0
                
                if (result.b == 0)
                    break
                
                if (rbp_2 != rsi_4)
                    zmm1 = *rbp_2
                    *rbp_2 = *rsi_4
                    *rsi_4 = zmm1
                
                result = zx.q(((rbx_2 << 1) + 1).d)
                r14_2 = rbx_2.d
            while (result.d s< i)
        
        i -= 1
        r12_1 -= 8
    while (i s> 0)

return result
