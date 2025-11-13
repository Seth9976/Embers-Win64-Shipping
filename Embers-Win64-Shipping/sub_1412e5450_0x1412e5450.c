// 函数: sub_1412e5450
// 地址: 0x1412e5450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1e8
int64_t rax_1 = __security_cookie ^ &var_1e8
char r12 = *(arg1 + 0x3c) & 1
int64_t* r15 = 0xf8
int64_t result

for (int32_t i = 0; i u< 3; )
    void var_1a8
    sub_1422d6b50(&var_1a8)
    int32_t j_1 = *(arg1 + 0x2f8)
    int64_t* rbx_1 = *(arg1 + 0x2f0)
    float (* var_1b8)[0x4] = nullptr
    int32_t j_2 = j_1
    
    if (j_1 != 0)
        sub_141295500(&var_1b8, j_1, 0)
        void* rsi_2 = var_1b8 - rbx_1
        int32_t j
        
        do
            sub_14125cad0(rsi_2 + rbx_1, rbx_1)
            rbx_1 = &rbx_1[0xe]
            j = j_1
            j_1 -= 1
        while (j != 1)
    else
        int32_t var_1ac_1 = 0
    
    sub_141299520(*(arg1 + 8), arg3, &var_1b8, i, r12, &var_1a8, var_1b8)
    int64_t* rcx_4 = data_143f0f180
    result = (*(*rcx_4 + 0x100))(rcx_4, *(r15 + *(arg1 + 8)), &var_1a8)
    i += 1
    r15 = &r15[1]

__security_check_cookie(rax_1 ^ &var_1e8)
return result
