// 函数: sub_1407516c0
// 地址: 0x1407516c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_388
int64_t rax_1 = __security_cookie ^ &var_388
void* rax_2
int64_t rax_3
void* rdx

if (arg3 != 0)
    rax_2 = sub_141b3a6e0()
    rdx = *(arg3 + 0x10)
    rax_3 = sx.q(*(rax_2 + 0x38))

if (arg3 == 0 || rax_3.d s> *(rdx + 0x38) || *(*(rdx + 0x30) + (rax_3 << 3)) != rax_2 + 0x30)
    arg2[0x10].b &= 0xfe
    arg2[0x10].b |= 2
else
    void var_368
    int64_t* rax_5 = sub_140745220(&var_368, arg1 + 0x68)
    void var_340
    int64_t* rax_6 = sub_140745220(&var_340, rax_5)
    char var_310_1 = 0
    void** const var_318_1 = &data_142d9aae0
    int32_t var_304_1 = 0xffffffff
    int32_t var_300_1 = 0
    char var_308_1 = 0
    void var_2f8
    sub_140745220(&var_2f8, rax_6)
    int64_t rcx_4 = rax_6[3]
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)
    
    void** const var_318_2 = &data_142d9ac08
    void** var_2d0
    sub_1407431a0(&var_2d0, arg3 + 0xe0)
    void** var_230
    sub_1407431a0(&var_230, arg3 + 0x180)
    void** var_190
    sub_1407431a0(&var_190, arg3 + 0x220)
    void** var_f0
    sub_1407431a0(&var_f0, arg3 + 0x2c0)
    int64_t rcx_9 = rax_5[3]
    
    if (rcx_9 != 0)
        sub_140a74f90(rcx_9)
    
    arg2[0x10].b &= 0xfc
    int64_t* rax_7 = sub_140a82f30(0x2c8, 8)
    arg2[0x10].b |= 1
    int64_t* rbx_2 = arg2
    bool cond:0_1 = (arg2[0x10].b & 2) != 0
    *arg2 = rax_7
    
    if (not(cond:0_1))
        rbx_2 = rax_7
    
    rbx_2[1].b = var_310_1
    rbx_2[2].b = var_308_1
    *(rbx_2 + 0x14) = var_304_1.q
    *rbx_2 = &data_142d9aae0
    sub_140745220(&rbx_2[4], &var_2f8)
    *rbx_2 = &data_142d9ac08
    sub_1405ac0c0(&rbx_2[9], &var_2d0)
    sub_1405ac0c0(&rbx_2[0x1d], &var_230)
    sub_1405ac0c0(&rbx_2[0x31], &var_190)
    sub_1405ac0c0(&rbx_2[0x45], &var_f0)
    sub_1405aec80(&var_f0)
    sub_1405aec80(&var_190)
    sub_1405aec80(&var_230)
    sub_1405aec80(&var_2d0)
    int64_t var_2e0
    
    if (var_2e0 != 0)
        sub_140a74f90(var_2e0)

__security_check_cookie(rax_1 ^ &var_388)
return arg2
