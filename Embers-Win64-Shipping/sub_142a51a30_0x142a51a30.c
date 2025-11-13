// 函数: sub_142a51a30
// 地址: 0x142a51a30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_100 = -2
void var_128
int64_t rax_1 = __security_cookie ^ &var_128
int32_t var_108 = 0
int32_t rdi = 0
data_1440155b4 = 0
char** rax_2 = sub_142a64160(nullptr, "res_index", &var_108)
char** var_f8 = rax_2
char* var_e8
sub_142a5f830(&var_e8)
sub_142a625a0(rax_2, "InstalledLocales", &var_e8, &var_108)

if (var_108 s<= 0)
    int32_t rax_3 = sub_142a63b10(&var_e8)
    int64_t rax_4 = sub_142a7dd00(sx.q(rax_3 + 1) << 3)
    data_1440155b8 = rax_4
    
    if (rax_4 != 0)
        sub_142a641e0(&var_e8)
        
        if (sub_142a63fa0(&var_e8) != 0)
            char i
            
            do
                sub_142a63970(&var_e8, nullptr, data_1440155b8 + (sx.q(rdi) << 3), &var_108)
                rdi += 1
                i = sub_142a63fa0(&var_e8)
            while (i != 0)
        
        *(data_1440155b8 + (sx.q(rdi) << 3)) = 0
        data_1440155b4 = rax_3
        sub_142a7db20(8, sub_142a51d30)

int64_t result = sub_142a5f860(&var_e8)

if (rax_2 != 0)
    result = sub_142a5f860(rax_2)

__security_check_cookie(rax_1 ^ &var_128)
return result
