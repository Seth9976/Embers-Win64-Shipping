// 函数: sub_14240b870
// 地址: 0x14240b870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
sub_140d3fd60(0x18)
void** const var_88 = &data_142ea3a00
int64_t var_78 = 0
int64_t var_70 = 0
int16_t var_80 = 0
void var_68
sub_1423fb5d0(&var_68)
void* rax_2 = sub_14240d5b0(arg2, u"copy")

if (rax_2 != 0)
    int32_t rbx_1 = *(rax_2 + 0x5c)
    *(rax_2 + 0x60) &= 0xfffffffd
    *(rax_2 + 0x5c) = 0
    *(rax_2 + 0x30) = 0
    sub_140a54510(u"copy", u"COPY")
    (*(*rax_2 + 0x268))(rax_2, &var_68, arg2, u"copy", &var_88, data_143ddb418, 0x200a00)
    *(rax_2 + 0x5c) = rbx_1

int64_t var_78_1 = 0
int64_t var_70_1 = 0
int32_t var_20 = 0
int64_t var_28

if (var_28 != 0)
    sub_140a74f90(var_28)

void* result = sub_140597460(&var_68)

if (var_78_1 != 0)
    result = sub_140a74f90(var_78_1)

if (var_78 != 0)
    result = sub_140a74f90(var_78)

__security_check_cookie(rax_1 ^ &var_c8)
return result
