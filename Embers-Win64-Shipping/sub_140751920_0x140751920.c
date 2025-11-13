// 函数: sub_140751920
// 地址: 0x140751920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_198
int64_t rax_1 = __security_cookie ^ &var_198
void* rax_2
int64_t rax_3
void* rdx

if (arg3 != 0)
    rax_2 = sub_141b3a0b0()
    rdx = *(arg3 + 0x10)
    rax_3 = sx.q(*(rax_2 + 0x38))

if (arg3 == 0 || rax_3.d s> *(rdx + 0x38) || *(*(rdx + 0x30) + (rax_3 << 3)) != rax_2 + 0x30)
    arg2[0x10].b &= 0xfe
    arg2[0x10].b |= 2
else
    void var_178
    int64_t* rax_5 = sub_140745220(&var_178, arg1 + 0x68)
    void var_150
    int64_t* rax_6 = sub_140745220(&var_150, rax_5)
    char var_120_1 = 0
    void** const var_128_1 = &data_142d9aae0
    int32_t var_114_1 = 0xffffffff
    int32_t var_110_1 = 0
    char var_118_1 = 0
    void var_108
    sub_140745220(&var_108, rax_6)
    int64_t rcx_4 = rax_6[3]
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)
    
    void** const var_128_2 = &data_142d9ac60
    void** var_e0
    sub_1407431a0(&var_e0, arg3 + 0xe0)
    int64_t rcx_6 = rax_5[3]
    
    if (rcx_6 != 0)
        sub_140a74f90(rcx_6)
    
    arg2[0x10].b &= 0xfc
    int64_t* rax_7 = sub_140a82f30(0xe8, 8)
    arg2[0x10].b |= 1
    int64_t* rbx_2 = arg2
    bool cond:0_1 = (arg2[0x10].b & 2) != 0
    *arg2 = rax_7
    
    if (not(cond:0_1))
        rbx_2 = rax_7
    
    rbx_2[1].b = var_120_1
    rbx_2[2].b = var_118_1
    *(rbx_2 + 0x14) = var_114_1.q
    *rbx_2 = &data_142d9aae0
    sub_140745220(&rbx_2[4], &var_108)
    *rbx_2 = &data_142d9ac60
    sub_1405ac0c0(&rbx_2[9], &var_e0)
    sub_1405aec80(&var_e0)
    int64_t var_f0
    
    if (var_f0 != 0)
        sub_140a74f90(var_f0)

__security_check_cookie(rax_1 ^ &var_198)
return arg2
