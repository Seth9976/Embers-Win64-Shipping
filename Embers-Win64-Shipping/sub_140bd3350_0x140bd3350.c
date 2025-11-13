// 函数: sub_140bd3350
// 地址: 0x140bd3350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char r8
char arg_18 = r8
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(arg2 - 2)
uint64_t result = zx.q((temp1 - temp0) s>> 1)
int32_t r13 = result.d
int16_t* var_68
int32_t var_60
int16_t* var_58
int32_t var_50
int16_t* var_48
int32_t var_40
int16_t* var_38
int32_t var_30

if (result.d s>= 0)
    result = zx.q(((result << 1) + 1).d)
    arg_18.d = result.d
    int32_t temp2_1
    
    do
        int32_t r14_1 = r13
        
        if (result.d s< arg2)
            uint64_t rbx_1
            
            do
                int32_t rsi_1 = r14_1 * 2
                rbx_1 = zx.q(rsi_1 + 1)
                
                if ((rbx_1 + 1).d s< arg2)
                    void* rdx_1 = arg1[sx.q(rbx_1.d)]
                    void* r15_1 = arg1[sx.q(rsi_1) + 2]
                    int32_t rax_6 = *(r15_1 + 0x4c)
                    int32_t temp4_1 = *(rdx_1 + 0x4c)
                    
                    if (rax_6 != temp4_1)
                        r15_1.b = rax_6 s< temp4_1
                    else
                        sub_140b63b70(rdx_1 + 0x28, &var_58)
                        sub_140b63b70(r15_1 + 0x28, &var_68)
                        int16_t* const rdx_4 = &data_142d40450
                        int16_t* const rcx_2 = &data_142d40450
                        
                        if (var_50 != 0)
                            rdx_4 = var_58
                        
                        if (var_60 != 0)
                            rcx_2 = var_68
                        
                        int32_t rax_7 = sub_140a54510(rcx_2, rdx_4)
                        int16_t* rcx_3 = var_68
                        r15_1.b = rax_7 s< 0
                        
                        if (rcx_3 != 0)
                            sub_140a74f90(rcx_3)
                        
                        int16_t* rcx_4 = var_58
                        
                        if (rcx_4 != 0)
                            sub_140a74f90(rcx_4)
                    
                    if (r15_1.b != 0)
                        rbx_1 = zx.q(rsi_1)
                    
                    rbx_1 = zx.q(rbx_1.d + 1)
                
                int64_t rax_8 = sx.q(rbx_1.d)
                void* rdx_5 = arg1[rax_8]
                void* rsi_2 = &arg1[rax_8]
                int64_t rax_9 = sx.q(r14_1)
                void* r15_2 = arg1[rax_9]
                void* r14_2 = &arg1[rax_9]
                int32_t rax_10 = *(r15_2 + 0x4c)
                int32_t temp3_1 = *(rdx_5 + 0x4c)
                
                if (rax_10 != temp3_1)
                    r15_2.b = rax_10 s< temp3_1
                else
                    sub_140b63b70(rdx_5 + 0x28, &var_38)
                    sub_140b63b70(r15_2 + 0x28, &var_48)
                    int16_t* const rdx_8 = &data_142d40450
                    int16_t* const rcx_7 = &data_142d40450
                    
                    if (var_30 != 0)
                        rdx_8 = var_38
                    
                    if (var_40 != 0)
                        rcx_7 = var_48
                    
                    int32_t rax_11 = sub_140a54510(rcx_7, rdx_8)
                    int16_t* rcx_8 = var_48
                    r15_2.b = rax_11 s< 0
                    
                    if (rcx_8 != 0)
                        sub_140a74f90(rcx_8)
                    
                    int16_t* rcx_9 = var_38
                    
                    if (rcx_9 != 0)
                        sub_140a74f90(rcx_9)
                
                if (r15_2.b == 0)
                    break
                
                int64_t rcx_10 = *r14_2
                *r14_2 = *rsi_2
                *rsi_2 = rcx_10
                r14_1 = rbx_1.d
            while (((rbx_1 << 1) + 1).d s< arg2)
            result = zx.q(arg_18.d)
        
        result = zx.q(result.d - 2)
        temp2_1 = r13
        r13 -= 1
        arg_18.d = result.d
    while (temp2_1 - 1 s>= 0)

int32_t j = arg2 - 1
int64_t i = sx.q(j)

if (j s> 0)
    do
        result = arg1[i]
        int32_t r14_3 = 0
        uint64_t rcx_11 = *arg1
        *arg1 = result
        arg1[i] = rcx_11
        
        if (j s> 1)
            uint64_t rbx_2
            
            do
                int32_t rsi_3 = r14_3 * 2
                rbx_2 = zx.q(rsi_3 + 1)
                
                if ((rbx_2 + 1).d s< j)
                    void* rdx_9 = arg1[sx.q(rbx_2.d)]
                    void* r15_3 = arg1[sx.q(rsi_3) + 2]
                    int32_t rax_17 = *(r15_3 + 0x4c)
                    int32_t temp6_1 = *(rdx_9 + 0x4c)
                    
                    if (rax_17 != temp6_1)
                        r15_3.b = rax_17 s< temp6_1
                    else
                        sub_140b63b70(rdx_9 + 0x28, &var_48)
                        sub_140b63b70(r15_3 + 0x28, &var_38)
                        int16_t* rdx_12 = &data_142d40450
                        int16_t* rcx_14 = &data_142d40450
                        
                        if (var_40 != 0)
                            rdx_12 = var_48
                        
                        if (var_30 != 0)
                            rcx_14 = var_38
                        
                        int32_t rax_18 = sub_140a54510(rcx_14, rdx_12)
                        int16_t* rcx_15 = var_38
                        r15_3.b = rax_18 s< 0
                        
                        if (rcx_15 != 0)
                            sub_140a74f90(rcx_15)
                        
                        int16_t* rcx_16 = var_48
                        
                        if (rcx_16 != 0)
                            sub_140a74f90(rcx_16)
                    
                    if (r15_3.b != 0)
                        rbx_2 = zx.q(rsi_3)
                    
                    rbx_2 = zx.q(rbx_2.d + 1)
                
                int64_t rax_19 = sx.q(rbx_2.d)
                void* rdx_13 = arg1[rax_19]
                uint64_t* rsi_4 = &arg1[rax_19]
                int64_t rax_20 = sx.q(r14_3)
                void* r15_4 = arg1[rax_20]
                uint64_t* r14_4 = &arg1[rax_20]
                result = zx.q(*(r15_4 + 0x4c))
                int32_t temp5_1 = *(rdx_13 + 0x4c)
                
                if (result.d != temp5_1)
                    r15_4.b = result.d s< temp5_1
                else
                    sub_140b63b70(rdx_13 + 0x28, &var_68)
                    sub_140b63b70(r15_4 + 0x28, &var_58)
                    int16_t* rdx_16 = &data_142d40450
                    int16_t* rcx_19 = &data_142d40450
                    
                    if (var_60 != 0)
                        rdx_16 = var_68
                    
                    if (var_50 != 0)
                        rcx_19 = var_58
                    
                    result = sub_140a54510(rcx_19, rdx_16)
                    int16_t* rcx_20 = var_58
                    r15_4.b = result.d s< 0
                    
                    if (rcx_20 != 0)
                        result = sub_140a74f90(rcx_20)
                    
                    int16_t* rcx_21 = var_68
                    
                    if (rcx_21 != 0)
                        result = sub_140a74f90(rcx_21)
                
                if (r15_4.b == 0)
                    break
                
                uint64_t rcx_22 = *r14_4
                result = *rsi_4
                *r14_4 = result
                r14_3 = rbx_2.d
                *rsi_4 = rcx_22
            while (((rbx_2 << 1) + 1).d s< j)
        
        j -= 1
        i -= 1
    while (i s> 0)

return result
