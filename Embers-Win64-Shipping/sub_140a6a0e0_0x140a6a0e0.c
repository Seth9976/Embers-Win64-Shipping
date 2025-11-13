// 函数: sub_140a6a0e0
// 地址: 0x140a6a0e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
int128_t zmm0 = sub_140a8f160(*(sub_140a752e0() + 0x20), arg2)
int64_t* var_98
sub_140a78c30(*arg5, &var_98, arg3, arg4)
int64_t* rcx_2 = var_98
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_88 =
    &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
int16_t var_80 = 2
sub_142a6d750(rcx_2, zmm0, &var_88)
*arg1 = 0
arg1[1] = 0
int32_t rbx_2
int32_t var_7c

if (var_80 s< 0)
    rbx_2 = var_7c
else
    rbx_2 = sx.d(var_80) s>> 5

if (rbx_2 s> 0)
    if (rbx_2 + 1 s> 0)
        arg1[1].d = rbx_2 + 1
        sub_140594770(arg1)
    else if (rbx_2 + 1 s< 0 && rbx_2 != 0xffffffff)
        arg1[1].d = rbx_2 + 1
        sub_1405a50a0(arg1)
    
    char rax_5 = var_80.b
    void* rdx_3
    
    if ((rax_5 & 0x11) == 0)
        void var_7e
        rdx_3 = &var_7e
        void* var_70
        
        if ((rax_5 & 2) == 0)
            rdx_3 = var_70
    else
        rdx_3 = nullptr
    
    int64_t rbx_3 = sx.q(rbx_2) * 2
    memcpy(*arg1, rdx_3, rbx_3.d)
    *(rbx_3 + *arg1) = 0

sub_142a47ff0(&var_88)
int64_t* var_90

if (var_90 != 0)
    var_90[1].d -= 1
    
    if (var_90[1].d == 1)
        int64_t rdx_4 = *var_90
        (*rdx_4)(var_90, rdx_4)
        int32_t rdi_1 = *(var_90 + 0xc)
        *(var_90 + 0xc) -= 1
        
        if (rdi_1 == 1)
            int64_t r8_3 = *var_90
            (*(r8_3 + 8))(var_90, zx.q(rdi_1), r8_3)

__security_check_cookie(rax_1 ^ &var_b8)
return arg1
