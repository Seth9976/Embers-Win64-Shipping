// 函数: sub_142941b50
// 地址: 0x142941b50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x340)
void var_368
int64_t rax_1 = __security_cookie ^ &var_368
void var_2c8
int32_t result = sub_14293ebb0(&var_2c8, arg2)

if (result == 0xffffffff)
    void var_1c8
    result = sub_14293ebb0(&var_1c8, arg1)
    
    if (result == 0xffffffff)
        int64_t* rax_2 = sub_142891ee0()
        
        if (rax_2 == 0)
            sub_142891ea0(rax_2)
            result = 0
        else
            uint64_t var_348_1 = zx.q(arg7)
            
            if (sub_142941d30(rax_2, arg5, 0, arg6) == 0)
                sub_142891ea0(rax_2)
                result = 0
            else if (sub_142891c10(rax_2, arg1, 0x39) == 0)
                sub_142891ea0(rax_2)
                result = 0
            else if (sub_142891c10(rax_2, arg2, 0x39) == 0)
                sub_142891ea0(rax_2)
                result = 0
            else
                void var_c8
                
                if (sub_142891c10(rax_2, arg3, arg4) == 0)
                    sub_142891ea0(rax_2)
                    result = 0
                else if (sub_142891820(rax_2, &var_c8, 0x72) == 0)
                    sub_142891ea0(rax_2)
                    result = 0
                else
                    sub_142891ea0(rax_2)
                    void var_338
                    sub_14296e560(&var_338, &var_c8, 0x72)
                    sub_1428b8960(&var_c8, 0x72)
                    sub_14296e9b0(&var_338, &data_14354b1a8, &var_338)
                    void var_300
                    sub_14296e560(&var_300, arg1 + 0x39, 0x39)
                    sub_14293e830(&var_2c8, &var_300, &var_2c8, &var_338)
                    result = sub_14293ee80(&var_2c8, &var_1c8)

__security_check_cookie(rax_1 ^ &var_368)
return result
