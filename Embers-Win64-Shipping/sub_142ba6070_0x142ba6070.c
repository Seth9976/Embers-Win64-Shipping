// 函数: sub_142ba6070
// 地址: 0x142ba6070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_88
int64_t rax_1 = __security_cookie ^ &var_88
void* r13 = *(arg2 + 0x78)
uint32_t r12_1 = zx.d(*(arg2 + 0x68)) << 0x10
void* rdi = *(arg1 + 8)
void* r14 = *(*(arg2 + 0x80) + 0x38)
int32_t var_68 = 0
int32_t var_64 = 0
int16_t rbp = *(rdi + 0x2c0)
int16_t rsi = *(r14 + 0xc)
uint32_t rax_4 = sub_142b91790(0x3e80000, r12_1)
bool cond:0 = *(arg2 + 0x68) != 0
int128_t var_50 = data_143683a30
int64_t result

if (cond:0)
    int64_t r9_1 = *((&data_14367f7a8)[sx.q(*(*arg3 + 4))] + 0x28)
    
    if (r9_1 == 0)
        result = 7
    else
        r9_1(arg3, &var_64, &var_68)
        int32_t r8_1 = var_68
        void* rbx_1
        
        if (rsi != rbp || (r8_1 s> 0 && r8_1 != *(rdi + 0x2c4)))
            rbx_1 = arg1
            uint32_t rax_11 = sub_142b91790(
                sub_142b93e80(sub_142ba5e60(rbx_1, arg2, r8_1) << 0x10, *(r14 + 0x10)), rax_4)
            *(rdi + 0x2c4) = var_68
            *(rdi + 0x2c0) = *(r14 + 0xc)
            *(rdi + 0x2cc) = sx.d(((rax_11 + 0x8000) u>> 0x10).w)
        else
            rbx_1 = arg1
        
        int32_t r8_2 = var_64
        
        if (rsi != rbp)
        label_142ba61cc:
            int32_t rbx_3 = sub_142ba5e60(rbx_1, arg2, r8_2) << 0x10
            uint32_t rax_19 = sub_142b91790(sub_142b93e80(rbx_3, *(r14 + 0x14)), rax_4)
            *(rdi + 0x2c8) = var_64
            *(rdi + 0x2c0) = *(r14 + 0xc)
            *(rdi + 0x2d0) = sx.d(((rax_19 + 0x8000) u>> 0x10).w)
            *(rdi + 0x2d4) = sub_142b91790(r12_1 - rbx_3 - 0x80000, r12_1)
        else if (r8_2 s> 0 && r8_2 != *(rdi + 0x2c8))
            goto label_142ba61cc
        
        sub_142b947a0(r13 + 0x98, *(rdi + 0x2cc), *(rdi + 0x2d0))
        var_50:0xc.d = *(rdi + 0x2d4)
        sub_142b95190(r13 + 0x98, &var_50)
        result = 0
else
    result = 0xb9

__security_check_cookie(rax_1 ^ &var_88)
return result
