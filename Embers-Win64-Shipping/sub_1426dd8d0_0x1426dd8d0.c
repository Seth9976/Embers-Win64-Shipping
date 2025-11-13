// 函数: sub_1426dd8d0
// 地址: 0x1426dd8d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_218
int64_t rax_1 = __security_cookie ^ &var_218
int32_t var_ec = 0x80
int64_t var_118
__builtin_memset(&var_118, 0, 0x2c)
int32_t var_e8 = 0xffffffff
int32_t var_e4 = 0
int64_t var_d8 = 0
int32_t var_d0 = 0
int64_t var_1b0
sub_1426dff30(&var_1b0, arg1)
int64_t var_b8 = var_1b0
int32_t var_c8 = 4
int64_t* var_1a8

if (var_1a8 != 0)
    var_1a8[1].d += 1

int32_t var_1a0
int32_t var_a8 = var_1a0
char var_a0 = 1
int64_t var_1e8 = 0
int32_t var_1e0 = 0
sub_1405947f0(&var_1e8, 0x11)
int32_t rax_5 = var_1e0 + 0x11
var_1e0 = rax_5

if (rax_5 s> 0)
    sub_140594770(&var_1e8)

UnDecorator::getReferenceType(var_1e8, u"DescriptionTitle", 0x22)
sub_140acb5e0(&var_118, &var_1e8, &var_c8)
int64_t rcx_5 = var_1e8

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

if (var_a0 != 0 && var_1a8 != 0)
    var_1a8[1].d -= 1
    
    if (var_1a8[1].d == 1)
        (**var_1a8)(var_1a8)
        int32_t rax_8 = *(var_1a8 + 0xc)
        *(var_1a8 + 0xc) -= 1
        
        if (rax_8 == 1)
            (*(*var_1a8 + 8))(var_1a8, 1)

if (var_1a8 != 0)
    var_1a8[1].d -= 1
    
    if (var_1a8[1].d == 1)
        (**var_1a8)(var_1a8)
        int32_t rax_12 = *(var_1a8 + 0xc)
        *(var_1a8 + 0xc) -= 1
        
        if (rax_12 == 1)
            (*(*var_1a8 + 8))(var_1a8, 1)

int64_t var_1f8

if (*(arg1 + 0x50) == 0)
label_1426ddaaa:
    var_1f8 = 0
    int32_t var_1f0_1 = 0
    sub_1405947f0(&var_1f8, 5)
    int32_t rax_18 = var_1f0_1 + 5
    var_1f0_1 = rax_18
    
    if (rax_18 s> 0)
        sub_140594770(&var_1f8)
    
    UnDecorator::getReferenceType(var_1f8, u"None", 0xa)
else
    void* rax_14 = sub_142452380()
    
    if (rax_14 == 0)
        goto label_1426ddaaa
    
    void* rdx_3 = *(arg1 + 0x50)
    int64_t rax_15 = sx.q(*(rax_14 + 0x38))
    
    if (rax_15.d s> *(rdx_3 + 0x38) || *(*(rdx_3 + 0x30) + (rax_15 << 3)) != rax_14 + 0x30
            || rdx_3 == 0)
        goto label_1426ddaaa
    
    int64_t var_1b8 = *(rdx_3 + 0x18)
    sub_140b63b70(&var_1b8, &var_1f8)

void var_180
int64_t* rax_19 = sub_140aae2f0(&var_180, &var_1f8)
int32_t var_98 = 4
int64_t var_88 = *rax_19
int64_t* rax_21 = rax_19[1]

if (rax_21 != 0)
    rax_21[1].d += 1

int32_t var_78 = rax_19[2].d
char var_70 = 1
int64_t var_1d8 = 0
int32_t var_1d0 = 0
sub_1405947f0(&var_1d8, 0xc)
int32_t rax_23 = var_1d0 + 0xc
var_1d0 = rax_23

if (rax_23 s> 0)
    sub_140594770(&var_1d8)

UnDecorator::getReferenceType(var_1d8, u"ActorsClass", 0x18)
sub_140acb5e0(&var_118, &var_1d8, &var_98)
int64_t rcx_22 = var_1d8

if (rcx_22 != 0)
    sub_140a74f90(rcx_22)

if (var_70 != 0 && rax_21 != 0)
    rax_21[1].d -= 1
    
    if (rax_21[1].d == 1)
        (**rax_21)(rax_21)
        int32_t rax_26 = *(rax_21 + 0xc)
        *(rax_21 + 0xc) -= 1
        
        if (rax_26 == 1)
            (*(*rax_21 + 8))(rax_21, 1)

int64_t* var_178

if (var_178 != 0)
    var_178[1].d -= 1
    
    if (var_178[1].d == 1)
        (**var_178)(var_178)
        int32_t rax_30 = *(var_178 + 0xc)
        *(var_178 + 0xc) -= 1
        
        if (rax_30 == 1)
            (*(*var_178 + 8))(var_178, 1)

int64_t rcx_28 = var_1f8

if (rcx_28 != 0)
    sub_140a74f90(rcx_28)

int64_t rcx_29 = *(arg1 + 0x68)
char rcx_30

if (rcx_29 == 0)
    void* rax_32 = *(arg1 + 0x60)
    int64_t rax_33
    
    if (rax_32 != 0)
        rax_33 = sx.q(*(rax_32 + 0x4c))
    
    if (rax_32 == 0 || rax_33 == neg.q(rcx_29))
        rcx_30 = *(arg1 + 0x88)
    else
        rcx_30 = *(rax_33 + rcx_29)

if (rcx_29 != 0 || rcx_30 != 0)
    void* const rbx_6 = *(arg1 + 0xc8)
    
    if (rbx_6 == 0)
        rbx_6 = nullptr
    else
        void* rax_39 = sub_142736ba0()
        
        if (rax_39 == 0)
            rbx_6 = nullptr
        else
            int64_t rax_40 = sx.q(*(rax_39 + 0x38))
            
            if (rax_40.d s> *(rbx_6 + 0x38) || *(*(rbx_6 + 0x30) + (rax_40 << 3)) != rax_39 + 0x30)
                rbx_6 = nullptr
    
    int64_t var_198
    sub_1426dff30(&var_198, rbx_6)
    int64_t var_58_1 = var_198
    int32_t var_68 = 4
    int64_t* var_190
    
    if (var_190 != 0)
        var_190[1].d += 1
    
    int32_t var_188
    int32_t var_48_1 = var_188
    char var_40_1 = 1
    int64_t var_1c8 = 0
    int32_t var_1c0_1 = 0
    sub_1405947f0(&var_1c8, 0x10)
    int32_t rax_45 = var_1c0_1 + 0x10
    var_1c0_1 = rax_45
    
    if (rax_45 s> 0)
        sub_140594770(&var_1c8)
    
    UnDecorator::getReferenceType(var_1c8, u"DescribeContext", 0x20)
    sub_140acb5e0(&var_118, &var_1c8, &var_68)
    int64_t rcx_42 = var_1c8
    
    if (rcx_42 != 0)
        sub_140a74f90(rcx_42)
    
    if (var_40_1 != 0 && var_190 != 0)
        var_190[1].d -= 1
        
        if (var_190[1].d == 1)
            (**var_190)(var_190)
            int32_t rax_48 = *(var_190 + 0xc)
            *(var_190 + 0xc) -= 1
            
            if (rax_48 == 1)
                (*(*var_190 + 8))(var_190, 1)
    
    if (var_190 != 0)
        var_190[1].d -= 1
        
        if (var_190[1].d == 1)
            (**var_190)(var_190)
            int32_t rax_52 = *(var_190 + 0xc)
            *(var_190 + 0xc) -= 1
            
            if (rax_52 == 1)
                (*(*var_190 + 8))(var_190, 1)
    
    void var_150
    char* var_128
    sub_140aaca20(arg2, 
        sub_140a96390(&var_128, 
            _vfprintf_p_l(&var_150, 
                {DescriptionTitle}: generate set of actors of {ActorsClass} around {DescribeContext}", 
            EnvQueryGenerator")), &var_118)
    int64_t* var_148
    
    if (var_148 != 0)
        var_148[1].d -= 1
        
        if (var_148[1].d == 1)
            (**var_148)(var_148)
            int32_t rdi_2 = *(var_148 + 0xc)
            *(var_148 + 0xc) -= 1
            
            if (rdi_2 == 1)
                (*(*var_148 + 8))(var_148, zx.q(rdi_2))
else
    void var_168
    char* var_138
    sub_140aaca20(arg2, 
        sub_140a96390(&var_138, 
            _vfprintf_p_l(&var_168, {DescriptionTitle}: generate set of actors of {ActorsClass}", 
            EnvQueryGenerator")), &var_118)
    int64_t* var_160
    
    if (var_160 != 0)
        var_160[1].d -= 1
        
        if (var_160[1].d == 1)
            (**var_160)(var_160)
            int32_t rdi_1 = *(var_160 + 0xc)
            *(var_160 + 0xc) -= 1
            
            if (rdi_1 == 1)
                int64_t r8_4 = *var_160
                (*(r8_4 + 8))(var_160, zx.q(rdi_1), r8_4)

int32_t var_d0_1 = 0

if (var_d8 != 0)
    sub_140a74f90(var_d8)

sub_140acd610(&var_118)
__security_check_cookie(rax_1 ^ &var_218)
return arg2
