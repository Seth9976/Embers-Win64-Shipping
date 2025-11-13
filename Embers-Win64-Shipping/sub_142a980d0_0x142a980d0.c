// 函数: sub_142a980d0
// 地址: 0x142a980d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = -2
void* result

if (*arg3 s> 0)
    result.b = 0
else
    result = j_sub_142a7dd00(0x40)
    void* result_1 = result
    void* rbx_1
    
    if (result == 0)
        rbx_1 = nullptr
    else
        rbx_1 = sub_142a479b0(result, arg2)
    
    if (rbx_1 == 0)
        *arg3 = 7
        result.b = 0
    else if (*arg3 s> 0)
        (**rbx_1)(rbx_1, 1)
        result.b = 0
    else if (sub_142ae7470(arg1, rbx_1, 0) s>= 0)
        (**rbx_1)(rbx_1, 1)
        result.b = 0
    else
        j_sub_142ae7a10(arg1, rbx_1, Concurrency::Scheduler::ResetDefaultSchedulerPolicy, arg3)
        
        if (*arg3 s> 0)
            (**rbx_1)(rbx_1, 1)
            result.b = 0
        else
            result.b = 1

return result
