// 函数: sub_1427db5a0
// 地址: 0x1427db5a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = (*(*arg4 + 0x18))(arg4)
int64_t var_268 = 0
int64_t* var_270 = &arg_10
int64_t var_260 = 0
int64_t var_280 = 0
int64_t var_278 = 0
int64_t* var_288 = &arg_10
void var_1e8
physx::PxArticulationGeneratedInfo::PxArticulationGeneratedInfo(&var_1e8)
int128_t zmm0 = *arg1
int64_t zmm1 = arg1[1].q
int64_t** var_258 = &var_270
char arg_8 = 0
int64_t** var_250 = &var_288
int64_t var_218 = arg5
int128_t var_248 = zmm0
char* var_208 = &arg_8
int64_t var_238 = zmm1
int64_t var_230 = arg2
int64_t var_228 = arg3
int64_t* var_220 = arg4
char var_210 = 1
int128_t var_200 = zx.o(0)
sub_1427df560(&var_1e8, &var_258, 0)
int32_t rax_3 = var_278:4.d
int128_t* rbx
rbx.b = arg_8 == 0

if ((rax_3 & 0x7fffffff) != 0 && rax_3 s>= 0 && var_280 != 0)
    int64_t* rcx_3 = *var_288
    (*(*rcx_3 + 0x10))(rcx_3, var_280)

int32_t rax_6 = var_260:4.d

if ((rax_6 & 0x7fffffff) != 0 && rax_6 s>= 0 && var_268 != 0)
    int64_t* rcx_5 = *var_270
    int64_t r8 = *rcx_5
    (*(r8 + 0x10))(rcx_5, var_268, r8)

return zx.q(rbx.b)
