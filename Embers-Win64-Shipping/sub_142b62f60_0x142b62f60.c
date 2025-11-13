// 函数: sub_142b62f60
// 地址: 0x142b62f60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

struct icu_64::Replaceable::icu_64::UnicodeString::VTable** arg_8 = arg1
int64_t var_40 = -2
uint32_t r8 = 0
int32_t var_48 = 0
int64_t r15 = sx.q(arg5)

if (r15.d s> 0)
    __builtin_memset(arg4, 0xffffffff, r15 << 2)

if (arg3 != 0)
    r8 = zx.d(*arg2)

sub_142a47bf0(arg1, arg3 - r8 - 1, 0, 0)
int32_t rbx = 1
int32_t var_48_1 = 1

if (arg3 s> 1)
    do
        uint64_t rdi_2 = zx.q(arg2[sx.q(rbx)])
        rbx += 1
        
        if (rdi_2.d u> 0x100)
            sub_142a48d70(arg1, &arg2[sx.q(rbx)], 0, rdi_2.d - 0x100)
            rbx += rdi_2.d - 0x100
        else if (rdi_2.d s< r15.d)
            *(arg4 + (rdi_2 << 2)) = sub_142a4a1f0(arg1)
    while (rbx s< arg3)

return arg1
