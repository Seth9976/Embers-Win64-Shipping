// 函数: sub_1406eb8c0
// 地址: 0x1406eb8c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t result = __security_cookie ^ &var_d8
int64_t result_1 = result
int64_t* rbx = data_143cdf678

if (rbx != 0)
    int16_t* const rsi_1
    
    if (arg1[1].d == 0)
        rsi_1 = &data_142d40450
    else
        rsi_1 = *arg1
    
    if (rbx[0x1c] == 0)
        int64_t rax_1 = *rbx
        rbx[0x1c] = (*(rax_1 + 0x30))(rax_1)
    
    void var_b8
    void* rax_3 = sub_140685ed0(&var_b8, rsi_1)
    int64_t r8_1 = rbx[0x1c]
    result = (*r8_1)(r8_1, *(rax_3 + 0x88))
    int64_t var_38
    
    if (var_38 != 0)
        result = sub_140a74f90(var_38)

int64_t rcx_4 = *arg1

if (rcx_4 != 0)
    result = sub_140a74f90(rcx_4)

__security_check_cookie(result_1 ^ &var_d8)
return result
