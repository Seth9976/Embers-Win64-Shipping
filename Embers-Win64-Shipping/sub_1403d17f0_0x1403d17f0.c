// 函数: sub_1403d17f0
// 地址: 0x1403d17f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_58
int64_t rax_1 = __security_cookie ^ &var_58
int32_t var_38
__builtin_strncpy(&var_38, "oFFs", 5)

if (arg4 s>= 2)
    png_warning(arg1, "Unrecognized unit type for oFFs chunk")

uint8_t var_31 = (arg2 u>> 0x18).b
uint8_t var_30 = (arg2 u>> 0x10).b
char var_2f = arg2:1.b
char var_2e = arg2.b
uint8_t var_2d = (arg3 u>> 0x18).b
uint8_t var_2c = (arg3 u>> 0x10).b
char var_2b = arg3:1.b
char var_2a = arg3.b
char var_29 = arg4.b
int64_t result = png_write_chunk(arg1, &var_38, &var_31, 9)
__security_check_cookie(rax_1 ^ &var_58)
return result
