// 函数: sub_140e76830
// 地址: 0x140e76830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = arg1[0x64].b != 0
int64_t var_d8 = arg3
void arg_8

if ((cond:0 || *(arg1 + 0x321) != 0) && arg2 == 0)
    int64_t rbx = *arg1
    *(arg1 + 0x322) = arg2.b
    int64_t* rcx = *(data_143e20d18 + 8)
    return (*(rbx + 0xd8))(arg1, (*(*rcx + 0x18))(rcx, &arg_8), 0, 0)

int64_t var_d0
sub_140e8cd20(&var_d0, arg2)
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
int64_t r8 = *rbx_1
int16_t* rax_8 = (*(r8 + 0x58))(rbx_1, &arg_8, r8)
int64_t r8_1 = arg1[-0x23]
void** var_98
void arg_20
sub_140e51450(&var_98, rax_7, 0xa, &var_d8, (*(r8_1 + 0x60))(&arg1[-0x23], &arg_20, r8_1), 
    &arg1[1], &var_b8, 0, rax_8)
char rax_10 = sub_140e7d370(&arg1[-0x23], &var_98)
int64_t* var_50

if (var_50 != 0)
    var_50[1].d -= 1
    
    if (var_50[1].d == 1)
        int64_t rdx_6 = *var_50
        (*rdx_6)(var_50, rdx_6)
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
