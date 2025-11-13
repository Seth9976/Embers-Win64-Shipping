// 函数: sub_141fe2790
// 地址: 0x141fe2790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbp = arg1 + 0x30
int16_t* var_68
sub_140b291e0(arg1 + 0x60, &var_68, 0)
int64_t var_78
sub_141fe2640(arg3, &var_78)
int16_t* const r8 = &data_142d40450
int32_t var_60

if (var_60 != 0)
    r8 = var_68

int64_t var_58
sub_140a2e390(&var_58, u"%s_%s", r8)
int64_t rcx_3 = var_78

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

int16_t* rcx_4 = var_68

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

if ((*(arg1 + 0x28) & 2) != 0)
    int32_t rax_1 = data_143f3d748
    rbp = arg1 + 0x40
    int32_t r8_1
    
    if (rax_1 == 0)
        r8_1 = 0
    else
        r8_1 = rax_1 - 1
    
    sub_140a20ba0(&var_58, data_143f3d740, r8_1)

sub_140a96170(arg2)
void var_48
sub_140a97b20(&var_48, &var_58)
void var_38
sub_140a97b20(&var_38, &data_143f3d720)

if (sub_140aac5d0(&var_38, &var_48, arg2, rbp) == 0)
    void var_28
    int64_t* rax_3 = sub_141fe2930(arg1, &var_28, arg1)
    int64_t rdx_6 = *arg2
    *arg2 = *rax_3
    *rax_3 = rdx_6
    int64_t rdx_7 = arg2[1]
    arg2[1] = rax_3[1]
    rax_3[1] = rdx_7
    arg2[2].d = rax_3[2].d
    int64_t* var_20
    
    if (var_20 != 0)
        var_20[1].d -= 1
        
        if (var_20[1].d == 1)
            (**var_20)(var_20)
            int32_t rsi_1 = *(var_20 + 0xc)
            *(var_20 + 0xc) -= 1
            
            if (rsi_1 == 1)
                (*(*var_20 + 8))(var_20, zx.q(rsi_1))

int64_t rcx_15 = var_58

if (rcx_15 != 0)
    sub_140a74f90(rcx_15)

return arg2
