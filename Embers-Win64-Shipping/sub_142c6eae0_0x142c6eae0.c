// 函数: sub_142c6eae0
// 地址: 0x142c6eae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
void* r14 = *arg2
int32_t* rax_2
int512_t zmm2
rax_2, zmm2 = sub_142c6ec70(arg2, *(r14 + 0xa48), arg3)
int32_t* rdi = rax_2
int64_t result

if (rax_2 != 0)
label_142c6ec0d:
    sub_142c69f60(&rdi[4], *(rdi + 0x18), arg2, &arg2[1])
    arg2[0xf4] = rdi
    *(rdi + 8) += 1
    *(arg2 + 0x64) = *(arg1 + 0x38)
    *(arg1 + 0x38) += 1
    *(arg1 + 0x30) += 1
    result = 0
else
    int32_t* rax_3 = data_143ccb898(zx.q((&rax_2[0xc]).d))
    rdi = rax_3
    
    if (rax_3 == 0)
        result = 0x1b
    else
        *(rdi + 8) = 0
        *rdi = 0
        sub_142c69f40(&rdi[4], sub_142c6eee0)
        int64_t rax_4
        
        if (*(arg2 + 0x3f7) != 0)
            rax_4 = arg2[0x23]
        else if (*(arg2 + 0x3f6) != 0)
            rax_4 = arg2[0x2a]
        else if (*(arg2 + 0x3f3) == 0)
            rax_4 = arg2[0x1a]
        else
            rax_4 = arg2[0x1f]
        
        int64_t var_b8_1 = rax_4
        char var_a8[0x80]
        sub_142c564b0(&var_a8, 0x80, "%ld%s", zx.q(arg2[0x2f].d), zmm2)
        int64_t r8_1 = -1
        
        do
            r8_1 += 1
        while (var_a8[r8_1] != 0)
        
        if (sub_142c66d00(*(r14 + 0xa48), &var_a8, r8_1, rdi) != 0)
            goto label_142c6ec0d
        
        sub_142c69e80(&rdi[4], 0)
        data_143ccb8a0(rdi)
        result = 0x1b

__security_check_cookie(rax_1 ^ &var_d8)
return result
