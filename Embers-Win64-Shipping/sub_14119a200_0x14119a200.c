// 函数: sub_14119a200
// 地址: 0x14119a200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2d8
int64_t rax_1 = __security_cookie ^ &var_2d8
void* i = *arg3
void* rdi = sx.q(arg3[1].d) * 0x58
int64_t var_2b8 = 0
void* rdi_1 = rdi + i
int64_t var_2b0 = 0

for (; i != rdi_1; i += 0x58)
    void var_2a8
    sub_1419928d0(&var_2a8, arg1)
    sub_141180420(&var_2a8, arg2, i, &var_2b8)
    sub_14199ef00(&var_2a8)
    int32_t var_80_1 = 0
    int32_t var_7c
    void var_88
    
    if (var_7c != 0)
        sub_1410b3aa0(&var_88, 0)
    int32_t var_f8_1 = 0
    int32_t var_f4
    void var_100
    
    if (var_f4 != 0)
        sub_1410b3aa0(&var_100, 0)
    int32_t var_150_1 = 0
    int32_t var_190_1 = 0
    int32_t var_18c
    void var_198
    
    if (var_18c != 0)
        sub_1410b3bb0(&var_198, 0)
    int32_t var_168_1 = 0xffffffff
    int32_t var_164_1 = 0
    void var_188
    sub_141095ed0(&var_188, 0)
    int32_t var_1a0_1 = 0
    int32_t var_1e0_1 = 0
    int32_t var_1dc
    void var_1e8
    
    if (var_1dc != 0)
        sub_1410b3bb0(&var_1e8, 0)
    int32_t var_1b8_1 = 0xffffffff
    int32_t var_1b4_1 = 0
    void var_1d8
    sub_141095ed0(&var_1d8, 0)
    int32_t var_1f0_1 = 0
    void var_238
    sub_141096480(&var_238, 0)
    int32_t var_240_1 = 0
    void var_288
    sub_14108c840(&var_288)

int64_t result = sub_1411a4610(arg1, &var_2b8)
int64_t rcx_12 = var_2b8

if (rcx_12 != 0)
    result = sub_140a74f90(rcx_12)

__security_check_cookie(rax_1 ^ &var_2d8)
return result
