// 函数: sub_1423bd040
// 地址: 0x1423bd040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
int32_t* r10 = *(arg1 + 0xb8)
int32_t rsi = arg2
int64_t result

if (r10 == 0)
    result = 0
else
    int32_t rax_3 = r10[8] - arg2
    int32_t rbx_1 = r10[3]
    
    if (rax_3 s<= 0)
        rax_3 = 0
    
    uint32_t var_70
    sub_141998310(&var_70, *r10, r10[1], rbx_1, rax_3.b)
    void* rax_4 = *(arg1 + 0xb8)
    char rcx_1 = (data_1439c7a34).b
    int32_t var_78 = 0
    int64_t* rcx_2 = data_143f0f180
    int32_t var_30_1 = *(rax_4 + 0x10)
    int128_t var_68 = zx.o(0)
    
    if (rsi s<= 1)
        rsi = 1
    
    int32_t var_58_1 = 1
    int128_t var_54_1 = data_143dbb1e0
    int32_t var_44_1 = (1 << rcx_1) - 1
    char var_40_1 = 0
    int64_t var_38_1 = 0
    result = (*(*rcx_2 + 0x1e0))(rcx_2, zx.q(var_70), zx.q(rbx_1.b), zx.q(rsi), 0, &var_68, &var_78)

__security_check_cookie(rax_1 ^ &var_b8)
return result
