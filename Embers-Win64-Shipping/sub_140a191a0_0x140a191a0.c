// 函数: sub_140a191a0
// 地址: 0x140a191a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t var_38 = __security_cookie ^ &var_c8
int64_t var_88 = 0
int32_t var_80 = 0
sub_1405947f0(&var_88, 0xa)
int32_t rax_2 = var_80 + 0xa
var_80 = rax_2

if (rax_2 s> 0)
    sub_140594770(&var_88)

UnDecorator::getReferenceType(var_88, u"BENCHMARK", 0x14)
int64_t var_78 = 0
int32_t var_70 = 0
sub_1405947f0(&var_78, 0xa)
int32_t rax_3 = var_70 + 0xa
var_70 = rax_3

if (rax_3 s> 0)
    sub_140594770(&var_78)

UnDecorator::getReferenceType(var_78, u"DUMPMOVIE", 0x14)
int64_t i_1 = 5
int64_t var_68 = 0
int32_t var_60 = 0
sub_1405947f0(&var_68, 5)
int32_t rax_4 = var_60 + 5
var_60 = rax_4
int32_t var_5c

if (rax_4 s> var_5c)
    sub_140594770(&var_68)

UnDecorator::getReferenceType(var_68, u"EXEC", 0xa)
int64_t var_58 = 0
int32_t var_50 = 0
sub_1405947f0(&var_58, 4)
int32_t rax_5 = var_50 + 4
var_50 = rax_5

if (rax_5 s> 0)
    sub_140594770(&var_58)

UnDecorator::getReferenceType(var_58, &data_142dfc130, 8)
int64_t var_48 = 0
int32_t var_40 = 0
sub_1405947f0(&var_48, 8)
int32_t rax_6 = var_40 + 8
var_40 = rax_6

if (rax_6 s> 0)
    sub_140594770(&var_48)

UnDecorator::getReferenceType(var_48, u"SECONDS", 0x10)
uint64_t var_a8 = 0
int32_t var_a0 = 5
sub_1405a4be0(&var_a8, 5, 0)
void* r13_1 = var_a8 - &var_88
int64_t* rbx = &var_88
int32_t i_3 = 5
int32_t i

do
    *(rbx + r13_1) = 0
    int64_t* r14_1 = rbx + r13_1
    int32_t rsi_1 = rbx[1].d
    int64_t r12_1 = *rbx
    *(rbx + r13_1 + 8) = rsi_1
    
    if (rsi_1 != 0)
        sub_1405a4c70(r14_1, rsi_1, 0)
        memcpy(*r14_1, r12_1, rsi_1 * 2)
    else
        *(rbx + r13_1 + 0xc) = 0
    
    rbx = &rbx[2]
    i = i_3
    i_3 -= 1
while (i != 1)
int64_t* rbx_1 = &var_38

do
    int64_t rcx_18 = rbx_1[-2]
    rbx_1 = &rbx_1[-2]
    i_1 -= 1
    
    if (rcx_18 != 0)
        sub_140a74f90(rcx_18)
while (i_1 != 0)

uint64_t rdi = var_a8
int64_t r12_2 = sx.q(var_a0)
int64_t r13_4 = (r12_2 << 4) + rdi

if (rdi == r13_4)
label_140a1946a:
    rdi.b = 1
else
    while (true)
        int64_t rbx_2 = *rdi
        int16_t* r14_2 = nullptr
        uint64_t var_98 = 0
        int32_t rsi_2 = *(rdi + 8)
        int16_t* r15
        
        if (rsi_2 != 0)
            sub_1405a4c70(&var_98, rsi_2, 0)
            r14_2 = var_98
            memcpy(r14_2, rbx_2, rsi_2 * 2)
            r15 = r14_2
        else
            int32_t var_8c_1 = rsi_2
            r15 = nullptr
        
        int16_t* const rbx_3 = &data_142d40450
        
        if (rsi_2 != 0)
            rbx_3 = r15
        
        sub_140af2b60()
        
        if (sub_140b21a10(&data_143dbb3f0, rbx_3) != 0)
            if (r15 != 0)
                sub_140a74f90(r15)
            
            rdi.b = 0
            break
        
        if (r15 != 0)
            sub_140a74f90(r14_2)
        
        rdi += 0x10
        
        if (rdi == r13_4)
            goto label_140a1946a

uint64_t rsi_3 = var_a8
uint64_t rbx_4 = rsi_3

if (r12_2.d != 0)
    int32_t i_2
    
    do
        int64_t rcx_22 = *rbx_4
        
        if (rcx_22 != 0)
            sub_140a74f90(rcx_22)
        
        rbx_4 += 0x10
        i_2 = r12_2.d
        r12_2 = zx.q(r12_2.d - 1)
    while (i_2 != 1)

if (rsi_3 != 0)
    sub_140a74f90(rsi_3)

__security_check_cookie(var_38 ^ &var_c8)
return zx.q(rdi.b)
