// 函数: sub_142801950
// 地址: 0x142801950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_f8 = 0
int64_t var_f0 = 0
int16_t var_ac = 0xff
int32_t var_e8 = 0
int32_t var_e0 = 0
int64_t var_d8 = 0
int32_t var_d0 = 0
int32_t var_c8 = 0
int64_t var_c0 = 0
int32_t var_b8 = 0
int32_t var_b0 = 0xff0000
int64_t arg_10 = 0
sub_1428064d0(arg3, "points", &arg_10, &var_f8, &var_e8, arg4)
int64_t var_f0_1 = arg_10
var_b0.w = 2
int64_t arg_20 = 0
void var_38
sub_1428049c0(arg3, "CookedData", &arg_20, &var_38, &arg_10, arg4)
int64_t var_90 = 0
int64_t var_a8 = (*(*arg4 + 0x18))(arg4)
int128_t var_78
__builtin_memset(&var_78, 0, 0x28)
int64_t* var_a0 = &var_a8
int32_t var_50 = 0x3f400000
int64_t* var_98 = &var_a8
int64_t* var_80 = &var_a8
int64_t var_88 = 0
int32_t var_4c = 0xffffffff
int64_t var_48 = 0
sub_142809d10(&var_80, 0x40)
uint32_t count_1 = arg_10.d
int64_t* var_118 = &var_a8
void** const var_128 = &data_1434d1d90
uint32_t count_2
__builtin_memset(&count_2, 0, 0x14)
int32_t rbx_1 = 0x20
void** const var_120 = &data_1434d1da0
int32_t var_40 = 0x20
void* var_108
int64_t rax_5

if (count_1 != 0)
    if (count_1 u> 0x20)
        do
            rbx_1 *= 2
        while (rbx_1 u< count_1)
    
    void* rax_3 = sub_142807530(&var_a0, rbx_1)
    uint32_t count = count_2
    
    if (count != 0)
        memcpy(rax_3, var_108, count)
        count = count_2
    
    if (var_108 != 0)
        sub_142807300(&var_118[1], var_108 - 0x10, *(var_108 - 8))
        count = count_2
    
    var_108 = rax_3
    int32_t var_100_1 = rbx_1
    memcpy(zx.q(count) + rax_3, arg_20, count_1)
    int64_t* rcx_10 = *arg5
    count_2 += count_1
    rax_5 = (*(*rcx_10 + 0x58))(rcx_10, &var_120)

if (count_1 == 0 || rax_5 == 0)
    int64_t* rcx_11 = arg5[1]
    count_2.q = 0
    (*(*rcx_11 + 0x38))(rcx_11, &var_f8, &var_128, 0)
    int64_t* rcx_12 = *arg5
    rax_5 = (*(*rcx_12 + 0x58))(rcx_12, &var_120)

arg2[1] = rax_5
arg2[2] = rax_5
var_128 = &data_1434d1d90
var_120 = &data_1434d1da0
*arg2 = "PxConvexMesh"

if (var_108 != 0)
    sub_142807300(&var_118[1], var_108 - 0x10, *(var_108 - 8))

var_120 = &data_142d40888
var_128 = &data_142d40888
sub_142807120(&var_a0)
return arg2
