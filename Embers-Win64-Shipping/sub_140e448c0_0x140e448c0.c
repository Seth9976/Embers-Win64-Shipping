// 函数: sub_140e448c0
// 地址: 0x140e448c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_158 = -2
void var_1a8
int64_t rax_1 = __security_cookie ^ &var_1a8
int64_t* rax_2 = png_get_error_ptr(arg1)
void var_138
sub_1405eb940(&var_138, arg2)
int32_t rcx_1 = 0
int16_t* var_178 = nullptr
int64_t var_170 = 0
int16_t* var_30

if (var_30 != 0 && *var_30 != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (var_30[rbx_1] != 0)
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(&var_178, rbx_1.d + 1)
        rcx_1 = var_170:4.d
    
    int32_t rax_3 = var_170.d + rbx_1.d + 1
    var_170.d = rax_3
    
    if (rax_3 s> rcx_1)
        sub_140594770(&var_178)
    
    UnDecorator::getReferenceType(var_178, var_30, (rbx_1.d + 1) * 2)

int64_t var_38

if (var_38 != 0)
    sub_140a74f90(var_38)

int16_t* const rdx_4 = &data_142d40450

if (var_170.d != 0)
    rdx_4 = var_178

(*(*rax_2 + 0x70))(rax_2, rdx_4)
int32_t result = sub_140a23cf0(&var_178, u"CRC error", 1, 0, 0xffffffff)

if (result != 0xffffffff)
    void var_168
    void exceptionObject
    sub_140e30960(&exceptionObject, sub_140596d10(&var_168, &var_178))
    _CxxThrowException(&exceptionObject, &data_1439462b8)
    noreturn

int16_t* rcx_8 = var_178

if (rcx_8 != 0)
    result = sub_140a74f90(rcx_8)

__security_check_cookie(rax_1 ^ &var_1a8)
return result
