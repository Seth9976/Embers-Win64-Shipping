// 函数: sub_140cc1bd0
// 地址: 0x140cc1bd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char var_48 = 0
char* var_28 = &var_48
void*** (* var_30)() = sub_140884c50
int32_t* __saved_r9_2 = *(sub_140a756e0(&var_30, &data_14397f5f0) + 0x48)

if (__saved_r9_2 != 0)
    *__saved_r9_2 += 1

int64_t r9 = sub_140d19170(__saved_r9_2)
int32_t* result_1 = __saved_r9_2
int32_t** var_58 = &result_1
void*** result = sub_140cbd210(arg1, arg2, arg3, r9, arg4, arg5)
int32_t* rbp_1 = result_1

if (rbp_1 != __saved_r9_2)
    sub_140d3ae10(__saved_r9_2)
    int32_t* __saved_r9_1 = __saved_r9_2
    __saved_r9_2 = rbp_1
    
    if (rbp_1 != 0)
        *rbp_1 += 1
    
    if (__saved_r9_1 != 0)
        int32_t temp0_1 = *__saved_r9_1
        *__saved_r9_1 -= 1
        
        if (temp0_1 == 1)
            sub_140d3a300(__saved_r9_1)
            j_sub_140a74f90(__saved_r9_1)
    
    sub_140d3e080(rbp_1)

void* arg_38
void* rax_3 = arg_38
result_1 = result
(*rax_3)(*(rax_3 + 8), &result_1)
int32_t* __saved_r9_3

if (result == 0)
    __saved_r9_3 = __saved_r9_2
else
    arg_38.b = 0
    void** var_38_1 = &arg_38
    result_1 = sub_140884c50
    __saved_r9_3 = *(sub_140a756e0(&result_1, &data_14397f5f0) + 0x48)

sub_140d1f490(__saved_r9_3)

if (__saved_r9_2 != 0)
    int32_t temp1_1 = *__saved_r9_2
    *__saved_r9_2 -= 1
    
    if (temp1_1 == 1)
        sub_140d3a300(__saved_r9_2)
        j_sub_140a74f90(__saved_r9_2)

return result
