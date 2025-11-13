// 函数: sub_142ae0e60
// 地址: 0x142ae0e60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_70 = -2
void var_98
int64_t rax_1 = __security_cookie ^ &var_98
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_68
sub_142a47a60(&var_68, 1, &data_14365a6d0, 0xe)
int64_t rbx = 0
void* rsi = nullptr
int64_t i_1 = 0x10
int64_t i

do
    int64_t rax_2 = *(arg1 + 8)
    
    if ((*(rbx + rax_2 + 0x110) & 0xffe0) == 0)
        void* rdi_1 = rsi + rax_2
        sub_142a48100(rdi_1 + 0x108, &var_68)
        sub_142a4a210(rdi_1 + 0x108)
    
    rsi += 0x40
    rbx += 0x40
    i = i_1
    i_1 -= 1
while (i != 1)
sub_142a47ff0(&var_68)
__security_check_cookie(rax_1 ^ &var_98)
return &icu_64::UObject::`vftable'
