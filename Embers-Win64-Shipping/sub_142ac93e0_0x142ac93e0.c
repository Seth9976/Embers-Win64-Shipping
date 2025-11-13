// 函数: sub_142ac93e0
// 地址: 0x142ac93e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = -2
sub_142aa75d0(0xd, sub_142acc550)
struct icu_64::TextTrieMap::VTable** result = j_sub_142a7dd00(0x38)
struct icu_64::TextTrieMap::VTable** result_1 = result

if (result != 0)
    result = sub_142b4cff0(result, 1, 0)

data_144016528 = result

if (result == 0)
    *arg1 = 7
    return result

struct icu_64::StringEnumeration::icu_64::TZEnumeration::VTable** rax = sub_142a64cb0()
struct icu_64::StringEnumeration::icu_64::TZEnumeration::VTable* r8_1 = *rax

for (void* i = r8_1->__offset(0x30).q(rax, arg1, r8_1); i != 0; 
        i = (*rax)->__offset(0x30).q(rax, arg1))
    void* rax_1 = j_sub_142a65150(i)
    
    if (rax_1 != 0)
        sub_142b50890(data_144016528, rax_1, rax_1, arg1)

return (*rax)->__offset(0x0).q(rax, 1)
