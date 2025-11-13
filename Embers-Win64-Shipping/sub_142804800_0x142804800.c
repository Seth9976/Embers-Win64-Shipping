// 函数: sub_142804800
// 地址: 0x142804800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = (*(*arg4 + 0x18))(arg4)
int64_t var_198 = 0
int64_t* var_1a0 = &arg_10
int64_t var_190 = 0
int64_t var_1b0 = 0
int64_t var_1a8 = 0
int64_t* var_1b8 = &arg_10
void var_118
physx::PxHeightFieldDescGeneratedInfo::PxHeightFieldDescGeneratedInfo(&var_118)
int128_t zmm0 = *arg1
int64_t zmm1 = arg1[1].q
int64_t** var_188 = &var_1a0
char arg_8 = 0
int64_t** var_180 = &var_1b8
int64_t var_148 = arg5
int128_t var_178 = zmm0
char* var_138 = &arg_8
int64_t var_168 = zmm1
int64_t var_160 = arg2
int64_t var_158 = arg3
int64_t* var_150 = arg4
char var_140 = 1
int128_t var_130 = zx.o(0)
void var_100
sub_1427d7110(&var_188, &var_100)
void var_e0
sub_1427d7110(&var_188, &var_e0)
void var_c0
sub_1428044f0(&var_188, &var_c0)
void var_80
sub_1427d3ed0(&var_188, &var_80)
void var_60
sub_1427d3ed0(&var_188, &var_60)
void var_40
sub_142804680(&var_188, &var_40)
int32_t rax_3 = var_1a8:4.d
int128_t* rbx
rbx.b = arg_8 == 0

if ((rax_3 & 0x7fffffff) != 0 && rax_3 s>= 0 && var_1b0 != 0)
    int64_t* rcx_8 = *var_1b8
    (*(*rcx_8 + 0x10))(rcx_8, var_1b0)

int32_t rax_6 = var_190:4.d

if ((rax_6 & 0x7fffffff) != 0 && rax_6 s>= 0 && var_198 != 0)
    int64_t* rcx_10 = *var_1a0
    int64_t r8_6 = *rcx_10
    (*(r8_6 + 0x10))(rcx_10, var_198, r8_6)

return zx.q(rbx.b)
