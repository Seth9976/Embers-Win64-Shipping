// 函数: sub_140a13890
// 地址: 0x140a13890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = __crt_deferred_errno_cache::get(&data_143db7b00)
int64_t r9 = *rax
int64_t* result = (*(r9 + 0xc0))(rax, arg2, 0, r9)
int64_t* result_2 = *(arg1 + 8)
int64_t* result_1 = result_2

if (result_2 != result)
    *(arg1 + 8) = result
    result_1 = result
    
    if (result_2 != 0)
        (**result_2)(result_2, 1)
        result_1 = *(arg1 + 8)

result.b = result_1 != 0
return result
