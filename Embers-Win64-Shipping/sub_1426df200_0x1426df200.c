// 函数: sub_1426df200
// 地址: 0x1426df200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_188
int64_t rax_1 = __security_cookie ^ &var_188
int32_t var_bc = 0x80
int64_t var_e8
__builtin_memset(&var_e8, 0, 0x2c)
int32_t var_b8 = 0xffffffff
int32_t var_b4 = 0
int64_t var_a8 = 0
int32_t var_a0 = 0
int64_t var_148
sub_1426dff30(&var_148, arg1)
int64_t var_88 = var_148
int32_t var_98 = 4
int64_t* var_140

if (var_140 != 0)
    var_140[1].d += 1

int32_t var_138
int32_t var_78 = var_138
char var_70 = 1
int64_t var_168 = 0
int32_t var_160 = 0
sub_1405947f0(&var_168, 0x11)
int32_t rax_5 = var_160 + 0x11
var_160 = rax_5

if (rax_5 s> 0)
    sub_140594770(&var_168)

UnDecorator::getReferenceType(var_168, u"DescriptionTitle", 0x22)
sub_140acb5e0(&var_e8, &var_168, &var_98)
int64_t rcx_5 = var_168

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

if (var_70 != 0 && var_140 != 0)
    var_140[1].d -= 1
    
    if (var_140[1].d == 1)
        (**var_140)(var_140)
        int32_t rax_8 = *(var_140 + 0xc)
        *(var_140 + 0xc) -= 1
        
        if (rax_8 == 1)
            (*(*var_140 + 8))(var_140, 1)

if (var_140 != 0)
    var_140[1].d -= 1
    
    if (var_140[1].d == 1)
        (**var_140)(var_140)
        int32_t rax_12 = *(var_140 + 0xc)
        *(var_140 + 0xc) -= 1
        
        if (rax_12 == 1)
            (*(*var_140 + 8))(var_140, 1)

void* const rbx_3 = *(arg1 + 0x190)

if (rbx_3 == 0)
    rbx_3 = nullptr
else
    void* rax_14 = sub_142736ba0()
    
    if (rax_14 == 0)
        rbx_3 = nullptr
    else
        int64_t rax_15 = sx.q(*(rax_14 + 0x38))
        
        if (rax_15.d s> *(rbx_3 + 0x38) || *(*(rbx_3 + 0x30) + (rax_15 << 3)) != rax_14 + 0x30)
            rbx_3 = nullptr

int64_t var_130
sub_1426dff30(&var_130, rbx_3)
int64_t var_58 = var_130
int32_t var_68 = 4
int64_t* var_128

if (var_128 != 0)
    var_128[1].d += 1

int32_t var_120
int32_t var_48 = var_120
char var_40 = 1
int64_t var_158 = 0
int32_t var_150 = 0
sub_1405947f0(&var_158, 0x10)
int32_t rax_20 = var_150 + 0x10
var_150 = rax_20

if (rax_20 s> 0)
    sub_140594770(&var_158)

UnDecorator::getReferenceType(var_158, u"DescribeContext", 0x20)
sub_140acb5e0(&var_e8, &var_158, &var_68)
int64_t rcx_17 = var_158

if (rcx_17 != 0)
    sub_140a74f90(rcx_17)

if (var_40 != 0 && var_128 != 0)
    var_128[1].d -= 1
    
    if (var_128[1].d == 1)
        (**var_128)(var_128)
        int32_t rax_23 = *(var_128 + 0xc)
        *(var_128 + 0xc) -= 1
        
        if (rax_23 == 1)
            (*(*var_128 + 8))(var_128, 1)

if (var_128 != 0)
    var_128[1].d -= 1
    
    if (var_128[1].d == 1)
        (**var_128)(var_128)
        int32_t rax_27 = *(var_128 + 0xc)
        *(var_128 + 0xc) -= 1
        
        if (rax_27 == 1)
            (*(*var_128 + 8))(var_128, 1)

void var_118
char* var_100
sub_140aaca20(arg2, 
    sub_140a96390(&var_100, 
        _vfprintf_p_l(&var_118, 
            {DescriptionTitle}: generate items on circle around {DescribeContext}", 
        EnvQueryGenerator")), &var_e8)
int64_t* var_110

if (var_110 != 0)
    var_110[1].d -= 1
    
    if (var_110[1].d == 1)
        (**var_110)(var_110)
        int32_t rdi_1 = *(var_110 + 0xc)
        *(var_110 + 0xc) -= 1
        
        if (rdi_1 == 1)
            int64_t r8_3 = *var_110
            (*(r8_3 + 8))(var_110, zx.q(rdi_1), r8_3)

int32_t var_a0_1 = 0

if (var_a8 != 0)
    sub_140a74f90(var_a8)

sub_140acd610(&var_e8)
__security_check_cookie(rax_1 ^ &var_188)
return arg2
