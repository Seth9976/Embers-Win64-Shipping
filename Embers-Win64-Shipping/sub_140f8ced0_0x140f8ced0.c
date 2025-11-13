// 函数: sub_140f8ced0
// 地址: 0x140f8ced0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_288
int64_t rax_1 = __security_cookie ^ &var_288
arg1[0x55] = arg2

if (arg2 == 0)
    void var_268
    sub_140f64430(&var_268)
    int64_t var_c8
    arg1[0x55] = var_c8
    void var_48
    sub_140745b20(&var_48)
    void var_68
    sub_140745b20(&var_68)
    int64_t* var_78
    
    if (var_78 != 0)
        var_78[1].d -= 1
        
        if (var_78[1].d == 1)
            (**var_78)(var_78)
            int32_t temp1_1 = *(var_78 + 0xc)
            *(var_78 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*var_78 + 8))(var_78, 1)
    
    void var_a8
    sub_140745b20(&var_a8)
    char var_b4_1 = 0
    sub_140ddea30(&var_268)

arg2.b = 1
int64_t result = sub_140e19ef0(arg1, arg2.b)
__security_check_cookie(rax_1 ^ &var_288)
return result
