// 函数: sub_14224f680
// 地址: 0x14224f680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

int64_t rbx_1 = arg3
arg3.b = 1
void* rax = (*(*arg2 + 0x6a8))(arg2, rbx_1, arg3)

if (rax == 0)
    return 

int32_t var_30_1 = data_143dbb210
int64_t var_38 = data_143dbb208

if (__crt_unique_heap_ptr<char,struct __crt_internal_free_policy>(rax + 0xf0) != 0)
    int64_t* arg_10 = &var_38
    int64_t** var_20_1 = &arg_10
    int64_t (* var_28)(int64_t* arg1, int64_t* arg2) = sub_142241880
    sub_142269e40(rax + 0xf0, &var_28)

(*(*arg1 + 0x408))(arg1, arg2, rbx_1, arg4, &var_38, arg5)
