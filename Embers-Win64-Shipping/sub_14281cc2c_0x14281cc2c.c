// 函数: sub_14281cc2c
// 地址: 0x14281cc2c
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_168
int64_t rax_1 = __security_cookie ^ &var_168
sub_14281d0dc(arg1)
int64_t i = 0

if ((*(arg1 + 0x68) - *(arg1 + 0x60)) s>> 3 != 0)
    do
        void* var_148
        sub_140589420(&var_148, 1)
        class std::basic_ostream<unsigned short> var_138
        std::ostream::operator<<(&var_138)
        int64_t* rax_5 = sub_142823288(**arg2)
        var_130
        void* var_48
        sub_14058a7f0(&var_130, &var_48)
        sub_14281cf48(rax_5)
        sub_14281d178(**rax_5, &var_48)
        int64_t var_30
        
        if (var_30 u>= 0x10)
            sub_14058ba50(var_48, var_30 + 1)
        
        sub_14281ceb0(arg1, rax_5, *(*(arg1 + 0x60) + (i << 3)))
        class std::basic_ios<unsigned short> var_b0
        sub_1405893c0(&var_b0)
        std::ios::~ios<char, struct std::char_traits<char> >(&var_b0)
        i += 1
    while (i u< (*(arg1 + 0x68) - *(arg1 + 0x60)) s>> 3)

int64_t result = sub_14281d14c(arg1)
*(arg1 + 0x10) = 4
__security_check_cookie(rax_1 ^ &var_168)
return result
