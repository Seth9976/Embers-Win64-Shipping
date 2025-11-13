// 函数: sub_140bcbb30
// 地址: 0x140bcbb30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = __crt_deferred_errno_cache::get(&data_143db7b00)
arg2[1].d
int64_t* result
int64_t r9
result, r9 = (*(*rax + 0x128))()
int64_t* result_1 = result

if (result == 0)
    result.b = 0
else
    r9.b = 1
    int64_t rax_3 = (*(*result + 8))(result_1, arg3, arg4, r9)
    
    if (rax_3 != 0)
        result = j_sub_140a82f30(0x18)
        
        if (result != 0)
            *result = 0
            result[1] = result_1
            result[2] = rax_3
        
        *(arg1 + 0x18) |= 0x20000
        *(arg1 + 0x10) = result
        result.b = 1
    else
        (**result_1)(result_1, zx.q((rax_3 + 1).d))
        result.b = 0

return result
