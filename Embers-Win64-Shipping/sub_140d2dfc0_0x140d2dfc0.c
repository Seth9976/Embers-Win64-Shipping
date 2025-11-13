// 函数: sub_140d2dfc0
// 地址: 0x140d2dfc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1f8
int64_t var_50 = __security_cookie ^ &var_1f8
char var_1b8
void*** (* var_1b0)()
int64_t rax_1

if ((*(arg1 + 0xcc) & 0x10000080) == 0)
    rax_1.b = 0
else if (arg6 == 0)
label_140d2e068:
    rax_1.b = not.b((arg4 u>> 0x12).b)
    
    if ((rax_1.b & 1) != 0)
        rax_1.b = 1
    else
        var_1b8 = 0
        char* var_1a8_1 = &var_1b8
        var_1b0 = sub_140884c50
        
        if (*(sub_140a756e0(&var_1b0, &data_14397f5f0) + 0x34) != 0)
            rax_1.b = 0
        else
            rax_1.b = 1
else
    int32_t rcx
    rcx.b = sub_140b5b8a0(arg3.d, 0).b == 0
    rax_1.b = arg3:4.d != 0
    rcx.b |= rax_1.b
    
    if (rcx.b == 0)
        rax_1.b = 0
    else
        if (arg9 != 0)
            goto label_140d2e068
        
        if (arg6 == Concurrency::details::SchedulerBase::FoundAvailableVirtualProcessor(arg1, arg2, 
                arg3, arg4, 0))
            goto label_140d2e068
        
        rax_1.b = 0

var_1b8 = 0
void* result = sub_140d2d830(arg1, arg2, arg3, arg4, arg5, rax_1.b, &var_1b8)

if (var_1b8 == 0)
    char var_58
    char var_58_1 = var_58 & 0xfe
    void* result_1 = result
    char var_190_1 = arg7
    int64_t var_100_1 = 0
    int32_t var_f8_1 = 0
    int64_t var_70_1 = 0
    int32_t var_68_1 = 0
    var_1b8 = 0
    int64_t var_188_1 = arg8
    int64_t var_198_1 = arg6
    int16_t var_18f_1 = 0x101
    int32_t var_f4_1 = 8
    int32_t var_64_1 = 8
    char* var_1a8_2 = &var_1b8
    var_1b0 = sub_140884c50
    void* rax_3 = sub_140a756e0(&var_1b0, &data_14397f5f0)
    *(rax_3 + 0x34) += 1
    int64_t var_60_1 = *(rax_3 + 0x38)
    *(rax_3 + 0x38) = result_1
    int64_t r14_1 = sx.q(*(rax_3 + 0x18))
    int32_t rax_4 = (r14_1 + 1).d
    *(rax_3 + 0x18) = rax_4
    
    if (rax_4 s> *(rax_3 + 0x1c))
        sub_1405a4d70(rax_3 + 0x10)
    
    *(*(rax_3 + 0x10) + (r14_1 << 3)) = &result_1
    void* result_2 = result_1
    
    if (result_2 != 0)
        int64_t* rcx_10 = *(result_2 + 0x10)
        (*(*rcx_10 + 0x320))(rcx_10, &result_1)
    
    arg1[0x16](&result_1)
    sub_140d16260(&result_1)

__security_check_cookie(var_50 ^ &var_1f8)
return result
