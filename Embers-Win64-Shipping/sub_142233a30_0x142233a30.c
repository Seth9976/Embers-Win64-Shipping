// 函数: sub_142233a30
// 地址: 0x142233a30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_20 = arg4
int64_t var_58
RefPtr<class RefCount<class pdb_internal::Buffer> >::RefPtr<class RefCount<class pdb_internal::Buffer> >(
    &var_58)
int64_t var_50
RefPtr<class RefCount<class pdb_internal::Buffer> >::RefPtr<class RefCount<class pdb_internal::Buffer> >(
    &var_50)
int64_t* rax
void var_28

if (arg2 == 0)
    rax = RefPtr<class RefCount<class pdb_internal::Buffer> >::RefPtr<class RefCount<class pdb_internal::Buffer> >(
        &var_28)
else
    rax = arg2 + 0xf0
int64_t var_78 = *rax
char* (* var_68)(char** arg1)
int64_t* rax_2

if (arg3 == 0)
    rax_2 = RefPtr<class RefCount<class pdb_internal::Buffer> >::RefPtr<class RefCount<class pdb_internal::Buffer> >(
        &var_68)
else
    rax_2 = arg3 + 0xf0

int64_t var_70 = *rax_2
char rax_4 = __crt_unique_heap_ptr<char,struct __crt_internal_free_policy>(&var_78)
char rax_5

if (rax_4 != 0)
    rax_5 = sub_142271960(&var_78)

if (rax_4 != 0 && rax_5 != 0)
label_142233ae3:
    
    if (__crt_unique_heap_ptr<char,struct __crt_internal_free_policy>(&var_78) == 0)
    label_142233b12:
        char arg_10 = 0
        char* var_48 = &arg_10
        char arg_18 = 0
        int64_t* var_40_1 = &var_78
        char* var_38_1 = &arg_18
        int64_t* var_30_1 = &var_70
        char** var_60_1 = &var_48
        var_68 = sub_14222c270
        sub_142269d30(&var_78, &var_70, &var_68)
        
        if (arg_10 == 0 || arg_18 == 0)
            var_58 = *RefPtr<class RefCount<class pdb_internal::Buffer> >::RefPtr<class RefCount<class pdb_internal::Buffer> >(
                &var_68)
            var_50 = *RefPtr<class RefCount<class pdb_internal::Buffer> >::RefPtr<class RefCount<class pdb_internal::Buffer> >(
                &var_68)
        else
            var_58 = var_78
            var_50 = var_70
            int32_t* var_40_2 = &arg_20
            char** var_60_2 = &var_48
            var_68 = sub_14222c1b0
            var_48 = arg1
            int64_t* var_38_2 = arg5
            sub_14226a560(&var_58, &var_50, &var_68)
    else
        if (__crt_unique_heap_ptr<char,struct __crt_internal_free_policy>(&var_70) == 0)
            goto label_142233b12
        
        if (std::_String_const_iterator<class std::_String_val<struct std::_Simple_types<uint16_t> > >::operator==(
                &var_78, &var_70) == 0)
            goto label_142233b12
else if (__crt_unique_heap_ptr<char,struct __crt_internal_free_policy>(&var_70) != 0
        && sub_142271960(&var_70) != 0)
    goto label_142233ae3

return sub_140745b20(arg5)
