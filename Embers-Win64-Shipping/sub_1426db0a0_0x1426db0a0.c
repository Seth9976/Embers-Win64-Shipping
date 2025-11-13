// 函数: sub_1426db0a0
// 地址: 0x1426db0a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
int64_t rax_1 = __security_cookie ^ &var_128
int32_t var_7c = 0x80
int64_t var_a8
__builtin_memset(&var_a8, 0, 0x2c)
int32_t var_78 = 0xffffffff
int32_t var_74 = 0
int64_t var_68 = 0
int32_t var_60 = 0
int64_t var_f8
void var_e8
int64_t* rax_3 = sub_140aae2f0(&var_e8, sub_1426ed850(arg1 + 0x90, &var_f8, arg3))
int32_t var_58 = 4
int64_t var_48 = *rax_3
int64_t* rax_5 = rax_3[1]

if (rax_5 != 0)
    rax_5[1].d += 1

int32_t var_38 = rax_3[2].d
char var_30 = 1
int64_t var_108 = 0
int32_t var_100 = 0
sub_1405947f0(&var_108, 7)
int32_t rax_7 = var_100 + 7
var_100 = rax_7

if (rax_7 s> 0)
    sub_140594770(&var_108)

UnDecorator::getReferenceType(var_108, u"Radius", 0xe)
sub_140acb5e0(&var_a8, &var_108, &var_58)
int64_t rcx_7 = var_108

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

if (var_30 != 0 && rax_5 != 0)
    rax_5[1].d -= 1
    
    if (rax_5[1].d == 1)
        (**rax_5)(rax_5)
        int32_t rax_10 = *(rax_5 + 0xc)
        *(rax_5 + 0xc) -= 1
        
        if (rax_10 == 1)
            (*(*rax_5 + 8))(rax_5, 1)

int64_t* var_e0

if (var_e0 != 0)
    var_e0[1].d -= 1
    
    if (var_e0[1].d == 1)
        (**var_e0)(var_e0)
        int32_t rax_14 = *(var_e0 + 0xc)
        *(var_e0 + 0xc) -= 1
        
        if (rax_14 == 1)
            (*(*var_e0 + 8))(var_e0, 1)

int64_t rcx_13 = var_f8

if (rcx_13 != 0)
    sub_140a74f90(rcx_13)

void var_d0
char* var_b8
sub_140aaca20(arg2, 
    sub_140a96390(&var_b8, _vfprintf_p_l(&var_d0, radius: {Radius}", EnvQueryGenerator")), &var_a8)
int64_t* var_c8

if (var_c8 != 0)
    var_c8[1].d -= 1
    
    if (var_c8[1].d == 1)
        (**var_c8)(var_c8)
        int32_t rdi_1 = *(var_c8 + 0xc)
        *(var_c8 + 0xc) -= 1
        
        if (rdi_1 == 1)
            int64_t r8_2 = *var_c8
            (*(r8_2 + 8))(var_c8, zx.q(rdi_1), r8_2)

int32_t var_60_1 = 0

if (var_68 != 0)
    sub_140a74f90(var_68)

sub_140acd610(&var_a8)
__security_check_cookie(rax_1 ^ &var_128)
return arg2
