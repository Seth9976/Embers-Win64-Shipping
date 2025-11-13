// 函数: sub_142ac8cb0
// 地址: 0x142ac8cb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_a8 = -2
void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
int32_t var_b8
char rax_3
void* rax_4

if (*(arg1 + 0x230) != 0)
    var_b8 = 0
    int512_t zmm1
    zmm1.o = zx.o(arg5)
    rax_3 = (*(*arg2 + 0x48))(arg2, zmm1, &var_b8)
    rax_4 = sub_142acf980(arg2)

if (*(arg1 + 0x230) == 0 || var_b8 s> 0 || rax_4 == 0)
    sub_142a4ab40(arg6)
else
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_98
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_5 =
        sub_142a47a60(&var_98, 1, rax_4, 0xffffffff)
    int512_t zmm3
    
    if (rax_3 == 0)
        int64_t* rcx_4 = *(arg1 + 0x230)
        zmm3.o = zx.o(arg5)
        (*(*rcx_4 + 0x58))(rcx_4, rax_5, zx.q(arg3), zmm3, arg6)
    else
        int64_t* rcx_3 = *(arg1 + 0x230)
        zmm3.o = zx.o(arg5)
        (*(*rcx_3 + 0x58))(rcx_3, rax_5, zx.q(arg4), zmm3, arg6)
    sub_142a47ff0(&var_98)
    
    if (arg7 != 0 && (*(arg6 + 8) & 0xffe0) != 0)
        int32_t rdi_1
        rdi_1.b = rax_3 != 0
        *arg7 = rdi_1 + 1

__security_check_cookie(rax_1 ^ &var_e8)
return arg6
