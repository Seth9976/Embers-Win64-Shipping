// 函数: sub_1405fbb20
// 地址: 0x1405fbb20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_50 = -2
void var_78
int64_t rax_1 = __security_cookie ^ &var_78
int32_t result_2 = 0

if (arg3 != 0)
    *arg3 = 0

uint64_t result

if (arg2 != 0)
    void* var_48_1 = arg1 + 0x18
    EnterCriticalSection(arg1 + 0x18)
    int32_t result_1
    int32_t result_3
    
    if (*(arg1 + 0x40) != 0)
        int64_t var_40
        int32_t result_4 = (*(*arg2 + 0x50))(arg2, &data_1434cbb80, &var_40)
        result_3 = result_4
        
        if (result_4 s< 0)
            goto label_1405fbc24
        
        int64_t var_38
        
        if (var_40 != *(arg1 + 0x64) || var_38 != *(arg1 + 0x6c))
            result_3 = -0x3ff2c94c
            goto label_1405fbc24
        
        int64_t* rax_5 = sub_1405f8df0(arg1 + 0x64)
        int64_t* i = *rax_5
        
        for (void* rbp_1 = &i[sx.q(rax_5[1].d)]; i != rbp_1; i = &i[1])
            int64_t* rcx_3 = *i
            
            if (rcx_3 != 0)
                int32_t var_58 = 0
                
                if ((*(*rcx_3 + 0x118))(rcx_3, arg2, &var_58) s>= 0)
                    char rdx_1 = var_58.b
                    
                    if (((rdx_1 & 7) != 7 & (rdx_1 & 0xb) != 0xb) == 0)
                        goto label_1405fbc26
        
        result_1 = -0x3ff2c94c
    else
        result_3 = -0x3ff2c17b
    label_1405fbc24:
        result_2 = result_3
    label_1405fbc26:
        result_1 = result_2
    
    if (arg1 != -0x18)
        LeaveCriticalSection(arg1 + 0x18)
    
    result = zx.q(result_1)
else
    result = 0x80004003

__security_check_cookie(rax_1 ^ &var_78)
return result
