// 函数: sub_1423554b0
// 地址: 0x1423554b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (__crt_unique_heap_ptr<char,struct __crt_internal_free_policy>(arg2) != 0)
    int64_t rax_1 = *arg1
    void var_70
    sub_141f79510(&var_70, arg2)
    void*** rax_2 = sub_140a82f30(0x38, 8)
    *rax_2 = &data_1433346e0
    rax_2[1] = rax_1
    sub_141f79510(&rax_2[2], &var_70)
    *rax_2 = &data_143334700
    int64_t (* var_48)(int32_t* arg1)
    int64_t (* rax_3)(int32_t* arg1) = var_48
    
    if (rax_2 != -8)
        rax_3 = sub_14235b310
    
    void*** var_38_1 = rax_2
    var_48 = rax_3
    sub_140a20e40(2, &var_48)
    sub_141f7baf0(&var_70)

return sub_141f7baf0(arg2) __tailcall
