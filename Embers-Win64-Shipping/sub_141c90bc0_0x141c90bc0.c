// 函数: sub_141c90bc0
// 地址: 0x141c90bc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_18 = arg3
int32_t* result = arg1
int64_t var_58
int32_t arg_10
int32_t arg_20

if ((arg3.b & 2) != 0)
    int64_t rdi_1 = 0
    int64_t* rsi_1 = *(arg1 + 0x20)
    uint64_t r12_2 = sx.q(arg1[0xa]) << 3 u>> 3
    
    if (rsi_1 u> &rsi_1[sx.q(arg1[0xa])])
        r12_2 = 0
    
    if (r12_2 != 0)
        do
            int64_t* r15_1 = *rsi_1
            int64_t* r14_1 = arg2[1]
            sub_141c9fe70(r14_1, &arg_20, r15_1)
            int64_t rax_2 = sx.q(arg_20)
            int64_t rdx_3
            
            if (rax_2.d == 0xffffffff)
                rdx_3 = 0
            else
                rdx_3 = rax_2 * 0x30 + *r14_1
            
            int64_t rax_3 = rdx_3 + 0x20
            
            if (rdx_3 == 0)
                rax_3 = 0
            
            int32_t* rax_4
            
            if (rax_3 == 0)
                rax_4 = sub_141ca0090(arg2[2], &var_58, r15_1)
            
            if (rax_3 != 0 || *rax_4 != 0xffffffff)
                int128_t* rax_5 = sub_141c9a300(*arg2, r15_1)
                void* r14_2 = arg2[4]
                arg_10.b = 1
                int64_t r15_2 = sx.q(*(r14_2 + 0x28))
                int32_t rcx_3 = (r15_2 + 1).d
                *(r14_2 + 0x28) = rcx_3
                
                if (rcx_3 s> *(r14_2 + 0x2c))
                    sub_1405a4d70(r14_2 + 0x20)
                
                *(*(r14_2 + 0x20) + (r15_2 << 3)) = rax_5
                arg_10.q = arg2[4]
                sub_1405a7050(&rax_5[7], &arg_10)
            
            rsi_1 = &rsi_1[1]
            rdi_1 += 1
        while (rdi_1 != r12_2)
        
        arg3 = arg_18
    
    result = arg1

if ((arg3.b & 1) != 0)
    int64_t* rsi_2 = *(result + 0x30)
    int64_t rdi_2 = 0
    int64_t r12_3 = sx.q(result[0xe]) << 3
    result = &rsi_2[sx.q(result[0xe])]
    uint64_t r12_4 = r12_3 u>> 3
    
    if (rsi_2 u> result)
        r12_4 = 0
    
    if (r12_4 != 0)
        do
            int64_t* r15_3 = *rsi_2
            int64_t* r14_3 = arg2[1]
            sub_141c9fe70(r14_3, &arg_20, r15_3)
            int64_t rax_9 = sx.q(arg_20)
            int64_t rdx_11
            
            if (rax_9.d == 0xffffffff)
                rdx_11 = 0
            else
                rdx_11 = rax_9 * 0x30 + *r14_3
            
            int64_t rax_10 = rdx_11 + 0x20
            
            if (rdx_11 == 0)
                rax_10 = 0
            
            if (rax_10 == 0)
                result = sub_141ca0090(arg2[2], &var_58, r15_3)
            
            if (rax_10 != 0 || *result != 0xffffffff)
                int128_t* rax_11 = sub_141c9a300(*arg2, r15_3)
                void* r14_4 = arg2[4]
                arg_10.b = 1
                int64_t r15_4 = sx.q(*(r14_4 + 0x38))
                int32_t rcx_9 = (r15_4 + 1).d
                *(r14_4 + 0x38) = rcx_9
                
                if (rcx_9 s> *(r14_4 + 0x3c))
                    sub_1405a4d70(r14_4 + 0x30)
                
                *(*(r14_4 + 0x30) + (r15_4 << 3)) = rax_11
                arg_10.q = arg2[4]
                result = sub_1405a7050(&rax_11[7], &arg_10)
            
            rsi_2 = &rsi_2[1]
            rdi_2 += 1
        while (rdi_2 != r12_4)
        
        arg3 = arg_18

int32_t* rcx_18 = arg1

if ((arg3.b & 0x10) != 0)
    int64_t rdi_3 = 0
    int64_t* rsi_3 = *(rcx_18 + 0x60)
    result = &rsi_3[sx.q(rcx_18[0x1a])]
    uint64_t r12_6 = sx.q(rcx_18[0x1a]) << 3 u>> 3
    
    if (rsi_3 u> result)
        r12_6 = 0
    
    if (r12_6 != 0)
        do
            int64_t* r15_5 = *rsi_3
            int64_t* r14_5 = arg2[1]
            sub_141c9fe70(r14_5, &arg_20, r15_5)
            int64_t rax_15 = sx.q(arg_20)
            int64_t rdx_19
            
            if (rax_15.d == 0xffffffff)
                rdx_19 = 0
            else
                rdx_19 = rax_15 * 0x30 + *r14_5
            
            int64_t rax_16 = rdx_19 + 0x20
            
            if (rdx_19 == 0)
                rax_16 = 0
            
            if (rax_16 == 0)
                result = sub_141ca0090(arg2[2], &var_58, r15_5)
            
            if (rax_16 != 0 || *result != 0xffffffff)
                int128_t* rax_17 = sub_141c9a300(*arg2, r15_5)
                void* r14_6 = arg2[4]
                arg_10.b = 1
                int64_t r15_6 = sx.q(*(r14_6 + 0x68))
                int32_t rcx_15 = (r15_6 + 1).d
                *(r14_6 + 0x68) = rcx_15
                
                if (rcx_15 s> *(r14_6 + 0x6c))
                    sub_1405a4d70(r14_6 + 0x60)
                
                *(*(r14_6 + 0x60) + (r15_6 << 3)) = rax_17
                arg_10.q = arg2[4]
                result = sub_1405a7050(&rax_17[7], &arg_10)
            
            rsi_3 = &rsi_3[1]
            rdi_3 += 1
        while (rdi_3 != r12_6)
        
        arg3 = arg_18
        rcx_18 = arg1

if ((arg3.b & 8) != 0)
    int64_t rdi_4 = 0
    int64_t* rsi_4 = *(rcx_18 + 0x50)
    result = &rsi_4[sx.q(rcx_18[0x16])]
    uint64_t r12_8 = sx.q(rcx_18[0x16]) << 3 u>> 3
    
    if (rsi_4 u> result)
        r12_8 = 0
    
    if (r12_8 != 0)
        do
            int64_t* r15_7 = *rsi_4
            int64_t* r14_7 = arg2[1]
            sub_141c9fe70(r14_7, &arg_20, r15_7)
            int64_t rax_21 = sx.q(arg_20)
            int64_t rdx_27
            
            if (rax_21.d == 0xffffffff)
                rdx_27 = 0
            else
                rdx_27 = rax_21 * 0x30 + *r14_7
            
            int64_t rax_22 = rdx_27 + 0x20
            
            if (rdx_27 == 0)
                rax_22 = 0
            
            if (rax_22 == 0)
                result = sub_141ca0090(arg2[2], &var_58, r15_7)
            
            if (rax_22 != 0 || *result != 0xffffffff)
                int128_t* rax_23 = sub_141c9a300(*arg2, r15_7)
                void* r14_8 = arg2[4]
                arg_10.b = 1
                int64_t r15_8 = sx.q(*(r14_8 + 0x58))
                int32_t rcx_22 = (r15_8 + 1).d
                *(r14_8 + 0x58) = rcx_22
                
                if (rcx_22 s> *(r14_8 + 0x5c))
                    sub_1405a4d70(r14_8 + 0x50)
                
                *(*(r14_8 + 0x50) + (r15_8 << 3)) = rax_23
                arg_10.q = arg2[4]
                result = sub_1405a7050(&rax_23[7], &arg_10)
            
            rsi_4 = &rsi_4[1]
            rdi_4 += 1
        while (rdi_4 != r12_8)
        
        arg3 = arg_18

if ((arg3.b & 4) != 0)
    int64_t rsi_5 = 0
    int64_t* r14_9 = *(arg1 + 0x40)
    result = &r14_9[sx.q(arg1[0x12])]
    uint64_t r12_10 = sx.q(arg1[0x12]) << 3 u>> 3
    
    if (r14_9 u> result)
        r12_10 = 0
    
    if (r12_10 != 0)
        do
            int64_t* rdi_5 = *r14_9
            int64_t* r15_9 = arg2[1]
            sub_141c9fe70(r15_9, &arg_10, rdi_5)
            int64_t rax_28 = sx.q(arg_10)
            int64_t rdx_35
            
            if (rax_28.d == 0xffffffff)
                rdx_35 = 0
            else
                rdx_35 = rax_28 * 0x30 + *r15_9
            
            int64_t rax_29 = rdx_35 + 0x20
            
            if (rdx_35 == 0)
                rax_29 = 0
            
            if (rax_29 == 0)
                result = sub_141ca0090(arg2[2], &arg_20, rdi_5)
            
            if (rax_29 != 0 || *result != 0xffffffff)
                int128_t* rax_30 = sub_141c9a300(*arg2, rdi_5)
                void* rdi_6 = arg2[4]
                arg_18.b = 1
                int64_t r15_10 = sx.q(*(rdi_6 + 0x48))
                int32_t rcx_28 = (r15_10 + 1).d
                *(rdi_6 + 0x48) = rcx_28
                
                if (rcx_28 s> *(rdi_6 + 0x4c))
                    sub_1405a4d70(rdi_6 + 0x40)
                
                *(*(rdi_6 + 0x40) + (r15_10 << 3)) = rax_30
                var_58 = arg2[4]
                result = sub_1405a7050(&rax_30[7], &var_58)
            
            r14_9 = &r14_9[1]
            rsi_5 += 1
        while (rsi_5 != r12_10)

return result
