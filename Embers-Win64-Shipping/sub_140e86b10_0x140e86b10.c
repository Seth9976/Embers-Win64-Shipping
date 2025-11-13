// 函数: sub_140e86b10
// 地址: 0x140e86b10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_3c8
int64_t rax_1 = __security_cookie ^ &var_3c8
arg1[0xb0].d += 1
void var_2f8
sub_140d947e0(&var_2f8)
void* var_388
float zmm0[0x4] = sub_140e683e0(arg1, &var_388, *(arg4 + 0xc))
int32_t rbx = *(arg4 + 0x50)

if (sub_140e6a060(var_388, rbx) != 0)
    void var_198
    sub_140d963a0(&var_2f8, sub_140e65360(var_388, &var_198, rbx, 1, zmm0, arg4))
    void var_48
    sub_140596d80(&var_48)
    int64_t* var_50
    
    if (var_50 != 0)
        var_50[1].d -= 1
        
        if (var_50[1].d == 1)
            (**var_50)(var_50)
            int32_t temp2_1 = *(var_50 + 0xc)
            *(var_50 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*var_50 + 8))(var_50, 1)
    
    void var_190
    sub_140d94d20(&var_190)

void* rcx_10 = &var_2f8

if (sub_140db3500(&var_2f8) == 0)
    rcx_10 = arg3

void* var_390 = rcx_10
int32_t var_398 = *(rcx_10 + 0x130) - 1
float var_378[0x4] = var_398.o
void arg_28
var_398.q = &arg_28
void** var_368
sub_140e4bcb0(arg2, arg1, &var_378, sub_140e51390(&var_368, arg4), &var_398)
int64_t* var_380

if (var_380 != 0)
    var_380[1].d -= 1
    
    if (var_380[1].d == 1)
        (**var_380)(var_380)
        int32_t temp4_1 = *(var_380 + 0xc)
        *(var_380 + 0xc) -= 1
        
        if (temp4_1 == 1)
            (*(*var_380 + 8))(var_380, 1)

void var_1a8
sub_140596d80(&var_1a8)
int64_t* var_1b0

if (var_1b0 != 0)
    var_1b0[1].d -= 1
    
    if (var_1b0[1].d == 1)
        (**var_1b0)(var_1b0)
        int32_t temp5_1 = *(var_1b0 + 0xc)
        *(var_1b0 + 0xc) -= 1
        
        if (temp5_1 == 1)
            int64_t r8_4 = *var_1b0
            (*(r8_4 + 8))(var_1b0, 1, r8_4)

void var_2f0
sub_140d94d20(&var_2f0)
arg1[0xb0].d -= 1
__security_check_cookie(rax_1 ^ &var_3c8)
return arg2
