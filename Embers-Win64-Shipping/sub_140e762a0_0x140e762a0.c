// 函数: sub_140e762a0
// 地址: 0x140e762a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = arg1[0x64].b != 0
int64_t var_d8 = arg4
void arg_8

if ((cond:0 || *(arg1 + 0x321) != 0) && arg3 == 0)
    int64_t rbx = *arg1
    *(arg1 + 0x322) = 1
    int64_t* rcx = *(data_143e20d18 + 8)
    int512_t zmm3
    zmm3.o = 0x3f800000
    return (*(rbx + 0xb8))(arg1, arg2, (*(*rcx + 0x18))(rcx, &arg_8), zmm3, 0, 0)

int64_t var_d0
sub_140e8cd20(&var_d0, arg3)
int64_t* rbx_1 = data_143e20d18
int64_t var_b8 = var_d0
int64_t var_c8
int64_t var_b0 = var_c8
int64_t* var_c0
int64_t* var_a8 = var_c0

if (var_c0 != 0)
    var_c0[1].d += 1

int64_t* rcx_3 = arg1[0x9d]
int32_t rax_7 = (**rcx_3)(rcx_3)
int64_t r8_1 = *rbx_1
int16_t* rax_8 = (*(r8_1 + 0x58))(rbx_1, &arg_8, r8_1)
int64_t r8_2 = arg1[-0x23]
int32_t var_100
var_100.q = &arg1[1]
int32_t var_108
void var_a0
var_108.q = (*(r8_2 + 0x60))(&arg1[-0x23], &var_a0, r8_2)
void** var_98
sub_140e51450(&var_98, rax_7, 0xa, &var_d8, var_108, var_100, &var_b8, 0, rax_8)
char rax_10 = sub_140e7ce00(&arg1[-0x23], arg2, &var_98)
int64_t* var_50

if (var_50 != 0)
    var_50[1].d -= 1
    
    if (var_50[1].d == 1)
        int64_t rdx_7 = *var_50
        (*rdx_7)(var_50, rdx_7)
        int32_t temp2_1 = *(var_50 + 0xc)
        *(var_50 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*var_50 + 8))(var_50, 1)

var_98 = &data_142d7f690

if (var_c0 != 0)
    var_c0[1].d -= 1
    
    if (var_c0[1].d == 1)
        (**var_c0)(var_c0)
        int32_t temp3_1 = *(var_c0 + 0xc)
        *(var_c0 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*var_c0 + 8))(var_c0, 1)

return zx.q(rax_10)
