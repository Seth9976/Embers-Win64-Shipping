// 函数: sub_14040cb30
// 地址: 0x14040cb30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* arg_20 = arg4
char* arg_18 = arg3
uint32_t count = arg8
int64_t rbp = arg2
int32_t result_2 = 0
int32_t i = 0
int16_t* rbx = arg1
int32_t var_80 = 0x7fffffff
int32_t i_2 = 0
int32_t result_1 = 0

do
    int32_t* r14_1 = arg5
    int32_t result_3 = *arg4
    int64_t i_3 = sx.q(i)
    char* rcx = (&data_1436fd420)[i_3]
    int32_t rsi_1 = 0
    int16_t* r15_1 = rbx
    void* rcx_1 = (&data_1436fd440)[i_3]
    void* rcx_2 = (&data_1436fd458)[i_3]
    int32_t rax_1 = sx.d(*(i_3 + 0x1436fd43c))
    void var_70
    
    if (count s> 0)
        void* rbp_1 = &var_70
        uint64_t r12 = zx.q(count)
        uint64_t j
        
        do
            uint32_t var_84
            int32_t var_74
            sub_140410a30(rbp_1, &var_74, &var_84, r15_1, r14_1, rcx_1, rcx_2, rcx, arg6, 
                sub_1403df0e0(0x1855 - result_3) - 0x33, rax_1)
            rsi_1 += var_74
            
            if (test_bit(rsi_1, 0x1f))
                rsi_1 = 0x7fffffff
            
            if (sub_1403df070(var_84 + 0x33) + result_3 - 0x380 s>= 0)
                result_3 = sub_1403df070(var_84 + 0x33) + result_3 - 0x380
            else
                result_3 = 0
            
            r15_1 = &r15_1[5]
            r14_1 = &r14_1[0x19]
            rbp_1 += 1
            j = r12
            r12 -= 1
        while (j != 1)
        rbx = arg1
        rbp = arg2
        i = i_2
        count = arg8
        result_2 = result_1
        arg3 = arg_18
    
    if (rsi_1 s> 0x7ffffffe)
        rsi_1 = 0x7ffffffe
    
    if (rsi_1 s< var_80)
        *arg3 = i.b
        var_80 = rsi_1
        memcpy(rbp, &var_70, count)
        result_2 = result_3
        result_1 = result_2
    
    if (arg7 != 0 && rsi_1 s< 0x3010)
        break
    
    arg3 = arg_18
    arg4 = arg_20
    i += 1
    i_2 = i
while (i s< 3)

void* i_1 = nullptr
int64_t result = sx.q(*arg_18)
int64_t r10 = (&data_1436fd440)[result]

if (count s<= 0)
    *arg_20 = result_2
else
    do
        int64_t rax_11 = 0
        int64_t j_2 = 5
        int64_t j_1
        
        do
            int64_t rdx_2 = sx.q(*(i_1 + rbp))
            rbx = &rbx[1]
            int64_t rcx_11 = rax_11 + (rdx_2 << 2)
            rax_11 += 1
            rbx[-1] = sx.w(*(rdx_2 + rcx_11 + r10)) << 7
            j_1 = j_2
            j_2 -= 1
        while (j_1 != 1)
        i_1 += 1
    while (i_1 s< sx.q(count))
    
    result = zx.q(result_1)
    *arg_20 = result.d

return result
