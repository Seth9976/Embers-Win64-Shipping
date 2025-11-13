// 函数: sub_142a91ba0
// 地址: 0x142a91ba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_268
int64_t rax_1 = __security_cookie ^ &var_268
int64_t var_248 = 0x28
int64_t var_240
__builtin_memset(&var_240, 0, 0x20)

if (*arg2 s<= 0)
    var_240.b = 1
    void var_218
    int128_t* rax_2
    int512_t zmm1_1
    rax_2, zmm1_1 = sub_142a92100(arg1, &var_218, &var_248, arg2)
    void var_138
    sub_142a91c90(&var_138, rax_2, &var_248, arg2, zmm1_1)
    
    if (rax_2 != 0 && *(rax_2 + 0x19) != 0)
        sub_142a91400()
        sub_142a860a0(&data_144015c00)
        int32_t rax_3 = *(rax_2 + 4)
        
        if (rax_3 != 0)
            *(rax_2 + 4) = rax_3 - 1
        
        if (*(rax_2 + 4) u<= 0 && *(rax_2 + 0x18) == 0)
            sub_142a91b50(rax_2)
        
        sub_142a91400()
        sub_142a860d0(&data_144015c00)

int64_t* result
result.b = *arg2 s<= 0
__security_check_cookie(rax_1 ^ &var_268)
return result
