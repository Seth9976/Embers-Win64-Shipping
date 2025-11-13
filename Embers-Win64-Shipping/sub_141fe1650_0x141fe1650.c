// 函数: sub_141fe1650
// 地址: 0x141fe1650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* var_78 = nullptr
int32_t var_70 = 0
void var_58
void arg_10
int64_t* rax_3 = sub_140ac6680(
    sub_140bddc50(*(sub_1408f7ec0(*(arg1 + 0x10), *sub_140b58260(&arg_10, Gender", 1)) + 0x78), 
    &var_58, zx.q(*(arg1 + 0x28))))
int32_t rcx_4 = rax_3[1].d
int32_t r8_1 = rcx_4 - 1

if (rcx_4 == 0)
    r8_1 = 0

sub_140a20ba0(&var_78, *rax_3, r8_1)
int64_t* var_50

if (var_50 != 0)
    var_50[1].d -= 1
    
    if (var_50[1].d == 1)
        (**var_50)(var_50)
        int32_t rax_6 = *(var_50 + 0xc)
        *(var_50 + 0xc) -= 1
        
        if (rax_6 == 1)
            (*(*var_50 + 8))(var_50, 1)

if (*(arg1 + 0x29) != 0)
    void arg_18
    void* rax_9 = sub_1408f7ec0(*(arg1 + 0x10), *sub_140b58260(&arg_18, u"Plurality", 1))
    sub_140a20b00(&var_78, ", ", 2)
    void var_40
    int64_t* rax_11 = sub_140ac6680(sub_140bddc50(*(rax_9 + 0x78), &var_40, zx.q(*(arg1 + 0x29))))
    int32_t rcx_13 = rax_11[1].d
    int32_t r8_3 = rcx_13 - 1
    
    if (rcx_13 == 0)
        r8_3 = 0
    
    sub_140a20ba0(&var_78, *rax_11, r8_3)
    int64_t* var_38
    
    if (var_38 != 0)
        var_38[1].d -= 1
        
        if (var_38[1].d == 1)
            (**var_38)(var_38)
            int32_t rdi_1 = *(var_38 + 0xc)
            *(var_38 + 0xc) -= 1
            
            if (rdi_1 == 1)
                (*(*var_38 + 8))(var_38, zx.q(rdi_1))

int16_t* const rdi_2 = &data_142d40450
int64_t arg_8 = *(arg1 + 0x18)
int16_t* var_68
sub_140b63b70(&arg_8, &var_68)
int32_t var_60

if (var_60 != 0)
    rdi_2 = var_68

sub_140a2e390(arg2, u"%s (%s)", rdi_2)
int16_t* rcx_19 = var_68

if (rcx_19 != 0)
    sub_140a74f90(rcx_19)

int16_t* rcx_20 = var_78

if (rcx_20 != 0)
    sub_140a74f90(rcx_20)

return arg2
