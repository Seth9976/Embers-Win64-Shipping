// 函数: sub_1418a76b0
// 地址: 0x1418a76b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_78
int64_t rax_1 = __security_cookie ^ &var_78
int64_t var_58
sub_140596d10(&var_58, arg2)
char var_18 = 0xff
int64_t var_40
sub_140596d10(&var_40, &var_58)
int32_t r8
int32_t var_30 = r8
char var_18_1 = 2
int64_t* rax_3 = j_sub_140a82f30(0x38)

if (rax_3 != 0)
    *rax_3 = 0
    rax_3[6].b = 0xff
    sub_14189e9c0(&rax_3[1], &var_40)
    int64_t* temp0_1 = *(arg1 + 0xe0)
    *(arg1 + 0xe0) = rax_3
    *temp0_1
    *temp0_1 = rax_3

uint64_t rdx_2 = zx.q(var_18_1)
char result = rdx_2.b
bool cond:1_1

if (rdx_2.d u<= 5)
    switch (rdx_2)
        case 0
            if (rdx_2.b == 0)
                char var_18_2 = 0xff
                result = sub_14189e230(&var_40)
        case 1
            if (rdx_2.b == 1)
                char var_18_3 = 0xff
        case 2
            cond:1_1 = rdx_2.b != 2
        label_1418a777a:
            
            if (not(cond:1_1))
                int64_t rcx_8 = var_40
                char var_18_4 = 0xff
                
                if (rcx_8 != 0)
                    result = sub_140a74f90(rcx_8)
        case 3
            cond:1_1 = rdx_2.b != 3
            goto label_1418a777a
        case 4
            if (rdx_2.b == 4)
                char var_18_5 = 0xff
        case 5
            result = rdx_2.b
            
            if (rdx_2.b == 4)
                result = -1
            
            char result_1 = result
int64_t rcx_9 = var_58

if (rcx_9 != 0)
    result = sub_140a74f90(rcx_9)

__security_check_cookie(rax_1 ^ &var_78)
return result
