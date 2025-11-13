// 函数: sub_1428003e0
// 地址: 0x1428003e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_148 = 0
int64_t var_140 = 0
int128_t var_f8 = var_148.o
int64_t var_e8 = 0.q
int64_t var_128 = 0
int128_t var_e0 = 0.o
int32_t var_c0 = 0
int64_t var_b8 = 0
int64_t var_d0 = 0.q
int16_t var_c8 = 0
int64_t arg_10 = 0
sub_1428064d0(arg3, "points", &arg_10, &var_f8, &var_e8, arg4)
var_f8:8.q = arg_10
arg_10 = 0
sub_1428050d0(arg3, "triangles", &arg_10, &var_e0, &var_d0, arg4)
var_e0:8.q = arg_10
int64_t arg_20 = 0
sub_142804b80(arg3, "materialIndices", &arg_20, &var_c0, &arg_10, arg4)
int64_t var_b8_1 = arg_20
arg_20 = 0
void var_38
sub_1428049c0(arg3, "CookedData", &arg_20, &var_38, &arg_10, arg4)
int64_t var_90 = 0
int64_t var_a8 = (*(*arg4 + 0x18))(arg4)
int128_t var_78
__builtin_memset(&var_78, 0, 0x28)
int64_t* var_a0 = &var_a8
int64_t* var_98 = &var_a8
int64_t* var_80 = &var_a8
int64_t var_88 = 0
int32_t var_50 = 0x3f400000
int32_t var_4c = 0xffffffff
int64_t var_48 = 0
sub_142809d10(&var_80, 0x40)
uint32_t count_1 = arg_10.d
int64_t* var_168 = &var_a8
void** const var_178 = &data_1434d1d90
uint32_t count_2
__builtin_memset(&count_2, 0, 0x14)
int32_t rbx_1 = 0x20
void** const var_170 = &data_1434d1da0
int32_t var_40 = 0x20
void* var_158
int64_t rax_7

if (count_1 != 0)
    if (count_1 u> 0x20)
        do
            rbx_1 *= 2
        while (rbx_1 u< count_1)
    
    void* rax_5 = sub_142807530(&var_a0, rbx_1)
    uint32_t count = count_2
    
    if (count != 0)
        memcpy(rax_5, var_158, count)
        count = count_2
    
    if (var_158 != 0)
        sub_142807300(&var_168[1], var_158 - 0x10, *(var_158 - 8))
        count = count_2
    
    var_158 = rax_5
    int32_t var_150_1 = rbx_1
    memcpy(zx.q(count) + rax_5, arg_20, count_1)
    int64_t* rcx_12 = *arg5
    count_2 += count_1
    rax_7 = (*(*rcx_12 + 0x28))(rcx_12, &var_170)

if (count_1 == 0 || rax_7 == 0)
    int64_t* rcx_13 = arg5[1]
    count_2.q = 0
    int32_t* rax_9 = (*(*rcx_13 + 0x10))(rcx_13, (zx.o(0)).q)
    var_148 = *rax_9
    int32_t var_144_1 = rax_9[1].d
    var_140.d = rax_9[2].d
    var_140:4.d = rax_9[3].d
    int32_t var_138_1 = rax_9[4]
    char var_134_1 = rax_9[5].b
    char var_133_1 = *(rax_9 + 0x15)
    int64_t* rcx_18 = arg5[1]
    char var_132_1 = *(rax_9 + 0x16)
    int32_t var_130
    var_130.q = *(rax_9 + 0x18)
    var_128.d = rax_9[8]
    var_128:4.d = rax_9[9]
    int32_t var_120_1 = rax_9[0xa]
    int32_t var_11c_1 = rax_9[0xb].d
    int32_t var_118_1 = rax_9[0xc].d
    int64_t var_114_1 = *(rax_9 + 0x34)
    int32_t var_10c_1 = rax_9[0xf]
    var_114_1.d = 0x3f0ccccd
    int32_t var_108_1 = rax_9[0x10]
    var_114_1 = 0
    (*(*rcx_18 + 8))(rcx_18, &var_148)
    int64_t* rcx_19 = arg5[1]
    (*(*rcx_19 + 0x20))(rcx_19, &var_f8, &var_178, 0)
    int64_t* rcx_20 = *arg5
    rax_7 = (*(*rcx_20 + 0x28))(rcx_20, &var_170)

arg2[1] = rax_7
arg2[2] = rax_7
var_178 = &data_1434d1d90
var_170 = &data_1434d1da0
*arg2 = "PxBVH33TriangleMesh"

if (var_158 != 0)
    sub_142807300(&var_168[1], var_158 - 0x10, *(var_158 - 8))

var_170 = &data_142d40888
var_178 = &data_142d40888
sub_142807120(&var_a0)
return arg2
