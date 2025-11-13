// 函数: sub_1427d83f0
// 地址: 0x1427d83f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm1 = *(arg2 + 0x10)
sub_1427e5d10(arg1, *arg2)
int32_t* rax = arg1[0xb]

if (rax != 0)
    *rax += 1

int64_t var_50
__builtin_memset(&var_50, 0, 0x40)
physx::PxClothTetherConfigGeneratedInfo::PxClothTetherConfigGeneratedInfo(&var_50)

if (sub_1427e4f10(arg1) != 0)
    int64_t arg_10
    int64_t arg_8 = *zmm1.q(&arg_10, arg1[6])
    sub_1427dd1f0(arg1, &arg_8, &var_50)
    int64_t rcx_4 = arg1[6]
    arg_10 = arg_8
    zmm1:8.q(rcx_4, &arg_10)

return sub_1427e5c70(arg1) __tailcall
