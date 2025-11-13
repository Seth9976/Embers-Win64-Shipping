// 函数: sub_140a06730
// 地址: 0x140a06730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_118
int64_t rax_1 = __security_cookie ^ &var_118
int64_t var_f8 = 0
int32_t var_f0 = 0
uint64_t result = sub_141ec4660(arg1, &var_f8)
int64_t rdi = sx.q(var_f0)

if (rdi.d s>= 4)
    int32_t rax_2 = (rdi + 1).d
    var_f0 = rax_2
    int128_t zmm0_1 = *arg2 ^ data_142d3f780
    
    if (rax_2 s> 0)
        sub_1405a4f90(&var_f8)
    
    *(var_f8 + rdi * 0x10) = zmm0_1
    void** var_d8
    sub_14222a2e0(&var_d8)
    int64_t var_a8
    
    if (sub_141ec5940(&var_d8, &var_f8, arg1 + 0x30) != 0 && arg3 != &var_a8)
        int64_t rsi_1 = var_a8
        int32_t r8_1 = *(arg3 + 0xc)
        int32_t var_a0
        arg3[1].d = var_a0
        
        if (var_a0 != 0 || r8_1 != 0)
            sub_1407c3650(arg3, var_a0, r8_1)
            memcpy(*arg3, rsi_1, var_a0 * 0xc)
        else
            *(arg3 + 0xc) = 0
    
    result = sub_14222ae60(&var_d8)

int64_t rcx_8 = var_f8

if (rcx_8 != 0)
    result = sub_140a74f90(rcx_8)

__security_check_cookie(rax_1 ^ &var_118)
return result
