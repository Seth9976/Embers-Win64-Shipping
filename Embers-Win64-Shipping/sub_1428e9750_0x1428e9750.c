// 函数: sub_1428e9750
// 地址: 0x1428e9750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x60)
void var_68
int64_t rax_1 = __security_cookie ^ &var_68
char* rax_2
int32_t r8
rax_2, r8 = strchr(arg2, 0x3a)
int64_t result

if (rax_2 == 0)
    if (sub_1428ea430(arg1, arg2, r8) != 0)
        result = 4
    else
        result = 0
else
    int32_t var_24_1 = 0xffffffff
    int32_t var_28_1 = 0
    int32_t var_20_1 = 0
    int128_t var_38
    
    if (sub_1428a40b0(arg2, 0x3a, 0, sub_1428ea4d0, &var_38) == 0)
        result = 0
    else
        int64_t rax_4 = sx.q(var_24_1)
        
        if (rax_4.d != 0xffffffff)
            if (var_28_1 == 0x10 || var_20_1 s> 3)
                result = 0
            else
                bool cond:1_1
                
                if (var_20_1 != 3)
                    if (var_20_1 != 2)
                        if (rax_4.d != 0 && rax_4.d != var_28_1)
                            goto label_1428e9837
                        
                        result = 0
                    else
                        int32_t temp0_1 = rax_4.d
                        cond:1_1 = temp0_1 s< 0
                        
                        if (temp0_1 == 0)
                            goto label_1428e9839
                        
                        if (rax_4.d == var_28_1)
                            goto label_1428e9837
                        
                        result = 0
                else if (var_28_1 s<= 0)
                label_1428e9837:
                    cond:1_1 = rax_4.d s< 0
                label_1428e9839:
                    
                    if (cond:1_1)
                        *arg1 = var_38
                        result = 0x10
                    else
                        memcpy(arg1, &var_38, rax_4.d)
                        memset(rax_4 + arg1, 0, sx.q(0x10 - var_28_1))
                        int64_t r9_1 = sx.q(var_28_1)
                        int64_t rdx_1 = sx.q(var_24_1)
                        
                        if (r9_1.d == rdx_1.d)
                            result = 0x10
                        else
                            memcpy(rdx_1 - r9_1 + 0x10 + arg1, &var_38 + rdx_1, r9_1.d - rdx_1.d)
                            result = 0x10
                else
                    result = 0
        else if (var_28_1 != 0x10)
            result = 0
        else
            *arg1 = var_38
            result = 0x10

__security_check_cookie(rax_1 ^ &var_68)
return result
