// 函数: sub_140adcdd0
// 地址: 0x140adcdd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
int64_t rax_1 = __security_cookie ^ &var_128
int64_t var_48 = *arg2
int64_t* rax_3 = arg2[1]
int64_t var_a8
__builtin_memset(&var_a8, 0, 0x2c)
int32_t var_7c = 0x80
int32_t var_78 = 0xffffffff
int32_t var_74 = 0
int64_t var_68 = 0
int32_t var_60 = 0
int32_t var_58 = 4

if (rax_3 != 0)
    rax_3[1].d += 1

int32_t var_38 = arg2[2].d
char var_30 = 1
int64_t var_f8 = 0
int32_t var_f0 = 0
sub_1405947f0(&var_f8, 0xa)
int32_t rax_5 = var_f0 + 0xa
var_f0 = rax_5

if (rax_5 s> 0)
    sub_140594770(&var_f8)

UnDecorator::getReferenceType(var_f8, u"PageTitle", 0x14)
sub_140acb5e0(&var_a8, &var_f8, &var_58)
int64_t rcx_4 = var_f8

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

if (var_30 != 0 && rax_3 != 0)
    rax_3[1].d -= 1
    
    if (rax_3[1].d == 1)
        (**rax_3)(rax_3)
        int32_t rax_8 = *(rax_3 + 0xc)
        *(rax_3 + 0xc) -= 1
        
        if (rax_8 == 1)
            (*(*rax_3 + 8))(rax_3, 1)

void var_e8
void var_d0
char* var_b8
int64_t* rax_13 = sub_140ac6680(sub_140aaca20(&var_e8, 
    sub_140a96390(&var_b8, _vfprintf_p_l(&var_d0, New Page: {PageTitle}", MessageLog")), &var_a8))
int16_t* const rax_14

if (rax_13[1].d == 0)
    rax_14 = &data_142d40450
else
    rax_14 = *rax_13

int16_t* const var_100 = rax_14
void* const var_108 = &data_142d40c4c
int64_t* var_e0

if (var_e0 != 0)
    var_e0[1].d -= 1
    
    if (var_e0[1].d == 1)
        (**var_e0)(var_e0)
        int32_t rax_17 = *(var_e0 + 0xc)
        *(var_e0 + 0xc) -= 1
        
        if (rax_17 == 1)
            (*(*var_e0 + 8))(var_e0, 1)

int64_t* var_c8

if (var_c8 != 0)
    var_c8[1].d -= 1
    
    if (var_c8[1].d == 1)
        (**var_c8)(var_c8)
        int32_t rdi_1 = *(var_c8 + 0xc)
        *(var_c8 + 0xc) -= 1
        
        if (rdi_1 == 1)
            (*(*var_c8 + 8))(var_c8, zx.q(rdi_1))

int32_t var_60_1 = 0

if (var_68 != 0)
    sub_140a74f90(var_68)

void* result = sub_140acd610(&var_a8)
__security_check_cookie(rax_1 ^ &var_128)
return result
