// 函数: sub_1427d84c0
// 地址: 0x1427d84c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t zmm1 = (arg2[1]).q
int128_t var_e0 = *arg2
sub_1427e5da0(arg1, *arg2)
int32_t* rax = arg1[5]

if (rax != 0)
    *rax += 1

int64_t var_b0
__builtin_memset(&var_b0, 0, 0x40)
physx::PxClothTetherConfigGeneratedInfo::PxClothTetherConfigGeneratedInfo(&var_b0)
void arg_10
int64_t* rax_1 = zmm1(&arg_10, arg1[2])
int64_t rdi = *arg1
int64_t rbx = arg1[1]
int64_t rsi = arg1[3]
int64_t r14 = arg1[4]
int64_t arg_8 = *rax_1
void var_68
physx::PxClothTetherConfigGeneratedInfo::PxClothTetherConfigGeneratedInfo(&var_68)
int64_t var_e8 = rdi
var_e0:8.q = &arg_8
var_e0.q = rbx
int64_t var_d0 = rsi
var_d0 = r14
int128_t var_c0 = zx.o(0)
sub_1427d3f70(&var_e8, &var_68)
void var_48
void* result = sub_1427d3f70(&var_e8, &var_48)
void* rdx_4 = *arg1

if (*(rdx_4 + 0x10) != 0)
    if (*(*(rdx_4 + 8) + zx.q(*(rdx_4 + 0x10) - 1) * 0x10 + 8) != 0)
        int64_t* rcx_8 = arg1[1]
        (*(*rcx_8 + 0x20))(rcx_8, rdx_4)
    
    result = *arg1
    *(result + 0x10) -= 1

return result
