// 函数: sub_1418a7160
// 地址: 0x1418a7160
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
uint64_t result = __security_cookie ^ &var_a8
uint64_t result_1 = result
int64_t* i = *arg2

for (void* rsi_2 = &i[sx.q(arg2[1].d) * 2]; i != rsi_2; i = &i[2])
    int64_t var_88
    sub_140596d10(&var_88, i)
    char var_48_1 = 0xff
    int64_t var_70
    sub_140596d10(&var_70, &var_88)
    int32_t r8
    int32_t var_60_1 = r8
    char var_48_2 = 2
    int64_t* rax_2 = j_sub_140a82f30(0x38)
    
    if (rax_2 != 0)
        *rax_2 = 0
        rax_2[6].b = 0xff
        sub_14189e9c0(&rax_2[1], &var_70)
        int64_t* temp0_1 = *(arg1 + 0xe0)
        *(arg1 + 0xe0) = rax_2
        *temp0_1
        *temp0_1 = rax_2
    
    uint64_t rdx_3 = zx.q(var_48_2)
    result = zx.q(rdx_3.d)
    bool cond:1_1
    
    if (rdx_3.d u<= 5)
        switch (rdx_3)
            case 0
                if (rdx_3.b == 0)
                    char var_48_3 = 0xff
                    result = sub_14189e230(&var_70)
            case 1
                if (rdx_3.b == 1)
                    char var_48_4 = 0xff
            case 2
                cond:1_1 = rdx_3.b != 2
            label_1418a7264:
                
                if (not(cond:1_1))
                    int64_t rcx_8 = var_70
                    char var_48_5 = 0xff
                    
                    if (rcx_8 != 0)
                        result = sub_140a74f90(rcx_8)
            case 3
                cond:1_1 = rdx_3.b != 3
                goto label_1418a7264
            case 4
                if (rdx_3.b == 4)
                    char var_48_6 = 0xff
            case 5
                result = zx.q(rdx_3.b)
                
                if (rdx_3.b == 4)
                    result = 0xff
                
                char var_48_7 = result.b
    int64_t rcx_9 = var_88
    
    if (rcx_9 != 0)
        result = sub_140a74f90(rcx_9)

__security_check_cookie(result_1 ^ &var_a8)
return result
