// 函数: sub_140b2b870
// 地址: 0x140b2b870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
int64_t i = 0
wchar16 const (** rdi)[0x3] = &data_1439a9018

do
    void var_98
    sub_140b24c70(&arg2[2], &var_98, *rdi, nullptr)
    char var_80
    
    if (var_80 != 0)
        sub_140b3e200()
        void** const var_68_1 = &data_142e785e8
        int128_t var_78 = data_143de7bf8.o
        sub_140b0e240(arg2, &var_98, &var_78)
        sub_140b0bbf0(&var_78)
    
    rdi = &rdi[1]
    i += 1
while (i != 3)

*(arg1 + 0x18) = 0
__security_check_cookie(rax_1 ^ &var_b8)
return arg1
