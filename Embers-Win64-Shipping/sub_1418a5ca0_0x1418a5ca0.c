// 函数: sub_1418a5ca0
// 地址: 0x1418a5ca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_68
int64_t rax_1 = __security_cookie ^ &var_68
int32_t r8
int32_t var_38 = r8
char var_20 = 1
int128_t var_48 = *arg2
int64_t* rax_2 = j_sub_140a82f30(0x38)

if (rax_2 != 0)
    *rax_2 = 0
    rax_2[6].b = 0xff
    sub_14189e9c0(&rax_2[1], &var_48)
    int64_t* temp0_1 = *(arg1 + 0xe0)
    *(arg1 + 0xe0) = rax_2
    *temp0_1
    *temp0_1 = rax_2

uint64_t rdx_1 = zx.q(var_20)
uint64_t result = zx.q(rdx_1.d)
bool cond:0_1

if (rdx_1.d u<= 5)
    switch (rdx_1)
        case 0
            if (rdx_1.b == 0)
                char var_20_1 = 0xff
                result = sub_14189e230(&var_48)
        case 2
            cond:0_1 = rdx_1.b != 2
        label_1418a5d43:
            
            if (not(cond:0_1))
                int64_t rcx_6 = var_48.q
                char var_20_2 = 0xff
                
                if (rcx_6 != 0)
                    result = sub_140a74f90(rcx_6)
        case 3
            cond:0_1 = rdx_1.b != 3
            goto label_1418a5d43
__security_check_cookie(rax_1 ^ &var_68)
return result
