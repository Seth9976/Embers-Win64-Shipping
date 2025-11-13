// 函数: sub_142ac62f0
// 地址: 0x142ac62f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28 = -2
int32_t* rdi = arg5

if (*rdi s> 0)
    return 

void* rax = j_sub_142a7dd00(0x50)
int32_t* rbx_1 = rax
arg5 = rax

if (rax == 0)
    rbx_1 = nullptr
else
    *(rax + 8) = &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
    *(rax + 0x10) = 2
    *rbx_1 = arg2
    rbx_1[0x12] = arg3
    
    if (arg4 == 0)
        sub_142a48aa0(rax + 8, nullptr, 0)
        rbx_1[0x13].b = 0
    else
        sub_142a48aa0(rax + 8, arg4, 0)
        rbx_1[0x13].b = 1

if (rbx_1 == 0)
    *rdi = 7
    return 

sub_142ae7110(sub_142ac6910(arg1, rdi), rbx_1, rdi)

if (*rdi s> 0)
    sub_142a47ff0(&rbx_1[2])
    sub_142a47920(rbx_1)
