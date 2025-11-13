// 函数: sub_1427dcc60
// 地址: 0x1427dcc60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = (*(*arg4 + 0x18))(arg4)
int64_t var_208 = 0
int64_t* var_210 = &arg_10
int64_t var_200 = 0
int64_t var_220 = 0
int64_t var_218 = 0
int64_t* var_228 = &arg_10
void var_188
physx::PxRigidStaticGeneratedInfo::PxRigidStaticGeneratedInfo(&var_188)
int128_t zmm0 = *arg1
int64_t zmm1 = arg1[1].q
int64_t** var_1f8 = &var_210
char arg_8 = 0
int64_t** var_1f0 = &var_228
int64_t var_1b8 = arg5
int128_t var_1e8 = zmm0
char* var_1a8 = &arg_8
int64_t var_1d8 = zmm1
int64_t var_1d0 = arg2
int64_t var_1c8 = arg3
int64_t* var_1c0 = arg4
char var_1b0 = 1
int128_t var_1a0 = zx.o(0)
sub_1427ded70(&var_188, &var_1f8, 0)
int32_t rax_3 = var_218:4.d
int128_t* rbx
rbx.b = arg_8 == 0

if ((rax_3 & 0x7fffffff) != 0 && rax_3 s>= 0 && var_220 != 0)
    int64_t* rcx_3 = *var_228
    (*(*rcx_3 + 0x10))(rcx_3, var_220)

int32_t rax_6 = var_200:4.d

if ((rax_6 & 0x7fffffff) != 0 && rax_6 s>= 0 && var_208 != 0)
    int64_t* rcx_5 = *var_210
    int64_t r8 = *rcx_5
    (*(r8 + 0x10))(rcx_5, var_208, r8)

return zx.q(rbx.b)
