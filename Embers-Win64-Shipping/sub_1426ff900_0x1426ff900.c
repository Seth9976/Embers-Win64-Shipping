// 函数: sub_1426ff900
// 地址: 0x1426ff900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t r8 = zx.d(*(arg1 + 0x238))
int32_t rbx = 0
int64_t* var_88 = nullptr
int32_t var_80 = 0

if (r8 != 0 && r8 == 1)
    sub_1405947f0(&var_88, 4)
    int32_t rax_1 = var_80 + 4
    rbx = rax_1
    
    if (rax_1 s> 0)
        sub_140594770(&var_88)
        rbx = rax_1
    
    *var_88 = 0x4400320020

void var_38
int64_t* rax_4 = sub_140ac6680(sub_1426edb40(arg1 + 0x218, &var_38))
int16_t* const rdi = &data_142d40450
int16_t* const r15

if (rax_4[1].d == 0)
    r15 = &data_142d40450
else
    r15 = *rax_4

void var_50
int64_t* rax_6 = sub_140ac6680(sub_1426edb40(arg1 + 0x1f8, &var_50))
int16_t* const r14

if (rax_6[1].d == 0)
    r14 = &data_142d40450
else
    r14 = *rax_6

int64_t* r12 = &data_142d40450

if (rbx != 0)
    r12 = var_88

void var_68
int64_t* rax_8 = sub_140ac6680(sub_1426df590(arg1, &var_68))

if (rax_8[1].d != 0)
    *rax_8

int16_t* const var_98 = r15

if (*(arg1 + 0x239) != 0)
    rdi = u"Absolute "

int16_t* const var_a0 = r14
int64_t* var_a8 = r12
int64_t var_78
sub_140a2e390(&var_78, u"%s%s%s: %s and %s", rdi)
sub_140aae2f0(arg2, &var_78)
int64_t rcx_10 = var_78

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

int64_t* var_60

if (var_60 != 0)
    var_60[1].d -= 1
    
    if (var_60[1].d == 1)
        (**var_60)(var_60)
        int32_t rax_11 = *(var_60 + 0xc)
        *(var_60 + 0xc) -= 1
        
        if (rax_11 == 1)
            (*(*var_60 + 8))(var_60, 1)

int64_t* var_48

if (var_48 != 0)
    var_48[1].d -= 1
    
    if (var_48[1].d == 1)
        (**var_48)(var_48)
        int32_t rax_15 = *(var_48 + 0xc)
        *(var_48 + 0xc) -= 1
        
        if (rax_15 == 1)
            (*(*var_48 + 8))(var_48, 1)

int64_t* var_30

if (var_30 != 0)
    var_30[1].d -= 1
    
    if (var_30[1].d == 1)
        (**var_30)(var_30)
        int32_t rdi_1 = *(var_30 + 0xc)
        *(var_30 + 0xc) -= 1
        
        if (rdi_1 == 1)
            (*(*var_30 + 8))(var_30, zx.q(rdi_1))

int64_t* rcx_17 = var_88

if (rcx_17 != 0)
    sub_140a74f90(rcx_17)

return arg2
