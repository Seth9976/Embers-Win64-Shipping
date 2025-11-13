// 函数: sub_141941b00
// 地址: 0x141941b00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_148
int64_t rax_1 = __security_cookie ^ &var_148
char rax_2

if (data_143f01c92 != 0)
    rax_2 = sub_140a80f10()

int64_t result
void var_d8
int64_t var_58
int64_t var_50

if (data_143f01c92 == 0 || rax_2 != 0)
    void* rsi_1
    
    if (arg2 != 0)
        (*(*arg2 + 0x48))(arg2)
        
        if (data_143f01c92 != 0)
            sub_140a80f40()
        
        rsi_1 = (*(*arg2 + 0x48))(arg2)
    else
        rsi_1 = nullptr
    
    sub_1408f2b40(&var_d8, arg3)
    result = data_143f00300
    
    if (result != 0 && data_143eff5c4 != 0)
        result = result(0x1702, zx.q(*(rsi_1 + 0x10)), -1, var_50)
    
    if (var_58 != 0)
        result = sub_140a74f90(var_58)
else
    int64_t rbx_1 = -1
    int64_t r14_1 = 0
    int32_t r15_1 = 0
    int64_t var_128 = 0
    int32_t var_11c_1 = 0
    bool cond:1_1
    
    do
        cond:1_1 = arg3[rbx_1 + 1] != 0
        rbx_1 += 1
    while (cond:1_1)
    sub_1408f2b40(&var_d8, arg3)
    int32_t count = (rbx_1 + 1).d
    
    if (count s> 0)
        sub_1405daba0(&var_128)
        r15_1 = var_11c_1
        r14_1 = var_128
    
    memcpy(r14_1, var_50, count)
    
    if (var_58 != 0)
        sub_140a74f90(var_58)
    
    int64_t var_108_1 = 0
    void** const var_f8_1 = &data_142ff8788
    int64_t* var_f0_1 = arg2
    void* (* var_118)(int64_t* arg1) = sub_141932580
    int64_t var_e8_1 = r14_1
    int32_t count_1 = count
    int32_t var_dc_1 = r15_1
    result = sub_14195af10(&var_118, 0, arg5, arg4)
__security_check_cookie(rax_1 ^ &var_148)
return result
