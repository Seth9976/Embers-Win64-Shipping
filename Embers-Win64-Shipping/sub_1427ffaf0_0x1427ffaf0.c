// 函数: sub_1427ffaf0
// 地址: 0x1427ffaf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax_1 = (*(*arg4 + 0x18))(arg4)
int128_t* arg_28
int128_t* r12 = arg_28
int64_t arg_20 = rax_1
int64_t var_c8 = 0
int64_t* var_d0 = &arg_20
int128_t zmm0 = *r12
int64_t var_c0 = 0
int64_t zmm1 = r12[1].q
int64_t* var_e8 = &arg_20
int64_t** var_88 = &var_d0
int64_t** var_80 = &var_e8
int64_t var_48 = arg5
char arg_18
char* var_38 = &arg_18
int64_t var_e0 = 0
int64_t var_d8 = 0
arg_18 = 0
int128_t var_78 = zmm0
int64_t var_68 = zmm1
int64_t var_60 = arg3
int64_t var_58 = 0
int64_t* var_50 = arg4
char var_40 = 1
int64_t var_f8 = 0
int64_t var_f0 = 0
int32_t* var_98 = nullptr
sub_1427db150(&var_88, &var_98, &var_f8)
class physx::PxAllocatorCallback* rax_4
int64_t r8_5

if (arg_18 == 0)
    int64_t* rcx_2 = *r12
    arg_28.b = 0xb
    char var_108_1 = 0
    int64_t rax_6 = (*(*rcx_2 + 0xd8))(rcx_2, var_98, var_f8, zx.q(var_f0.w), 0, &arg_28)
    int64_t* rax_7 = (*(*arg4 + 0x18))(arg4)
    int64_t r8_3 = *rax_7
    (*(r8_3 + 0x10))(rax_7, var_98, r8_3)
    int64_t zmm1_1 = r12[1].q
    int128_t var_b8 = *r12
    int64_t var_a8_1 = zmm1_1
    var_108_1.q = arg5
    int64_t var_a8_2
    
    if (sub_1427dcdc0(&var_b8, arg3, rax_6, arg4, 0) == 0)
        var_b8.q = &data_1434cce10
        var_b8:8.q = 0
        var_a8_2 = 0
    else
        var_b8:8.q = rax_6
        var_b8.q = "PxShape"
        var_a8_2 = rax_6
    
    int32_t rax_10 = var_f0:4.d
    *arg2 = var_b8
    arg2[2] = var_a8_2
    
    if ((rax_10 & 0x7fffffff) != 0 && rax_10 s>= 0 && var_f8 != 0)
        rax_4 = physx::shdfnd::getAllocator()
        r8_5 = *rax_4
        (*(r8_5 + 0x10))(rax_4, var_f8, r8_5)
else
    arg2[1] = 0
    *arg2 = &data_1434cce10
    int32_t rax_3 = var_f0:4.d
    arg2[2] = 0
    
    if ((rax_3 & 0x7fffffff) != 0 && rax_3 s>= 0)
        int64_t rbx_1 = var_f8
        
        if (rbx_1 != 0)
            rax_4 = physx::shdfnd::getAllocator()
            r8_5 = *rax_4
            (*(r8_5 + 0x10))(rax_4, rbx_1, r8_5)
int32_t rax_11 = var_d8:4.d

if ((rax_11 & 0x7fffffff) != 0 && rax_11 s>= 0 && var_e0 != 0)
    int64_t* rcx_7 = *var_e8
    (*(*rcx_7 + 0x10))(rcx_7, var_e0)

int32_t rax_14 = var_c0:4.d

if ((rax_14 & 0x7fffffff) != 0 && rax_14 s>= 0 && var_c8 != 0)
    int64_t* rcx_8 = *var_d0
    (*(*rcx_8 + 0x10))(rcx_8, var_c8)

return arg2
