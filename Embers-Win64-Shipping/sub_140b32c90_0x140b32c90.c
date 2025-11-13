// 函数: sub_140b32c90
// 地址: 0x140b32c90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int64_t var_48 = __security_cookie ^ &var_a8
int16_t* var_70 = arg1
uint64_t var_80 = 0
int64_t var_78 = 0
uint64_t r15 = 0
int32_t r14 = 0
int32_t r12 = 0
int64_t* rbx_5

if (arg3 == 0)
    if (arg2 != 0 && *arg2 != 0)
        int64_t rbx_3 = -1
        
        do
            rbx_3 += 1
        while (arg2[rbx_3] != 0)
        
        if (rbx_3.d + 1 s> 0)
            sub_1405947f0(&var_80, rbx_3.d + 1)
            r12 = var_78:4.d
            r14 = var_78.d
            r15 = var_80
        
        r14 += rbx_3.d + 1
        var_78.d = r14
        
        if (r14 s> r12)
            sub_140594770(&var_80)
            r12 = var_78:4.d
            r14 = var_78.d
            r15 = var_80
        
        UnDecorator::getReferenceType(r15, arg2, (rbx_3.d + 1) * 2)
    
    rbx_5 = &arg1[0x1b0]
else
    if (arg2 != 0 && *arg2 != 0)
        int64_t rbx_1 = -1
        
        do
            rbx_1 += 1
        while (arg2[rbx_1] != 0)
        
        if (rbx_1.d + 1 s> 0)
            sub_1405947f0(&var_80, rbx_1.d + 1)
            r12 = var_78:4.d
            r14 = var_78.d
            r15 = var_80
        
        r14 += rbx_1.d + 1
        var_78.d = r14
        
        if (r14 s> r12)
            sub_140594770(&var_80)
            r12 = var_78:4.d
            r14 = var_78.d
            r15 = var_80
        
        UnDecorator::getReferenceType(r15, arg2, (rbx_1.d + 1) * 2)
    
    rbx_5 = &arg1[0x1c0]

int64_t r13_1 = sx.q(rbx_5[1].d)
int32_t rax_2 = (r13_1 + 1).d
rbx_5[1].d = rax_2

if (rax_2 s> *(rbx_5 + 0xc))
    sub_1405a4f90(rbx_5)

uint64_t* rax_5 = (r13_1 << 4) + *rbx_5
*rax_5 = r15
*(rax_5 + 0xc) = r12
rax_5[1].d = r14
sub_140b64c60(arg2)
int16_t* r13_2 = var_70
wchar16 const* const var_60 = u"NoRedist"
wchar16 const* const* r14_1 = &var_60
int64_t r15_1 = 3
wchar16 const* const var_58 = u"NotForLicensees"
int64_t rbx_6 = 0
wchar16 const* const var_50 = u"CarefullyRedist"

if (&var_60 u> &var_48)
    r15_1 = 0

char result

do
    wchar16 const* const var_68_1 = *r14_1
    var_70 = arg2
    var_80 = 0
    int32_t var_78_1 = 0
    sub_140b0f5f0(&var_80, &var_70, 2)
    result = sub_140b12f50(&var_80)
    
    if (result != 0)
        uint64_t rdx_8 = &data_142d40450
        
        if (var_78_1 != 0)
            rdx_8 = var_80
        
        result = sub_140b32c90(r13_2, rdx_8, zx.q(arg3))
    
    uint64_t rcx_11 = var_80
    
    if (rcx_11 != 0)
        result = sub_140a74f90(rcx_11)
    
    r14_1 = &r14_1[1]
    rbx_6 += 1
while (rbx_6 != r15_1)

__security_check_cookie(var_48 ^ &var_a8)
return result
