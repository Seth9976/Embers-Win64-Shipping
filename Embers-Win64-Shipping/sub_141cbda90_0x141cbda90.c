// 函数: sub_141cbda90
// 地址: 0x141cbda90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(arg2 - 2)
uint64_t result = zx.q((temp1 - temp0) s>> 1)
int32_t r15 = result.d
int64_t var_58
int64_t var_50
int64_t var_48
int64_t var_40
int128_t zmm1

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
                    void* rcx = arg1[sx.q(rbx_1.d)].q
                    int64_t* rax_6
                    
                    if (*(rcx + 0x10) s<= 0)
                        rax_6 = &data_143f35860
                    else
                        rax_6 = *(rcx + 8)
                    
                    var_58 = *rax_6
                    void* rcx_1 = arg1[sx.q(rsi_1) + 2].q
                    int64_t* rax_11
                    
                    if (*(rcx_1 + 0x10) s<= 0)
                        rax_11 = &data_143f35860
                    else
                        rax_11 = *(rcx_1 + 8)
                    
                    var_50 = *rax_11
                    
                    if (sub_140b5d160(&var_50, &var_58) s< 0)
                        rbx_1 = zx.q(rsi_1)
                    
                    rbx_1 = zx.q(rbx_1.d + 1)
                
                int64_t* rsi_4 = &arg1[sx.q(rbx_1.d)]
                void* rax_14 = *rsi_4
                int64_t* rax_15
                
                if (*(rax_14 + 0x10) s<= 0)
                    rax_15 = &data_143f35860
                else
                    rax_15 = *(rax_14 + 8)
                
                int64_t* r14_4 = &arg1[sx.q(r14_1)]
                var_48 = *rax_15
                void* rax_17 = *r14_4
                int64_t* rax_18
                
                if (*(rax_17 + 0x10) s<= 0)
                    rax_18 = &data_143f35860
                else
                    rax_18 = *(rax_17 + 8)
                
                var_40 = *rax_18
                result = sub_140b5d160(&var_40, &var_48)
                
                if (result.d s>= 0)
                    break
                
                if (r14_4 != rsi_4)
                    zmm1 = *r14_4
                    *r14_4 = *rsi_4
                    *rsi_4 = zmm1
                
                result = zx.q(((rbx_1 << 1) + 1).d)
                r14_1 = rbx_1.d
            while (result.d s< arg2)
        
        r12_1 -= 2
        temp2_1 = r15
        r15 -= 1
    while (temp2_1 - 1 s>= 0)

int32_t i = arg2 - 1

if (i s> 0)
    int128_t* r15_3 = &arg1[sx.q(i)]
    
    do
        if (arg1 != r15_3)
            zmm1 = *arg1
            *arg1 = *r15_3
            *r15_3 = zmm1
        
        int32_t r14_5 = 0
        
        if (i s> 1)
            uint64_t rbx_2
            
            do
                int32_t rsi_5 = r14_5 * 2
                rbx_2 = zx.q(rsi_5 + 1)
                
                if ((rbx_2 + 1).d s< i)
                    void* rcx_4 = arg1[sx.q(rbx_2.d)].q
                    int64_t* rax_23
                    
                    if (*(rcx_4 + 0x10) s<= 0)
                        rax_23 = &data_143f35860
                    else
                        rax_23 = *(rcx_4 + 8)
                    
                    var_40 = *rax_23
                    void* rcx_5 = arg1[sx.q(rsi_5) + 2].q
                    int64_t* rax_28
                    
                    if (*(rcx_5 + 0x10) s<= 0)
                        rax_28 = &data_143f35860
                    else
                        rax_28 = *(rcx_5 + 8)
                    
                    var_48 = *rax_28
                    
                    if (sub_140b5d160(&var_48, &var_40) s< 0)
                        rbx_2 = zx.q(rsi_5)
                    
                    rbx_2 = zx.q(rbx_2.d + 1)
                
                void* rsi_8 = &arg1[sx.q(rbx_2.d)]
                void* rax_31 = *rsi_8
                int64_t* rax_32
                
                if (*(rax_31 + 0x10) s<= 0)
                    rax_32 = &data_143f35860
                else
                    rax_32 = *(rax_31 + 8)
                
                void* r14_8 = &arg1[sx.q(r14_5)]
                var_50 = *rax_32
                void* rax_34 = *r14_8
                int64_t* rax_35
                
                if (*(rax_34 + 0x10) s<= 0)
                    rax_35 = &data_143f35860
                else
                    rax_35 = *(rax_34 + 8)
                
                var_58 = *rax_35
                result = sub_140b5d160(&var_58, &var_50)
                
                if (result.d s>= 0)
                    break
                
                if (r14_8 != rsi_8)
                    zmm1 = *r14_8
                    *r14_8 = *rsi_8
                    *rsi_8 = zmm1
                
                r14_5 = rbx_2.d
            while (((rbx_2 << 1) + 1).d s< i)
        
        i -= 1
        r15_3 -= 0x10
    while (i s> 0)

return result
