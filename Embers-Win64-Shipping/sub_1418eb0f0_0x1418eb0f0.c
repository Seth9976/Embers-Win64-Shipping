// 函数: sub_1418eb0f0
// 地址: 0x1418eb0f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t result = __security_cookie ^ &var_108
int64_t result_1 = result
int64_t rsi = sx.q(arg5)
void* r10 = nullptr
int64_t var_98 = 0
int32_t rcx = 4
int32_t var_90 = 0
int32_t var_8c = 9
void* var_68 = nullptr
int32_t var_60 = 0
int32_t result_2 = 0
int32_t var_5c = 4
int64_t var_58 = 0

if (rsi s>= 1)
    int64_t rbx_1 = 0
    
    do
        int64_t rdx_1 = *(arg4 + (rbx_1 << 3))
        
        if (rdx_1 != 0)
            void var_88
            
            if (result_2 + 1 s> rcx)
                sub_140869430(&var_88, result_2)
                rdx_1 = *(arg4 + (rbx_1 << 3))
                r10 = var_68
            
            result = sx.q(result_2)
            void* rcx_2 = &var_88
            
            if (r10 != 0)
                rcx_2 = r10
            
            *(rcx_2 + (result << 3)) = rdx_1
            rcx = var_5c
            result_2 += 1
            r10 = var_68
        
        rbx_1 += 1
    while (rbx_1 s< rsi)
    
    if (result_2 s> 0)
        int32_t var_e8 = arg2
        int32_t var_50_1 = arg3
        int64_t var_58_1 = arg6
        result = sub_1418ef580(arg1, &var_e8)
        r10 = var_68
    
    if (r10 != 0)
        result = sub_140a74f90(r10)
    
    if (var_98 != 0)
        result = sub_140a74f90(var_98)

__security_check_cookie(result_1 ^ &var_108)
return result
