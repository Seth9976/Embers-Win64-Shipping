// 函数: sub_142aa1030
// 地址: 0x142aa1030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = -2
int64_t* rdi = *arg1

if (sub_1408e52d0(rdi) s<= 1)
    return rdi

struct icu_64::SharedObject::icu_64::CollationSettings::VTable** rax_2 = j_sub_142a7dd00(0x358)
struct icu_64::SharedObject::icu_64::CollationSettings::VTable** arg_8 = rax_2
struct icu_64::SharedObject::icu_64::CollationSettings::VTable** rbx_1

if (rax_2 == 0)
    rbx_1 = nullptr
else
    rbx_1 = sub_142b26e70(rax_2, rdi)

if (rbx_1 == 0)
    return nullptr

sub_142aa6d70(rdi)
*arg1 = rbx_1
sub_142aa6d40(rbx_1)
return rbx_1
