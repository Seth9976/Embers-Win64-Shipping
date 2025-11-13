// 函数: sub_141bf02c0
// 地址: 0x141bf02c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
int64_t* rax_2 = sub_141bb2670(arg1)
void var_a8
sub_140d15830(&var_a8, rax_2[0x65], arg1)
int32_t var_90 = 8
int32_t var_80 = 0x40000000
void* rax_3
int64_t rdx_1
rax_3, rdx_1 = sub_140d2e350(&var_a8)
*(arg1 + 0x1b4) |= 0x80
*(arg1 + 0x1a8) = rax_3

if (rax_3 != 0)
    void* var_b8 = arg1
    int64_t* var_b0_1 = rax_2
    int64_t (* rax_4)(int64_t* arg1, int64_t* arg2) = *(rax_3 + 0x28)
    
    if (rax_4 != 0)
        int64_t (* var_c8)(int64_t* arg1, int64_t* arg2) = rax_4
        sub_141b97130(&var_b8, &var_c8)
        void* rcx_3 = *(rax_3 + 0x28)
        var_c8 = sub_141b97130
        void** var_c0_1 = &var_b8
        sub_141ba8640(rcx_3, &var_c8)
    
    rdx_1.b = 1
    sub_141bb6870(arg1)

void var_70
void* result = sub_1405ae080(&var_70)
__security_check_cookie(rax_1 ^ &var_e8)
return result
