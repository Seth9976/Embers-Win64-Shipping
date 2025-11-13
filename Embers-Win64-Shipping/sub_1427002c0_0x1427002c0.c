// 函数: sub_1427002c0
// 地址: 0x1427002c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8 = 0
void var_98
int64_t* rax_2
int512_t zmm0
rax_2, zmm0 = sub_140ac6680(sub_140bddc50(sub_1424a62d0(), &var_98, zx.q(*(arg1 + 0x220))))
uint64_t var_e8 = 0
int32_t rbx = rax_2[1].d
int64_t rdi = *rax_2

if (rbx != 0)
    sub_1405a4c70(&var_e8, rbx, 0)
    zmm0 = memcpy(var_e8, rdi, rbx * 2)

int64_t* var_90

if (var_90 != 0)
    var_90[1].d -= 1
    
    if (var_90[1].d == 1)
        (**var_90)(var_90)
        int32_t rax_5 = *(var_90 + 0xc)
        *(var_90 + 0xc) -= 1
        
        if (rax_5 == 1)
            (*(*var_90 + 8))(var_90, 1)

int64_t var_c8
int64_t var_b8
int64_t var_a8
wchar16 const* const rdx_5
int32_t rbx_2
int16_t* const r8_3
int16_t* const r14
int64_t* r15

if (*(arg1 + 0x238) == 0)
    void var_80
    int16_t** rax_11 = sub_140ac6680(sub_1426d1850(&var_80, *(arg1 + 0x2d0)))
    r14 = &data_142d40450
    
    if (rax_11[1].d != 0)
        *rax_11
    
    r8_3 = &data_14347af74
    rbx_2 = 0x18
    
    if (*(arg1 + 0x258) != 0)
        r8_3 = u"from"
    
    r15 = &var_c8
    rdx_5 = u"%s %s"
else
    int64_t* rax_7 = sub_1426ed850(arg1 + 0x228, &var_a8, zmm0)
    r14 = &data_142d40450
    
    if (rax_7[1].d != 0)
        *rax_7
    
    void var_68
    int64_t* rax_9 = sub_140ac6680(sub_1426d1850(&var_68, *(arg1 + 0x2d0)))
    
    if (rax_9[1].d == 0)
        r8_3 = &data_142d40450
    else
        r8_3 = *rax_9
    
    r15 = &var_b8
    rbx_2 = 7
    rdx_5 = u"%s, direction: %s"

sub_140a2e390(r15, rdx_5, r8_3)
int16_t* r12 = *r15
*r15 = 0
r15[1].d
r15[1] = 0

if ((rbx_2.b & 0x10) != 0)
    int64_t rcx_12 = var_c8
    rbx_2 &= 0xffffffef
    
    if (rcx_12 != 0)
        sub_140a74f90(rcx_12)

if ((rbx_2.b & 8) != 0)
    rbx_2 &= 0xfffffff7
    int64_t* var_78
    
    if (var_78 != 0)
        var_78[1].d -= 1
        
        if (var_78[1].d == 1)
            (**var_78)(var_78)
            int32_t rax_15 = *(var_78 + 0xc)
            *(var_78 + 0xc) -= 1
            
            if (rax_15 == 1)
                (*(*var_78 + 8))(var_78, 1)

if ((rbx_2.b & 4) != 0)
    int64_t rcx_15 = var_b8
    rbx_2 &= 0xfffffffb
    
    if (rcx_15 != 0)
        sub_140a74f90(rcx_15)

if ((rbx_2.b & 2) != 0)
    rbx_2 &= 0xfffffffd
    int64_t* var_60
    
    if (var_60 != 0)
        var_60[1].d -= 1
        
        if (var_60[1].d == 1)
            (**var_60)(var_60)
            int32_t rax_19 = *(var_60 + 0xc)
            *(var_60 + 0xc) -= 1
            
            if (rax_19 == 1)
                (*(*var_60 + 8))(var_60, 1)

if ((rbx_2.b & 1) != 0)
    int64_t rcx_18 = var_a8
    
    if (rcx_18 != 0)
        sub_140a74f90(rcx_18)

int16_t* const rbx_3 = &data_142d40450

if (rbx != 0)
    rbx_3 = var_e8

void var_50
int16_t** rax_22 = sub_140ac6680(sub_1426df590(arg1, &var_50))

if (rax_22[1].d != 0)
    r14 = *rax_22

int16_t* const var_f8 = rbx_3
int64_t var_d8
sub_140a2e390(&var_d8, u"%s: %s on %s", r14)
sub_140aae2f0(arg2, &var_d8)
int64_t rcx_23 = var_d8

if (rcx_23 != 0)
    sub_140a74f90(rcx_23)

int64_t* var_48

if (var_48 != 0)
    var_48[1].d -= 1
    
    if (var_48[1].d == 1)
        (**var_48)(var_48)
        int32_t rdi_1 = *(var_48 + 0xc)
        *(var_48 + 0xc) -= 1
        
        if (rdi_1 == 1)
            (*(*var_48 + 8))(var_48, zx.q(rdi_1))

if (r12 != 0)
    sub_140a74f90(r12)

uint64_t rcx_27 = var_e8

if (rcx_27 != 0)
    sub_140a74f90(rcx_27)

return arg2
