// 函数: sub_141f09de0
// 地址: 0x141f09de0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_208
int64_t* result = __security_cookie ^ &var_208
int64_t* result_1 = result

if (arg1[0x54].d s> 0)
    void* rcx = nullptr
    int64_t rbx_1 = arg1[0x53]
    int32_t result_2 = arg1[0x54].d
    void* var_40_1 = nullptr
    void var_1e8
    
    if (result_2 != 0)
        sub_141f22810(&var_1e8, result_2, 0)
        void* rcx_2 = &var_1e8
        
        if (var_40_1 != 0)
            rcx_2 = var_40_1
        
        memcpy(rcx_2, rbx_1, result_2 * 0x8c)
        rcx = var_40_1
    else
        int32_t var_34_1 = 3
    
    result = sx.q(result_2)
    void* rbx_2 = &var_1e8
    
    if (rcx != 0)
        rbx_2 = rcx
    
    void* rsi_2 = result * 0x8c + rbx_2
    
    if (rbx_2 != rsi_2)
        do
            result = sub_141f11260(arg1, rbx_2, arg2, arg3)
            rbx_2 += 0x8c
        while (rbx_2 != rsi_2)
        
        rcx = var_40_1
    
    if (rcx != 0)
        result = sub_140a74f90(rcx)

__security_check_cookie(result_1 ^ &var_208)
return result
