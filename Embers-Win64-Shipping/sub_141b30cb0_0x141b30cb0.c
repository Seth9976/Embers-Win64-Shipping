// 函数: sub_141b30cb0
// 地址: 0x141b30cb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = *(arg1 + 0x10)
int64_t rbp = *(arg1 + 8)
uint64_t var_58 = 0

if (rbx != 0)
    sub_1405a4c70(&var_58, rbx, 0)
    memcpy(var_58, rbp, rbx * 2)
else
    int32_t var_4c_1 = rbx

void var_48
sub_1405bb0c0(arg1 + 0x18, &var_48, arg2)
void var_18
void* rax = sub_140d3c6e0(&var_18)

if (rax == 0)
    void* rax_1 = sub_1405bdd80(&var_48)
    
    if (rax_1 != 0)
        int64_t rbx_1 = sx.q(*(rax_1 + 0x4c))
        int64_t var_20
        int64_t* rbx_2 = rbx_1 + var_20
        
        if (rbx_1 != neg.q(var_20) && rbx_2 != &var_58)
            uint64_t rbp_1 = var_58
            int32_t r8_5 = *(rbx_2 + 0xc)
            rbx_2[1].d = rbx
            
            if (rbx != 0 || r8_5 != 0)
                sub_1405a4c70(rbx_2, rbx, r8_5)
                memcpy(*rbx_2, rbp_1, rbx * 2)
            else
                *(rbx_2 + 0xc) = rbx
else
    sub_141af2050(arg2, rax, &var_58)

void var_10
int64_t result = sub_140d3c6e0(&var_10)

if (result != 0)
    int64_t r9_1 = *arg2
    result = (*(r9_1 + 0x210))(arg2, result, 0, r9_1)

int64_t var_30

if (var_30 != 0)
    result = sub_140a74f90(var_30)

uint64_t rcx_11 = var_58

if (rcx_11 == 0)
    return result

return sub_140a74f90(rcx_11)
