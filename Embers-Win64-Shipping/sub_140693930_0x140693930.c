// 函数: sub_140693930
// 地址: 0x140693930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_38
int64_t* rax_1 = sub_140ac6680(sub_140f03fb0(*(*arg1 + 0x298), &var_38))
void* rdx_1 = *arg1
int32_t r8 = rax_1[1].d
int32_t rsi = r8 - 1

if (r8 == 0)
    rsi = 0

int32_t rax_3

if (*(rdx_1 + 0x110) == 0)
    rax_3 = 2

if (*(rdx_1 + 0x110) != 0 || rsi == 0xffffffff)
    rax_3 = 1

int64_t var_58 = 0
int32_t rcx_3 = rsi + rax_3
int32_t rdi = *(rdx_1 + 0x110)
int64_t rbp = *(rdx_1 + 0x108)

if (rdi != 0 || rcx_3 != 0)
    sub_1405a4c70(&var_58, rdi + rcx_3, 0)
    memcpy(var_58, rbp, rdi * 2)
else
    int32_t var_4c_1 = 0

sub_140a2cf70(&var_58, *rax_1, rsi)
int64_t* var_30

if (var_30 != 0)
    var_30[1].d -= 1
    
    if (var_30[1].d == 1)
        (**var_30)(var_30)
        int32_t rsi_1 = *(var_30 + 0xc)
        *(var_30 + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*var_30 + 8))(var_30, zx.q(rsi_1))

sub_140a2f8e0(&var_58, *arg1 + 0x2c8, 1)
void* rdx_8 = *arg1
int32_t rax_7 = *(rdx_8 + 0x2d0)
int32_t r8_4 = rax_7 - 1

if (rax_7 == 0)
    r8_4 = 0

sub_140a20ba0(&var_58, *(rdx_8 + 0x2c8), r8_4)
void* rsi_2 = *arg1
int64_t rbp_1 = var_58
uint64_t var_48 = 0
int32_t var_3c = 0
int32_t var_40 = rdi

if (rdi != 0)
    sub_1405a4c70(&var_48, rdi, 0)
    memcpy(var_48, rbp_1, rdi * 2)

sub_1405a9f90(rsi_2 + 0x2f0, &var_48)
uint64_t rcx_14 = var_48

if (rcx_14 != 0)
    sub_140a74f90(rcx_14)

sub_140699c40(*arg1 + 0x2e0, &var_58)
sub_140698c60(*arg1)
int64_t rcx_18 = var_58
*(arg2 + 0xb4) &= 0xffffff00
*arg2 = 1
*(arg2 + 8) = 0
*(arg2 + 0x10) = 0
arg2[0x20] = 0
__builtin_memset(&arg2[0x28], 0, 0x88)
*(arg2 + 0xb0) = 0x20702

if (rcx_18 != 0)
    sub_140a74f90(rcx_18)

return arg2
