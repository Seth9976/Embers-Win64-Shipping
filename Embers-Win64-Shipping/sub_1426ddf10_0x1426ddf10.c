// 函数: sub_1426ddf10
// 地址: 0x1426ddf10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1c8
int64_t rax_1 = __security_cookie ^ &var_1c8
int32_t var_ec = 0x80
int64_t var_118
__builtin_memset(&var_118, 0, 0x2c)
int32_t var_e8 = 0xffffffff
int32_t var_e4 = 0
int64_t var_d8 = 0
int32_t var_d0 = 0
int64_t var_178
sub_1426dff30(&var_178, arg1)
int64_t var_b8 = var_178
int32_t var_c8 = 4
int64_t* var_170

if (var_170 != 0)
    var_170[1].d += 1

int32_t var_168
int32_t var_a8 = var_168
char var_a0 = 1
int64_t var_1a8 = 0
int32_t var_1a0 = 0
sub_1405947f0(&var_1a8, 0x11)
int32_t rax_5 = var_1a0 + 0x11
var_1a0 = rax_5

if (rax_5 s> 0)
    sub_140594770(&var_1a8)

UnDecorator::getReferenceType(var_1a8, u"DescriptionTitle", 0x22)
sub_140acb5e0(&var_118, &var_1a8, &var_c8)
int64_t rcx_5 = var_1a8

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

if (var_a0 != 0 && var_170 != 0)
    var_170[1].d -= 1
    
    if (var_170[1].d == 1)
        (**var_170)(var_170)
        int32_t rax_8 = *(var_170 + 0xc)
        *(var_170 + 0xc) -= 1
        
        if (rax_8 == 1)
            (*(*var_170 + 8))(var_170, 1)

if (var_170 != 0)
    var_170[1].d -= 1
    
    if (var_170[1].d == 1)
        (**var_170)(var_170)
        int32_t rax_12 = *(var_170 + 0xc)
        *(var_170 + 0xc) -= 1
        
        if (rax_12 == 1)
            (*(*var_170 + 8))(var_170, 1)

int64_t var_88 = *(arg1 + 0x50)
int64_t* rax_15 = *(arg1 + 0x58)
int32_t var_98 = 4

if (rax_15 != 0)
    rax_15[1].d += 1

int32_t var_78 = *(arg1 + 0x60)
char var_70 = 1
int64_t var_198 = 0
int32_t var_190 = 0
sub_1405947f0(&var_198, 0x18)
int32_t rax_17 = var_190 + 0x18
var_190 = rax_17

if (rax_17 s> 0)
    sub_140594770(&var_198)

UnDecorator::getReferenceType(var_198, u"DescribeGeneratorAction", 0x30)
sub_140acb5e0(&var_118, &var_198, &var_98)
int64_t rcx_15 = var_198

if (rcx_15 != 0)
    sub_140a74f90(rcx_15)

if (var_70 != 0 && rax_15 != 0)
    rax_15[1].d -= 1
    
    if (rax_15[1].d == 1)
        (**rax_15)(rax_15)
        int32_t rax_20 = *(rax_15 + 0xc)
        *(rax_15 + 0xc) -= 1
        
        if (rax_20 == 1)
            (*(*rax_15 + 8))(rax_15, 1)

void* const rbx_4 = *(arg1 + 0x68)

if (rbx_4 == 0)
    rbx_4 = nullptr
else
    void* rax_22 = sub_142736ba0()
    
    if (rax_22 == 0)
        rbx_4 = nullptr
    else
        int64_t rax_23 = sx.q(*(rax_22 + 0x38))
        
        if (rax_23.d s> *(rbx_4 + 0x38) || *(*(rbx_4 + 0x30) + (rax_23 << 3)) != rax_22 + 0x30)
            rbx_4 = nullptr

int64_t var_160
sub_1426dff30(&var_160, rbx_4)
int64_t var_58 = var_160
int32_t var_68 = 4
int64_t* var_158

if (var_158 != 0)
    var_158[1].d += 1

int32_t var_150
int32_t var_48 = var_150
char var_40 = 1
int64_t var_188 = 0
int32_t var_180 = 0
sub_1405947f0(&var_188, 0x10)
int32_t rax_28 = var_180 + 0x10
var_180 = rax_28

if (rax_28 s> 0)
    sub_140594770(&var_188)

UnDecorator::getReferenceType(var_188, u"DescribeContext", 0x20)
sub_140acb5e0(&var_118, &var_188, &var_68)
int64_t rcx_25 = var_188

if (rcx_25 != 0)
    sub_140a74f90(rcx_25)

if (var_40 != 0 && var_158 != 0)
    var_158[1].d -= 1
    
    if (var_158[1].d == 1)
        (**var_158)(var_158)
        int32_t rax_31 = *(var_158 + 0xc)
        *(var_158 + 0xc) -= 1
        
        if (rax_31 == 1)
            (*(*var_158 + 8))(var_158, 1)

if (var_158 != 0)
    var_158[1].d -= 1
    
    if (var_158[1].d == 1)
        (**var_158)(var_158)
        int32_t rax_35 = *(var_158 + 0xc)
        *(var_158 + 0xc) -= 1
        
        if (rax_35 == 1)
            (*(*var_158 + 8))(var_158, 1)

void var_148
char* var_130
sub_140aaca20(arg2, 
    sub_140a96390(&var_130, 
        _vfprintf_p_l(&var_148, 
            {DescriptionTitle}: {DescribeGeneratorAction} around {DescribeContext}", 
        EnvQueryGenerator")), &var_118)
int64_t* var_140

if (var_140 != 0)
    var_140[1].d -= 1
    
    if (var_140[1].d == 1)
        (**var_140)(var_140)
        int32_t rdi_1 = *(var_140 + 0xc)
        *(var_140 + 0xc) -= 1
        
        if (rdi_1 == 1)
            int64_t r8_4 = *var_140
            (*(r8_4 + 8))(var_140, zx.q(rdi_1), r8_4)

int32_t var_d0_1 = 0

if (var_d8 != 0)
    sub_140a74f90(var_d8)

sub_140acd610(&var_118)
__security_check_cookie(rax_1 ^ &var_1c8)
return arg2
