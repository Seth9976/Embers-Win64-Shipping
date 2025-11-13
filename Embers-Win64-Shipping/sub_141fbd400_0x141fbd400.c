// 函数: sub_141fbd400
// 地址: 0x141fbd400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r8 = *(arg1 + 0x50)
int64_t var_50 = *(r8 + 0x58)
int16_t var_78 = 0xffff
void** const var_58 = &data_14328ac98
int64_t var_20 = 0
int64_t* var_18 = nullptr
int64_t var_70 = 0
int64_t var_68 = 0
void* var_c0 = r8
int128_t var_48
__builtin_memset(&var_48, 0, 0x21)
int128_t var_e8
__builtin_memset(&var_e8, 0, 0x28)
int128_t var_b8
__builtin_memset(&var_b8, 0, 0x40)
int64_t var_a0
var_a0:7.b = (*(r8 + 0xa4) u>> 1).b & 1
int64_t var_c8 = *(r8 + 0x68)
int128_t var_98
var_98.q = *(arg1 + 0x48)
void** const* var_a8 = &var_58
int128_t var_88
var_88:8.q = arg2
char rax_6 = sub_1422cae20(*(arg1 + 0x20), **(arg1 + 0x30), &var_e8, arg2)

if (var_70 != 0)
    sub_140a74f90(var_70)

if (var_18 != 0)
    var_18[1].d -= 1
    
    if (var_18[1].d == 1)
        (**var_18)(var_18)
        int32_t temp2_1 = *(var_18 + 0xc)
        *(var_18 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*var_18 + 8))(var_18, 1)

int128_t var_38
int64_t* rbx_1 = var_38:8.q

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp3_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

return zx.q(rax_6)
