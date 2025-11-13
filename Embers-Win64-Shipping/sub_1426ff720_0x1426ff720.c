// 函数: sub_1426ff720
// 地址: 0x1426ff720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t r8 = zx.d(*(arg1 + 0x1f8))
int32_t* var_68 = nullptr
int32_t var_60 = 0

if (r8 != 0)
    if (r8 == 1)
        sub_1405947f0(&var_68, 4)
        int32_t rax_2 = var_60 + 4
        var_60 = rax_2
        
        if (rax_2 s> 0)
            sub_140594770(&var_68)
        
        *var_68 = 0x4400320020
    else if (r8 == 2)
        sub_1405947f0(&var_68, 3)
        int32_t rax_1 = var_60 + 3
        var_60 = rax_1
        
        if (rax_1 s> 0)
            sub_140594770(&var_68)
        
        int32_t* rcx_2 = var_68
        *rcx_2 = 0x5a0020
        rcx_2[1].w = 0

void var_30
int64_t* rax_5 = sub_140ac6680(sub_1426d1850(&var_30, *(arg1 + 0x200)))
int16_t* const rbx = &data_142d40450
int16_t* const rdi

if (rax_5[1].d == 0)
    rdi = &data_142d40450
else
    rdi = *rax_5

void var_48
int16_t** rax_7 = sub_140ac6680(sub_1426df590(arg1, &var_48))

if (rax_7[1].d != 0)
    rbx = *rax_7

int16_t* const var_78 = rdi
int64_t var_58
sub_140a2e390(&var_58, u"%s%s: to %s", rbx)
sub_140aae2f0(arg2, &var_58)
int64_t rcx_11 = var_58

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)

int64_t* var_40

if (var_40 != 0)
    var_40[1].d -= 1
    
    if (var_40[1].d == 1)
        (**var_40)(var_40)
        int32_t rax_10 = *(var_40 + 0xc)
        *(var_40 + 0xc) -= 1
        
        if (rax_10 == 1)
            (*(*var_40 + 8))(var_40, 1)

int64_t* var_28

if (var_28 != 0)
    var_28[1].d -= 1
    
    if (var_28[1].d == 1)
        (**var_28)(var_28)
        int32_t rdi_1 = *(var_28 + 0xc)
        *(var_28 + 0xc) -= 1
        
        if (rdi_1 == 1)
            (*(*var_28 + 8))(var_28, zx.q(rdi_1))

int32_t* rcx_16 = var_68

if (rcx_16 != 0)
    sub_140a74f90(rcx_16)

return arg2
