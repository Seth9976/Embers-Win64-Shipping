// 函数: sub_140bd36c0
// 地址: 0x140bd36c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char r8
char arg_18 = r8
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(arg2 - 2)
uint64_t result = zx.q((temp1 - temp0) s>> 1)
int32_t r13 = result.d
int64_t var_78
int64_t var_70
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
            uint64_t rdi_1
            
            do
                int32_t rsi_1 = r14_1 * 2
                rdi_1 = zx.q(rsi_1 + 1)
                
                if ((rdi_1 + 1).d s< arg2)
                    void* rbx_1 = arg1[sx.q(rsi_1) + 2]
                    var_78 = *(arg1[sx.q(rdi_1.d)] + 0x18)
                    sub_140b63b70(&var_78, &var_58)
                    var_70 = *(rbx_1 + 0x18)
                    sub_140b63b70(&var_70, &var_68)
                    int16_t* const rdx_3 = &data_142d40450
                    int16_t* const rcx_3 = &data_142d40450
                    
                    if (var_50 != 0)
                        rdx_3 = var_58
                    
                    if (var_60 != 0)
                        rcx_3 = var_68
                    
                    int32_t rax_8 = sub_140a54510(rcx_3, rdx_3)
                    int16_t* rcx_4 = var_68
                    rbx_1.b = rax_8 s< 0
                    
                    if (rcx_4 != 0)
                        sub_140a74f90(rcx_4)
                    
                    int16_t* rcx_5 = var_58
                    
                    if (rcx_5 != 0)
                        sub_140a74f90(rcx_5)
                    
                    if (rbx_1.b != 0)
                        rdi_1 = zx.q(rsi_1)
                    
                    rdi_1 = zx.q(rdi_1.d + 1)
                
                int64_t rax_9 = sx.q(r14_1)
                void* rbx_2 = arg1[rax_9]
                void* rsi_2 = &arg1[rax_9]
                int64_t rax_10 = sx.q(rdi_1.d)
                void* r14_2 = &arg1[rax_10]
                var_70 = *(arg1[rax_10] + 0x18)
                sub_140b63b70(&var_70, &var_38)
                var_78 = *(rbx_2 + 0x18)
                sub_140b63b70(&var_78, &var_48)
                int16_t* const rdx_6 = &data_142d40450
                int16_t* const rcx_9 = &data_142d40450
                
                if (var_30 != 0)
                    rdx_6 = var_38
                
                if (var_40 != 0)
                    rcx_9 = var_48
                
                int32_t rax_13 = sub_140a54510(rcx_9, rdx_6)
                int16_t* rcx_10 = var_48
                rbx_2.b = rax_13 s< 0
                
                if (rcx_10 != 0)
                    sub_140a74f90(rcx_10)
                
                int16_t* rcx_11 = var_38
                
                if (rcx_11 != 0)
                    sub_140a74f90(rcx_11)
                
                if (rbx_2.b == 0)
                    break
                
                int64_t rcx_12 = *rsi_2
                *rsi_2 = *r14_2
                *r14_2 = rcx_12
                r14_1 = rdi_1.d
            while (((rdi_1 << 1) + 1).d s< arg2)
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
        int32_t r15_1 = 0
        uint64_t rcx_13 = *arg1
        *arg1 = result
        arg1[i] = rcx_13
        
        if (j s> 1)
            uint64_t rbx_3
            
            do
                int32_t rsi_3 = r15_1 * 2
                rbx_3 = zx.q(rsi_3 + 1)
                
                if ((rbx_3 + 1).d s< j)
                    void* rdi_2 = arg1[sx.q(rsi_3) + 2]
                    var_70 = *(arg1[sx.q(rbx_3.d)] + 0x18)
                    sub_140b63b70(&var_70, &var_48)
                    var_78 = *(rdi_2 + 0x18)
                    sub_140b63b70(&var_78, &var_38)
                    int16_t* rdx_9 = &data_142d40450
                    int16_t* rcx_17 = &data_142d40450
                    
                    if (var_40 != 0)
                        rdx_9 = var_48
                    
                    if (var_30 != 0)
                        rcx_17 = var_38
                    
                    int32_t rax_21 = sub_140a54510(rcx_17, rdx_9)
                    int16_t* rcx_18 = var_38
                    rdi_2.b = rax_21 s< 0
                    
                    if (rcx_18 != 0)
                        sub_140a74f90(rcx_18)
                    
                    int16_t* rcx_19 = var_48
                    
                    if (rcx_19 != 0)
                        sub_140a74f90(rcx_19)
                    
                    if (rdi_2.b != 0)
                        rbx_3 = zx.q(rsi_3)
                    
                    rbx_3 = zx.q(rbx_3.d + 1)
                
                int64_t rax_22 = sx.q(r15_1)
                void* rdi_3 = arg1[rax_22]
                uint64_t* rsi_4 = &arg1[rax_22]
                int64_t rax_23 = sx.q(rbx_3.d)
                uint64_t* r15_2 = &arg1[rax_23]
                var_70 = *(arg1[rax_23] + 0x18)
                sub_140b63b70(&var_70, &var_68)
                var_78 = *(rdi_3 + 0x18)
                sub_140b63b70(&var_78, &var_58)
                int16_t* rdx_12 = &data_142d40450
                int16_t* rcx_23 = &data_142d40450
                
                if (var_60 != 0)
                    rdx_12 = var_68
                
                if (var_50 != 0)
                    rcx_23 = var_58
                
                result = sub_140a54510(rcx_23, rdx_12)
                int16_t* rcx_24 = var_58
                rdi_3.b = result.d s< 0
                
                if (rcx_24 != 0)
                    result = sub_140a74f90(rcx_24)
                
                int16_t* rcx_25 = var_68
                
                if (rcx_25 != 0)
                    result = sub_140a74f90(rcx_25)
                
                if (rdi_3.b == 0)
                    break
                
                result = *r15_2
                uint64_t rcx_26 = *rsi_4
                *rsi_4 = result
                *r15_2 = rcx_26
                r15_1 = rbx_3.d
            while (((rbx_3 << 1) + 1).d s< j)
        
        j -= 1
        i -= 1
    while (i s> 0)

return result
