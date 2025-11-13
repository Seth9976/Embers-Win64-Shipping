// 函数: sub_142ac8670
// 地址: 0x142ac8670
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_98 = -2
void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
int128_t zmm6 = arg4.o
int32_t var_a8[0x4]
var_a8[0] = 0
sub_142ac8e00()
sub_142a860a0(&data_144016550)

if (*(arg1 + 0x238) == 0)
    struct icu_64::TimeZoneGenericNames::VTable** rax_2
    rax_2, zmm6 = sub_142b519d0(arg1 + 0x148, &var_a8)
    *(arg1 + 0x238) = rax_2

sub_142ac8e00()
sub_142a860d0(&data_144016550)
void* rdi_1 = *(arg1 + 0x238)
void* result

if (var_a8[0] s> 0)
    sub_142a4ab40(arg5)
    result = arg5
else if (arg3 != 1)
    void* var_b8_1 = arg5
    arg4.o = zmm6
    result = sub_142b52b90(rdi_1, arg2, zx.q(arg3), arg4)
else
    void* rax_3 = sub_142acf980(arg2)
    
    if (rax_3 == 0)
        sub_142a4ab40(arg5)
        result = arg5
    else
        struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_88
        void* result_1 =
            sub_142b52f20(rdi_1, sub_142a47a60(&var_88, arg3.b, rax_3, 0xffffffff), arg5)
        sub_142a47ff0(&var_88)
        result = result_1

__security_check_cookie(rax_1 ^ &var_d8)
return result
