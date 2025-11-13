// 函数: sub_140d14870
// 地址: 0x140d14870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char r8
char arg_18 = r8
int32_t i = arg2
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(arg2 - 2)
uint64_t result = zx.q((temp1 - temp0) s>> 1)
arg_18.d = result.d

if (result.d s>= 0)
    int32_t rcx = ((result << 1) + 1).d
    int32_t var_58 = rcx
    
    do
        int32_t r12_1 = result.d
        
        if (rcx s< i)
            uint64_t rsi_1
            
            do
                int32_t r14_1 = r12_1 * 2
                rsi_1 = zx.q(r14_1 + 1)
                
                if ((rsi_1 + 1).d s< i)
                    void* r13_1 = arg1[sx.q(rsi_1.d)]
                    void* rbx_1 = arg1[sx.q(r14_1) + 2]
                    int64_t rax_6 = sub_140d3cb50(rbx_1)
                    int64_t rax_7 = sub_140d3cb50(r13_1)
                    
                    if (rax_6 == 0 || rax_7 == 0)
                        if (rax_6 != rax_7)
                            rax_7.b = rax_6 != 0
                        else
                            rax_7.b = 0
                    else if (rax_6 != rax_7)
                        rax_7.b = rax_6 u< rax_7
                    else
                        int32_t rax_8 = sub_140d3cbe0(rbx_1)
                        int64_t rdi_2 = *(rax_6 + 0x18)
                        int64_t rdx_1 = sx.q(sub_140d3cbe0(r13_1))
                        rax_7.b = *((sx.q(rax_8) << 7) + rdi_2 + 0x28)
                            s< *((rdx_1 << 7) + *(rax_7 + 0x18) + 0x28)
                    
                    if (rax_7.b != 0)
                        rsi_1 = zx.q(r14_1)
                    
                    rsi_1 = zx.q(rsi_1.d + 1)
                
                int64_t rax_11 = sx.q(rsi_1.d)
                void* r13_2 = arg1[rax_11]
                int64_t* r14_2 = &arg1[rax_11]
                int64_t rax_12 = sx.q(r12_1)
                void* rbx_3 = arg1[rax_12]
                int64_t* r12_2 = &arg1[rax_12]
                int64_t rax_13 = sub_140d3cb50(rbx_3)
                int64_t rax_14 = sub_140d3cb50(r13_2)
                
                if (rax_13 == 0 || rax_14 == 0)
                    if (rax_13 == rax_14)
                        i = arg2
                        break
                    
                    rax_14.b = rax_13 != 0
                else if (rax_13 != rax_14)
                    rax_14.b = rax_13 u< rax_14
                else
                    int32_t rax_15 = sub_140d3cbe0(rbx_3)
                    int64_t rdi_4 = *(rax_13 + 0x18)
                    int64_t rdx_3 = sx.q(sub_140d3cbe0(r13_2))
                    rax_14.b = *((sx.q(rax_15) << 7) + rdi_4 + 0x28)
                        s< *((rdx_3 << 7) + *(rax_14 + 0x18) + 0x28)
                
                i = arg2
                
                if (rax_14.b == 0)
                    break
                
                int64_t rcx_13 = *r12_2
                *r12_2 = *r14_2
                *r14_2 = rcx_13
                r12_1 = rsi_1.d
            while (((rsi_1 << 1) + 1).d s< i)
            result = zx.q(arg_18.d)
            rcx = var_58
        
        result = zx.q(result.d - 1)
        rcx -= 2
        arg_18.d = result.d
        var_58 = rcx
    while (result.d s>= 0)

int32_t j = i - 1
int64_t i_1 = sx.q(j)
int64_t i_2 = i_1

if (j s> 0)
    do
        result = arg1[i_1]
        int32_t r12_3 = 0
        int64_t rcx_14 = *arg1
        *arg1 = result
        arg1[i_1] = rcx_14
        
        if (j s> 1)
            uint64_t rbx_5
            
            do
                int32_t r14_3 = r12_3 * 2
                rbx_5 = zx.q(r14_3 + 1)
                
                if ((rbx_5 + 1).d s< j)
                    void* rdi_5 = arg1[sx.q(rbx_5.d)]
                    void* rax_23 = arg1[sx.q(r14_3) + 2]
                    int64_t rax_24 = sub_140d3cb50(rax_23)
                    int64_t rax_25 = sub_140d3cb50(rdi_5)
                    
                    if (rax_24 == 0 || rax_25 == 0)
                        if (rax_24 != rax_25)
                            rax_25.b = rax_24 != 0
                        else
                            rax_25.b = 0
                    else if (rax_24 != rax_25)
                        rax_25.b = rax_24 u< rax_25
                    else
                        int32_t rax_26 = sub_140d3cbe0(rax_23)
                        int64_t rsi_3 = *(rax_24 + 0x18)
                        int64_t rdx_5 = sx.q(sub_140d3cbe0(rdi_5))
                        rax_25.b = *((sx.q(rax_26) << 7) + rsi_3 + 0x28)
                            s< *((rdx_5 << 7) + *(rax_25 + 0x18) + 0x28)
                    
                    if (rax_25.b != 0)
                        rbx_5 = zx.q(r14_3)
                    
                    rbx_5 = zx.q(rbx_5.d + 1)
                
                int64_t rax_29 = sx.q(rbx_5.d)
                void* rdi_7 = arg1[rax_29]
                uint64_t* r14_4 = &arg1[rax_29]
                int64_t rax_30 = sx.q(r12_3)
                uint64_t* r12_4 = &arg1[rax_30]
                void* rax_31 = arg1[rax_30]
                int64_t rax_32 = sub_140d3cb50(rax_31)
                result = sub_140d3cb50(rdi_7)
                
                if (rax_32 == 0 || result == 0)
                    if (rax_32 == result)
                        break
                    
                    result.b = rax_32 != 0
                else if (rax_32 != result)
                    result.b = rax_32 u< result
                else
                    int32_t rax_33 = sub_140d3cbe0(rax_31)
                    int64_t rsi_5 = *(rax_32 + 0x18)
                    int64_t rdx_7 = sx.q(sub_140d3cbe0(rdi_7))
                    result.b = *((sx.q(rax_33) << 7) + rsi_5 + 0x28)
                        s< *((rdx_7 << 7) + *(result + 0x18) + 0x28)
                
                if (result.b == 0)
                    break
                
                uint64_t rcx_27 = *r12_4
                result = *r14_4
                *r12_4 = result
                r12_3 = rbx_5.d
                *r14_4 = rcx_27
            while (((rbx_5 << 1) + 1).d s< j)
            i_1 = i_2
        
        i_1 -= 1
        j -= 1
        i_2 = i_1
    while (i_1 s> 0)

return result
