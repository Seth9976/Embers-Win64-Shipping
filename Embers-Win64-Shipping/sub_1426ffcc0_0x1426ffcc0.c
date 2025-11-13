// 函数: sub_1426ffcc0
// 地址: 0x1426ffcc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_118
int64_t var_48 = __security_cookie ^ &var_118
int32_t var_f8 = 0
int64_t var_78 = 0
int64_t var_70 = 0
sub_1405947f0(&var_78, 0xa)
var_70.d += 0xa

if (var_70.d + 0xa s> var_70:4.d)
    sub_140594770(&var_78)

UnDecorator::getReferenceType(var_78, u"PathExist", 0x14)
int64_t var_68 = 0
int32_t var_60 = 0
sub_1405947f0(&var_68, 9)
int32_t rax_3 = var_60 + 9
var_60 = rax_3
int32_t var_5c

if (rax_3 s> var_5c)
    sub_140594770(&var_68)

UnDecorator::getReferenceType(var_68, u"PathCost", 0x12)
int64_t var_58 = 0
int32_t var_50 = 0
sub_1405947f0(&var_58, 0xb)
int32_t rax_4 = var_50 + 0xb
var_50 = rax_4

if (rax_4 s> 0)
    sub_140594770(&var_58)

int512_t zmm0 = UnDecorator::getReferenceType(var_58, u"PathLength", 0x16)
int64_t var_d8
int64_t var_c8
int64_t var_b8
wchar16 const* const rdx_5
int32_t rbx
int16_t* const rsi
int16_t* const r8
int64_t* r14

if (*(arg1 + 0x218) == 0)
    void var_a8
    int16_t** rax_9 = sub_140ac6680(sub_1426d1850(&var_a8, *(arg1 + 0x200)))
    rsi = &data_142d40450
    
    if (rax_9[1].d != 0)
        *rax_9
    
    r8 = &data_14347af74
    rbx = 0x18
    
    if (*(arg1 + 0x238) != 0)
        r8 = u"from"
    
    r14 = &var_d8
    rdx_5 = u"%s %s"
else
    int64_t* rax_5 = sub_1426ed850(arg1 + 0x208, &var_b8, zmm0)
    rsi = &data_142d40450
    
    if (rax_5[1].d != 0)
        *rax_5
    
    void var_90
    int64_t* rax_7 = sub_140ac6680(sub_1426d1850(&var_90, *(arg1 + 0x200)))
    
    if (rax_7[1].d == 0)
        r8 = &data_142d40450
    else
        r8 = *rax_7
    
    r14 = &var_c8
    rbx = 7
    rdx_5 = u"%s, direction: %s"

sub_140a2e390(r14, rdx_5, r8)
int64_t r12 = *r14
*r14 = 0
r14[1].d
r14[1] = 0

if ((rbx.b & 0x10) != 0)
    int64_t rcx_15 = var_d8
    rbx &= 0xffffffef
    
    if (rcx_15 != 0)
        sub_140a74f90(rcx_15)

if ((rbx.b & 8) != 0)
    rbx &= 0xfffffff7
    int64_t* var_a0
    
    if (var_a0 != 0)
        var_a0[1].d -= 1
        
        if (var_a0[1].d == 1)
            (**var_a0)(var_a0)
            int32_t rax_12 = *(var_a0 + 0xc)
            *(var_a0 + 0xc) -= 1
            
            if (rax_12 == 1)
                (*(*var_a0 + 8))(var_a0, 1)

if ((rbx.b & 4) != 0)
    int64_t rcx_18 = var_c8
    rbx &= 0xfffffffb
    
    if (rcx_18 != 0)
        sub_140a74f90(rcx_18)

if ((rbx.b & 2) != 0)
    rbx &= 0xfffffffd
    int64_t* var_88
    
    if (var_88 != 0)
        var_88[1].d -= 1
        
        if (var_88[1].d == 1)
            (**var_88)(var_88)
            int32_t r14_1 = *(var_88 + 0xc)
            *(var_88 + 0xc) -= 1
            
            if (r14_1 == 1)
                (*(*var_88 + 8))(var_88, zx.q(r14_1))

if ((rbx.b & 1) != 0)
    int64_t rcx_21 = var_b8
    
    if (rcx_21 != 0)
        sub_140a74f90(rcx_21)

uint64_t rax_18 = zx.q(*(arg1 + 0x1f8)) * 2

if ((&var_70)[rax_18].d != 0)
    rsi = (&var_78)[rax_18]

int64_t var_e8
sub_140a2e390(&var_e8, u"%s: %s", rsi)
sub_140aae2f0(arg2, &var_e8)
int64_t rcx_24 = var_e8

if (rcx_24 != 0)
    sub_140a74f90(rcx_24)

if (r12 != 0)
    sub_140a74f90(r12)

int64_t i = 3
int64_t* rdi_3 = &var_48

do
    int64_t rcx_26 = rdi_3[-2]
    rdi_3 = &rdi_3[-2]
    i -= 1
    
    if (rcx_26 != 0)
        sub_140a74f90(rcx_26)
while (i != 0)

__security_check_cookie(var_48 ^ &var_118)
return arg2
