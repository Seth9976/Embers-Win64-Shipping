// 函数: sub_142370910
// 地址: 0x142370910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_738
int64_t result = __security_cookie ^ &var_738
int64_t result_1 = result

if (data_143f5b298 != 0)
    result = sub_140e15d20(arg2)
    
    if (result != 0)
        void var_718
        sub_1423dcf50(data_143f5b298, &var_718)
        
        if (sub_141e80b60(&var_718) != 0)
            int64_t* rax_2 = sub_140e15d20(arg2)
            
            if (rax_2 != 0)
                void* rax_3 = sub_14259c320()
                void* rcx_4 = rax_2[2]
                int64_t rdx_1 = sx.q(*(rax_3 + 0x38))
                
                if (rdx_1.d s<= *(rcx_4 + 0x38)
                        && *(*(rcx_4 + 0x30) + (rdx_1 << 3)) == rax_3 + 0x30)
                    void** var_6f8
                    sub_141db66c0(&var_6f8)
                    sub_141dd9140(&var_6f8, rax_2)
                    char var_577
                    char var_577_1 = var_577 | 0x80
                    int32_t var_4f8_1 = *(rax_2 + 0x104)
                    char r8
                    char var_574_1 = r8
                    void* var_710
                    sub_141e73390(var_710, &var_6f8)
                    sub_141db7fa0(&var_6f8)
        
        result = sub_141e71cd0(&var_718)

__security_check_cookie(result_1 ^ &var_738)
return result
