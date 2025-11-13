// 函数: sub_142b54380
// 地址: 0x142b54380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = sub_142aa75d0(0xa, sub_1405948d0)

if (arg1 == 0)
    *arg2 = 7
    return rax

struct icu_64::CalendarCache::VTable** rax_1 = j_sub_142a7dd00(0x10)
struct icu_64::CalendarCache::VTable** arg_8 = rax_1
struct icu_64::CalendarCache::VTable** rbx = rax_1

if (rax_1 == 0)
    rbx = nullptr
else
    int32_t* var_18_1 = arg2
    *rbx = &icu_64::CalendarCache::`vftable'
    rax_1 = sub_142a86ee0(sub_142007a80, sub_142a86b90, 0, 0x20)
    rbx[1] = rax_1

*arg1 = rbx

if (*arg2 s> 0)
    if (rbx != 0)
        rax_1 = (*rbx)->vFunc_0(rbx, 1)
    
    *arg1 = nullptr

return rax_1
