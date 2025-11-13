// 函数: sub_1418a5d90
// 地址: 0x1418a5d90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_88
uint64_t result = __security_cookie ^ &var_88
uint64_t result_1 = result
int128_t* i = *arg2

for (void* rsi_2 = &i[sx.q(arg2[1].d)]; i != rsi_2; i = &i[1])
    int32_t r8
    int32_t var_58_1 = r8
    char var_40_1 = 1
    int128_t var_68 = *i
    int64_t* rax_1 = j_sub_140a82f30(0x38)
    
    if (rax_1 != 0)
        *rax_1 = 0
        rax_1[6].b = 0xff
        sub_14189e9c0(&rax_1[1], &var_68)
        int64_t* temp0_1 = *(arg1 + 0xe0)
        *(arg1 + 0xe0) = rax_1
        *temp0_1
        *temp0_1 = rax_1
    
    uint64_t rdx_1 = zx.q(var_40_1)
    result = zx.q(rdx_1.d)
    bool cond:0_1
    
    if (rdx_1.d u<= 5)
        switch (rdx_1)
            case 0
                if (rdx_1.b == 0)
                    char var_40_2 = 0xff
                    result = sub_14189e230(&var_68)
            case 2
                cond:0_1 = rdx_1.b != 2
            label_1418a5e5c:
                
                if (not(cond:0_1))
                    int64_t rcx_6 = var_68.q
                    char var_40_3 = 0xff
                    
                    if (rcx_6 != 0)
                        result = sub_140a74f90(rcx_6)
            case 3
                cond:0_1 = rdx_1.b != 3
                goto label_1418a5e5c

__security_check_cookie(result_1 ^ &var_88)
return result
