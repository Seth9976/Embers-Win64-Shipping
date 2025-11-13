// 函数: sub_1422969d0
// 地址: 0x1422969d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
char r8 = *(arg1 + 0x3c)
int32_t rbp = *(arg1 + 0x28)
int32_t rsi = 2
uint64_t result = arg2

if (r8 != 0)
    rsi = 4

int32_t rax_2 = *(arg1 + 0x38)
bool cond:1 = rax_2 s<= 0

if (rax_2 s< 0)
    int32_t temp1_1
    int32_t temp2_1
    temp1_1:temp2_1 = sx.q(rbp)
    int32_t temp3_1
    int32_t temp4_1
    temp3_1:temp4_1 = sx.q(rbp)
    arg2 = zx.q(temp3_1) & 3
    int32_t rax_10 = (temp4_1 + arg2.d) s>> 2
    
    if (r8 == 0)
        rax_10 = (temp2_1 - temp1_1) s>> 1
    
    cond:1 = rax_10 s<= 0

if (cond:1)
    *result = 0
else
    char rax_12 = (*(*(arg1 + 0x18) + 0x30))(arg1 + 0x18, arg2, r8)
    int128_t zmm0 = data_143dbb1e0
    void* var_60_1 = arg1 + 0x18
    int32_t r8_1 = 1
    int32_t var_58_1 = 1
    
    if (rax_12 != 0)
        r8_1 = 0x201
    
    int64_t* rcx_3 = data_143f0f180
    int32_t rdx_3 = (1 << (data_1439c7a34).b) - 1
    int64_t var_68 = 0
    int64_t var_38_1 = 0
    int32_t var_30_1 = 0
    bool var_40_1 = rbp == 0
    int32_t var_44_1 = rdx_3
    int128_t var_54_1 = zmm0
    (*(*rcx_3 + 0x4d8))(rcx_3, result, &data_143f02b98, zx.q(rsi), rbp, r8_1, &var_68)

__security_check_cookie(rax_1 ^ &var_a8)
return result
